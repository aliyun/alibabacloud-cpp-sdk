// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHANGESETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHANGESETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetChangeSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChangeSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeSetId, changeSetId_);
      DARABONBA_PTR_TO_JSON(ChangeSetName, changeSetName_);
      DARABONBA_PTR_TO_JSON(ChangeSetType, changeSetType_);
      DARABONBA_PTR_TO_JSON(Changes, changes_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_TO_JSON(ExecutionStatus, executionStatus_);
      DARABONBA_PTR_TO_JSON(Log, log_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(StackName, stackName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TimeoutInMinutes, timeoutInMinutes_);
    };
    friend void from_json(const Darabonba::Json& j, GetChangeSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeSetId, changeSetId_);
      DARABONBA_PTR_FROM_JSON(ChangeSetName, changeSetName_);
      DARABONBA_PTR_FROM_JSON(ChangeSetType, changeSetType_);
      DARABONBA_PTR_FROM_JSON(Changes, changes_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_FROM_JSON(ExecutionStatus, executionStatus_);
      DARABONBA_PTR_FROM_JSON(Log, log_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(StackName, stackName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TimeoutInMinutes, timeoutInMinutes_);
    };
    GetChangeSetResponseBody() = default ;
    GetChangeSetResponseBody(const GetChangeSetResponseBody &) = default ;
    GetChangeSetResponseBody(GetChangeSetResponseBody &&) = default ;
    GetChangeSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChangeSetResponseBody() = default ;
    GetChangeSetResponseBody& operator=(const GetChangeSetResponseBody &) = default ;
    GetChangeSetResponseBody& operator=(GetChangeSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->parameterKey_ == nullptr
        && this->parameterValue_ == nullptr; };
      // parameterKey Field Functions 
      bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
      void deleteParameterKey() { this->parameterKey_ = nullptr;};
      inline string getParameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
      inline Parameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


      // parameterValue Field Functions 
      bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
      void deleteParameterValue() { this->parameterValue_ = nullptr;};
      inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
      inline Parameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    protected:
      // The key of the parameter.
      shared_ptr<string> parameterKey_ {};
      // The value of the parameter.
      shared_ptr<string> parameterValue_ {};
    };

    class Log : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Log& obj) { 
        DARABONBA_PTR_TO_JSON(TerraformLogs, terraformLogs_);
      };
      friend void from_json(const Darabonba::Json& j, Log& obj) { 
        DARABONBA_PTR_FROM_JSON(TerraformLogs, terraformLogs_);
      };
      Log() = default ;
      Log(const Log &) = default ;
      Log(Log &&) = default ;
      Log(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Log() = default ;
      Log& operator=(const Log &) = default ;
      Log& operator=(Log &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TerraformLogs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TerraformLogs& obj) { 
          DARABONBA_PTR_TO_JSON(Command, command_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Stream, stream_);
        };
        friend void from_json(const Darabonba::Json& j, TerraformLogs& obj) { 
          DARABONBA_PTR_FROM_JSON(Command, command_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Stream, stream_);
        };
        TerraformLogs() = default ;
        TerraformLogs(const TerraformLogs &) = default ;
        TerraformLogs(TerraformLogs &&) = default ;
        TerraformLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TerraformLogs() = default ;
        TerraformLogs& operator=(const TerraformLogs &) = default ;
        TerraformLogs& operator=(TerraformLogs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->command_ == nullptr
        && this->content_ == nullptr && this->stream_ == nullptr; };
        // command Field Functions 
        bool hasCommand() const { return this->command_ != nullptr;};
        void deleteCommand() { this->command_ = nullptr;};
        inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
        inline TerraformLogs& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline TerraformLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // stream Field Functions 
        bool hasStream() const { return this->stream_ != nullptr;};
        void deleteStream() { this->stream_ = nullptr;};
        inline string getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
        inline TerraformLogs& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


      protected:
        // The name of the Terraform command that is run. Valid values:
        // 
        // *   apply
        // *   plan
        // *   destroy
        // *   version
        // 
        // For more information about Terraform commands, see [Command](https://www.terraform.io/cli/commands).
        shared_ptr<string> command_ {};
        // The content of the output stream that is returned after the command is run.
        shared_ptr<string> content_ {};
        // The output stream. Valid values:
        // 
        // *   stdout: standard output stream
        // *   stderr: standard error stream
        shared_ptr<string> stream_ {};
      };

      virtual bool empty() const override { return this->terraformLogs_ == nullptr; };
      // terraformLogs Field Functions 
      bool hasTerraformLogs() const { return this->terraformLogs_ != nullptr;};
      void deleteTerraformLogs() { this->terraformLogs_ = nullptr;};
      inline const vector<Log::TerraformLogs> & getTerraformLogs() const { DARABONBA_PTR_GET_CONST(terraformLogs_, vector<Log::TerraformLogs>) };
      inline vector<Log::TerraformLogs> getTerraformLogs() { DARABONBA_PTR_GET(terraformLogs_, vector<Log::TerraformLogs>) };
      inline Log& setTerraformLogs(const vector<Log::TerraformLogs> & terraformLogs) { DARABONBA_PTR_SET_VALUE(terraformLogs_, terraformLogs) };
      inline Log& setTerraformLogs(vector<Log::TerraformLogs> && terraformLogs) { DARABONBA_PTR_SET_RVALUE(terraformLogs_, terraformLogs) };


    protected:
      // The Terraform logs. This parameter is returned only for change sets of Terraform stacks.
      // 
      // > This parameter is not returned for change sets that are in the Creating state. This parameter indicates the logs of the change set creation operation for Terraform stacks.
      shared_ptr<vector<Log::TerraformLogs>> terraformLogs_ {};
    };

    virtual bool empty() const override { return this->changeSetId_ == nullptr
        && this->changeSetName_ == nullptr && this->changeSetType_ == nullptr && this->changes_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr
        && this->disableRollback_ == nullptr && this->executionStatus_ == nullptr && this->log_ == nullptr && this->parameters_ == nullptr && this->regionId_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->stackId_ == nullptr && this->stackName_ == nullptr && this->status_ == nullptr
        && this->statusReason_ == nullptr && this->tags_ == nullptr && this->templateBody_ == nullptr && this->timeoutInMinutes_ == nullptr; };
    // changeSetId Field Functions 
    bool hasChangeSetId() const { return this->changeSetId_ != nullptr;};
    void deleteChangeSetId() { this->changeSetId_ = nullptr;};
    inline string getChangeSetId() const { DARABONBA_PTR_GET_DEFAULT(changeSetId_, "") };
    inline GetChangeSetResponseBody& setChangeSetId(string changeSetId) { DARABONBA_PTR_SET_VALUE(changeSetId_, changeSetId) };


    // changeSetName Field Functions 
    bool hasChangeSetName() const { return this->changeSetName_ != nullptr;};
    void deleteChangeSetName() { this->changeSetName_ = nullptr;};
    inline string getChangeSetName() const { DARABONBA_PTR_GET_DEFAULT(changeSetName_, "") };
    inline GetChangeSetResponseBody& setChangeSetName(string changeSetName) { DARABONBA_PTR_SET_VALUE(changeSetName_, changeSetName) };


    // changeSetType Field Functions 
    bool hasChangeSetType() const { return this->changeSetType_ != nullptr;};
    void deleteChangeSetType() { this->changeSetType_ = nullptr;};
    inline string getChangeSetType() const { DARABONBA_PTR_GET_DEFAULT(changeSetType_, "") };
    inline GetChangeSetResponseBody& setChangeSetType(string changeSetType) { DARABONBA_PTR_SET_VALUE(changeSetType_, changeSetType) };


    // changes Field Functions 
    bool hasChanges() const { return this->changes_ != nullptr;};
    void deleteChanges() { this->changes_ = nullptr;};
    inline const vector<Darabonba::Json> & getChanges() const { DARABONBA_PTR_GET_CONST(changes_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getChanges() { DARABONBA_PTR_GET(changes_, vector<Darabonba::Json>) };
    inline GetChangeSetResponseBody& setChanges(const vector<Darabonba::Json> & changes) { DARABONBA_PTR_SET_VALUE(changes_, changes) };
    inline GetChangeSetResponseBody& setChanges(vector<Darabonba::Json> && changes) { DARABONBA_PTR_SET_RVALUE(changes_, changes) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetChangeSetResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetChangeSetResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableRollback Field Functions 
    bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
    void deleteDisableRollback() { this->disableRollback_ = nullptr;};
    inline bool getDisableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
    inline GetChangeSetResponseBody& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


    // executionStatus Field Functions 
    bool hasExecutionStatus() const { return this->executionStatus_ != nullptr;};
    void deleteExecutionStatus() { this->executionStatus_ = nullptr;};
    inline string getExecutionStatus() const { DARABONBA_PTR_GET_DEFAULT(executionStatus_, "") };
    inline GetChangeSetResponseBody& setExecutionStatus(string executionStatus) { DARABONBA_PTR_SET_VALUE(executionStatus_, executionStatus) };


    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline const GetChangeSetResponseBody::Log & getLog() const { DARABONBA_PTR_GET_CONST(log_, GetChangeSetResponseBody::Log) };
    inline GetChangeSetResponseBody::Log getLog() { DARABONBA_PTR_GET(log_, GetChangeSetResponseBody::Log) };
    inline GetChangeSetResponseBody& setLog(const GetChangeSetResponseBody::Log & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
    inline GetChangeSetResponseBody& setLog(GetChangeSetResponseBody::Log && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<GetChangeSetResponseBody::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<GetChangeSetResponseBody::Parameters>) };
    inline vector<GetChangeSetResponseBody::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<GetChangeSetResponseBody::Parameters>) };
    inline GetChangeSetResponseBody& setParameters(const vector<GetChangeSetResponseBody::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetChangeSetResponseBody& setParameters(vector<GetChangeSetResponseBody::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetChangeSetResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChangeSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetChangeSetResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline GetChangeSetResponseBody& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // stackName Field Functions 
    bool hasStackName() const { return this->stackName_ != nullptr;};
    void deleteStackName() { this->stackName_ = nullptr;};
    inline string getStackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
    inline GetChangeSetResponseBody& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetChangeSetResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline GetChangeSetResponseBody& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetChangeSetResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetChangeSetResponseBody::Tags>) };
    inline vector<GetChangeSetResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetChangeSetResponseBody::Tags>) };
    inline GetChangeSetResponseBody& setTags(const vector<GetChangeSetResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetChangeSetResponseBody& setTags(vector<GetChangeSetResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string getTemplateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline GetChangeSetResponseBody& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // timeoutInMinutes Field Functions 
    bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
    void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
    inline int32_t getTimeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0) };
    inline GetChangeSetResponseBody& setTimeoutInMinutes(int32_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


  protected:
    // The ID of the change set.
    shared_ptr<string> changeSetId_ {};
    // The name of the change set.
    shared_ptr<string> changeSetName_ {};
    // The type of the change set.
    shared_ptr<string> changeSetType_ {};
    // The changes of the change set.
    shared_ptr<vector<Darabonba::Json>> changes_ {};
    // The time when the change set was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    shared_ptr<string> createTime_ {};
    // The description of the change set.
    shared_ptr<string> description_ {};
    // Indicates whether rollback was performed when the stack failed to be created or updated.
    shared_ptr<bool> disableRollback_ {};
    // The execution status of the change set.
    shared_ptr<string> executionStatus_ {};
    // The output logs of the change set.
    shared_ptr<GetChangeSetResponseBody::Log> log_ {};
    // The parameters of the stack.
    shared_ptr<vector<GetChangeSetResponseBody::Parameters>> parameters_ {};
    // The region ID of the change set.
    shared_ptr<string> regionId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the stack with which the change set is associated.
    shared_ptr<string> stackId_ {};
    // The name of the stack with which the change set is associated.
    shared_ptr<string> stackName_ {};
    // The status of the change set.
    shared_ptr<string> status_ {};
    // The reason why the change set is in its current state.
    shared_ptr<string> statusReason_ {};
    shared_ptr<vector<GetChangeSetResponseBody::Tags>> tags_ {};
    // The template body of the change set.
    // 
    // > This parameter takes effect only if you set ShowTemplate to true.
    shared_ptr<string> templateBody_ {};
    // The timeout period that is specified for the stack creation or update operation.
    shared_ptr<int32_t> timeoutInMinutes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
