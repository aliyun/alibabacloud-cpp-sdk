// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InputGroup, inputGroupShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutputGroup, outputGroupShrink_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfigShrink_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InputGroup, inputGroupShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutputGroup, outputGroupShrink_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfigShrink_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitTranscodeJobShrinkRequest() = default ;
    SubmitTranscodeJobShrinkRequest(const SubmitTranscodeJobShrinkRequest &) = default ;
    SubmitTranscodeJobShrinkRequest(SubmitTranscodeJobShrinkRequest &&) = default ;
    SubmitTranscodeJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobShrinkRequest() = default ;
    SubmitTranscodeJobShrinkRequest& operator=(const SubmitTranscodeJobShrinkRequest &) = default ;
    SubmitTranscodeJobShrinkRequest& operator=(SubmitTranscodeJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->inputGroupShrink_ != nullptr && this->name_ != nullptr && this->outputGroupShrink_ != nullptr && this->scheduleConfigShrink_ != nullptr && this->userData_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SubmitTranscodeJobShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // inputGroupShrink Field Functions 
    bool hasInputGroupShrink() const { return this->inputGroupShrink_ != nullptr;};
    void deleteInputGroupShrink() { this->inputGroupShrink_ = nullptr;};
    inline string inputGroupShrink() const { DARABONBA_PTR_GET_DEFAULT(inputGroupShrink_, "") };
    inline SubmitTranscodeJobShrinkRequest& setInputGroupShrink(string inputGroupShrink) { DARABONBA_PTR_SET_VALUE(inputGroupShrink_, inputGroupShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitTranscodeJobShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputGroupShrink Field Functions 
    bool hasOutputGroupShrink() const { return this->outputGroupShrink_ != nullptr;};
    void deleteOutputGroupShrink() { this->outputGroupShrink_ = nullptr;};
    inline string outputGroupShrink() const { DARABONBA_PTR_GET_DEFAULT(outputGroupShrink_, "") };
    inline SubmitTranscodeJobShrinkRequest& setOutputGroupShrink(string outputGroupShrink) { DARABONBA_PTR_SET_VALUE(outputGroupShrink_, outputGroupShrink) };


    // scheduleConfigShrink Field Functions 
    bool hasScheduleConfigShrink() const { return this->scheduleConfigShrink_ != nullptr;};
    void deleteScheduleConfigShrink() { this->scheduleConfigShrink_ = nullptr;};
    inline string scheduleConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleConfigShrink_, "") };
    inline SubmitTranscodeJobShrinkRequest& setScheduleConfigShrink(string scheduleConfigShrink) { DARABONBA_PTR_SET_VALUE(scheduleConfigShrink_, scheduleConfigShrink) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitTranscodeJobShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The input group of the job. An input of a single file indicates a transcoding job. An input of multiple files indicates an audio and video stream merge job.
    // 
    // This parameter is required.
    std::shared_ptr<string> inputGroupShrink_ = nullptr;
    // The job name.
    std::shared_ptr<string> name_ = nullptr;
    // The output group of the job.
    // 
    // This parameter is required.
    std::shared_ptr<string> outputGroupShrink_ = nullptr;
    // The scheduling information about the job.
    std::shared_ptr<string> scheduleConfigShrink_ = nullptr;
    // The custom settings. The value must be in the JSON format and can be up to 512 bytes in length. You can specify a [custom callback URL](https://help.aliyun.com/document_detail/451631.html).
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
