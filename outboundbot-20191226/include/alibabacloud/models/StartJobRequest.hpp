// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class StartJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobJson, jobJson_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, StartJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobJson, jobJson_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    StartJobRequest() = default ;
    StartJobRequest(const StartJobRequest &) = default ;
    StartJobRequest(StartJobRequest &&) = default ;
    StartJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartJobRequest() = default ;
    StartJobRequest& operator=(const StartJobRequest &) = default ;
    StartJobRequest& operator=(StartJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callingNumber_ == nullptr
        && this->instanceId_ == nullptr && this->jobGroupId_ == nullptr && this->jobJson_ == nullptr && this->scenarioId_ == nullptr && this->scriptId_ == nullptr; };
    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline const vector<string> & getCallingNumber() const { DARABONBA_PTR_GET_CONST(callingNumber_, vector<string>) };
    inline vector<string> getCallingNumber() { DARABONBA_PTR_GET(callingNumber_, vector<string>) };
    inline StartJobRequest& setCallingNumber(const vector<string> & callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };
    inline StartJobRequest& setCallingNumber(vector<string> && callingNumber) { DARABONBA_PTR_SET_RVALUE(callingNumber_, callingNumber) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StartJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string getJobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline StartJobRequest& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobJson Field Functions 
    bool hasJobJson() const { return this->jobJson_ != nullptr;};
    void deleteJobJson() { this->jobJson_ = nullptr;};
    inline string getJobJson() const { DARABONBA_PTR_GET_DEFAULT(jobJson_, "") };
    inline StartJobRequest& setJobJson(string jobJson) { DARABONBA_PTR_SET_VALUE(jobJson_, jobJson) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string getScenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline StartJobRequest& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline StartJobRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // List of caller numbers
    shared_ptr<vector<string>> callingNumber_ {};
    // Instance ID
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Task group ID
    shared_ptr<string> jobGroupId_ {};
    // Job data, which includes the following fields:
    // 
    // extras // Optional extra information
    // 
    // - key // Key for a custom variable
    // 
    // - value // Value for a custom variable
    // 
    // contacts // Required contact information for the callee
    // 
    // - phoneNumber // Required phone number of the callee
    // 
    // - referenceId // Required contact ID (user-defined) to avoid duplicate names
    // 
    // - role // Optional role of this contact in the outbound call scenario. If omitted, no role distinction is made
    // 
    // - honorific // Optional honorific for the contact
    // 
    // - name // Optional name of the contact
    // 
    // This parameter is required.
    shared_ptr<string> jobJson_ {};
    // Scenario ID. This field supports backward compatibility with legacy outbound calling features. You can omit it.
    shared_ptr<string> scenarioId_ {};
    // Scenario ID (required)
    shared_ptr<string> scriptId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
