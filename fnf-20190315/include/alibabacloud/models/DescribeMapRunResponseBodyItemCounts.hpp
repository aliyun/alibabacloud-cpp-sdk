// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMAPRUNRESPONSEBODYITEMCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMAPRUNRESPONSEBODYITEMCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class DescribeMapRunResponseBodyItemCounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMapRunResponseBodyItemCounts& obj) { 
      DARABONBA_PTR_TO_JSON(Aborted, aborted_);
      DARABONBA_PTR_TO_JSON(Failed, failed_);
      DARABONBA_PTR_TO_JSON(Pending, pending_);
      DARABONBA_PTR_TO_JSON(Running, running_);
      DARABONBA_PTR_TO_JSON(Succeed, succeed_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMapRunResponseBodyItemCounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Aborted, aborted_);
      DARABONBA_PTR_FROM_JSON(Failed, failed_);
      DARABONBA_PTR_FROM_JSON(Pending, pending_);
      DARABONBA_PTR_FROM_JSON(Running, running_);
      DARABONBA_PTR_FROM_JSON(Succeed, succeed_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeMapRunResponseBodyItemCounts() = default ;
    DescribeMapRunResponseBodyItemCounts(const DescribeMapRunResponseBodyItemCounts &) = default ;
    DescribeMapRunResponseBodyItemCounts(DescribeMapRunResponseBodyItemCounts &&) = default ;
    DescribeMapRunResponseBodyItemCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMapRunResponseBodyItemCounts() = default ;
    DescribeMapRunResponseBodyItemCounts& operator=(const DescribeMapRunResponseBodyItemCounts &) = default ;
    DescribeMapRunResponseBodyItemCounts& operator=(DescribeMapRunResponseBodyItemCounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aborted_ == nullptr
        && return this->failed_ == nullptr && return this->pending_ == nullptr && return this->running_ == nullptr && return this->succeed_ == nullptr && return this->total_ == nullptr; };
    // aborted Field Functions 
    bool hasAborted() const { return this->aborted_ != nullptr;};
    void deleteAborted() { this->aborted_ = nullptr;};
    inline int64_t aborted() const { DARABONBA_PTR_GET_DEFAULT(aborted_, 0L) };
    inline DescribeMapRunResponseBodyItemCounts& setAborted(int64_t aborted) { DARABONBA_PTR_SET_VALUE(aborted_, aborted) };


    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline int64_t failed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
    inline DescribeMapRunResponseBodyItemCounts& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


    // pending Field Functions 
    bool hasPending() const { return this->pending_ != nullptr;};
    void deletePending() { this->pending_ = nullptr;};
    inline int64_t pending() const { DARABONBA_PTR_GET_DEFAULT(pending_, 0L) };
    inline DescribeMapRunResponseBodyItemCounts& setPending(int64_t pending) { DARABONBA_PTR_SET_VALUE(pending_, pending) };


    // running Field Functions 
    bool hasRunning() const { return this->running_ != nullptr;};
    void deleteRunning() { this->running_ = nullptr;};
    inline int64_t running() const { DARABONBA_PTR_GET_DEFAULT(running_, 0L) };
    inline DescribeMapRunResponseBodyItemCounts& setRunning(int64_t running) { DARABONBA_PTR_SET_VALUE(running_, running) };


    // succeed Field Functions 
    bool hasSucceed() const { return this->succeed_ != nullptr;};
    void deleteSucceed() { this->succeed_ = nullptr;};
    inline int64_t succeed() const { DARABONBA_PTR_GET_DEFAULT(succeed_, 0L) };
    inline DescribeMapRunResponseBodyItemCounts& setSucceed(int64_t succeed) { DARABONBA_PTR_SET_VALUE(succeed_, succeed) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeMapRunResponseBodyItemCounts& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int64_t> aborted_ = nullptr;
    std::shared_ptr<int64_t> failed_ = nullptr;
    std::shared_ptr<int64_t> pending_ = nullptr;
    std::shared_ptr<int64_t> running_ = nullptr;
    std::shared_ptr<int64_t> succeed_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
