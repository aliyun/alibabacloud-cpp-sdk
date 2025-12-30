// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIBYAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIBYAPPRESPONSEBODY_HPP_
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
  class ListApiByAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiByAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(ListResult, listResult_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiByAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(ListResult, listResult_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListApiByAppResponseBody() = default ;
    ListApiByAppResponseBody(const ListApiByAppResponseBody &) = default ;
    ListApiByAppResponseBody(ListApiByAppResponseBody &&) = default ;
    ListApiByAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiByAppResponseBody() = default ;
    ListApiByAppResponseBody& operator=(const ListApiByAppResponseBody &) = default ;
    ListApiByAppResponseBody& operator=(ListApiByAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListResult& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ListResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ListResult() = default ;
      ListResult(const ListResult &) = default ;
      ListResult(ListResult &&) = default ;
      ListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListResult() = default ;
      ListResult& operator=(const ListResult &) = default ;
      ListResult& operator=(ListResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(ApiNo, apiNo_);
          DARABONBA_PTR_TO_JSON(ApiTimeout, apiTimeout_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(BizModuleEnName, bizModuleEnName_);
          DARABONBA_PTR_TO_JSON(CacheSwitch, cacheSwitch_);
          DARABONBA_PTR_TO_JSON(CacheTime, cacheTime_);
          DARABONBA_PTR_TO_JSON(CreateType, createType_);
          DARABONBA_PTR_TO_JSON(DbEnv, dbEnv_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DirectDatasourceId, directDatasourceId_);
          DARABONBA_PTR_TO_JSON(DirectDatasourceName, directDatasourceName_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsLogicalTable, isLogicalTable_);
          DARABONBA_PTR_TO_JSON(IsPagedQuery, isPagedQuery_);
          DARABONBA_PTR_TO_JSON(MaxReturnNum, maxReturnNum_);
          DARABONBA_PTR_TO_JSON(ModelType, modelType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProjId, projId_);
          DARABONBA_PTR_TO_JSON(ProjName, projName_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
          DARABONBA_PTR_TO_JSON(PublicParamList, publicParamList_);
          DARABONBA_PTR_TO_JSON(RegisterApi, registerApi_);
          DARABONBA_PTR_TO_JSON(RequestMethod, requestMethod_);
          DARABONBA_PTR_TO_JSON(RequestMethodName, requestMethodName_);
          DARABONBA_PTR_TO_JSON(RequestParamList, requestParamList_);
          DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
          DARABONBA_PTR_TO_JSON(ResponseParamList, responseParamList_);
          DARABONBA_PTR_TO_JSON(ResultSample, resultSample_);
          DARABONBA_PTR_TO_JSON(ReturnType, returnType_);
          DARABONBA_PTR_TO_JSON(ReturnTypeName, returnTypeName_);
          DARABONBA_PTR_TO_JSON(RsGrpId, rsGrpId_);
          DARABONBA_PTR_TO_JSON(ScriptType, scriptType_);
          DARABONBA_PTR_TO_JSON(SpecialSql, specialSql_);
          DARABONBA_PTR_TO_JSON(SqlStatement, sqlStatement_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          DARABONBA_PTR_TO_JSON(UpdateRate, updateRate_);
          DARABONBA_PTR_TO_JSON(UpdateRateName, updateRateName_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiNo, apiNo_);
          DARABONBA_PTR_FROM_JSON(ApiTimeout, apiTimeout_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(BizModuleEnName, bizModuleEnName_);
          DARABONBA_PTR_FROM_JSON(CacheSwitch, cacheSwitch_);
          DARABONBA_PTR_FROM_JSON(CacheTime, cacheTime_);
          DARABONBA_PTR_FROM_JSON(CreateType, createType_);
          DARABONBA_PTR_FROM_JSON(DbEnv, dbEnv_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DirectDatasourceId, directDatasourceId_);
          DARABONBA_PTR_FROM_JSON(DirectDatasourceName, directDatasourceName_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsLogicalTable, isLogicalTable_);
          DARABONBA_PTR_FROM_JSON(IsPagedQuery, isPagedQuery_);
          DARABONBA_PTR_FROM_JSON(MaxReturnNum, maxReturnNum_);
          DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProjId, projId_);
          DARABONBA_PTR_FROM_JSON(ProjName, projName_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(ProtocolName, protocolName_);
          DARABONBA_PTR_FROM_JSON(PublicParamList, publicParamList_);
          DARABONBA_PTR_FROM_JSON(RegisterApi, registerApi_);
          DARABONBA_PTR_FROM_JSON(RequestMethod, requestMethod_);
          DARABONBA_PTR_FROM_JSON(RequestMethodName, requestMethodName_);
          DARABONBA_PTR_FROM_JSON(RequestParamList, requestParamList_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
          DARABONBA_PTR_FROM_JSON(ResponseParamList, responseParamList_);
          DARABONBA_PTR_FROM_JSON(ResultSample, resultSample_);
          DARABONBA_PTR_FROM_JSON(ReturnType, returnType_);
          DARABONBA_PTR_FROM_JSON(ReturnTypeName, returnTypeName_);
          DARABONBA_PTR_FROM_JSON(RsGrpId, rsGrpId_);
          DARABONBA_PTR_FROM_JSON(ScriptType, scriptType_);
          DARABONBA_PTR_FROM_JSON(SpecialSql, specialSql_);
          DARABONBA_PTR_FROM_JSON(SqlStatement, sqlStatement_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          DARABONBA_PTR_FROM_JSON(UpdateRate, updateRate_);
          DARABONBA_PTR_FROM_JSON(UpdateRateName, updateRateName_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        Data() = default ;
        Data(const Data &) = default ;
        Data(Data &&) = default ;
        Data(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Data() = default ;
        Data& operator=(const Data &) = default ;
        Data& operator=(Data &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResponseParamList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResponseParamList& obj) { 
            DARABONBA_PTR_TO_JSON(DateFormat, dateFormat_);
            DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(DescriptionCode, descriptionCode_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(InitialValue, initialValue_);
            DARABONBA_PTR_TO_JSON(MappingColumn, mappingColumn_);
            DARABONBA_PTR_TO_JSON(Must, must_);
            DARABONBA_PTR_TO_JSON(Operator, operator_);
            DARABONBA_PTR_TO_JSON(Optional, optional_);
            DARABONBA_PTR_TO_JSON(OriginalColumn, originalColumn_);
            DARABONBA_PTR_TO_JSON(ParamName, paramName_);
            DARABONBA_PTR_TO_JSON(ParamType, paramType_);
            DARABONBA_PTR_TO_JSON(ParameterLocation, parameterLocation_);
            DARABONBA_PTR_TO_JSON(Sample, sample_);
            DARABONBA_PTR_TO_JSON(TableAndDsList, tableAndDsList_);
          };
          friend void from_json(const Darabonba::Json& j, ResponseParamList& obj) { 
            DARABONBA_PTR_FROM_JSON(DateFormat, dateFormat_);
            DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(DescriptionCode, descriptionCode_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(InitialValue, initialValue_);
            DARABONBA_PTR_FROM_JSON(MappingColumn, mappingColumn_);
            DARABONBA_PTR_FROM_JSON(Must, must_);
            DARABONBA_PTR_FROM_JSON(Operator, operator_);
            DARABONBA_PTR_FROM_JSON(Optional, optional_);
            DARABONBA_PTR_FROM_JSON(OriginalColumn, originalColumn_);
            DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
            DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
            DARABONBA_PTR_FROM_JSON(ParameterLocation, parameterLocation_);
            DARABONBA_PTR_FROM_JSON(Sample, sample_);
            DARABONBA_PTR_FROM_JSON(TableAndDsList, tableAndDsList_);
          };
          ResponseParamList() = default ;
          ResponseParamList(const ResponseParamList &) = default ;
          ResponseParamList(ResponseParamList &&) = default ;
          ResponseParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResponseParamList() = default ;
          ResponseParamList& operator=(const ResponseParamList &) = default ;
          ResponseParamList& operator=(ResponseParamList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TableAndDsList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TableAndDsList& obj) { 
              DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
              DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
              DARABONBA_PTR_TO_JSON(DatasourceType, datasourceType_);
              DARABONBA_PTR_TO_JSON(DatasourceUrl, datasourceUrl_);
              DARABONBA_PTR_TO_JSON(TableName, tableName_);
            };
            friend void from_json(const Darabonba::Json& j, TableAndDsList& obj) { 
              DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
              DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
              DARABONBA_PTR_FROM_JSON(DatasourceType, datasourceType_);
              DARABONBA_PTR_FROM_JSON(DatasourceUrl, datasourceUrl_);
              DARABONBA_PTR_FROM_JSON(TableName, tableName_);
            };
            TableAndDsList() = default ;
            TableAndDsList(const TableAndDsList &) = default ;
            TableAndDsList(TableAndDsList &&) = default ;
            TableAndDsList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TableAndDsList() = default ;
            TableAndDsList& operator=(const TableAndDsList &) = default ;
            TableAndDsList& operator=(TableAndDsList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->datasourceId_ == nullptr
        && this->datasourceName_ == nullptr && this->datasourceType_ == nullptr && this->datasourceUrl_ == nullptr && this->tableName_ == nullptr; };
            // datasourceId Field Functions 
            bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
            void deleteDatasourceId() { this->datasourceId_ = nullptr;};
            inline string getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, "") };
            inline TableAndDsList& setDatasourceId(string datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


            // datasourceName Field Functions 
            bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
            void deleteDatasourceName() { this->datasourceName_ = nullptr;};
            inline string getDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
            inline TableAndDsList& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


            // datasourceType Field Functions 
            bool hasDatasourceType() const { return this->datasourceType_ != nullptr;};
            void deleteDatasourceType() { this->datasourceType_ = nullptr;};
            inline int64_t getDatasourceType() const { DARABONBA_PTR_GET_DEFAULT(datasourceType_, 0L) };
            inline TableAndDsList& setDatasourceType(int64_t datasourceType) { DARABONBA_PTR_SET_VALUE(datasourceType_, datasourceType) };


            // datasourceUrl Field Functions 
            bool hasDatasourceUrl() const { return this->datasourceUrl_ != nullptr;};
            void deleteDatasourceUrl() { this->datasourceUrl_ = nullptr;};
            inline string getDatasourceUrl() const { DARABONBA_PTR_GET_DEFAULT(datasourceUrl_, "") };
            inline TableAndDsList& setDatasourceUrl(string datasourceUrl) { DARABONBA_PTR_SET_VALUE(datasourceUrl_, datasourceUrl) };


            // tableName Field Functions 
            bool hasTableName() const { return this->tableName_ != nullptr;};
            void deleteTableName() { this->tableName_ = nullptr;};
            inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
            inline TableAndDsList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


          protected:
            shared_ptr<string> datasourceId_ {};
            shared_ptr<string> datasourceName_ {};
            shared_ptr<int64_t> datasourceType_ {};
            shared_ptr<string> datasourceUrl_ {};
            shared_ptr<string> tableName_ {};
          };

          virtual bool empty() const override { return this->dateFormat_ == nullptr
        && this->defaultValue_ == nullptr && this->description_ == nullptr && this->descriptionCode_ == nullptr && this->id_ == nullptr && this->initialValue_ == nullptr
        && this->mappingColumn_ == nullptr && this->must_ == nullptr && this->operator_ == nullptr && this->optional_ == nullptr && this->originalColumn_ == nullptr
        && this->paramName_ == nullptr && this->paramType_ == nullptr && this->parameterLocation_ == nullptr && this->sample_ == nullptr && this->tableAndDsList_ == nullptr; };
          // dateFormat Field Functions 
          bool hasDateFormat() const { return this->dateFormat_ != nullptr;};
          void deleteDateFormat() { this->dateFormat_ = nullptr;};
          inline string getDateFormat() const { DARABONBA_PTR_GET_DEFAULT(dateFormat_, "") };
          inline ResponseParamList& setDateFormat(string dateFormat) { DARABONBA_PTR_SET_VALUE(dateFormat_, dateFormat) };


          // defaultValue Field Functions 
          bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
          void deleteDefaultValue() { this->defaultValue_ = nullptr;};
          inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
          inline ResponseParamList& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline ResponseParamList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // descriptionCode Field Functions 
          bool hasDescriptionCode() const { return this->descriptionCode_ != nullptr;};
          void deleteDescriptionCode() { this->descriptionCode_ = nullptr;};
          inline string getDescriptionCode() const { DARABONBA_PTR_GET_DEFAULT(descriptionCode_, "") };
          inline ResponseParamList& setDescriptionCode(string descriptionCode) { DARABONBA_PTR_SET_VALUE(descriptionCode_, descriptionCode) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline ResponseParamList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // initialValue Field Functions 
          bool hasInitialValue() const { return this->initialValue_ != nullptr;};
          void deleteInitialValue() { this->initialValue_ = nullptr;};
          inline string getInitialValue() const { DARABONBA_PTR_GET_DEFAULT(initialValue_, "") };
          inline ResponseParamList& setInitialValue(string initialValue) { DARABONBA_PTR_SET_VALUE(initialValue_, initialValue) };


          // mappingColumn Field Functions 
          bool hasMappingColumn() const { return this->mappingColumn_ != nullptr;};
          void deleteMappingColumn() { this->mappingColumn_ = nullptr;};
          inline string getMappingColumn() const { DARABONBA_PTR_GET_DEFAULT(mappingColumn_, "") };
          inline ResponseParamList& setMappingColumn(string mappingColumn) { DARABONBA_PTR_SET_VALUE(mappingColumn_, mappingColumn) };


          // must Field Functions 
          bool hasMust() const { return this->must_ != nullptr;};
          void deleteMust() { this->must_ = nullptr;};
          inline int64_t getMust() const { DARABONBA_PTR_GET_DEFAULT(must_, 0L) };
          inline ResponseParamList& setMust(int64_t must) { DARABONBA_PTR_SET_VALUE(must_, must) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline ResponseParamList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // optional Field Functions 
          bool hasOptional() const { return this->optional_ != nullptr;};
          void deleteOptional() { this->optional_ = nullptr;};
          inline int64_t getOptional() const { DARABONBA_PTR_GET_DEFAULT(optional_, 0L) };
          inline ResponseParamList& setOptional(int64_t optional) { DARABONBA_PTR_SET_VALUE(optional_, optional) };


          // originalColumn Field Functions 
          bool hasOriginalColumn() const { return this->originalColumn_ != nullptr;};
          void deleteOriginalColumn() { this->originalColumn_ = nullptr;};
          inline string getOriginalColumn() const { DARABONBA_PTR_GET_DEFAULT(originalColumn_, "") };
          inline ResponseParamList& setOriginalColumn(string originalColumn) { DARABONBA_PTR_SET_VALUE(originalColumn_, originalColumn) };


          // paramName Field Functions 
          bool hasParamName() const { return this->paramName_ != nullptr;};
          void deleteParamName() { this->paramName_ = nullptr;};
          inline string getParamName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
          inline ResponseParamList& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


          // paramType Field Functions 
          bool hasParamType() const { return this->paramType_ != nullptr;};
          void deleteParamType() { this->paramType_ = nullptr;};
          inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
          inline ResponseParamList& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


          // parameterLocation Field Functions 
          bool hasParameterLocation() const { return this->parameterLocation_ != nullptr;};
          void deleteParameterLocation() { this->parameterLocation_ = nullptr;};
          inline string getParameterLocation() const { DARABONBA_PTR_GET_DEFAULT(parameterLocation_, "") };
          inline ResponseParamList& setParameterLocation(string parameterLocation) { DARABONBA_PTR_SET_VALUE(parameterLocation_, parameterLocation) };


          // sample Field Functions 
          bool hasSample() const { return this->sample_ != nullptr;};
          void deleteSample() { this->sample_ = nullptr;};
          inline string getSample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
          inline ResponseParamList& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


          // tableAndDsList Field Functions 
          bool hasTableAndDsList() const { return this->tableAndDsList_ != nullptr;};
          void deleteTableAndDsList() { this->tableAndDsList_ = nullptr;};
          inline const vector<ResponseParamList::TableAndDsList> & getTableAndDsList() const { DARABONBA_PTR_GET_CONST(tableAndDsList_, vector<ResponseParamList::TableAndDsList>) };
          inline vector<ResponseParamList::TableAndDsList> getTableAndDsList() { DARABONBA_PTR_GET(tableAndDsList_, vector<ResponseParamList::TableAndDsList>) };
          inline ResponseParamList& setTableAndDsList(const vector<ResponseParamList::TableAndDsList> & tableAndDsList) { DARABONBA_PTR_SET_VALUE(tableAndDsList_, tableAndDsList) };
          inline ResponseParamList& setTableAndDsList(vector<ResponseParamList::TableAndDsList> && tableAndDsList) { DARABONBA_PTR_SET_RVALUE(tableAndDsList_, tableAndDsList) };


        protected:
          shared_ptr<string> dateFormat_ {};
          shared_ptr<string> defaultValue_ {};
          shared_ptr<string> description_ {};
          shared_ptr<string> descriptionCode_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> initialValue_ {};
          shared_ptr<string> mappingColumn_ {};
          shared_ptr<int64_t> must_ {};
          shared_ptr<string> operator_ {};
          shared_ptr<int64_t> optional_ {};
          shared_ptr<string> originalColumn_ {};
          shared_ptr<string> paramName_ {};
          shared_ptr<string> paramType_ {};
          shared_ptr<string> parameterLocation_ {};
          shared_ptr<string> sample_ {};
          // -
          shared_ptr<vector<ResponseParamList::TableAndDsList>> tableAndDsList_ {};
        };

        class RequestParamList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RequestParamList& obj) { 
            DARABONBA_PTR_TO_JSON(DateFormat, dateFormat_);
            DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(DescriptionCode, descriptionCode_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(InitialValue, initialValue_);
            DARABONBA_PTR_TO_JSON(MappingColumn, mappingColumn_);
            DARABONBA_PTR_TO_JSON(Must, must_);
            DARABONBA_PTR_TO_JSON(Operator, operator_);
            DARABONBA_PTR_TO_JSON(Optional, optional_);
            DARABONBA_PTR_TO_JSON(OriginalColumn, originalColumn_);
            DARABONBA_PTR_TO_JSON(ParamName, paramName_);
            DARABONBA_PTR_TO_JSON(ParamType, paramType_);
            DARABONBA_PTR_TO_JSON(ParameterLocation, parameterLocation_);
            DARABONBA_PTR_TO_JSON(Sample, sample_);
            DARABONBA_PTR_TO_JSON(TableAndDsList, tableAndDsList_);
          };
          friend void from_json(const Darabonba::Json& j, RequestParamList& obj) { 
            DARABONBA_PTR_FROM_JSON(DateFormat, dateFormat_);
            DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(DescriptionCode, descriptionCode_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(InitialValue, initialValue_);
            DARABONBA_PTR_FROM_JSON(MappingColumn, mappingColumn_);
            DARABONBA_PTR_FROM_JSON(Must, must_);
            DARABONBA_PTR_FROM_JSON(Operator, operator_);
            DARABONBA_PTR_FROM_JSON(Optional, optional_);
            DARABONBA_PTR_FROM_JSON(OriginalColumn, originalColumn_);
            DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
            DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
            DARABONBA_PTR_FROM_JSON(ParameterLocation, parameterLocation_);
            DARABONBA_PTR_FROM_JSON(Sample, sample_);
            DARABONBA_PTR_FROM_JSON(TableAndDsList, tableAndDsList_);
          };
          RequestParamList() = default ;
          RequestParamList(const RequestParamList &) = default ;
          RequestParamList(RequestParamList &&) = default ;
          RequestParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RequestParamList() = default ;
          RequestParamList& operator=(const RequestParamList &) = default ;
          RequestParamList& operator=(RequestParamList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TableAndDsList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TableAndDsList& obj) { 
              DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
              DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
              DARABONBA_PTR_TO_JSON(DatasourceType, datasourceType_);
              DARABONBA_PTR_TO_JSON(DatasourceUrl, datasourceUrl_);
              DARABONBA_PTR_TO_JSON(TableName, tableName_);
            };
            friend void from_json(const Darabonba::Json& j, TableAndDsList& obj) { 
              DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
              DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
              DARABONBA_PTR_FROM_JSON(DatasourceType, datasourceType_);
              DARABONBA_PTR_FROM_JSON(DatasourceUrl, datasourceUrl_);
              DARABONBA_PTR_FROM_JSON(TableName, tableName_);
            };
            TableAndDsList() = default ;
            TableAndDsList(const TableAndDsList &) = default ;
            TableAndDsList(TableAndDsList &&) = default ;
            TableAndDsList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TableAndDsList() = default ;
            TableAndDsList& operator=(const TableAndDsList &) = default ;
            TableAndDsList& operator=(TableAndDsList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->datasourceId_ == nullptr
        && this->datasourceName_ == nullptr && this->datasourceType_ == nullptr && this->datasourceUrl_ == nullptr && this->tableName_ == nullptr; };
            // datasourceId Field Functions 
            bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
            void deleteDatasourceId() { this->datasourceId_ = nullptr;};
            inline string getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, "") };
            inline TableAndDsList& setDatasourceId(string datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


            // datasourceName Field Functions 
            bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
            void deleteDatasourceName() { this->datasourceName_ = nullptr;};
            inline string getDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
            inline TableAndDsList& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


            // datasourceType Field Functions 
            bool hasDatasourceType() const { return this->datasourceType_ != nullptr;};
            void deleteDatasourceType() { this->datasourceType_ = nullptr;};
            inline int64_t getDatasourceType() const { DARABONBA_PTR_GET_DEFAULT(datasourceType_, 0L) };
            inline TableAndDsList& setDatasourceType(int64_t datasourceType) { DARABONBA_PTR_SET_VALUE(datasourceType_, datasourceType) };


            // datasourceUrl Field Functions 
            bool hasDatasourceUrl() const { return this->datasourceUrl_ != nullptr;};
            void deleteDatasourceUrl() { this->datasourceUrl_ = nullptr;};
            inline string getDatasourceUrl() const { DARABONBA_PTR_GET_DEFAULT(datasourceUrl_, "") };
            inline TableAndDsList& setDatasourceUrl(string datasourceUrl) { DARABONBA_PTR_SET_VALUE(datasourceUrl_, datasourceUrl) };


            // tableName Field Functions 
            bool hasTableName() const { return this->tableName_ != nullptr;};
            void deleteTableName() { this->tableName_ = nullptr;};
            inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
            inline TableAndDsList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


          protected:
            shared_ptr<string> datasourceId_ {};
            shared_ptr<string> datasourceName_ {};
            shared_ptr<int64_t> datasourceType_ {};
            shared_ptr<string> datasourceUrl_ {};
            shared_ptr<string> tableName_ {};
          };

          virtual bool empty() const override { return this->dateFormat_ == nullptr
        && this->defaultValue_ == nullptr && this->description_ == nullptr && this->descriptionCode_ == nullptr && this->id_ == nullptr && this->initialValue_ == nullptr
        && this->mappingColumn_ == nullptr && this->must_ == nullptr && this->operator_ == nullptr && this->optional_ == nullptr && this->originalColumn_ == nullptr
        && this->paramName_ == nullptr && this->paramType_ == nullptr && this->parameterLocation_ == nullptr && this->sample_ == nullptr && this->tableAndDsList_ == nullptr; };
          // dateFormat Field Functions 
          bool hasDateFormat() const { return this->dateFormat_ != nullptr;};
          void deleteDateFormat() { this->dateFormat_ = nullptr;};
          inline string getDateFormat() const { DARABONBA_PTR_GET_DEFAULT(dateFormat_, "") };
          inline RequestParamList& setDateFormat(string dateFormat) { DARABONBA_PTR_SET_VALUE(dateFormat_, dateFormat) };


          // defaultValue Field Functions 
          bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
          void deleteDefaultValue() { this->defaultValue_ = nullptr;};
          inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
          inline RequestParamList& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline RequestParamList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // descriptionCode Field Functions 
          bool hasDescriptionCode() const { return this->descriptionCode_ != nullptr;};
          void deleteDescriptionCode() { this->descriptionCode_ = nullptr;};
          inline string getDescriptionCode() const { DARABONBA_PTR_GET_DEFAULT(descriptionCode_, "") };
          inline RequestParamList& setDescriptionCode(string descriptionCode) { DARABONBA_PTR_SET_VALUE(descriptionCode_, descriptionCode) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline RequestParamList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // initialValue Field Functions 
          bool hasInitialValue() const { return this->initialValue_ != nullptr;};
          void deleteInitialValue() { this->initialValue_ = nullptr;};
          inline string getInitialValue() const { DARABONBA_PTR_GET_DEFAULT(initialValue_, "") };
          inline RequestParamList& setInitialValue(string initialValue) { DARABONBA_PTR_SET_VALUE(initialValue_, initialValue) };


          // mappingColumn Field Functions 
          bool hasMappingColumn() const { return this->mappingColumn_ != nullptr;};
          void deleteMappingColumn() { this->mappingColumn_ = nullptr;};
          inline string getMappingColumn() const { DARABONBA_PTR_GET_DEFAULT(mappingColumn_, "") };
          inline RequestParamList& setMappingColumn(string mappingColumn) { DARABONBA_PTR_SET_VALUE(mappingColumn_, mappingColumn) };


          // must Field Functions 
          bool hasMust() const { return this->must_ != nullptr;};
          void deleteMust() { this->must_ = nullptr;};
          inline int64_t getMust() const { DARABONBA_PTR_GET_DEFAULT(must_, 0L) };
          inline RequestParamList& setMust(int64_t must) { DARABONBA_PTR_SET_VALUE(must_, must) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline RequestParamList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // optional Field Functions 
          bool hasOptional() const { return this->optional_ != nullptr;};
          void deleteOptional() { this->optional_ = nullptr;};
          inline int64_t getOptional() const { DARABONBA_PTR_GET_DEFAULT(optional_, 0L) };
          inline RequestParamList& setOptional(int64_t optional) { DARABONBA_PTR_SET_VALUE(optional_, optional) };


          // originalColumn Field Functions 
          bool hasOriginalColumn() const { return this->originalColumn_ != nullptr;};
          void deleteOriginalColumn() { this->originalColumn_ = nullptr;};
          inline string getOriginalColumn() const { DARABONBA_PTR_GET_DEFAULT(originalColumn_, "") };
          inline RequestParamList& setOriginalColumn(string originalColumn) { DARABONBA_PTR_SET_VALUE(originalColumn_, originalColumn) };


          // paramName Field Functions 
          bool hasParamName() const { return this->paramName_ != nullptr;};
          void deleteParamName() { this->paramName_ = nullptr;};
          inline string getParamName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
          inline RequestParamList& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


          // paramType Field Functions 
          bool hasParamType() const { return this->paramType_ != nullptr;};
          void deleteParamType() { this->paramType_ = nullptr;};
          inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
          inline RequestParamList& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


          // parameterLocation Field Functions 
          bool hasParameterLocation() const { return this->parameterLocation_ != nullptr;};
          void deleteParameterLocation() { this->parameterLocation_ = nullptr;};
          inline string getParameterLocation() const { DARABONBA_PTR_GET_DEFAULT(parameterLocation_, "") };
          inline RequestParamList& setParameterLocation(string parameterLocation) { DARABONBA_PTR_SET_VALUE(parameterLocation_, parameterLocation) };


          // sample Field Functions 
          bool hasSample() const { return this->sample_ != nullptr;};
          void deleteSample() { this->sample_ = nullptr;};
          inline string getSample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
          inline RequestParamList& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


          // tableAndDsList Field Functions 
          bool hasTableAndDsList() const { return this->tableAndDsList_ != nullptr;};
          void deleteTableAndDsList() { this->tableAndDsList_ = nullptr;};
          inline const vector<RequestParamList::TableAndDsList> & getTableAndDsList() const { DARABONBA_PTR_GET_CONST(tableAndDsList_, vector<RequestParamList::TableAndDsList>) };
          inline vector<RequestParamList::TableAndDsList> getTableAndDsList() { DARABONBA_PTR_GET(tableAndDsList_, vector<RequestParamList::TableAndDsList>) };
          inline RequestParamList& setTableAndDsList(const vector<RequestParamList::TableAndDsList> & tableAndDsList) { DARABONBA_PTR_SET_VALUE(tableAndDsList_, tableAndDsList) };
          inline RequestParamList& setTableAndDsList(vector<RequestParamList::TableAndDsList> && tableAndDsList) { DARABONBA_PTR_SET_RVALUE(tableAndDsList_, tableAndDsList) };


        protected:
          shared_ptr<string> dateFormat_ {};
          shared_ptr<string> defaultValue_ {};
          shared_ptr<string> description_ {};
          shared_ptr<string> descriptionCode_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> initialValue_ {};
          shared_ptr<string> mappingColumn_ {};
          shared_ptr<int64_t> must_ {};
          shared_ptr<string> operator_ {};
          shared_ptr<int64_t> optional_ {};
          shared_ptr<string> originalColumn_ {};
          shared_ptr<string> paramName_ {};
          shared_ptr<string> paramType_ {};
          shared_ptr<string> parameterLocation_ {};
          shared_ptr<string> sample_ {};
          // -
          shared_ptr<vector<RequestParamList::TableAndDsList>> tableAndDsList_ {};
        };

        class RegisterApi : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RegisterApi& obj) { 
            DARABONBA_PTR_TO_JSON(ApiId, apiId_);
            DARABONBA_PTR_TO_JSON(AuthenticationMode, authenticationMode_);
            DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
            DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
            DARABONBA_PTR_TO_JSON(FailExample, failExample_);
            DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
            DARABONBA_PTR_TO_JSON(ModelType, modelType_);
            DARABONBA_PTR_TO_JSON(Path, path_);
            DARABONBA_PTR_TO_JSON(Protocol, protocol_);
            DARABONBA_PTR_TO_JSON(SuccessExample, successExample_);
            DARABONBA_PTR_TO_JSON(Timeout, timeout_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, RegisterApi& obj) { 
            DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
            DARABONBA_PTR_FROM_JSON(AuthenticationMode, authenticationMode_);
            DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
            DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
            DARABONBA_PTR_FROM_JSON(FailExample, failExample_);
            DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
            DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
            DARABONBA_PTR_FROM_JSON(Path, path_);
            DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
            DARABONBA_PTR_FROM_JSON(SuccessExample, successExample_);
            DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          RegisterApi() = default ;
          RegisterApi(const RegisterApi &) = default ;
          RegisterApi(RegisterApi &&) = default ;
          RegisterApi(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RegisterApi() = default ;
          RegisterApi& operator=(const RegisterApi &) = default ;
          RegisterApi& operator=(RegisterApi &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->apiId_ == nullptr
        && this->authenticationMode_ == nullptr && this->datasourceId_ == nullptr && this->datasourceName_ == nullptr && this->failExample_ == nullptr && this->httpMethod_ == nullptr
        && this->modelType_ == nullptr && this->path_ == nullptr && this->protocol_ == nullptr && this->successExample_ == nullptr && this->timeout_ == nullptr
        && this->url_ == nullptr; };
          // apiId Field Functions 
          bool hasApiId() const { return this->apiId_ != nullptr;};
          void deleteApiId() { this->apiId_ = nullptr;};
          inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
          inline RegisterApi& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


          // authenticationMode Field Functions 
          bool hasAuthenticationMode() const { return this->authenticationMode_ != nullptr;};
          void deleteAuthenticationMode() { this->authenticationMode_ = nullptr;};
          inline string getAuthenticationMode() const { DARABONBA_PTR_GET_DEFAULT(authenticationMode_, "") };
          inline RegisterApi& setAuthenticationMode(string authenticationMode) { DARABONBA_PTR_SET_VALUE(authenticationMode_, authenticationMode) };


          // datasourceId Field Functions 
          bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
          void deleteDatasourceId() { this->datasourceId_ = nullptr;};
          inline string getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, "") };
          inline RegisterApi& setDatasourceId(string datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


          // datasourceName Field Functions 
          bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
          void deleteDatasourceName() { this->datasourceName_ = nullptr;};
          inline string getDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
          inline RegisterApi& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


          // failExample Field Functions 
          bool hasFailExample() const { return this->failExample_ != nullptr;};
          void deleteFailExample() { this->failExample_ = nullptr;};
          inline string getFailExample() const { DARABONBA_PTR_GET_DEFAULT(failExample_, "") };
          inline RegisterApi& setFailExample(string failExample) { DARABONBA_PTR_SET_VALUE(failExample_, failExample) };


          // httpMethod Field Functions 
          bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
          void deleteHttpMethod() { this->httpMethod_ = nullptr;};
          inline int64_t getHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, 0L) };
          inline RegisterApi& setHttpMethod(int64_t httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


          // modelType Field Functions 
          bool hasModelType() const { return this->modelType_ != nullptr;};
          void deleteModelType() { this->modelType_ = nullptr;};
          inline int64_t getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, 0L) };
          inline RegisterApi& setModelType(int64_t modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline RegisterApi& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


          // protocol Field Functions 
          bool hasProtocol() const { return this->protocol_ != nullptr;};
          void deleteProtocol() { this->protocol_ = nullptr;};
          inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
          inline RegisterApi& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


          // successExample Field Functions 
          bool hasSuccessExample() const { return this->successExample_ != nullptr;};
          void deleteSuccessExample() { this->successExample_ = nullptr;};
          inline string getSuccessExample() const { DARABONBA_PTR_GET_DEFAULT(successExample_, "") };
          inline RegisterApi& setSuccessExample(string successExample) { DARABONBA_PTR_SET_VALUE(successExample_, successExample) };


          // timeout Field Functions 
          bool hasTimeout() const { return this->timeout_ != nullptr;};
          void deleteTimeout() { this->timeout_ = nullptr;};
          inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
          inline RegisterApi& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline RegisterApi& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<int64_t> apiId_ {};
          shared_ptr<string> authenticationMode_ {};
          shared_ptr<string> datasourceId_ {};
          shared_ptr<string> datasourceName_ {};
          shared_ptr<string> failExample_ {};
          shared_ptr<int64_t> httpMethod_ {};
          shared_ptr<int64_t> modelType_ {};
          shared_ptr<string> path_ {};
          shared_ptr<string> protocol_ {};
          shared_ptr<string> successExample_ {};
          shared_ptr<int64_t> timeout_ {};
          shared_ptr<string> url_ {};
        };

        class PublicParamList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PublicParamList& obj) { 
            DARABONBA_PTR_TO_JSON(DateFormat, dateFormat_);
            DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(DescriptionCode, descriptionCode_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(InitialValue, initialValue_);
            DARABONBA_PTR_TO_JSON(MappingColumn, mappingColumn_);
            DARABONBA_PTR_TO_JSON(Must, must_);
            DARABONBA_PTR_TO_JSON(Operator, operator_);
            DARABONBA_PTR_TO_JSON(Optional, optional_);
            DARABONBA_PTR_TO_JSON(OriginalColumn, originalColumn_);
            DARABONBA_PTR_TO_JSON(ParamName, paramName_);
            DARABONBA_PTR_TO_JSON(ParamType, paramType_);
            DARABONBA_PTR_TO_JSON(ParameterLocation, parameterLocation_);
            DARABONBA_PTR_TO_JSON(Sample, sample_);
            DARABONBA_PTR_TO_JSON(TableAndDsList, tableAndDsList_);
          };
          friend void from_json(const Darabonba::Json& j, PublicParamList& obj) { 
            DARABONBA_PTR_FROM_JSON(DateFormat, dateFormat_);
            DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(DescriptionCode, descriptionCode_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(InitialValue, initialValue_);
            DARABONBA_PTR_FROM_JSON(MappingColumn, mappingColumn_);
            DARABONBA_PTR_FROM_JSON(Must, must_);
            DARABONBA_PTR_FROM_JSON(Operator, operator_);
            DARABONBA_PTR_FROM_JSON(Optional, optional_);
            DARABONBA_PTR_FROM_JSON(OriginalColumn, originalColumn_);
            DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
            DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
            DARABONBA_PTR_FROM_JSON(ParameterLocation, parameterLocation_);
            DARABONBA_PTR_FROM_JSON(Sample, sample_);
            DARABONBA_PTR_FROM_JSON(TableAndDsList, tableAndDsList_);
          };
          PublicParamList() = default ;
          PublicParamList(const PublicParamList &) = default ;
          PublicParamList(PublicParamList &&) = default ;
          PublicParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PublicParamList() = default ;
          PublicParamList& operator=(const PublicParamList &) = default ;
          PublicParamList& operator=(PublicParamList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TableAndDsList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TableAndDsList& obj) { 
              DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
              DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
              DARABONBA_PTR_TO_JSON(DatasourceType, datasourceType_);
              DARABONBA_PTR_TO_JSON(DatasourceUrl, datasourceUrl_);
              DARABONBA_PTR_TO_JSON(TableName, tableName_);
            };
            friend void from_json(const Darabonba::Json& j, TableAndDsList& obj) { 
              DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
              DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
              DARABONBA_PTR_FROM_JSON(DatasourceType, datasourceType_);
              DARABONBA_PTR_FROM_JSON(DatasourceUrl, datasourceUrl_);
              DARABONBA_PTR_FROM_JSON(TableName, tableName_);
            };
            TableAndDsList() = default ;
            TableAndDsList(const TableAndDsList &) = default ;
            TableAndDsList(TableAndDsList &&) = default ;
            TableAndDsList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TableAndDsList() = default ;
            TableAndDsList& operator=(const TableAndDsList &) = default ;
            TableAndDsList& operator=(TableAndDsList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->datasourceId_ == nullptr
        && this->datasourceName_ == nullptr && this->datasourceType_ == nullptr && this->datasourceUrl_ == nullptr && this->tableName_ == nullptr; };
            // datasourceId Field Functions 
            bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
            void deleteDatasourceId() { this->datasourceId_ = nullptr;};
            inline string getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, "") };
            inline TableAndDsList& setDatasourceId(string datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


            // datasourceName Field Functions 
            bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
            void deleteDatasourceName() { this->datasourceName_ = nullptr;};
            inline string getDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
            inline TableAndDsList& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


            // datasourceType Field Functions 
            bool hasDatasourceType() const { return this->datasourceType_ != nullptr;};
            void deleteDatasourceType() { this->datasourceType_ = nullptr;};
            inline int64_t getDatasourceType() const { DARABONBA_PTR_GET_DEFAULT(datasourceType_, 0L) };
            inline TableAndDsList& setDatasourceType(int64_t datasourceType) { DARABONBA_PTR_SET_VALUE(datasourceType_, datasourceType) };


            // datasourceUrl Field Functions 
            bool hasDatasourceUrl() const { return this->datasourceUrl_ != nullptr;};
            void deleteDatasourceUrl() { this->datasourceUrl_ = nullptr;};
            inline string getDatasourceUrl() const { DARABONBA_PTR_GET_DEFAULT(datasourceUrl_, "") };
            inline TableAndDsList& setDatasourceUrl(string datasourceUrl) { DARABONBA_PTR_SET_VALUE(datasourceUrl_, datasourceUrl) };


            // tableName Field Functions 
            bool hasTableName() const { return this->tableName_ != nullptr;};
            void deleteTableName() { this->tableName_ = nullptr;};
            inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
            inline TableAndDsList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


          protected:
            shared_ptr<string> datasourceId_ {};
            shared_ptr<string> datasourceName_ {};
            shared_ptr<int64_t> datasourceType_ {};
            shared_ptr<string> datasourceUrl_ {};
            shared_ptr<string> tableName_ {};
          };

          virtual bool empty() const override { return this->dateFormat_ == nullptr
        && this->defaultValue_ == nullptr && this->description_ == nullptr && this->descriptionCode_ == nullptr && this->id_ == nullptr && this->initialValue_ == nullptr
        && this->mappingColumn_ == nullptr && this->must_ == nullptr && this->operator_ == nullptr && this->optional_ == nullptr && this->originalColumn_ == nullptr
        && this->paramName_ == nullptr && this->paramType_ == nullptr && this->parameterLocation_ == nullptr && this->sample_ == nullptr && this->tableAndDsList_ == nullptr; };
          // dateFormat Field Functions 
          bool hasDateFormat() const { return this->dateFormat_ != nullptr;};
          void deleteDateFormat() { this->dateFormat_ = nullptr;};
          inline string getDateFormat() const { DARABONBA_PTR_GET_DEFAULT(dateFormat_, "") };
          inline PublicParamList& setDateFormat(string dateFormat) { DARABONBA_PTR_SET_VALUE(dateFormat_, dateFormat) };


          // defaultValue Field Functions 
          bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
          void deleteDefaultValue() { this->defaultValue_ = nullptr;};
          inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
          inline PublicParamList& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline PublicParamList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // descriptionCode Field Functions 
          bool hasDescriptionCode() const { return this->descriptionCode_ != nullptr;};
          void deleteDescriptionCode() { this->descriptionCode_ = nullptr;};
          inline string getDescriptionCode() const { DARABONBA_PTR_GET_DEFAULT(descriptionCode_, "") };
          inline PublicParamList& setDescriptionCode(string descriptionCode) { DARABONBA_PTR_SET_VALUE(descriptionCode_, descriptionCode) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline PublicParamList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // initialValue Field Functions 
          bool hasInitialValue() const { return this->initialValue_ != nullptr;};
          void deleteInitialValue() { this->initialValue_ = nullptr;};
          inline string getInitialValue() const { DARABONBA_PTR_GET_DEFAULT(initialValue_, "") };
          inline PublicParamList& setInitialValue(string initialValue) { DARABONBA_PTR_SET_VALUE(initialValue_, initialValue) };


          // mappingColumn Field Functions 
          bool hasMappingColumn() const { return this->mappingColumn_ != nullptr;};
          void deleteMappingColumn() { this->mappingColumn_ = nullptr;};
          inline string getMappingColumn() const { DARABONBA_PTR_GET_DEFAULT(mappingColumn_, "") };
          inline PublicParamList& setMappingColumn(string mappingColumn) { DARABONBA_PTR_SET_VALUE(mappingColumn_, mappingColumn) };


          // must Field Functions 
          bool hasMust() const { return this->must_ != nullptr;};
          void deleteMust() { this->must_ = nullptr;};
          inline int64_t getMust() const { DARABONBA_PTR_GET_DEFAULT(must_, 0L) };
          inline PublicParamList& setMust(int64_t must) { DARABONBA_PTR_SET_VALUE(must_, must) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline PublicParamList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // optional Field Functions 
          bool hasOptional() const { return this->optional_ != nullptr;};
          void deleteOptional() { this->optional_ = nullptr;};
          inline int64_t getOptional() const { DARABONBA_PTR_GET_DEFAULT(optional_, 0L) };
          inline PublicParamList& setOptional(int64_t optional) { DARABONBA_PTR_SET_VALUE(optional_, optional) };


          // originalColumn Field Functions 
          bool hasOriginalColumn() const { return this->originalColumn_ != nullptr;};
          void deleteOriginalColumn() { this->originalColumn_ = nullptr;};
          inline string getOriginalColumn() const { DARABONBA_PTR_GET_DEFAULT(originalColumn_, "") };
          inline PublicParamList& setOriginalColumn(string originalColumn) { DARABONBA_PTR_SET_VALUE(originalColumn_, originalColumn) };


          // paramName Field Functions 
          bool hasParamName() const { return this->paramName_ != nullptr;};
          void deleteParamName() { this->paramName_ = nullptr;};
          inline string getParamName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
          inline PublicParamList& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


          // paramType Field Functions 
          bool hasParamType() const { return this->paramType_ != nullptr;};
          void deleteParamType() { this->paramType_ = nullptr;};
          inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
          inline PublicParamList& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


          // parameterLocation Field Functions 
          bool hasParameterLocation() const { return this->parameterLocation_ != nullptr;};
          void deleteParameterLocation() { this->parameterLocation_ = nullptr;};
          inline string getParameterLocation() const { DARABONBA_PTR_GET_DEFAULT(parameterLocation_, "") };
          inline PublicParamList& setParameterLocation(string parameterLocation) { DARABONBA_PTR_SET_VALUE(parameterLocation_, parameterLocation) };


          // sample Field Functions 
          bool hasSample() const { return this->sample_ != nullptr;};
          void deleteSample() { this->sample_ = nullptr;};
          inline string getSample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
          inline PublicParamList& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


          // tableAndDsList Field Functions 
          bool hasTableAndDsList() const { return this->tableAndDsList_ != nullptr;};
          void deleteTableAndDsList() { this->tableAndDsList_ = nullptr;};
          inline const vector<PublicParamList::TableAndDsList> & getTableAndDsList() const { DARABONBA_PTR_GET_CONST(tableAndDsList_, vector<PublicParamList::TableAndDsList>) };
          inline vector<PublicParamList::TableAndDsList> getTableAndDsList() { DARABONBA_PTR_GET(tableAndDsList_, vector<PublicParamList::TableAndDsList>) };
          inline PublicParamList& setTableAndDsList(const vector<PublicParamList::TableAndDsList> & tableAndDsList) { DARABONBA_PTR_SET_VALUE(tableAndDsList_, tableAndDsList) };
          inline PublicParamList& setTableAndDsList(vector<PublicParamList::TableAndDsList> && tableAndDsList) { DARABONBA_PTR_SET_RVALUE(tableAndDsList_, tableAndDsList) };


        protected:
          shared_ptr<string> dateFormat_ {};
          shared_ptr<string> defaultValue_ {};
          shared_ptr<string> description_ {};
          shared_ptr<string> descriptionCode_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> initialValue_ {};
          shared_ptr<string> mappingColumn_ {};
          shared_ptr<int64_t> must_ {};
          shared_ptr<string> operator_ {};
          shared_ptr<int64_t> optional_ {};
          shared_ptr<string> originalColumn_ {};
          shared_ptr<string> paramName_ {};
          shared_ptr<string> paramType_ {};
          shared_ptr<string> parameterLocation_ {};
          shared_ptr<string> sample_ {};
          // -
          shared_ptr<vector<PublicParamList::TableAndDsList>> tableAndDsList_ {};
        };

        virtual bool empty() const override { return this->apiNo_ == nullptr
        && this->apiTimeout_ == nullptr && this->appName_ == nullptr && this->bizModuleEnName_ == nullptr && this->cacheSwitch_ == nullptr && this->cacheTime_ == nullptr
        && this->createType_ == nullptr && this->dbEnv_ == nullptr && this->description_ == nullptr && this->directDatasourceId_ == nullptr && this->directDatasourceName_ == nullptr
        && this->groupId_ == nullptr && this->groupName_ == nullptr && this->id_ == nullptr && this->isLogicalTable_ == nullptr && this->isPagedQuery_ == nullptr
        && this->maxReturnNum_ == nullptr && this->modelType_ == nullptr && this->name_ == nullptr && this->projId_ == nullptr && this->projName_ == nullptr
        && this->protocol_ == nullptr && this->protocolName_ == nullptr && this->publicParamList_ == nullptr && this->registerApi_ == nullptr && this->requestMethod_ == nullptr
        && this->requestMethodName_ == nullptr && this->requestParamList_ == nullptr && this->resourceGroupName_ == nullptr && this->responseParamList_ == nullptr && this->resultSample_ == nullptr
        && this->returnType_ == nullptr && this->returnTypeName_ == nullptr && this->rsGrpId_ == nullptr && this->scriptType_ == nullptr && this->specialSql_ == nullptr
        && this->sqlStatement_ == nullptr && this->tableName_ == nullptr && this->timeout_ == nullptr && this->updateRate_ == nullptr && this->updateRateName_ == nullptr
        && this->version_ == nullptr; };
        // apiNo Field Functions 
        bool hasApiNo() const { return this->apiNo_ != nullptr;};
        void deleteApiNo() { this->apiNo_ = nullptr;};
        inline int64_t getApiNo() const { DARABONBA_PTR_GET_DEFAULT(apiNo_, 0L) };
        inline Data& setApiNo(int64_t apiNo) { DARABONBA_PTR_SET_VALUE(apiNo_, apiNo) };


        // apiTimeout Field Functions 
        bool hasApiTimeout() const { return this->apiTimeout_ != nullptr;};
        void deleteApiTimeout() { this->apiTimeout_ = nullptr;};
        inline int64_t getApiTimeout() const { DARABONBA_PTR_GET_DEFAULT(apiTimeout_, 0L) };
        inline Data& setApiTimeout(int64_t apiTimeout) { DARABONBA_PTR_SET_VALUE(apiTimeout_, apiTimeout) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // bizModuleEnName Field Functions 
        bool hasBizModuleEnName() const { return this->bizModuleEnName_ != nullptr;};
        void deleteBizModuleEnName() { this->bizModuleEnName_ = nullptr;};
        inline string getBizModuleEnName() const { DARABONBA_PTR_GET_DEFAULT(bizModuleEnName_, "") };
        inline Data& setBizModuleEnName(string bizModuleEnName) { DARABONBA_PTR_SET_VALUE(bizModuleEnName_, bizModuleEnName) };


        // cacheSwitch Field Functions 
        bool hasCacheSwitch() const { return this->cacheSwitch_ != nullptr;};
        void deleteCacheSwitch() { this->cacheSwitch_ = nullptr;};
        inline string getCacheSwitch() const { DARABONBA_PTR_GET_DEFAULT(cacheSwitch_, "") };
        inline Data& setCacheSwitch(string cacheSwitch) { DARABONBA_PTR_SET_VALUE(cacheSwitch_, cacheSwitch) };


        // cacheTime Field Functions 
        bool hasCacheTime() const { return this->cacheTime_ != nullptr;};
        void deleteCacheTime() { this->cacheTime_ = nullptr;};
        inline string getCacheTime() const { DARABONBA_PTR_GET_DEFAULT(cacheTime_, "") };
        inline Data& setCacheTime(string cacheTime) { DARABONBA_PTR_SET_VALUE(cacheTime_, cacheTime) };


        // createType Field Functions 
        bool hasCreateType() const { return this->createType_ != nullptr;};
        void deleteCreateType() { this->createType_ = nullptr;};
        inline int64_t getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, 0L) };
        inline Data& setCreateType(int64_t createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


        // dbEnv Field Functions 
        bool hasDbEnv() const { return this->dbEnv_ != nullptr;};
        void deleteDbEnv() { this->dbEnv_ = nullptr;};
        inline int64_t getDbEnv() const { DARABONBA_PTR_GET_DEFAULT(dbEnv_, 0L) };
        inline Data& setDbEnv(int64_t dbEnv) { DARABONBA_PTR_SET_VALUE(dbEnv_, dbEnv) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // directDatasourceId Field Functions 
        bool hasDirectDatasourceId() const { return this->directDatasourceId_ != nullptr;};
        void deleteDirectDatasourceId() { this->directDatasourceId_ = nullptr;};
        inline int64_t getDirectDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(directDatasourceId_, 0L) };
        inline Data& setDirectDatasourceId(int64_t directDatasourceId) { DARABONBA_PTR_SET_VALUE(directDatasourceId_, directDatasourceId) };


        // directDatasourceName Field Functions 
        bool hasDirectDatasourceName() const { return this->directDatasourceName_ != nullptr;};
        void deleteDirectDatasourceName() { this->directDatasourceName_ = nullptr;};
        inline string getDirectDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(directDatasourceName_, "") };
        inline Data& setDirectDatasourceName(string directDatasourceName) { DARABONBA_PTR_SET_VALUE(directDatasourceName_, directDatasourceName) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
        inline Data& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline Data& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isLogicalTable Field Functions 
        bool hasIsLogicalTable() const { return this->isLogicalTable_ != nullptr;};
        void deleteIsLogicalTable() { this->isLogicalTable_ = nullptr;};
        inline bool getIsLogicalTable() const { DARABONBA_PTR_GET_DEFAULT(isLogicalTable_, false) };
        inline Data& setIsLogicalTable(bool isLogicalTable) { DARABONBA_PTR_SET_VALUE(isLogicalTable_, isLogicalTable) };


        // isPagedQuery Field Functions 
        bool hasIsPagedQuery() const { return this->isPagedQuery_ != nullptr;};
        void deleteIsPagedQuery() { this->isPagedQuery_ = nullptr;};
        inline int64_t getIsPagedQuery() const { DARABONBA_PTR_GET_DEFAULT(isPagedQuery_, 0L) };
        inline Data& setIsPagedQuery(int64_t isPagedQuery) { DARABONBA_PTR_SET_VALUE(isPagedQuery_, isPagedQuery) };


        // maxReturnNum Field Functions 
        bool hasMaxReturnNum() const { return this->maxReturnNum_ != nullptr;};
        void deleteMaxReturnNum() { this->maxReturnNum_ = nullptr;};
        inline int64_t getMaxReturnNum() const { DARABONBA_PTR_GET_DEFAULT(maxReturnNum_, 0L) };
        inline Data& setMaxReturnNum(int64_t maxReturnNum) { DARABONBA_PTR_SET_VALUE(maxReturnNum_, maxReturnNum) };


        // modelType Field Functions 
        bool hasModelType() const { return this->modelType_ != nullptr;};
        void deleteModelType() { this->modelType_ = nullptr;};
        inline int64_t getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, 0L) };
        inline Data& setModelType(int64_t modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // projId Field Functions 
        bool hasProjId() const { return this->projId_ != nullptr;};
        void deleteProjId() { this->projId_ = nullptr;};
        inline int64_t getProjId() const { DARABONBA_PTR_GET_DEFAULT(projId_, 0L) };
        inline Data& setProjId(int64_t projId) { DARABONBA_PTR_SET_VALUE(projId_, projId) };


        // projName Field Functions 
        bool hasProjName() const { return this->projName_ != nullptr;};
        void deleteProjName() { this->projName_ = nullptr;};
        inline string getProjName() const { DARABONBA_PTR_GET_DEFAULT(projName_, "") };
        inline Data& setProjName(string projName) { DARABONBA_PTR_SET_VALUE(projName_, projName) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline int64_t getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, 0L) };
        inline Data& setProtocol(int64_t protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // protocolName Field Functions 
        bool hasProtocolName() const { return this->protocolName_ != nullptr;};
        void deleteProtocolName() { this->protocolName_ = nullptr;};
        inline string getProtocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
        inline Data& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


        // publicParamList Field Functions 
        bool hasPublicParamList() const { return this->publicParamList_ != nullptr;};
        void deletePublicParamList() { this->publicParamList_ = nullptr;};
        inline const vector<Data::PublicParamList> & getPublicParamList() const { DARABONBA_PTR_GET_CONST(publicParamList_, vector<Data::PublicParamList>) };
        inline vector<Data::PublicParamList> getPublicParamList() { DARABONBA_PTR_GET(publicParamList_, vector<Data::PublicParamList>) };
        inline Data& setPublicParamList(const vector<Data::PublicParamList> & publicParamList) { DARABONBA_PTR_SET_VALUE(publicParamList_, publicParamList) };
        inline Data& setPublicParamList(vector<Data::PublicParamList> && publicParamList) { DARABONBA_PTR_SET_RVALUE(publicParamList_, publicParamList) };


        // registerApi Field Functions 
        bool hasRegisterApi() const { return this->registerApi_ != nullptr;};
        void deleteRegisterApi() { this->registerApi_ = nullptr;};
        inline const Data::RegisterApi & getRegisterApi() const { DARABONBA_PTR_GET_CONST(registerApi_, Data::RegisterApi) };
        inline Data::RegisterApi getRegisterApi() { DARABONBA_PTR_GET(registerApi_, Data::RegisterApi) };
        inline Data& setRegisterApi(const Data::RegisterApi & registerApi) { DARABONBA_PTR_SET_VALUE(registerApi_, registerApi) };
        inline Data& setRegisterApi(Data::RegisterApi && registerApi) { DARABONBA_PTR_SET_RVALUE(registerApi_, registerApi) };


        // requestMethod Field Functions 
        bool hasRequestMethod() const { return this->requestMethod_ != nullptr;};
        void deleteRequestMethod() { this->requestMethod_ = nullptr;};
        inline int64_t getRequestMethod() const { DARABONBA_PTR_GET_DEFAULT(requestMethod_, 0L) };
        inline Data& setRequestMethod(int64_t requestMethod) { DARABONBA_PTR_SET_VALUE(requestMethod_, requestMethod) };


        // requestMethodName Field Functions 
        bool hasRequestMethodName() const { return this->requestMethodName_ != nullptr;};
        void deleteRequestMethodName() { this->requestMethodName_ = nullptr;};
        inline string getRequestMethodName() const { DARABONBA_PTR_GET_DEFAULT(requestMethodName_, "") };
        inline Data& setRequestMethodName(string requestMethodName) { DARABONBA_PTR_SET_VALUE(requestMethodName_, requestMethodName) };


        // requestParamList Field Functions 
        bool hasRequestParamList() const { return this->requestParamList_ != nullptr;};
        void deleteRequestParamList() { this->requestParamList_ = nullptr;};
        inline const vector<Data::RequestParamList> & getRequestParamList() const { DARABONBA_PTR_GET_CONST(requestParamList_, vector<Data::RequestParamList>) };
        inline vector<Data::RequestParamList> getRequestParamList() { DARABONBA_PTR_GET(requestParamList_, vector<Data::RequestParamList>) };
        inline Data& setRequestParamList(const vector<Data::RequestParamList> & requestParamList) { DARABONBA_PTR_SET_VALUE(requestParamList_, requestParamList) };
        inline Data& setRequestParamList(vector<Data::RequestParamList> && requestParamList) { DARABONBA_PTR_SET_RVALUE(requestParamList_, requestParamList) };


        // resourceGroupName Field Functions 
        bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
        void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
        inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
        inline Data& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


        // responseParamList Field Functions 
        bool hasResponseParamList() const { return this->responseParamList_ != nullptr;};
        void deleteResponseParamList() { this->responseParamList_ = nullptr;};
        inline const vector<Data::ResponseParamList> & getResponseParamList() const { DARABONBA_PTR_GET_CONST(responseParamList_, vector<Data::ResponseParamList>) };
        inline vector<Data::ResponseParamList> getResponseParamList() { DARABONBA_PTR_GET(responseParamList_, vector<Data::ResponseParamList>) };
        inline Data& setResponseParamList(const vector<Data::ResponseParamList> & responseParamList) { DARABONBA_PTR_SET_VALUE(responseParamList_, responseParamList) };
        inline Data& setResponseParamList(vector<Data::ResponseParamList> && responseParamList) { DARABONBA_PTR_SET_RVALUE(responseParamList_, responseParamList) };


        // resultSample Field Functions 
        bool hasResultSample() const { return this->resultSample_ != nullptr;};
        void deleteResultSample() { this->resultSample_ = nullptr;};
        inline string getResultSample() const { DARABONBA_PTR_GET_DEFAULT(resultSample_, "") };
        inline Data& setResultSample(string resultSample) { DARABONBA_PTR_SET_VALUE(resultSample_, resultSample) };


        // returnType Field Functions 
        bool hasReturnType() const { return this->returnType_ != nullptr;};
        void deleteReturnType() { this->returnType_ = nullptr;};
        inline int64_t getReturnType() const { DARABONBA_PTR_GET_DEFAULT(returnType_, 0L) };
        inline Data& setReturnType(int64_t returnType) { DARABONBA_PTR_SET_VALUE(returnType_, returnType) };


        // returnTypeName Field Functions 
        bool hasReturnTypeName() const { return this->returnTypeName_ != nullptr;};
        void deleteReturnTypeName() { this->returnTypeName_ = nullptr;};
        inline string getReturnTypeName() const { DARABONBA_PTR_GET_DEFAULT(returnTypeName_, "") };
        inline Data& setReturnTypeName(string returnTypeName) { DARABONBA_PTR_SET_VALUE(returnTypeName_, returnTypeName) };


        // rsGrpId Field Functions 
        bool hasRsGrpId() const { return this->rsGrpId_ != nullptr;};
        void deleteRsGrpId() { this->rsGrpId_ = nullptr;};
        inline string getRsGrpId() const { DARABONBA_PTR_GET_DEFAULT(rsGrpId_, "") };
        inline Data& setRsGrpId(string rsGrpId) { DARABONBA_PTR_SET_VALUE(rsGrpId_, rsGrpId) };


        // scriptType Field Functions 
        bool hasScriptType() const { return this->scriptType_ != nullptr;};
        void deleteScriptType() { this->scriptType_ = nullptr;};
        inline string getScriptType() const { DARABONBA_PTR_GET_DEFAULT(scriptType_, "") };
        inline Data& setScriptType(string scriptType) { DARABONBA_PTR_SET_VALUE(scriptType_, scriptType) };


        // specialSql Field Functions 
        bool hasSpecialSql() const { return this->specialSql_ != nullptr;};
        void deleteSpecialSql() { this->specialSql_ = nullptr;};
        inline int64_t getSpecialSql() const { DARABONBA_PTR_GET_DEFAULT(specialSql_, 0L) };
        inline Data& setSpecialSql(int64_t specialSql) { DARABONBA_PTR_SET_VALUE(specialSql_, specialSql) };


        // sqlStatement Field Functions 
        bool hasSqlStatement() const { return this->sqlStatement_ != nullptr;};
        void deleteSqlStatement() { this->sqlStatement_ = nullptr;};
        inline string getSqlStatement() const { DARABONBA_PTR_GET_DEFAULT(sqlStatement_, "") };
        inline Data& setSqlStatement(string sqlStatement) { DARABONBA_PTR_SET_VALUE(sqlStatement_, sqlStatement) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline Data& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline string getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, "") };
        inline Data& setTimeout(string timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        // updateRate Field Functions 
        bool hasUpdateRate() const { return this->updateRate_ != nullptr;};
        void deleteUpdateRate() { this->updateRate_ = nullptr;};
        inline int64_t getUpdateRate() const { DARABONBA_PTR_GET_DEFAULT(updateRate_, 0L) };
        inline Data& setUpdateRate(int64_t updateRate) { DARABONBA_PTR_SET_VALUE(updateRate_, updateRate) };


        // updateRateName Field Functions 
        bool hasUpdateRateName() const { return this->updateRateName_ != nullptr;};
        void deleteUpdateRateName() { this->updateRateName_ = nullptr;};
        inline string getUpdateRateName() const { DARABONBA_PTR_GET_DEFAULT(updateRateName_, "") };
        inline Data& setUpdateRateName(string updateRateName) { DARABONBA_PTR_SET_VALUE(updateRateName_, updateRateName) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<int64_t> apiNo_ {};
        shared_ptr<int64_t> apiTimeout_ {};
        shared_ptr<string> appName_ {};
        shared_ptr<string> bizModuleEnName_ {};
        shared_ptr<string> cacheSwitch_ {};
        shared_ptr<string> cacheTime_ {};
        shared_ptr<int64_t> createType_ {};
        shared_ptr<int64_t> dbEnv_ {};
        shared_ptr<string> description_ {};
        shared_ptr<int64_t> directDatasourceId_ {};
        shared_ptr<string> directDatasourceName_ {};
        shared_ptr<int64_t> groupId_ {};
        shared_ptr<string> groupName_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<bool> isLogicalTable_ {};
        shared_ptr<int64_t> isPagedQuery_ {};
        shared_ptr<int64_t> maxReturnNum_ {};
        shared_ptr<int64_t> modelType_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> projId_ {};
        shared_ptr<string> projName_ {};
        shared_ptr<int64_t> protocol_ {};
        shared_ptr<string> protocolName_ {};
        // -
        shared_ptr<vector<Data::PublicParamList>> publicParamList_ {};
        shared_ptr<Data::RegisterApi> registerApi_ {};
        shared_ptr<int64_t> requestMethod_ {};
        shared_ptr<string> requestMethodName_ {};
        // -
        shared_ptr<vector<Data::RequestParamList>> requestParamList_ {};
        shared_ptr<string> resourceGroupName_ {};
        // -
        shared_ptr<vector<Data::ResponseParamList>> responseParamList_ {};
        shared_ptr<string> resultSample_ {};
        shared_ptr<int64_t> returnType_ {};
        shared_ptr<string> returnTypeName_ {};
        shared_ptr<string> rsGrpId_ {};
        shared_ptr<string> scriptType_ {};
        shared_ptr<int64_t> specialSql_ {};
        shared_ptr<string> sqlStatement_ {};
        shared_ptr<string> tableName_ {};
        shared_ptr<string> timeout_ {};
        shared_ptr<int64_t> updateRate_ {};
        shared_ptr<string> updateRateName_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->totalCount_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<ListResult::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListResult::Data>) };
      inline vector<ListResult::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListResult::Data>) };
      inline ListResult& setData(const vector<ListResult::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline ListResult& setData(vector<ListResult::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline ListResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<ListResult::Data>> data_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->listResult_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListApiByAppResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListApiByAppResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // listResult Field Functions 
    bool hasListResult() const { return this->listResult_ != nullptr;};
    void deleteListResult() { this->listResult_ = nullptr;};
    inline const ListApiByAppResponseBody::ListResult & getListResult() const { DARABONBA_PTR_GET_CONST(listResult_, ListApiByAppResponseBody::ListResult) };
    inline ListApiByAppResponseBody::ListResult getListResult() { DARABONBA_PTR_GET(listResult_, ListApiByAppResponseBody::ListResult) };
    inline ListApiByAppResponseBody& setListResult(const ListApiByAppResponseBody::ListResult & listResult) { DARABONBA_PTR_SET_VALUE(listResult_, listResult) };
    inline ListApiByAppResponseBody& setListResult(ListApiByAppResponseBody::ListResult && listResult) { DARABONBA_PTR_SET_RVALUE(listResult_, listResult) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListApiByAppResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApiByAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListApiByAppResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<ListApiByAppResponseBody::ListResult> listResult_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
