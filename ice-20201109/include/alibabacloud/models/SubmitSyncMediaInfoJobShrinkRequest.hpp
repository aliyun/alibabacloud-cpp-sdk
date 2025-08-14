// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSYNCMEDIAINFOJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSYNCMEDIAINFOJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSyncMediaInfoJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSyncMediaInfoJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfigShrink_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSyncMediaInfoJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfigShrink_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitSyncMediaInfoJobShrinkRequest() = default ;
    SubmitSyncMediaInfoJobShrinkRequest(const SubmitSyncMediaInfoJobShrinkRequest &) = default ;
    SubmitSyncMediaInfoJobShrinkRequest(SubmitSyncMediaInfoJobShrinkRequest &&) = default ;
    SubmitSyncMediaInfoJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSyncMediaInfoJobShrinkRequest() = default ;
    SubmitSyncMediaInfoJobShrinkRequest& operator=(const SubmitSyncMediaInfoJobShrinkRequest &) = default ;
    SubmitSyncMediaInfoJobShrinkRequest& operator=(SubmitSyncMediaInfoJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputShrink_ != nullptr
        && this->name_ != nullptr && this->scheduleConfigShrink_ != nullptr && this->userData_ != nullptr; };
    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string inputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline SubmitSyncMediaInfoJobShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitSyncMediaInfoJobShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scheduleConfigShrink Field Functions 
    bool hasScheduleConfigShrink() const { return this->scheduleConfigShrink_ != nullptr;};
    void deleteScheduleConfigShrink() { this->scheduleConfigShrink_ = nullptr;};
    inline string scheduleConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleConfigShrink_, "") };
    inline SubmitSyncMediaInfoJobShrinkRequest& setScheduleConfigShrink(string scheduleConfigShrink) { DARABONBA_PTR_SET_VALUE(scheduleConfigShrink_, scheduleConfigShrink) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitSyncMediaInfoJobShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The input of the job.
    // 
    // This parameter is required.
    std::shared_ptr<string> inputShrink_ = nullptr;
    // The job name.
    std::shared_ptr<string> name_ = nullptr;
    // The scheduling parameters. This parameter is optional.
    std::shared_ptr<string> scheduleConfigShrink_ = nullptr;
    // The user data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
