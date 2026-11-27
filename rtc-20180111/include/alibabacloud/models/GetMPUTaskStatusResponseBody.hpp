// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMPUTASKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMPUTASKSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class GetMPUTaskStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMPUTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetMPUTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetMPUTaskStatusResponseBody() = default ;
    GetMPUTaskStatusResponseBody(const GetMPUTaskStatusResponseBody &) = default ;
    GetMPUTaskStatusResponseBody(GetMPUTaskStatusResponseBody &&) = default ;
    GetMPUTaskStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMPUTaskStatusResponseBody() = default ;
    GetMPUTaskStatusResponseBody& operator=(const GetMPUTaskStatusResponseBody &) = default ;
    GetMPUTaskStatusResponseBody& operator=(GetMPUTaskStatusResponseBody &&) = default ;
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
    inline GetMPUTaskStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetMPUTaskStatusResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status ID of the bypass transcoding task. Valid values:
    //  - **0**: Waiting for the channel to start.
    // > If the task is not started within 30 days, the task is automatically stopped.
    // 
    //  - **1**: The task is running.
    // 
    //  - **2**: The task is stopped.
    // 
    //  - **3**: The task is stopped by the user.
    // 
    //  - **4**: The channel is stopped.
    // 
    //  - **5**: Live streaming is stopped due to CDN network issues.
    // 
    //  - **6**: Live streaming is stopped due to live streaming URL issues.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
