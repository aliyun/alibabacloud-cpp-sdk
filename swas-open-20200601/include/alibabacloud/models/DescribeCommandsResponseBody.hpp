// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMANDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMANDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeCommandsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommandsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Commands, commands_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommandsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Commands, commands_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCommandsResponseBody() = default ;
    DescribeCommandsResponseBody(const DescribeCommandsResponseBody &) = default ;
    DescribeCommandsResponseBody(DescribeCommandsResponseBody &&) = default ;
    DescribeCommandsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommandsResponseBody() = default ;
    DescribeCommandsResponseBody& operator=(const DescribeCommandsResponseBody &) = default ;
    DescribeCommandsResponseBody& operator=(DescribeCommandsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Commands : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Commands& obj) { 
        DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
        DARABONBA_PTR_TO_JSON(CommandId, commandId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnableParameter, enableParameter_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ParameterDefinitions, parameterDefinitions_);
        DARABONBA_PTR_TO_JSON(ParameterNames, parameterNames_);
        DARABONBA_PTR_TO_JSON(Provider, provider_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Timeout, timeout_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
      };
      friend void from_json(const Darabonba::Json& j, Commands& obj) { 
        DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
        DARABONBA_PTR_FROM_JSON(CommandId, commandId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnableParameter, enableParameter_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ParameterDefinitions, parameterDefinitions_);
        DARABONBA_PTR_FROM_JSON(ParameterNames, parameterNames_);
        DARABONBA_PTR_FROM_JSON(Provider, provider_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
      };
      Commands() = default ;
      Commands(const Commands &) = default ;
      Commands(Commands &&) = default ;
      Commands(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Commands() = default ;
      Commands& operator=(const Commands &) = default ;
      Commands& operator=(Commands &&) = default ;
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
        // The tag key of the command.
        shared_ptr<string> key_ {};
        // The tag value of the command.
        shared_ptr<string> value_ {};
      };

      class ParameterDefinitions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParameterDefinitions& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_TO_JSON(PossibleValues, possibleValues_);
          DARABONBA_PTR_TO_JSON(Required, required_);
        };
        friend void from_json(const Darabonba::Json& j, ParameterDefinitions& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_FROM_JSON(PossibleValues, possibleValues_);
          DARABONBA_PTR_FROM_JSON(Required, required_);
        };
        ParameterDefinitions() = default ;
        ParameterDefinitions(const ParameterDefinitions &) = default ;
        ParameterDefinitions(ParameterDefinitions &&) = default ;
        ParameterDefinitions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParameterDefinitions() = default ;
        ParameterDefinitions& operator=(const ParameterDefinitions &) = default ;
        ParameterDefinitions& operator=(ParameterDefinitions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->description_ == nullptr && this->parameterName_ == nullptr && this->possibleValues_ == nullptr && this->required_ == nullptr; };
        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline ParameterDefinitions& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ParameterDefinitions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // parameterName Field Functions 
        bool hasParameterName() const { return this->parameterName_ != nullptr;};
        void deleteParameterName() { this->parameterName_ = nullptr;};
        inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
        inline ParameterDefinitions& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


        // possibleValues Field Functions 
        bool hasPossibleValues() const { return this->possibleValues_ != nullptr;};
        void deletePossibleValues() { this->possibleValues_ = nullptr;};
        inline const vector<string> & getPossibleValues() const { DARABONBA_PTR_GET_CONST(possibleValues_, vector<string>) };
        inline vector<string> getPossibleValues() { DARABONBA_PTR_GET(possibleValues_, vector<string>) };
        inline ParameterDefinitions& setPossibleValues(const vector<string> & possibleValues) { DARABONBA_PTR_SET_VALUE(possibleValues_, possibleValues) };
        inline ParameterDefinitions& setPossibleValues(vector<string> && possibleValues) { DARABONBA_PTR_SET_RVALUE(possibleValues_, possibleValues) };


        // required Field Functions 
        bool hasRequired() const { return this->required_ != nullptr;};
        void deleteRequired() { this->required_ = nullptr;};
        inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
        inline ParameterDefinitions& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


      protected:
        // The default value of the custom parameter.
        shared_ptr<string> defaultValue_ {};
        // The description of the custom parameter.
        shared_ptr<string> description_ {};
        // The name of the custom parameter.
        shared_ptr<string> parameterName_ {};
        // The possible values of the enumeration-type custom parameter.
        shared_ptr<vector<string>> possibleValues_ {};
        // Indicates whether the custom parameter is required. Valid values:
        // 
        // - true: Required.
        // 
        // - false: Not required.
        // 
        // Default value: false.
        shared_ptr<bool> required_ {};
      };

      virtual bool empty() const override { return this->commandContent_ == nullptr
        && this->commandId_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->enableParameter_ == nullptr && this->name_ == nullptr
        && this->parameterDefinitions_ == nullptr && this->parameterNames_ == nullptr && this->provider_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr
        && this->timeout_ == nullptr && this->type_ == nullptr && this->workingDir_ == nullptr; };
      // commandContent Field Functions 
      bool hasCommandContent() const { return this->commandContent_ != nullptr;};
      void deleteCommandContent() { this->commandContent_ = nullptr;};
      inline string getCommandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
      inline Commands& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


      // commandId Field Functions 
      bool hasCommandId() const { return this->commandId_ != nullptr;};
      void deleteCommandId() { this->commandId_ = nullptr;};
      inline string getCommandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
      inline Commands& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Commands& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Commands& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enableParameter Field Functions 
      bool hasEnableParameter() const { return this->enableParameter_ != nullptr;};
      void deleteEnableParameter() { this->enableParameter_ = nullptr;};
      inline bool getEnableParameter() const { DARABONBA_PTR_GET_DEFAULT(enableParameter_, false) };
      inline Commands& setEnableParameter(bool enableParameter) { DARABONBA_PTR_SET_VALUE(enableParameter_, enableParameter) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Commands& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parameterDefinitions Field Functions 
      bool hasParameterDefinitions() const { return this->parameterDefinitions_ != nullptr;};
      void deleteParameterDefinitions() { this->parameterDefinitions_ = nullptr;};
      inline const vector<Commands::ParameterDefinitions> & getParameterDefinitions() const { DARABONBA_PTR_GET_CONST(parameterDefinitions_, vector<Commands::ParameterDefinitions>) };
      inline vector<Commands::ParameterDefinitions> getParameterDefinitions() { DARABONBA_PTR_GET(parameterDefinitions_, vector<Commands::ParameterDefinitions>) };
      inline Commands& setParameterDefinitions(const vector<Commands::ParameterDefinitions> & parameterDefinitions) { DARABONBA_PTR_SET_VALUE(parameterDefinitions_, parameterDefinitions) };
      inline Commands& setParameterDefinitions(vector<Commands::ParameterDefinitions> && parameterDefinitions) { DARABONBA_PTR_SET_RVALUE(parameterDefinitions_, parameterDefinitions) };


      // parameterNames Field Functions 
      bool hasParameterNames() const { return this->parameterNames_ != nullptr;};
      void deleteParameterNames() { this->parameterNames_ = nullptr;};
      inline const vector<string> & getParameterNames() const { DARABONBA_PTR_GET_CONST(parameterNames_, vector<string>) };
      inline vector<string> getParameterNames() { DARABONBA_PTR_GET(parameterNames_, vector<string>) };
      inline Commands& setParameterNames(const vector<string> & parameterNames) { DARABONBA_PTR_SET_VALUE(parameterNames_, parameterNames) };
      inline Commands& setParameterNames(vector<string> && parameterNames) { DARABONBA_PTR_SET_RVALUE(parameterNames_, parameterNames) };


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
      inline Commands& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Commands& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Commands::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Commands::Tags>) };
      inline vector<Commands::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Commands::Tags>) };
      inline Commands& setTags(const vector<Commands::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Commands& setTags(vector<Commands::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
      inline Commands& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Commands& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // workingDir Field Functions 
      bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
      void deleteWorkingDir() { this->workingDir_ = nullptr;};
      inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
      inline Commands& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


    protected:
      // The command content.
      shared_ptr<string> commandContent_ {};
      // The command ID.
      shared_ptr<string> commandId_ {};
      // The time when the command was created. The time is displayed in UTC (Z) in the YYYY-MM-DDThh:mm:ssZ format.
      shared_ptr<string> creationTime_ {};
      // The command description.
      shared_ptr<string> description_ {};
      // Indicates whether custom parameters are enabled for the command.
      shared_ptr<bool> enableParameter_ {};
      // The command name.
      shared_ptr<string> name_ {};
      // The list of custom parameter details.
      shared_ptr<vector<Commands::ParameterDefinitions>> parameterDefinitions_ {};
      // The list of custom parameter names parsed from CommandContent when the command was created. The list is returned in the List format. If the custom parameter feature is not enabled, an empty list is returned.
      shared_ptr<vector<string>> parameterNames_ {};
      // The provider of the command.
      shared_ptr<string> provider_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The tags of the command.
      shared_ptr<vector<Commands::Tags>> tags_ {};
      // The timeout period. Unit: seconds.
      shared_ptr<int64_t> timeout_ {};
      // The command type.
      shared_ptr<string> type_ {};
      // The execution path.
      shared_ptr<string> workingDir_ {};
    };

    virtual bool empty() const override { return this->commands_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline const vector<DescribeCommandsResponseBody::Commands> & getCommands() const { DARABONBA_PTR_GET_CONST(commands_, vector<DescribeCommandsResponseBody::Commands>) };
    inline vector<DescribeCommandsResponseBody::Commands> getCommands() { DARABONBA_PTR_GET(commands_, vector<DescribeCommandsResponseBody::Commands>) };
    inline DescribeCommandsResponseBody& setCommands(const vector<DescribeCommandsResponseBody::Commands> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
    inline DescribeCommandsResponseBody& setCommands(vector<DescribeCommandsResponseBody::Commands> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCommandsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCommandsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommandsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCommandsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The commands.
    shared_ptr<vector<DescribeCommandsResponseBody::Commands>> commands_ {};
    // The page number of the command list.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of commands.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
