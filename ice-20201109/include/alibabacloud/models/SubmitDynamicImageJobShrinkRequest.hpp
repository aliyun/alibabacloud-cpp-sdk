// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitDynamicImageJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDynamicImageJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Output, outputShrink_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfigShrink_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfigShrink_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDynamicImageJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Output, outputShrink_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfigShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfigShrink_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitDynamicImageJobShrinkRequest() = default ;
    SubmitDynamicImageJobShrinkRequest(const SubmitDynamicImageJobShrinkRequest &) = default ;
    SubmitDynamicImageJobShrinkRequest(SubmitDynamicImageJobShrinkRequest &&) = default ;
    SubmitDynamicImageJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDynamicImageJobShrinkRequest() = default ;
    SubmitDynamicImageJobShrinkRequest& operator=(const SubmitDynamicImageJobShrinkRequest &) = default ;
    SubmitDynamicImageJobShrinkRequest& operator=(SubmitDynamicImageJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputShrink_ == nullptr
        && return this->name_ == nullptr && return this->outputShrink_ == nullptr && return this->scheduleConfigShrink_ == nullptr && return this->templateConfigShrink_ == nullptr && return this->userData_ == nullptr; };
    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string inputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline SubmitDynamicImageJobShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitDynamicImageJobShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputShrink Field Functions 
    bool hasOutputShrink() const { return this->outputShrink_ != nullptr;};
    void deleteOutputShrink() { this->outputShrink_ = nullptr;};
    inline string outputShrink() const { DARABONBA_PTR_GET_DEFAULT(outputShrink_, "") };
    inline SubmitDynamicImageJobShrinkRequest& setOutputShrink(string outputShrink) { DARABONBA_PTR_SET_VALUE(outputShrink_, outputShrink) };


    // scheduleConfigShrink Field Functions 
    bool hasScheduleConfigShrink() const { return this->scheduleConfigShrink_ != nullptr;};
    void deleteScheduleConfigShrink() { this->scheduleConfigShrink_ = nullptr;};
    inline string scheduleConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleConfigShrink_, "") };
    inline SubmitDynamicImageJobShrinkRequest& setScheduleConfigShrink(string scheduleConfigShrink) { DARABONBA_PTR_SET_VALUE(scheduleConfigShrink_, scheduleConfigShrink) };


    // templateConfigShrink Field Functions 
    bool hasTemplateConfigShrink() const { return this->templateConfigShrink_ != nullptr;};
    void deleteTemplateConfigShrink() { this->templateConfigShrink_ = nullptr;};
    inline string templateConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(templateConfigShrink_, "") };
    inline SubmitDynamicImageJobShrinkRequest& setTemplateConfigShrink(string templateConfigShrink) { DARABONBA_PTR_SET_VALUE(templateConfigShrink_, templateConfigShrink) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitDynamicImageJobShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The input of the job.
    // 
    // This parameter is required.
    std::shared_ptr<string> inputShrink_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> name_ = nullptr;
    // The output of the job.
    // 
    // This parameter is required.
    std::shared_ptr<string> outputShrink_ = nullptr;
    // The scheduling settings.
    std::shared_ptr<string> scheduleConfigShrink_ = nullptr;
    // The snapshot template configuration.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateConfigShrink_ = nullptr;
    // The user-defined data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
