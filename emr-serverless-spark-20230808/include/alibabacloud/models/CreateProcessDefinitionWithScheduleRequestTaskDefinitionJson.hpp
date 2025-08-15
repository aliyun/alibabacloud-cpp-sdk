// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROCESSDEFINITIONWITHSCHEDULEREQUESTTASKDEFINITIONJSON_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROCESSDEFINITIONWITHSCHEDULEREQUESTTASKDEFINITIONJSON_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson& obj) { 
      DARABONBA_PTR_TO_JSON(alertEmailAddress, alertEmailAddress_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(failAlertEnable, failAlertEnable_);
      DARABONBA_PTR_TO_JSON(failRetryTimes, failRetryTimes_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(startAlertEnable, startAlertEnable_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(taskParams, taskParams_);
      DARABONBA_PTR_TO_JSON(taskType, taskType_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson& obj) { 
      DARABONBA_PTR_FROM_JSON(alertEmailAddress, alertEmailAddress_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(failAlertEnable, failAlertEnable_);
      DARABONBA_PTR_FROM_JSON(failRetryTimes, failRetryTimes_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(startAlertEnable, startAlertEnable_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(taskParams, taskParams_);
      DARABONBA_PTR_FROM_JSON(taskType, taskType_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
    };
    CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson() = default ;
    CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson(const CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson &) = default ;
    CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson(CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson &&) = default ;
    CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson() = default ;
    CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson& operator=(const CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson &) = default ;
    CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson& operator=(CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertEmailAddress_ != nullptr
        && this->code_ != nullptr && this->description_ != nullptr && this->failAlertEnable_ != nullptr && this->failRetryTimes_ != nullptr && this->name_ != nullptr
        && this->startAlertEnable_ != nullptr && this->tags_ != nullptr && this->taskParams_ != nullptr && this->taskType_ != nullptr && this->timeout_ != nullptr; };
    // alertEmailAddress Field Functions 
    bool hasAlertEmailAddress() const { return this->alertEmailAddress_ != nullptr;};
    void deleteAlertEmailAddress() { this->alertEmailAddress_ = nullptr;};
    inline string alertEmailAddress() const { DARABONBA_PTR_GET_DEFAULT(alertEmailAddress_, "") };
    inline CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson& setAlertEmailAddress(string alertEmailAddress) { DARABONBA_PTR_SET_VALUE(alertEmailAddress_, alertEmailAddress) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // failAlertEnable Field Functions 
    bool hasFailAlertEnable() const { return this->failAlertEnable_ != nullptr;};
    void deleteFailAlertEnable() { this->failAlertEnable_ = nullptr;};
    inline bool failAlertEnable() const { DARABONBA_PTR_GET_DEFAULT(failAlertEnable_, false) };
    inline CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson& setFailAlertEnable(bool failAlertEnable) { DARABONBA_PTR_SET_VALUE(failAlertEnable_, failAlertEnable) };


    // failRetryTimes Field Functions 
    bool hasFailRetryTimes() const { return this->failRetryTimes_ != nullptr;};
    void deleteFailRetryTimes() { this->failRetryTimes_ = nullptr;};
    inline int32_t failRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(failRetryTimes_, 0) };
    inline CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson& setFailRetryTimes(int32_t failRetryTimes) { DARABONBA_PTR_SET_VALUE(failRetryTimes_, failRetryTimes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // startAlertEnable Field Functions 
    bool hasStartAlertEnable() const { return this->startAlertEnable_ != nullptr;};
    void deleteStartAlertEnable() { this->startAlertEnable_ = nullptr;};
    inline bool startAlertEnable() const { DARABONBA_PTR_GET_DEFAULT(startAlertEnable_, false) };
    inline CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson& setStartAlertEnable(bool startAlertEnable) { DARABONBA_PTR_SET_VALUE(startAlertEnable_, startAlertEnable) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> tags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskParams Field Functions 
    bool hasTaskParams() const { return this->taskParams_ != nullptr;};
    void deleteTaskParams() { this->taskParams_ = nullptr;};
    inline const Models::CreateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams & taskParams() const { DARABONBA_PTR_GET_CONST(taskParams_, Models::CreateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams) };
    inline Models::CreateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams taskParams() { DARABONBA_PTR_GET(taskParams_, Models::CreateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams) };
    inline CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson& setTaskParams(const Models::CreateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams & taskParams) { DARABONBA_PTR_SET_VALUE(taskParams_, taskParams) };
    inline CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson& setTaskParams(Models::CreateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams && taskParams) { DARABONBA_PTR_SET_RVALUE(taskParams_, taskParams) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The email address to receive alerts.
    std::shared_ptr<string> alertEmailAddress_ = nullptr;
    // The node ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> code_ = nullptr;
    // The node description.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to send alerts when the node fails.
    std::shared_ptr<bool> failAlertEnable_ = nullptr;
    // The number of retries when the node fails.
    std::shared_ptr<int32_t> failRetryTimes_ = nullptr;
    // The name of the node.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // Specifies whether to send alerts when the node is started.
    std::shared_ptr<bool> startAlertEnable_ = nullptr;
    // The tags.
    std::shared_ptr<map<string, string>> tags_ = nullptr;
    // The job parameters.
    // 
    // This parameter is required.
    std::shared_ptr<Models::CreateProcessDefinitionWithScheduleRequestTaskDefinitionJsonTaskParams> taskParams_ = nullptr;
    // The type of the node.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
    // The timeout period of the callback. Unit: seconds.
    std::shared_ptr<int32_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
