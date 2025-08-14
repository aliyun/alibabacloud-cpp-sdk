// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPACKAGEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPACKAGEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitPackageJobRequestInputs.hpp>
#include <alibabacloud/models/SubmitPackageJobRequestOutput.hpp>
#include <alibabacloud/models/SubmitPackageJobRequestScheduleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitPackageJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitPackageJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitPackageJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitPackageJobRequest() = default ;
    SubmitPackageJobRequest(const SubmitPackageJobRequest &) = default ;
    SubmitPackageJobRequest(SubmitPackageJobRequest &&) = default ;
    SubmitPackageJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitPackageJobRequest() = default ;
    SubmitPackageJobRequest& operator=(const SubmitPackageJobRequest &) = default ;
    SubmitPackageJobRequest& operator=(SubmitPackageJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputs_ != nullptr
        && this->name_ != nullptr && this->output_ != nullptr && this->scheduleConfig_ != nullptr && this->userData_ != nullptr; };
    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const vector<SubmitPackageJobRequestInputs> & inputs() const { DARABONBA_PTR_GET_CONST(inputs_, vector<SubmitPackageJobRequestInputs>) };
    inline vector<SubmitPackageJobRequestInputs> inputs() { DARABONBA_PTR_GET(inputs_, vector<SubmitPackageJobRequestInputs>) };
    inline SubmitPackageJobRequest& setInputs(const vector<SubmitPackageJobRequestInputs> & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline SubmitPackageJobRequest& setInputs(vector<SubmitPackageJobRequestInputs> && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitPackageJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const SubmitPackageJobRequestOutput & output() const { DARABONBA_PTR_GET_CONST(output_, SubmitPackageJobRequestOutput) };
    inline SubmitPackageJobRequestOutput output() { DARABONBA_PTR_GET(output_, SubmitPackageJobRequestOutput) };
    inline SubmitPackageJobRequest& setOutput(const SubmitPackageJobRequestOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline SubmitPackageJobRequest& setOutput(SubmitPackageJobRequestOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const SubmitPackageJobRequestScheduleConfig & scheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, SubmitPackageJobRequestScheduleConfig) };
    inline SubmitPackageJobRequestScheduleConfig scheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, SubmitPackageJobRequestScheduleConfig) };
    inline SubmitPackageJobRequest& setScheduleConfig(const SubmitPackageJobRequestScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline SubmitPackageJobRequest& setScheduleConfig(SubmitPackageJobRequestScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitPackageJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The input of the job.
    // 
    // This parameter is required.
    std::shared_ptr<vector<SubmitPackageJobRequestInputs>> inputs_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> name_ = nullptr;
    // The output of the job.
    // 
    // This parameter is required.
    std::shared_ptr<SubmitPackageJobRequestOutput> output_ = nullptr;
    // The scheduling settings.
    std::shared_ptr<SubmitPackageJobRequestScheduleConfig> scheduleConfig_ = nullptr;
    // The user-defined data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
