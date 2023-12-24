#ifndef AOPCXX_ASPECT_HPP_
#define AOPCXX_ASPECT_HPP_

namespace aopcxx
{

class noncopyable
{
protected:
	noncopyable() = default;
	~noncopyable() = default;

	noncopyable(const noncopyable&) = delete;
	const noncopyable& operator=(const noncopyable&) = delete;
};

} // namespace aopcxx

#endif // AOPCXX_ASPECT_HPP_
