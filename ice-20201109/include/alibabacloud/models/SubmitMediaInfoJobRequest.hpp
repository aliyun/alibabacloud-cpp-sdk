// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitMediaInfoJobRequestInput.hpp>
#include <alibabacloud/models/SubmitMediaInfoJobRequestScheduleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitMediaInfoJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaInfoJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaInfoJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitMediaInfoJobRequest() = default ;
    SubmitMediaInfoJobRequest(const SubmitMediaInfoJobRequest &) = default ;
    SubmitMediaInfoJobRequest(SubmitMediaInfoJobRequest &&) = default ;
    SubmitMediaInfoJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaInfoJobRequest() = default ;
    SubmitMediaInfoJobRequest& operator=(const SubmitMediaInfoJobRequest &) = default ;
    SubmitMediaInfoJobRequest& operator=(SubmitMediaInfoJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->input_ != nullptr
        && this->name_ != nullptr && this->scheduleConfig_ != nullptr && this->userData_ != nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitMediaInfoJobRequestInput & input() const { DARABONBA_PTR_GET_CONST(input_, SubmitMediaInfoJobRequestInput) };
    inline SubmitMediaInfoJobRequestInput input() { DARABONBA_PTR_GET(input_, SubmitMediaInfoJobRequestInput) };
    inline SubmitMediaInfoJobRequest& setInput(const SubmitMediaInfoJobRequestInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitMediaInfoJobRequest& setInput(SubmitMediaInfoJobRequestInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitMediaInfoJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const SubmitMediaInfoJobRequestScheduleConfig & scheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, SubmitMediaInfoJobRequestScheduleConfig) };
    inline SubmitMediaInfoJobRequestScheduleConfig scheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, SubmitMediaInfoJobRequestScheduleConfig) };
    inline SubmitMediaInfoJobRequest& setScheduleConfig(const SubmitMediaInfoJobRequestScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline SubmitMediaInfoJobRequest& setScheduleConfig(SubmitMediaInfoJobRequestScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitMediaInfoJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The input of the job.
    // 
    // This parameter is required.
    std::shared_ptr<SubmitMediaInfoJobRequestInput> input_ = nullptr;
    // The job name.
    std::shared_ptr<string> name_ = nullptr;
    // The scheduling parameters.
    std::shared_ptr<SubmitMediaInfoJobRequestScheduleConfig> scheduleConfig_ = nullptr;
    // The user data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
