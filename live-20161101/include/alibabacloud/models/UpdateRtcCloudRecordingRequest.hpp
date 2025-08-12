// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERTCCLOUDRECORDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERTCCLOUDRECORDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRtcCloudRecordingRequestMixLayoutParams.hpp>
#include <alibabacloud/models/UpdateRtcCloudRecordingRequestSubscribeParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateRtcCloudRecordingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRtcCloudRecordingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MixLayoutParams, mixLayoutParams_);
      DARABONBA_PTR_TO_JSON(SubscribeParams, subscribeParams_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRtcCloudRecordingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MixLayoutParams, mixLayoutParams_);
      DARABONBA_PTR_FROM_JSON(SubscribeParams, subscribeParams_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpdateRtcCloudRecordingRequest() = default ;
    UpdateRtcCloudRecordingRequest(const UpdateRtcCloudRecordingRequest &) = default ;
    UpdateRtcCloudRecordingRequest(UpdateRtcCloudRecordingRequest &&) = default ;
    UpdateRtcCloudRecordingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRtcCloudRecordingRequest() = default ;
    UpdateRtcCloudRecordingRequest& operator=(const UpdateRtcCloudRecordingRequest &) = default ;
    UpdateRtcCloudRecordingRequest& operator=(UpdateRtcCloudRecordingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mixLayoutParams_ != nullptr
        && this->subscribeParams_ != nullptr && this->taskId_ != nullptr; };
    // mixLayoutParams Field Functions 
    bool hasMixLayoutParams() const { return this->mixLayoutParams_ != nullptr;};
    void deleteMixLayoutParams() { this->mixLayoutParams_ = nullptr;};
    inline const UpdateRtcCloudRecordingRequestMixLayoutParams & mixLayoutParams() const { DARABONBA_PTR_GET_CONST(mixLayoutParams_, UpdateRtcCloudRecordingRequestMixLayoutParams) };
    inline UpdateRtcCloudRecordingRequestMixLayoutParams mixLayoutParams() { DARABONBA_PTR_GET(mixLayoutParams_, UpdateRtcCloudRecordingRequestMixLayoutParams) };
    inline UpdateRtcCloudRecordingRequest& setMixLayoutParams(const UpdateRtcCloudRecordingRequestMixLayoutParams & mixLayoutParams) { DARABONBA_PTR_SET_VALUE(mixLayoutParams_, mixLayoutParams) };
    inline UpdateRtcCloudRecordingRequest& setMixLayoutParams(UpdateRtcCloudRecordingRequestMixLayoutParams && mixLayoutParams) { DARABONBA_PTR_SET_RVALUE(mixLayoutParams_, mixLayoutParams) };


    // subscribeParams Field Functions 
    bool hasSubscribeParams() const { return this->subscribeParams_ != nullptr;};
    void deleteSubscribeParams() { this->subscribeParams_ = nullptr;};
    inline const UpdateRtcCloudRecordingRequestSubscribeParams & subscribeParams() const { DARABONBA_PTR_GET_CONST(subscribeParams_, UpdateRtcCloudRecordingRequestSubscribeParams) };
    inline UpdateRtcCloudRecordingRequestSubscribeParams subscribeParams() { DARABONBA_PTR_GET(subscribeParams_, UpdateRtcCloudRecordingRequestSubscribeParams) };
    inline UpdateRtcCloudRecordingRequest& setSubscribeParams(const UpdateRtcCloudRecordingRequestSubscribeParams & subscribeParams) { DARABONBA_PTR_SET_VALUE(subscribeParams_, subscribeParams) };
    inline UpdateRtcCloudRecordingRequest& setSubscribeParams(UpdateRtcCloudRecordingRequestSubscribeParams && subscribeParams) { DARABONBA_PTR_SET_RVALUE(subscribeParams_, subscribeParams) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateRtcCloudRecordingRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<UpdateRtcCloudRecordingRequestMixLayoutParams> mixLayoutParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<UpdateRtcCloudRecordingRequestSubscribeParams> subscribeParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
