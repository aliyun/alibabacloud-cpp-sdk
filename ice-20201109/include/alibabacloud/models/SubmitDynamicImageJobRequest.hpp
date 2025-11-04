// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitDynamicImageJobRequestInput.hpp>
#include <alibabacloud/models/SubmitDynamicImageJobRequestOutput.hpp>
#include <alibabacloud/models/SubmitDynamicImageJobRequestScheduleConfig.hpp>
#include <alibabacloud/models/SubmitDynamicImageJobRequestTemplateConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitDynamicImageJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDynamicImageJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDynamicImageJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitDynamicImageJobRequest() = default ;
    SubmitDynamicImageJobRequest(const SubmitDynamicImageJobRequest &) = default ;
    SubmitDynamicImageJobRequest(SubmitDynamicImageJobRequest &&) = default ;
    SubmitDynamicImageJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDynamicImageJobRequest() = default ;
    SubmitDynamicImageJobRequest& operator=(const SubmitDynamicImageJobRequest &) = default ;
    SubmitDynamicImageJobRequest& operator=(SubmitDynamicImageJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->input_ == nullptr
        && return this->name_ == nullptr && return this->output_ == nullptr && return this->scheduleConfig_ == nullptr && return this->templateConfig_ == nullptr && return this->userData_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitDynamicImageJobRequestInput & input() const { DARABONBA_PTR_GET_CONST(input_, SubmitDynamicImageJobRequestInput) };
    inline SubmitDynamicImageJobRequestInput input() { DARABONBA_PTR_GET(input_, SubmitDynamicImageJobRequestInput) };
    inline SubmitDynamicImageJobRequest& setInput(const SubmitDynamicImageJobRequestInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitDynamicImageJobRequest& setInput(SubmitDynamicImageJobRequestInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitDynamicImageJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const SubmitDynamicImageJobRequestOutput & output() const { DARABONBA_PTR_GET_CONST(output_, SubmitDynamicImageJobRequestOutput) };
    inline SubmitDynamicImageJobRequestOutput output() { DARABONBA_PTR_GET(output_, SubmitDynamicImageJobRequestOutput) };
    inline SubmitDynamicImageJobRequest& setOutput(const SubmitDynamicImageJobRequestOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline SubmitDynamicImageJobRequest& setOutput(SubmitDynamicImageJobRequestOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const SubmitDynamicImageJobRequestScheduleConfig & scheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, SubmitDynamicImageJobRequestScheduleConfig) };
    inline SubmitDynamicImageJobRequestScheduleConfig scheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, SubmitDynamicImageJobRequestScheduleConfig) };
    inline SubmitDynamicImageJobRequest& setScheduleConfig(const SubmitDynamicImageJobRequestScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline SubmitDynamicImageJobRequest& setScheduleConfig(SubmitDynamicImageJobRequestScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline const SubmitDynamicImageJobRequestTemplateConfig & templateConfig() const { DARABONBA_PTR_GET_CONST(templateConfig_, SubmitDynamicImageJobRequestTemplateConfig) };
    inline SubmitDynamicImageJobRequestTemplateConfig templateConfig() { DARABONBA_PTR_GET(templateConfig_, SubmitDynamicImageJobRequestTemplateConfig) };
    inline SubmitDynamicImageJobRequest& setTemplateConfig(const SubmitDynamicImageJobRequestTemplateConfig & templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };
    inline SubmitDynamicImageJobRequest& setTemplateConfig(SubmitDynamicImageJobRequestTemplateConfig && templateConfig) { DARABONBA_PTR_SET_RVALUE(templateConfig_, templateConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitDynamicImageJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The input of the job.
    // 
    // This parameter is required.
    std::shared_ptr<SubmitDynamicImageJobRequestInput> input_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> name_ = nullptr;
    // The output of the job.
    // 
    // This parameter is required.
    std::shared_ptr<SubmitDynamicImageJobRequestOutput> output_ = nullptr;
    // The scheduling settings.
    std::shared_ptr<SubmitDynamicImageJobRequestScheduleConfig> scheduleConfig_ = nullptr;
    // The snapshot template configuration.
    // 
    // This parameter is required.
    std::shared_ptr<SubmitDynamicImageJobRequestTemplateConfig> templateConfig_ = nullptr;
    // The user-defined data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
