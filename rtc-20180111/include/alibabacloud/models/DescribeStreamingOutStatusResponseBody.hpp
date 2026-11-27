// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTREAMINGOUTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTREAMINGOUTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeStreamingOutStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStreamingOutStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStreamingOutStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeStreamingOutStatusResponseBody() = default ;
    DescribeStreamingOutStatusResponseBody(const DescribeStreamingOutStatusResponseBody &) = default ;
    DescribeStreamingOutStatusResponseBody(DescribeStreamingOutStatusResponseBody &&) = default ;
    DescribeStreamingOutStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStreamingOutStatusResponseBody() = default ;
    DescribeStreamingOutStatusResponseBody& operator=(const DescribeStreamingOutStatusResponseBody &) = default ;
    DescribeStreamingOutStatusResponseBody& operator=(DescribeStreamingOutStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->status_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStreamingOutStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeStreamingOutStatusResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // For abnormal tasks, RTC proactively ends the tasks and notifies the user server through callbacks. For more information, see [Callbacks](https://help.aliyun.com/document_detail/2709168.html?spm=a2c4g.11186623.help-menu-61399.d_2_0_0_0.49be1761tge4EX#6211464494udk).
    // - 0: The task is started and waiting for users to join.
    // - 1: Streaming in progress.
    // - 2: Streaming exception, live streaming stopped.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
