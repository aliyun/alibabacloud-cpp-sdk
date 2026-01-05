// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERTCCLOUDRECORDINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERTCCLOUDRECORDINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateRtcCloudRecordingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRtcCloudRecordingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MixLayoutParams, mixLayoutParamsShrink_);
      DARABONBA_PTR_TO_JSON(SubscribeParams, subscribeParamsShrink_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRtcCloudRecordingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MixLayoutParams, mixLayoutParamsShrink_);
      DARABONBA_PTR_FROM_JSON(SubscribeParams, subscribeParamsShrink_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpdateRtcCloudRecordingShrinkRequest() = default ;
    UpdateRtcCloudRecordingShrinkRequest(const UpdateRtcCloudRecordingShrinkRequest &) = default ;
    UpdateRtcCloudRecordingShrinkRequest(UpdateRtcCloudRecordingShrinkRequest &&) = default ;
    UpdateRtcCloudRecordingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRtcCloudRecordingShrinkRequest() = default ;
    UpdateRtcCloudRecordingShrinkRequest& operator=(const UpdateRtcCloudRecordingShrinkRequest &) = default ;
    UpdateRtcCloudRecordingShrinkRequest& operator=(UpdateRtcCloudRecordingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mixLayoutParamsShrink_ == nullptr
        && this->subscribeParamsShrink_ == nullptr && this->taskId_ == nullptr; };
    // mixLayoutParamsShrink Field Functions 
    bool hasMixLayoutParamsShrink() const { return this->mixLayoutParamsShrink_ != nullptr;};
    void deleteMixLayoutParamsShrink() { this->mixLayoutParamsShrink_ = nullptr;};
    inline string getMixLayoutParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(mixLayoutParamsShrink_, "") };
    inline UpdateRtcCloudRecordingShrinkRequest& setMixLayoutParamsShrink(string mixLayoutParamsShrink) { DARABONBA_PTR_SET_VALUE(mixLayoutParamsShrink_, mixLayoutParamsShrink) };


    // subscribeParamsShrink Field Functions 
    bool hasSubscribeParamsShrink() const { return this->subscribeParamsShrink_ != nullptr;};
    void deleteSubscribeParamsShrink() { this->subscribeParamsShrink_ = nullptr;};
    inline string getSubscribeParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(subscribeParamsShrink_, "") };
    inline UpdateRtcCloudRecordingShrinkRequest& setSubscribeParamsShrink(string subscribeParamsShrink) { DARABONBA_PTR_SET_VALUE(subscribeParamsShrink_, subscribeParamsShrink) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateRtcCloudRecordingShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> mixLayoutParamsShrink_ {};
    // This parameter is required.
    shared_ptr<string> subscribeParamsShrink_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
