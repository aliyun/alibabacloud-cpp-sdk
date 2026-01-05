// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPRTCCLOUDRECORDINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STOPRTCCLOUDRECORDINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StopRtcCloudRecordingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopRtcCloudRecordingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, StopRtcCloudRecordingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    StopRtcCloudRecordingResponseBody() = default ;
    StopRtcCloudRecordingResponseBody(const StopRtcCloudRecordingResponseBody &) = default ;
    StopRtcCloudRecordingResponseBody(StopRtcCloudRecordingResponseBody &&) = default ;
    StopRtcCloudRecordingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopRtcCloudRecordingResponseBody() = default ;
    StopRtcCloudRecordingResponseBody& operator=(const StopRtcCloudRecordingResponseBody &) = default ;
    StopRtcCloudRecordingResponseBody& operator=(StopRtcCloudRecordingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StopRtcCloudRecordingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StopRtcCloudRecordingResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
