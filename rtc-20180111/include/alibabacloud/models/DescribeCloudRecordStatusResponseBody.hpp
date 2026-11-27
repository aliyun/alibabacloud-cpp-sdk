// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDRECORDSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDRECORDSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeCloudRecordStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudRecordStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudRecordStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCloudRecordStatusResponseBody() = default ;
    DescribeCloudRecordStatusResponseBody(const DescribeCloudRecordStatusResponseBody &) = default ;
    DescribeCloudRecordStatusResponseBody(DescribeCloudRecordStatusResponseBody &&) = default ;
    DescribeCloudRecordStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudRecordStatusResponseBody() = default ;
    DescribeCloudRecordStatusResponseBody& operator=(const DescribeCloudRecordStatusResponseBody &) = default ;
    DescribeCloudRecordStatusResponseBody& operator=(DescribeCloudRecordStatusResponseBody &&) = default ;
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
    inline DescribeCloudRecordStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCloudRecordStatusResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // - 0: The task has started and is waiting for users to join.
    // - 100: The task has not started.
    // - 101: Recording is in progress.
    // - 102: The recording file is being uploaded.
    // - 200: Recording is completed (channel ended).
    // - 201: Recording is completed (stopped by user).
    // - 400: Recording failed (internal server error).
    // - 401: Recording failed (failed to write to user storage).
    // - 402: Recording failed (failed to start user storage).
    // - 403: Recording failed (recording duration too short).
    // - 404: Recording failed (incorrect user storage key).
    // - 405: Recording failed (bucket does not exist).
    // - 406: Recording failed (access to user storage denied).
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
