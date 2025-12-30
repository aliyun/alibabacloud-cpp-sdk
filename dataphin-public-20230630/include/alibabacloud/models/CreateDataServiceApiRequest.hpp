// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASERVICEAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASERVICEAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateDataServiceApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataServiceApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataServiceApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateDataServiceApiRequest() = default ;
    CreateDataServiceApiRequest(const CreateDataServiceApiRequest &) = default ;
    CreateDataServiceApiRequest(CreateDataServiceApiRequest &&) = default ;
    CreateDataServiceApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataServiceApiRequest() = default ;
    CreateDataServiceApiRequest& operator=(const CreateDataServiceApiRequest &) = default ;
    CreateDataServiceApiRequest& operator=(CreateDataServiceApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ApiGroupId, apiGroupId_);
        DARABONBA_PTR_TO_JSON(ApiGroupName, apiGroupName_);
        DARABONBA_PTR_TO_JSON(ApiName, apiName_);
        DARABONBA_PTR_TO_JSON(ApiType, apiType_);
        DARABONBA_PTR_TO_JSON(BizProtocol, bizProtocol_);
        DARABONBA_PTR_TO_JSON(CacheTimeout, cacheTimeout_);
        DARABONBA_PTR_TO_JSON(CallMode, callMode_);
        DARABONBA_PTR_TO_JSON(CustomUpdateRate, customUpdateRate_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExecutionTimeout, executionTimeout_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(RequestType, requestType_);
        DARABONBA_PTR_TO_JSON(ScriptDetails, scriptDetails_);
        DARABONBA_PTR_TO_JSON(Timeout, timeout_);
        DARABONBA_PTR_TO_JSON(UpdateRate, updateRate_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiGroupId, apiGroupId_);
        DARABONBA_PTR_FROM_JSON(ApiGroupName, apiGroupName_);
        DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
        DARABONBA_PTR_FROM_JSON(ApiType, apiType_);
        DARABONBA_PTR_FROM_JSON(BizProtocol, bizProtocol_);
        DARABONBA_PTR_FROM_JSON(CacheTimeout, cacheTimeout_);
        DARABONBA_PTR_FROM_JSON(CallMode, callMode_);
        DARABONBA_PTR_FROM_JSON(CustomUpdateRate, customUpdateRate_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExecutionTimeout, executionTimeout_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(RequestType, requestType_);
        DARABONBA_PTR_FROM_JSON(ScriptDetails, scriptDetails_);
        DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
        DARABONBA_PTR_FROM_JSON(UpdateRate, updateRate_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      CreateCommand() = default ;
      CreateCommand(const CreateCommand &) = default ;
      CreateCommand(CreateCommand &&) = default ;
      CreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateCommand() = default ;
      CreateCommand& operator=(const CreateCommand &) = default ;
      CreateCommand& operator=(CreateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ScriptDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScriptDetails& obj) { 
          DARABONBA_PTR_TO_JSON(DatasourceID, datasourceID_);
          DARABONBA_PTR_TO_JSON(DatasourceType, datasourceType_);
          DARABONBA_PTR_TO_JSON(IsPaginated, isPaginated_);
          DARABONBA_PTR_TO_JSON(Script, script_);
          DARABONBA_PTR_TO_JSON(ScriptRequestParameters, scriptRequestParameters_);
          DARABONBA_PTR_TO_JSON(ScriptResponseParameters, scriptResponseParameters_);
          DARABONBA_PTR_TO_JSON(SortPriority, sortPriority_);
          DARABONBA_PTR_TO_JSON(SqlMode, sqlMode_);
        };
        friend void from_json(const Darabonba::Json& j, ScriptDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(DatasourceID, datasourceID_);
          DARABONBA_PTR_FROM_JSON(DatasourceType, datasourceType_);
          DARABONBA_PTR_FROM_JSON(IsPaginated, isPaginated_);
          DARABONBA_PTR_FROM_JSON(Script, script_);
          DARABONBA_PTR_FROM_JSON(ScriptRequestParameters, scriptRequestParameters_);
          DARABONBA_PTR_FROM_JSON(ScriptResponseParameters, scriptResponseParameters_);
          DARABONBA_PTR_FROM_JSON(SortPriority, sortPriority_);
          DARABONBA_PTR_FROM_JSON(SqlMode, sqlMode_);
        };
        ScriptDetails() = default ;
        ScriptDetails(const ScriptDetails &) = default ;
        ScriptDetails(ScriptDetails &&) = default ;
        ScriptDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScriptDetails() = default ;
        ScriptDetails& operator=(const ScriptDetails &) = default ;
        ScriptDetails& operator=(ScriptDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ScriptResponseParameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScriptResponseParameters& obj) { 
            DARABONBA_PTR_TO_JSON(ExampleValue, exampleValue_);
            DARABONBA_PTR_TO_JSON(ParameterDataType, parameterDataType_);
            DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
            DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          };
          friend void from_json(const Darabonba::Json& j, ScriptResponseParameters& obj) { 
            DARABONBA_PTR_FROM_JSON(ExampleValue, exampleValue_);
            DARABONBA_PTR_FROM_JSON(ParameterDataType, parameterDataType_);
            DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
            DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          };
          ScriptResponseParameters() = default ;
          ScriptResponseParameters(const ScriptResponseParameters &) = default ;
          ScriptResponseParameters(ScriptResponseParameters &&) = default ;
          ScriptResponseParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScriptResponseParameters() = default ;
          ScriptResponseParameters& operator=(const ScriptResponseParameters &) = default ;
          ScriptResponseParameters& operator=(ScriptResponseParameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->exampleValue_ == nullptr
        && this->parameterDataType_ == nullptr && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr; };
          // exampleValue Field Functions 
          bool hasExampleValue() const { return this->exampleValue_ != nullptr;};
          void deleteExampleValue() { this->exampleValue_ = nullptr;};
          inline string getExampleValue() const { DARABONBA_PTR_GET_DEFAULT(exampleValue_, "") };
          inline ScriptResponseParameters& setExampleValue(string exampleValue) { DARABONBA_PTR_SET_VALUE(exampleValue_, exampleValue) };


          // parameterDataType Field Functions 
          bool hasParameterDataType() const { return this->parameterDataType_ != nullptr;};
          void deleteParameterDataType() { this->parameterDataType_ = nullptr;};
          inline string getParameterDataType() const { DARABONBA_PTR_GET_DEFAULT(parameterDataType_, "") };
          inline ScriptResponseParameters& setParameterDataType(string parameterDataType) { DARABONBA_PTR_SET_VALUE(parameterDataType_, parameterDataType) };


          // parameterDescription Field Functions 
          bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
          void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
          inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
          inline ScriptResponseParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


          // parameterName Field Functions 
          bool hasParameterName() const { return this->parameterName_ != nullptr;};
          void deleteParameterName() { this->parameterName_ = nullptr;};
          inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
          inline ScriptResponseParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


        protected:
          shared_ptr<string> exampleValue_ {};
          // This parameter is required.
          shared_ptr<string> parameterDataType_ {};
          shared_ptr<string> parameterDescription_ {};
          // This parameter is required.
          shared_ptr<string> parameterName_ {};
        };

        class ScriptRequestParameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScriptRequestParameters& obj) { 
            DARABONBA_PTR_TO_JSON(ExampleValue, exampleValue_);
            DARABONBA_PTR_TO_JSON(IsRequiredParameter, isRequiredParameter_);
            DARABONBA_PTR_TO_JSON(ParameterDataType, parameterDataType_);
            DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
            DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
            DARABONBA_PTR_TO_JSON(ParameterValueType, parameterValueType_);
          };
          friend void from_json(const Darabonba::Json& j, ScriptRequestParameters& obj) { 
            DARABONBA_PTR_FROM_JSON(ExampleValue, exampleValue_);
            DARABONBA_PTR_FROM_JSON(IsRequiredParameter, isRequiredParameter_);
            DARABONBA_PTR_FROM_JSON(ParameterDataType, parameterDataType_);
            DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
            DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
            DARABONBA_PTR_FROM_JSON(ParameterValueType, parameterValueType_);
          };
          ScriptRequestParameters() = default ;
          ScriptRequestParameters(const ScriptRequestParameters &) = default ;
          ScriptRequestParameters(ScriptRequestParameters &&) = default ;
          ScriptRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScriptRequestParameters() = default ;
          ScriptRequestParameters& operator=(const ScriptRequestParameters &) = default ;
          ScriptRequestParameters& operator=(ScriptRequestParameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->exampleValue_ == nullptr
        && this->isRequiredParameter_ == nullptr && this->parameterDataType_ == nullptr && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr && this->parameterValueType_ == nullptr; };
          // exampleValue Field Functions 
          bool hasExampleValue() const { return this->exampleValue_ != nullptr;};
          void deleteExampleValue() { this->exampleValue_ = nullptr;};
          inline string getExampleValue() const { DARABONBA_PTR_GET_DEFAULT(exampleValue_, "") };
          inline ScriptRequestParameters& setExampleValue(string exampleValue) { DARABONBA_PTR_SET_VALUE(exampleValue_, exampleValue) };


          // isRequiredParameter Field Functions 
          bool hasIsRequiredParameter() const { return this->isRequiredParameter_ != nullptr;};
          void deleteIsRequiredParameter() { this->isRequiredParameter_ = nullptr;};
          inline bool getIsRequiredParameter() const { DARABONBA_PTR_GET_DEFAULT(isRequiredParameter_, false) };
          inline ScriptRequestParameters& setIsRequiredParameter(bool isRequiredParameter) { DARABONBA_PTR_SET_VALUE(isRequiredParameter_, isRequiredParameter) };


          // parameterDataType Field Functions 
          bool hasParameterDataType() const { return this->parameterDataType_ != nullptr;};
          void deleteParameterDataType() { this->parameterDataType_ = nullptr;};
          inline string getParameterDataType() const { DARABONBA_PTR_GET_DEFAULT(parameterDataType_, "") };
          inline ScriptRequestParameters& setParameterDataType(string parameterDataType) { DARABONBA_PTR_SET_VALUE(parameterDataType_, parameterDataType) };


          // parameterDescription Field Functions 
          bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
          void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
          inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
          inline ScriptRequestParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


          // parameterName Field Functions 
          bool hasParameterName() const { return this->parameterName_ != nullptr;};
          void deleteParameterName() { this->parameterName_ = nullptr;};
          inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
          inline ScriptRequestParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


          // parameterValueType Field Functions 
          bool hasParameterValueType() const { return this->parameterValueType_ != nullptr;};
          void deleteParameterValueType() { this->parameterValueType_ = nullptr;};
          inline string getParameterValueType() const { DARABONBA_PTR_GET_DEFAULT(parameterValueType_, "") };
          inline ScriptRequestParameters& setParameterValueType(string parameterValueType) { DARABONBA_PTR_SET_VALUE(parameterValueType_, parameterValueType) };


        protected:
          shared_ptr<string> exampleValue_ {};
          // This parameter is required.
          shared_ptr<bool> isRequiredParameter_ {};
          // This parameter is required.
          shared_ptr<string> parameterDataType_ {};
          shared_ptr<string> parameterDescription_ {};
          // This parameter is required.
          shared_ptr<string> parameterName_ {};
          // This parameter is required.
          shared_ptr<string> parameterValueType_ {};
        };

        virtual bool empty() const override { return this->datasourceID_ == nullptr
        && this->datasourceType_ == nullptr && this->isPaginated_ == nullptr && this->script_ == nullptr && this->scriptRequestParameters_ == nullptr && this->scriptResponseParameters_ == nullptr
        && this->sortPriority_ == nullptr && this->sqlMode_ == nullptr; };
        // datasourceID Field Functions 
        bool hasDatasourceID() const { return this->datasourceID_ != nullptr;};
        void deleteDatasourceID() { this->datasourceID_ = nullptr;};
        inline int64_t getDatasourceID() const { DARABONBA_PTR_GET_DEFAULT(datasourceID_, 0L) };
        inline ScriptDetails& setDatasourceID(int64_t datasourceID) { DARABONBA_PTR_SET_VALUE(datasourceID_, datasourceID) };


        // datasourceType Field Functions 
        bool hasDatasourceType() const { return this->datasourceType_ != nullptr;};
        void deleteDatasourceType() { this->datasourceType_ = nullptr;};
        inline int32_t getDatasourceType() const { DARABONBA_PTR_GET_DEFAULT(datasourceType_, 0) };
        inline ScriptDetails& setDatasourceType(int32_t datasourceType) { DARABONBA_PTR_SET_VALUE(datasourceType_, datasourceType) };


        // isPaginated Field Functions 
        bool hasIsPaginated() const { return this->isPaginated_ != nullptr;};
        void deleteIsPaginated() { this->isPaginated_ = nullptr;};
        inline bool getIsPaginated() const { DARABONBA_PTR_GET_DEFAULT(isPaginated_, false) };
        inline ScriptDetails& setIsPaginated(bool isPaginated) { DARABONBA_PTR_SET_VALUE(isPaginated_, isPaginated) };


        // script Field Functions 
        bool hasScript() const { return this->script_ != nullptr;};
        void deleteScript() { this->script_ = nullptr;};
        inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
        inline ScriptDetails& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


        // scriptRequestParameters Field Functions 
        bool hasScriptRequestParameters() const { return this->scriptRequestParameters_ != nullptr;};
        void deleteScriptRequestParameters() { this->scriptRequestParameters_ = nullptr;};
        inline const vector<ScriptDetails::ScriptRequestParameters> & getScriptRequestParameters() const { DARABONBA_PTR_GET_CONST(scriptRequestParameters_, vector<ScriptDetails::ScriptRequestParameters>) };
        inline vector<ScriptDetails::ScriptRequestParameters> getScriptRequestParameters() { DARABONBA_PTR_GET(scriptRequestParameters_, vector<ScriptDetails::ScriptRequestParameters>) };
        inline ScriptDetails& setScriptRequestParameters(const vector<ScriptDetails::ScriptRequestParameters> & scriptRequestParameters) { DARABONBA_PTR_SET_VALUE(scriptRequestParameters_, scriptRequestParameters) };
        inline ScriptDetails& setScriptRequestParameters(vector<ScriptDetails::ScriptRequestParameters> && scriptRequestParameters) { DARABONBA_PTR_SET_RVALUE(scriptRequestParameters_, scriptRequestParameters) };


        // scriptResponseParameters Field Functions 
        bool hasScriptResponseParameters() const { return this->scriptResponseParameters_ != nullptr;};
        void deleteScriptResponseParameters() { this->scriptResponseParameters_ = nullptr;};
        inline const vector<ScriptDetails::ScriptResponseParameters> & getScriptResponseParameters() const { DARABONBA_PTR_GET_CONST(scriptResponseParameters_, vector<ScriptDetails::ScriptResponseParameters>) };
        inline vector<ScriptDetails::ScriptResponseParameters> getScriptResponseParameters() { DARABONBA_PTR_GET(scriptResponseParameters_, vector<ScriptDetails::ScriptResponseParameters>) };
        inline ScriptDetails& setScriptResponseParameters(const vector<ScriptDetails::ScriptResponseParameters> & scriptResponseParameters) { DARABONBA_PTR_SET_VALUE(scriptResponseParameters_, scriptResponseParameters) };
        inline ScriptDetails& setScriptResponseParameters(vector<ScriptDetails::ScriptResponseParameters> && scriptResponseParameters) { DARABONBA_PTR_SET_RVALUE(scriptResponseParameters_, scriptResponseParameters) };


        // sortPriority Field Functions 
        bool hasSortPriority() const { return this->sortPriority_ != nullptr;};
        void deleteSortPriority() { this->sortPriority_ = nullptr;};
        inline int32_t getSortPriority() const { DARABONBA_PTR_GET_DEFAULT(sortPriority_, 0) };
        inline ScriptDetails& setSortPriority(int32_t sortPriority) { DARABONBA_PTR_SET_VALUE(sortPriority_, sortPriority) };


        // sqlMode Field Functions 
        bool hasSqlMode() const { return this->sqlMode_ != nullptr;};
        void deleteSqlMode() { this->sqlMode_ = nullptr;};
        inline int32_t getSqlMode() const { DARABONBA_PTR_GET_DEFAULT(sqlMode_, 0) };
        inline ScriptDetails& setSqlMode(int32_t sqlMode) { DARABONBA_PTR_SET_VALUE(sqlMode_, sqlMode) };


      protected:
        shared_ptr<int64_t> datasourceID_ {};
        // This parameter is required.
        shared_ptr<int32_t> datasourceType_ {};
        shared_ptr<bool> isPaginated_ {};
        // This parameter is required.
        shared_ptr<string> script_ {};
        // This parameter is required.
        shared_ptr<vector<ScriptDetails::ScriptRequestParameters>> scriptRequestParameters_ {};
        // This parameter is required.
        shared_ptr<vector<ScriptDetails::ScriptResponseParameters>> scriptResponseParameters_ {};
        shared_ptr<int32_t> sortPriority_ {};
        // This parameter is required.
        shared_ptr<int32_t> sqlMode_ {};
      };

      virtual bool empty() const override { return this->apiGroupId_ == nullptr
        && this->apiGroupName_ == nullptr && this->apiName_ == nullptr && this->apiType_ == nullptr && this->bizProtocol_ == nullptr && this->cacheTimeout_ == nullptr
        && this->callMode_ == nullptr && this->customUpdateRate_ == nullptr && this->description_ == nullptr && this->executionTimeout_ == nullptr && this->mode_ == nullptr
        && this->projectId_ == nullptr && this->requestType_ == nullptr && this->scriptDetails_ == nullptr && this->timeout_ == nullptr && this->updateRate_ == nullptr
        && this->version_ == nullptr; };
      // apiGroupId Field Functions 
      bool hasApiGroupId() const { return this->apiGroupId_ != nullptr;};
      void deleteApiGroupId() { this->apiGroupId_ = nullptr;};
      inline int64_t getApiGroupId() const { DARABONBA_PTR_GET_DEFAULT(apiGroupId_, 0L) };
      inline CreateCommand& setApiGroupId(int64_t apiGroupId) { DARABONBA_PTR_SET_VALUE(apiGroupId_, apiGroupId) };


      // apiGroupName Field Functions 
      bool hasApiGroupName() const { return this->apiGroupName_ != nullptr;};
      void deleteApiGroupName() { this->apiGroupName_ = nullptr;};
      inline string getApiGroupName() const { DARABONBA_PTR_GET_DEFAULT(apiGroupName_, "") };
      inline CreateCommand& setApiGroupName(string apiGroupName) { DARABONBA_PTR_SET_VALUE(apiGroupName_, apiGroupName) };


      // apiName Field Functions 
      bool hasApiName() const { return this->apiName_ != nullptr;};
      void deleteApiName() { this->apiName_ = nullptr;};
      inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
      inline CreateCommand& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


      // apiType Field Functions 
      bool hasApiType() const { return this->apiType_ != nullptr;};
      void deleteApiType() { this->apiType_ = nullptr;};
      inline int32_t getApiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, 0) };
      inline CreateCommand& setApiType(int32_t apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


      // bizProtocol Field Functions 
      bool hasBizProtocol() const { return this->bizProtocol_ != nullptr;};
      void deleteBizProtocol() { this->bizProtocol_ = nullptr;};
      inline const vector<int32_t> & getBizProtocol() const { DARABONBA_PTR_GET_CONST(bizProtocol_, vector<int32_t>) };
      inline vector<int32_t> getBizProtocol() { DARABONBA_PTR_GET(bizProtocol_, vector<int32_t>) };
      inline CreateCommand& setBizProtocol(const vector<int32_t> & bizProtocol) { DARABONBA_PTR_SET_VALUE(bizProtocol_, bizProtocol) };
      inline CreateCommand& setBizProtocol(vector<int32_t> && bizProtocol) { DARABONBA_PTR_SET_RVALUE(bizProtocol_, bizProtocol) };


      // cacheTimeout Field Functions 
      bool hasCacheTimeout() const { return this->cacheTimeout_ != nullptr;};
      void deleteCacheTimeout() { this->cacheTimeout_ = nullptr;};
      inline int32_t getCacheTimeout() const { DARABONBA_PTR_GET_DEFAULT(cacheTimeout_, 0) };
      inline CreateCommand& setCacheTimeout(int32_t cacheTimeout) { DARABONBA_PTR_SET_VALUE(cacheTimeout_, cacheTimeout) };


      // callMode Field Functions 
      bool hasCallMode() const { return this->callMode_ != nullptr;};
      void deleteCallMode() { this->callMode_ = nullptr;};
      inline int32_t getCallMode() const { DARABONBA_PTR_GET_DEFAULT(callMode_, 0) };
      inline CreateCommand& setCallMode(int32_t callMode) { DARABONBA_PTR_SET_VALUE(callMode_, callMode) };


      // customUpdateRate Field Functions 
      bool hasCustomUpdateRate() const { return this->customUpdateRate_ != nullptr;};
      void deleteCustomUpdateRate() { this->customUpdateRate_ = nullptr;};
      inline string getCustomUpdateRate() const { DARABONBA_PTR_GET_DEFAULT(customUpdateRate_, "") };
      inline CreateCommand& setCustomUpdateRate(string customUpdateRate) { DARABONBA_PTR_SET_VALUE(customUpdateRate_, customUpdateRate) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // executionTimeout Field Functions 
      bool hasExecutionTimeout() const { return this->executionTimeout_ != nullptr;};
      void deleteExecutionTimeout() { this->executionTimeout_ = nullptr;};
      inline int32_t getExecutionTimeout() const { DARABONBA_PTR_GET_DEFAULT(executionTimeout_, 0) };
      inline CreateCommand& setExecutionTimeout(int32_t executionTimeout) { DARABONBA_PTR_SET_VALUE(executionTimeout_, executionTimeout) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline int32_t getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
      inline CreateCommand& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline CreateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // requestType Field Functions 
      bool hasRequestType() const { return this->requestType_ != nullptr;};
      void deleteRequestType() { this->requestType_ = nullptr;};
      inline int32_t getRequestType() const { DARABONBA_PTR_GET_DEFAULT(requestType_, 0) };
      inline CreateCommand& setRequestType(int32_t requestType) { DARABONBA_PTR_SET_VALUE(requestType_, requestType) };


      // scriptDetails Field Functions 
      bool hasScriptDetails() const { return this->scriptDetails_ != nullptr;};
      void deleteScriptDetails() { this->scriptDetails_ = nullptr;};
      inline const CreateCommand::ScriptDetails & getScriptDetails() const { DARABONBA_PTR_GET_CONST(scriptDetails_, CreateCommand::ScriptDetails) };
      inline CreateCommand::ScriptDetails getScriptDetails() { DARABONBA_PTR_GET(scriptDetails_, CreateCommand::ScriptDetails) };
      inline CreateCommand& setScriptDetails(const CreateCommand::ScriptDetails & scriptDetails) { DARABONBA_PTR_SET_VALUE(scriptDetails_, scriptDetails) };
      inline CreateCommand& setScriptDetails(CreateCommand::ScriptDetails && scriptDetails) { DARABONBA_PTR_SET_RVALUE(scriptDetails_, scriptDetails) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
      inline CreateCommand& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      // updateRate Field Functions 
      bool hasUpdateRate() const { return this->updateRate_ != nullptr;};
      void deleteUpdateRate() { this->updateRate_ = nullptr;};
      inline int32_t getUpdateRate() const { DARABONBA_PTR_GET_DEFAULT(updateRate_, 0) };
      inline CreateCommand& setUpdateRate(int32_t updateRate) { DARABONBA_PTR_SET_VALUE(updateRate_, updateRate) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline CreateCommand& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // This parameter is required.
      shared_ptr<int64_t> apiGroupId_ {};
      // This parameter is required.
      shared_ptr<string> apiGroupName_ {};
      // This parameter is required.
      shared_ptr<string> apiName_ {};
      // This parameter is required.
      shared_ptr<int32_t> apiType_ {};
      // This parameter is required.
      shared_ptr<vector<int32_t>> bizProtocol_ {};
      // This parameter is required.
      shared_ptr<int32_t> cacheTimeout_ {};
      shared_ptr<int32_t> callMode_ {};
      shared_ptr<string> customUpdateRate_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int32_t> executionTimeout_ {};
      // This parameter is required.
      shared_ptr<int32_t> mode_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
      // This parameter is required.
      shared_ptr<int32_t> requestType_ {};
      // This parameter is required.
      shared_ptr<CreateCommand::ScriptDetails> scriptDetails_ {};
      // This parameter is required.
      shared_ptr<int32_t> timeout_ {};
      shared_ptr<int32_t> updateRate_ {};
      // This parameter is required.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateDataServiceApiRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateDataServiceApiRequest::CreateCommand) };
    inline CreateDataServiceApiRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateDataServiceApiRequest::CreateCommand) };
    inline CreateDataServiceApiRequest& setCreateCommand(const CreateDataServiceApiRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateDataServiceApiRequest& setCreateCommand(CreateDataServiceApiRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateDataServiceApiRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<CreateDataServiceApiRequest::CreateCommand> createCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
