// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitSnapshotJobRequestInput.hpp>
#include <alibabacloud/models/SubmitSnapshotJobRequestOutput.hpp>
#include <alibabacloud/models/SubmitSnapshotJobRequestScheduleConfig.hpp>
#include <alibabacloud/models/SubmitSnapshotJobRequestTemplateConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSnapshotJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSnapshotJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSnapshotJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitSnapshotJobRequest() = default ;
    SubmitSnapshotJobRequest(const SubmitSnapshotJobRequest &) = default ;
    SubmitSnapshotJobRequest(SubmitSnapshotJobRequest &&) = default ;
    SubmitSnapshotJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSnapshotJobRequest() = default ;
    SubmitSnapshotJobRequest& operator=(const SubmitSnapshotJobRequest &) = default ;
    SubmitSnapshotJobRequest& operator=(SubmitSnapshotJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->input_ != nullptr
        && this->name_ != nullptr && this->output_ != nullptr && this->scheduleConfig_ != nullptr && this->templateConfig_ != nullptr && this->userData_ != nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitSnapshotJobRequestInput & input() const { DARABONBA_PTR_GET_CONST(input_, SubmitSnapshotJobRequestInput) };
    inline SubmitSnapshotJobRequestInput input() { DARABONBA_PTR_GET(input_, SubmitSnapshotJobRequestInput) };
    inline SubmitSnapshotJobRequest& setInput(const SubmitSnapshotJobRequestInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitSnapshotJobRequest& setInput(SubmitSnapshotJobRequestInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitSnapshotJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const SubmitSnapshotJobRequestOutput & output() const { DARABONBA_PTR_GET_CONST(output_, SubmitSnapshotJobRequestOutput) };
    inline SubmitSnapshotJobRequestOutput output() { DARABONBA_PTR_GET(output_, SubmitSnapshotJobRequestOutput) };
    inline SubmitSnapshotJobRequest& setOutput(const SubmitSnapshotJobRequestOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline SubmitSnapshotJobRequest& setOutput(SubmitSnapshotJobRequestOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const SubmitSnapshotJobRequestScheduleConfig & scheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, SubmitSnapshotJobRequestScheduleConfig) };
    inline SubmitSnapshotJobRequestScheduleConfig scheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, SubmitSnapshotJobRequestScheduleConfig) };
    inline SubmitSnapshotJobRequest& setScheduleConfig(const SubmitSnapshotJobRequestScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline SubmitSnapshotJobRequest& setScheduleConfig(SubmitSnapshotJobRequestScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline const SubmitSnapshotJobRequestTemplateConfig & templateConfig() const { DARABONBA_PTR_GET_CONST(templateConfig_, SubmitSnapshotJobRequestTemplateConfig) };
    inline SubmitSnapshotJobRequestTemplateConfig templateConfig() { DARABONBA_PTR_GET(templateConfig_, SubmitSnapshotJobRequestTemplateConfig) };
    inline SubmitSnapshotJobRequest& setTemplateConfig(const SubmitSnapshotJobRequestTemplateConfig & templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };
    inline SubmitSnapshotJobRequest& setTemplateConfig(SubmitSnapshotJobRequestTemplateConfig && templateConfig) { DARABONBA_PTR_SET_RVALUE(templateConfig_, templateConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitSnapshotJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The snapshot input.
    // 
    // This parameter is required.
    std::shared_ptr<SubmitSnapshotJobRequestInput> input_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> name_ = nullptr;
    // The snapshot output.
    // 
    // This parameter is required.
    std::shared_ptr<SubmitSnapshotJobRequestOutput> output_ = nullptr;
    // The scheduling settings.
    std::shared_ptr<SubmitSnapshotJobRequestScheduleConfig> scheduleConfig_ = nullptr;
    // The snapshot template configuration.
    // 
    // This parameter is required.
    std::shared_ptr<SubmitSnapshotJobRequestTemplateConfig> templateConfig_ = nullptr;
    // The user-defined data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
