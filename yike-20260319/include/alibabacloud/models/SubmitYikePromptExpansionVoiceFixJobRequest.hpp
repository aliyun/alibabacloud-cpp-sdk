// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITYIKEPROMPTEXPANSIONVOICEFIXJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITYIKEPROMPTEXPANSIONVOICEFIXJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class SubmitYikePromptExpansionVoiceFixJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitYikePromptExpansionVoiceFixJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobParams, jobParams_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitYikePromptExpansionVoiceFixJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobParams, jobParams_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitYikePromptExpansionVoiceFixJobRequest() = default ;
    SubmitYikePromptExpansionVoiceFixJobRequest(const SubmitYikePromptExpansionVoiceFixJobRequest &) = default ;
    SubmitYikePromptExpansionVoiceFixJobRequest(SubmitYikePromptExpansionVoiceFixJobRequest &&) = default ;
    SubmitYikePromptExpansionVoiceFixJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitYikePromptExpansionVoiceFixJobRequest() = default ;
    SubmitYikePromptExpansionVoiceFixJobRequest& operator=(const SubmitYikePromptExpansionVoiceFixJobRequest &) = default ;
    SubmitYikePromptExpansionVoiceFixJobRequest& operator=(SubmitYikePromptExpansionVoiceFixJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobParams_ == nullptr
        && this->userData_ == nullptr; };
    // jobParams Field Functions 
    bool hasJobParams() const { return this->jobParams_ != nullptr;};
    void deleteJobParams() { this->jobParams_ = nullptr;};
    inline string getJobParams() const { DARABONBA_PTR_GET_DEFAULT(jobParams_, "") };
    inline SubmitYikePromptExpansionVoiceFixJobRequest& setJobParams(string jobParams) { DARABONBA_PTR_SET_VALUE(jobParams_, jobParams) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitYikePromptExpansionVoiceFixJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The task parameters, a JSON-formatted string. The following fields are included:
    // - model (String, required): The model name. Example: happyhorse-1.0-r2v.
    // - input (Object, required): The input data object.
    //   - prompt (String, required): The prompt content. Maximum length: 10,000 characters.
    //   - media (Array(Object), required): The list of media materials used to specify reference images and audio.
    //     - type (String, required): The type of the input media asset. Valid values: reference_image and reference_audio.
    //     - url (String, required): The URL of the input media asset.
    // - parameters (Object, required): The video generation parameter object.
    //   - duration (Integer, required): The video duration in seconds. The value must be a positive integer. Valid values: 5 to 15.
    //   - ratio (String, required): The aspect ratio of the video. Valid values: 16:9, 9:16, 4:3, 3:4, and 1:1.
    //   - resolution (String, required): The video resolution. Valid values: 720P and 1080P.
    //   - specialEdition (Bool, optional): The cost-effective edition parameter. This parameter can be set to true only when the resolution is 1080P.
    //   - skipPromptEnhancer (Bool, optional): Specifies whether to skip prompt enhancement. Default value: false.
    //   - skipVoiceResync (Bool, optional): Specifies whether to skip audio repair. Default value: false.
    // 
    // This parameter is required.
    shared_ptr<string> jobParams_ {};
    // The custom user parameter, a JSON string. This parameter is returned as-is in the callback result. Example: newsKey.
    // 
    // The system reserved field NotifyAddress specifies the callback URL. After the task is completed, a callback is sent. Example: {"NotifyAddress": "http://xxx.callback.url"}.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
