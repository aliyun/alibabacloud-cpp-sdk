// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSYNCMEDIAINFOJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSYNCMEDIAINFOJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitSyncMediaInfoJobRequestInput.hpp>
#include <alibabacloud/models/SubmitSyncMediaInfoJobRequestScheduleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSyncMediaInfoJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSyncMediaInfoJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSyncMediaInfoJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitSyncMediaInfoJobRequest() = default ;
    SubmitSyncMediaInfoJobRequest(const SubmitSyncMediaInfoJobRequest &) = default ;
    SubmitSyncMediaInfoJobRequest(SubmitSyncMediaInfoJobRequest &&) = default ;
    SubmitSyncMediaInfoJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSyncMediaInfoJobRequest() = default ;
    SubmitSyncMediaInfoJobRequest& operator=(const SubmitSyncMediaInfoJobRequest &) = default ;
    SubmitSyncMediaInfoJobRequest& operator=(SubmitSyncMediaInfoJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->input_ == nullptr
        && return this->name_ == nullptr && return this->scheduleConfig_ == nullptr && return this->userData_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitSyncMediaInfoJobRequestInput & input() const { DARABONBA_PTR_GET_CONST(input_, SubmitSyncMediaInfoJobRequestInput) };
    inline SubmitSyncMediaInfoJobRequestInput input() { DARABONBA_PTR_GET(input_, SubmitSyncMediaInfoJobRequestInput) };
    inline SubmitSyncMediaInfoJobRequest& setInput(const SubmitSyncMediaInfoJobRequestInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitSyncMediaInfoJobRequest& setInput(SubmitSyncMediaInfoJobRequestInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitSyncMediaInfoJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const SubmitSyncMediaInfoJobRequestScheduleConfig & scheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, SubmitSyncMediaInfoJobRequestScheduleConfig) };
    inline SubmitSyncMediaInfoJobRequestScheduleConfig scheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, SubmitSyncMediaInfoJobRequestScheduleConfig) };
    inline SubmitSyncMediaInfoJobRequest& setScheduleConfig(const SubmitSyncMediaInfoJobRequestScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline SubmitSyncMediaInfoJobRequest& setScheduleConfig(SubmitSyncMediaInfoJobRequestScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitSyncMediaInfoJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The input of the job.
    // 
    // This parameter is required.
    std::shared_ptr<SubmitSyncMediaInfoJobRequestInput> input_ = nullptr;
    // The job name.
    std::shared_ptr<string> name_ = nullptr;
    // The scheduling parameters. This parameter is optional.
    std::shared_ptr<SubmitSyncMediaInfoJobRequestScheduleConfig> scheduleConfig_ = nullptr;
    // The user data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
