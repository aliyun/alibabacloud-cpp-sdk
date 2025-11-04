// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitTranscodeJobRequestInputGroup.hpp>
#include <alibabacloud/models/SubmitTranscodeJobRequestOutputGroup.hpp>
#include <alibabacloud/models/SubmitTranscodeJobRequestScheduleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InputGroup, inputGroup_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutputGroup, outputGroup_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InputGroup, inputGroup_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutputGroup, outputGroup_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitTranscodeJobRequest() = default ;
    SubmitTranscodeJobRequest(const SubmitTranscodeJobRequest &) = default ;
    SubmitTranscodeJobRequest(SubmitTranscodeJobRequest &&) = default ;
    SubmitTranscodeJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobRequest() = default ;
    SubmitTranscodeJobRequest& operator=(const SubmitTranscodeJobRequest &) = default ;
    SubmitTranscodeJobRequest& operator=(SubmitTranscodeJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->inputGroup_ == nullptr && return this->name_ == nullptr && return this->outputGroup_ == nullptr && return this->scheduleConfig_ == nullptr && return this->userData_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SubmitTranscodeJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // inputGroup Field Functions 
    bool hasInputGroup() const { return this->inputGroup_ != nullptr;};
    void deleteInputGroup() { this->inputGroup_ = nullptr;};
    inline const vector<SubmitTranscodeJobRequestInputGroup> & inputGroup() const { DARABONBA_PTR_GET_CONST(inputGroup_, vector<SubmitTranscodeJobRequestInputGroup>) };
    inline vector<SubmitTranscodeJobRequestInputGroup> inputGroup() { DARABONBA_PTR_GET(inputGroup_, vector<SubmitTranscodeJobRequestInputGroup>) };
    inline SubmitTranscodeJobRequest& setInputGroup(const vector<SubmitTranscodeJobRequestInputGroup> & inputGroup) { DARABONBA_PTR_SET_VALUE(inputGroup_, inputGroup) };
    inline SubmitTranscodeJobRequest& setInputGroup(vector<SubmitTranscodeJobRequestInputGroup> && inputGroup) { DARABONBA_PTR_SET_RVALUE(inputGroup_, inputGroup) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitTranscodeJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputGroup Field Functions 
    bool hasOutputGroup() const { return this->outputGroup_ != nullptr;};
    void deleteOutputGroup() { this->outputGroup_ = nullptr;};
    inline const vector<SubmitTranscodeJobRequestOutputGroup> & outputGroup() const { DARABONBA_PTR_GET_CONST(outputGroup_, vector<SubmitTranscodeJobRequestOutputGroup>) };
    inline vector<SubmitTranscodeJobRequestOutputGroup> outputGroup() { DARABONBA_PTR_GET(outputGroup_, vector<SubmitTranscodeJobRequestOutputGroup>) };
    inline SubmitTranscodeJobRequest& setOutputGroup(const vector<SubmitTranscodeJobRequestOutputGroup> & outputGroup) { DARABONBA_PTR_SET_VALUE(outputGroup_, outputGroup) };
    inline SubmitTranscodeJobRequest& setOutputGroup(vector<SubmitTranscodeJobRequestOutputGroup> && outputGroup) { DARABONBA_PTR_SET_RVALUE(outputGroup_, outputGroup) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const SubmitTranscodeJobRequestScheduleConfig & scheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, SubmitTranscodeJobRequestScheduleConfig) };
    inline SubmitTranscodeJobRequestScheduleConfig scheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, SubmitTranscodeJobRequestScheduleConfig) };
    inline SubmitTranscodeJobRequest& setScheduleConfig(const SubmitTranscodeJobRequestScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline SubmitTranscodeJobRequest& setScheduleConfig(SubmitTranscodeJobRequestScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitTranscodeJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The input group of the job. An input of a single file indicates a transcoding job. An input of multiple files indicates an audio and video stream merge job.
    // 
    // This parameter is required.
    std::shared_ptr<vector<SubmitTranscodeJobRequestInputGroup>> inputGroup_ = nullptr;
    // The job name.
    std::shared_ptr<string> name_ = nullptr;
    // The output group of the job.
    // 
    // This parameter is required.
    std::shared_ptr<vector<SubmitTranscodeJobRequestOutputGroup>> outputGroup_ = nullptr;
    // The scheduling information about the job.
    std::shared_ptr<SubmitTranscodeJobRequestScheduleConfig> scheduleConfig_ = nullptr;
    // The custom settings. The value must be in the JSON format and can be up to 512 bytes in length. You can specify a [custom callback URL](https://help.aliyun.com/document_detail/451631.html).
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
