// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERTCCLOUDRECORDINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATERTCCLOUDRECORDINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateRtcCloudRecordingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRtcCloudRecordingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRtcCloudRecordingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpdateRtcCloudRecordingResponseBody() = default ;
    UpdateRtcCloudRecordingResponseBody(const UpdateRtcCloudRecordingResponseBody &) = default ;
    UpdateRtcCloudRecordingResponseBody(UpdateRtcCloudRecordingResponseBody &&) = default ;
    UpdateRtcCloudRecordingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRtcCloudRecordingResponseBody() = default ;
    UpdateRtcCloudRecordingResponseBody& operator=(const UpdateRtcCloudRecordingResponseBody &) = default ;
    UpdateRtcCloudRecordingResponseBody& operator=(UpdateRtcCloudRecordingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->taskId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateRtcCloudRecordingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateRtcCloudRecordingResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
