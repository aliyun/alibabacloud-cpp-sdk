// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPACKAGEJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPACKAGEJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitPackageJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitPackageJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Inputs, inputsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Output, outputShrink_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfigShrink_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitPackageJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Inputs, inputsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Output, outputShrink_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfigShrink_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitPackageJobShrinkRequest() = default ;
    SubmitPackageJobShrinkRequest(const SubmitPackageJobShrinkRequest &) = default ;
    SubmitPackageJobShrinkRequest(SubmitPackageJobShrinkRequest &&) = default ;
    SubmitPackageJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitPackageJobShrinkRequest() = default ;
    SubmitPackageJobShrinkRequest& operator=(const SubmitPackageJobShrinkRequest &) = default ;
    SubmitPackageJobShrinkRequest& operator=(SubmitPackageJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputsShrink_ == nullptr
        && this->name_ == nullptr && this->outputShrink_ == nullptr && this->scheduleConfigShrink_ == nullptr && this->userData_ == nullptr; };
    // inputsShrink Field Functions 
    bool hasInputsShrink() const { return this->inputsShrink_ != nullptr;};
    void deleteInputsShrink() { this->inputsShrink_ = nullptr;};
    inline string getInputsShrink() const { DARABONBA_PTR_GET_DEFAULT(inputsShrink_, "") };
    inline SubmitPackageJobShrinkRequest& setInputsShrink(string inputsShrink) { DARABONBA_PTR_SET_VALUE(inputsShrink_, inputsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitPackageJobShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputShrink Field Functions 
    bool hasOutputShrink() const { return this->outputShrink_ != nullptr;};
    void deleteOutputShrink() { this->outputShrink_ = nullptr;};
    inline string getOutputShrink() const { DARABONBA_PTR_GET_DEFAULT(outputShrink_, "") };
    inline SubmitPackageJobShrinkRequest& setOutputShrink(string outputShrink) { DARABONBA_PTR_SET_VALUE(outputShrink_, outputShrink) };


    // scheduleConfigShrink Field Functions 
    bool hasScheduleConfigShrink() const { return this->scheduleConfigShrink_ != nullptr;};
    void deleteScheduleConfigShrink() { this->scheduleConfigShrink_ = nullptr;};
    inline string getScheduleConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleConfigShrink_, "") };
    inline SubmitPackageJobShrinkRequest& setScheduleConfigShrink(string scheduleConfigShrink) { DARABONBA_PTR_SET_VALUE(scheduleConfigShrink_, scheduleConfigShrink) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitPackageJobShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The input of the job.
    // 
    // This parameter is required.
    shared_ptr<string> inputsShrink_ {};
    // The name of the job.
    shared_ptr<string> name_ {};
    // The output of the job.
    // 
    // This parameter is required.
    shared_ptr<string> outputShrink_ {};
    // The scheduling settings.
    shared_ptr<string> scheduleConfigShrink_ {};
    // The user-defined data.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
