// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPRTCCLOUDTRANSCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPRTCCLOUDTRANSCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StopRtcCloudTranscodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopRtcCloudTranscodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, StopRtcCloudTranscodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    StopRtcCloudTranscodeRequest() = default ;
    StopRtcCloudTranscodeRequest(const StopRtcCloudTranscodeRequest &) = default ;
    StopRtcCloudTranscodeRequest(StopRtcCloudTranscodeRequest &&) = default ;
    StopRtcCloudTranscodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopRtcCloudTranscodeRequest() = default ;
    StopRtcCloudTranscodeRequest& operator=(const StopRtcCloudTranscodeRequest &) = default ;
    StopRtcCloudTranscodeRequest& operator=(StopRtcCloudTranscodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->taskId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StopRtcCloudTranscodeRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StopRtcCloudTranscodeRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
