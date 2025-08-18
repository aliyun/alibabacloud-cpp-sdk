// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPIDOCUMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPIDOCUMENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo.hpp>
#include <vector>
#include <alibabacloud/models/GetDataServiceApiDocumentResponseBodyDataPublicParamList.hpp>
#include <alibabacloud/models/GetDataServiceApiDocumentResponseBodyDataRequestParamList.hpp>
#include <alibabacloud/models/GetDataServiceApiDocumentResponseBodyDataResponseParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceApiDocumentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiDocumentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiRegisterInfo, apiRegisterInfo_);
      DARABONBA_PTR_TO_JSON(ApiTimeout, apiTimeout_);
      DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
      DARABONBA_PTR_TO_JSON(CacheTime, cacheTime_);
      DARABONBA_PTR_TO_JSON(CreateType, createType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DirectDatasourceId, directDatasourceId_);
      DARABONBA_PTR_TO_JSON(DirectDatasourceName, directDatasourceName_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IsLogicalTable, isLogicalTable_);
      DARABONBA_PTR_TO_JSON(IsPagedQuery, isPagedQuery_);
      DARABONBA_PTR_TO_JSON(IsSpecialSql, isSpecialSql_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OpenCache, openCache_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(PublicParamList, publicParamList_);
      DARABONBA_PTR_TO_JSON(RequestMethod, requestMethod_);
      DARABONBA_PTR_TO_JSON(RequestParamList, requestParamList_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(ResponseParamList, responseParamList_);
      DARABONBA_PTR_TO_JSON(ResultSample, resultSample_);
      DARABONBA_PTR_TO_JSON(ReturnLimit, returnLimit_);
      DARABONBA_PTR_TO_JSON(ReturnType, returnType_);
      DARABONBA_PTR_TO_JSON(ScriptType, scriptType_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(UpdateRate, updateRate_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiDocumentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiRegisterInfo, apiRegisterInfo_);
      DARABONBA_PTR_FROM_JSON(ApiTimeout, apiTimeout_);
      DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
      DARABONBA_PTR_FROM_JSON(CacheTime, cacheTime_);
      DARABONBA_PTR_FROM_JSON(CreateType, createType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DirectDatasourceId, directDatasourceId_);
      DARABONBA_PTR_FROM_JSON(DirectDatasourceName, directDatasourceName_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IsLogicalTable, isLogicalTable_);
      DARABONBA_PTR_FROM_JSON(IsPagedQuery, isPagedQuery_);
      DARABONBA_PTR_FROM_JSON(IsSpecialSql, isSpecialSql_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OpenCache, openCache_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(PublicParamList, publicParamList_);
      DARABONBA_PTR_FROM_JSON(RequestMethod, requestMethod_);
      DARABONBA_PTR_FROM_JSON(RequestParamList, requestParamList_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(ResponseParamList, responseParamList_);
      DARABONBA_PTR_FROM_JSON(ResultSample, resultSample_);
      DARABONBA_PTR_FROM_JSON(ReturnLimit, returnLimit_);
      DARABONBA_PTR_FROM_JSON(ReturnType, returnType_);
      DARABONBA_PTR_FROM_JSON(ScriptType, scriptType_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(UpdateRate, updateRate_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetDataServiceApiDocumentResponseBodyData() = default ;
    GetDataServiceApiDocumentResponseBodyData(const GetDataServiceApiDocumentResponseBodyData &) = default ;
    GetDataServiceApiDocumentResponseBodyData(GetDataServiceApiDocumentResponseBodyData &&) = default ;
    GetDataServiceApiDocumentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiDocumentResponseBodyData() = default ;
    GetDataServiceApiDocumentResponseBodyData& operator=(const GetDataServiceApiDocumentResponseBodyData &) = default ;
    GetDataServiceApiDocumentResponseBodyData& operator=(GetDataServiceApiDocumentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiId_ != nullptr
        && this->apiRegisterInfo_ != nullptr && this->apiTimeout_ != nullptr && this->bizUnitName_ != nullptr && this->cacheTime_ != nullptr && this->createType_ != nullptr
        && this->description_ != nullptr && this->directDatasourceId_ != nullptr && this->directDatasourceName_ != nullptr && this->env_ != nullptr && this->groupId_ != nullptr
        && this->groupName_ != nullptr && this->isLogicalTable_ != nullptr && this->isPagedQuery_ != nullptr && this->isSpecialSql_ != nullptr && this->mode_ != nullptr
        && this->name_ != nullptr && this->openCache_ != nullptr && this->projectId_ != nullptr && this->projectName_ != nullptr && this->protocol_ != nullptr
        && this->publicParamList_ != nullptr && this->requestMethod_ != nullptr && this->requestParamList_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceGroupName_ != nullptr
        && this->responseParamList_ != nullptr && this->resultSample_ != nullptr && this->returnLimit_ != nullptr && this->returnType_ != nullptr && this->scriptType_ != nullptr
        && this->sql_ != nullptr && this->tableName_ != nullptr && this->timeout_ != nullptr && this->updateRate_ != nullptr && this->version_ != nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline GetDataServiceApiDocumentResponseBodyData& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiRegisterInfo Field Functions 
    bool hasApiRegisterInfo() const { return this->apiRegisterInfo_ != nullptr;};
    void deleteApiRegisterInfo() { this->apiRegisterInfo_ = nullptr;};
    inline const Models::GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo & apiRegisterInfo() const { DARABONBA_PTR_GET_CONST(apiRegisterInfo_, Models::GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo) };
    inline Models::GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo apiRegisterInfo() { DARABONBA_PTR_GET(apiRegisterInfo_, Models::GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo) };
    inline GetDataServiceApiDocumentResponseBodyData& setApiRegisterInfo(const Models::GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo & apiRegisterInfo) { DARABONBA_PTR_SET_VALUE(apiRegisterInfo_, apiRegisterInfo) };
    inline GetDataServiceApiDocumentResponseBodyData& setApiRegisterInfo(Models::GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo && apiRegisterInfo) { DARABONBA_PTR_SET_RVALUE(apiRegisterInfo_, apiRegisterInfo) };


    // apiTimeout Field Functions 
    bool hasApiTimeout() const { return this->apiTimeout_ != nullptr;};
    void deleteApiTimeout() { this->apiTimeout_ = nullptr;};
    inline int32_t apiTimeout() const { DARABONBA_PTR_GET_DEFAULT(apiTimeout_, 0) };
    inline GetDataServiceApiDocumentResponseBodyData& setApiTimeout(int32_t apiTimeout) { DARABONBA_PTR_SET_VALUE(apiTimeout_, apiTimeout) };


    // bizUnitName Field Functions 
    bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
    void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
    inline string bizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
    inline GetDataServiceApiDocumentResponseBodyData& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


    // cacheTime Field Functions 
    bool hasCacheTime() const { return this->cacheTime_ != nullptr;};
    void deleteCacheTime() { this->cacheTime_ = nullptr;};
    inline string cacheTime() const { DARABONBA_PTR_GET_DEFAULT(cacheTime_, "") };
    inline GetDataServiceApiDocumentResponseBodyData& setCacheTime(string cacheTime) { DARABONBA_PTR_SET_VALUE(cacheTime_, cacheTime) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline int32_t createType() const { DARABONBA_PTR_GET_DEFAULT(createType_, 0) };
    inline GetDataServiceApiDocumentResponseBodyData& setCreateType(int32_t createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDataServiceApiDocumentResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directDatasourceId Field Functions 
    bool hasDirectDatasourceId() const { return this->directDatasourceId_ != nullptr;};
    void deleteDirectDatasourceId() { this->directDatasourceId_ = nullptr;};
    inline int64_t directDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(directDatasourceId_, 0L) };
    inline GetDataServiceApiDocumentResponseBodyData& setDirectDatasourceId(int64_t directDatasourceId) { DARABONBA_PTR_SET_VALUE(directDatasourceId_, directDatasourceId) };


    // directDatasourceName Field Functions 
    bool hasDirectDatasourceName() const { return this->directDatasourceName_ != nullptr;};
    void deleteDirectDatasourceName() { this->directDatasourceName_ = nullptr;};
    inline string directDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(directDatasourceName_, "") };
    inline GetDataServiceApiDocumentResponseBodyData& setDirectDatasourceName(string directDatasourceName) { DARABONBA_PTR_SET_VALUE(directDatasourceName_, directDatasourceName) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline int32_t env() const { DARABONBA_PTR_GET_DEFAULT(env_, 0) };
    inline GetDataServiceApiDocumentResponseBodyData& setEnv(int32_t env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int32_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
    inline GetDataServiceApiDocumentResponseBodyData& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetDataServiceApiDocumentResponseBodyData& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // isLogicalTable Field Functions 
    bool hasIsLogicalTable() const { return this->isLogicalTable_ != nullptr;};
    void deleteIsLogicalTable() { this->isLogicalTable_ = nullptr;};
    inline bool isLogicalTable() const { DARABONBA_PTR_GET_DEFAULT(isLogicalTable_, false) };
    inline GetDataServiceApiDocumentResponseBodyData& setIsLogicalTable(bool isLogicalTable) { DARABONBA_PTR_SET_VALUE(isLogicalTable_, isLogicalTable) };


    // isPagedQuery Field Functions 
    bool hasIsPagedQuery() const { return this->isPagedQuery_ != nullptr;};
    void deleteIsPagedQuery() { this->isPagedQuery_ = nullptr;};
    inline bool isPagedQuery() const { DARABONBA_PTR_GET_DEFAULT(isPagedQuery_, false) };
    inline GetDataServiceApiDocumentResponseBodyData& setIsPagedQuery(bool isPagedQuery) { DARABONBA_PTR_SET_VALUE(isPagedQuery_, isPagedQuery) };


    // isSpecialSql Field Functions 
    bool hasIsSpecialSql() const { return this->isSpecialSql_ != nullptr;};
    void deleteIsSpecialSql() { this->isSpecialSql_ = nullptr;};
    inline bool isSpecialSql() const { DARABONBA_PTR_GET_DEFAULT(isSpecialSql_, false) };
    inline GetDataServiceApiDocumentResponseBodyData& setIsSpecialSql(bool isSpecialSql) { DARABONBA_PTR_SET_VALUE(isSpecialSql_, isSpecialSql) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline int32_t mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
    inline GetDataServiceApiDocumentResponseBodyData& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDataServiceApiDocumentResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // openCache Field Functions 
    bool hasOpenCache() const { return this->openCache_ != nullptr;};
    void deleteOpenCache() { this->openCache_ = nullptr;};
    inline bool openCache() const { DARABONBA_PTR_GET_DEFAULT(openCache_, false) };
    inline GetDataServiceApiDocumentResponseBodyData& setOpenCache(bool openCache) { DARABONBA_PTR_SET_VALUE(openCache_, openCache) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline GetDataServiceApiDocumentResponseBodyData& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetDataServiceApiDocumentResponseBodyData& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline int32_t protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, 0) };
    inline GetDataServiceApiDocumentResponseBodyData& setProtocol(int32_t protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // publicParamList Field Functions 
    bool hasPublicParamList() const { return this->publicParamList_ != nullptr;};
    void deletePublicParamList() { this->publicParamList_ = nullptr;};
    inline const vector<Models::GetDataServiceApiDocumentResponseBodyDataPublicParamList> & publicParamList() const { DARABONBA_PTR_GET_CONST(publicParamList_, vector<Models::GetDataServiceApiDocumentResponseBodyDataPublicParamList>) };
    inline vector<Models::GetDataServiceApiDocumentResponseBodyDataPublicParamList> publicParamList() { DARABONBA_PTR_GET(publicParamList_, vector<Models::GetDataServiceApiDocumentResponseBodyDataPublicParamList>) };
    inline GetDataServiceApiDocumentResponseBodyData& setPublicParamList(const vector<Models::GetDataServiceApiDocumentResponseBodyDataPublicParamList> & publicParamList) { DARABONBA_PTR_SET_VALUE(publicParamList_, publicParamList) };
    inline GetDataServiceApiDocumentResponseBodyData& setPublicParamList(vector<Models::GetDataServiceApiDocumentResponseBodyDataPublicParamList> && publicParamList) { DARABONBA_PTR_SET_RVALUE(publicParamList_, publicParamList) };


    // requestMethod Field Functions 
    bool hasRequestMethod() const { return this->requestMethod_ != nullptr;};
    void deleteRequestMethod() { this->requestMethod_ = nullptr;};
    inline int32_t requestMethod() const { DARABONBA_PTR_GET_DEFAULT(requestMethod_, 0) };
    inline GetDataServiceApiDocumentResponseBodyData& setRequestMethod(int32_t requestMethod) { DARABONBA_PTR_SET_VALUE(requestMethod_, requestMethod) };


    // requestParamList Field Functions 
    bool hasRequestParamList() const { return this->requestParamList_ != nullptr;};
    void deleteRequestParamList() { this->requestParamList_ = nullptr;};
    inline const vector<Models::GetDataServiceApiDocumentResponseBodyDataRequestParamList> & requestParamList() const { DARABONBA_PTR_GET_CONST(requestParamList_, vector<Models::GetDataServiceApiDocumentResponseBodyDataRequestParamList>) };
    inline vector<Models::GetDataServiceApiDocumentResponseBodyDataRequestParamList> requestParamList() { DARABONBA_PTR_GET(requestParamList_, vector<Models::GetDataServiceApiDocumentResponseBodyDataRequestParamList>) };
    inline GetDataServiceApiDocumentResponseBodyData& setRequestParamList(const vector<Models::GetDataServiceApiDocumentResponseBodyDataRequestParamList> & requestParamList) { DARABONBA_PTR_SET_VALUE(requestParamList_, requestParamList) };
    inline GetDataServiceApiDocumentResponseBodyData& setRequestParamList(vector<Models::GetDataServiceApiDocumentResponseBodyDataRequestParamList> && requestParamList) { DARABONBA_PTR_SET_RVALUE(requestParamList_, requestParamList) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetDataServiceApiDocumentResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline GetDataServiceApiDocumentResponseBodyData& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // responseParamList Field Functions 
    bool hasResponseParamList() const { return this->responseParamList_ != nullptr;};
    void deleteResponseParamList() { this->responseParamList_ = nullptr;};
    inline const vector<Models::GetDataServiceApiDocumentResponseBodyDataResponseParamList> & responseParamList() const { DARABONBA_PTR_GET_CONST(responseParamList_, vector<Models::GetDataServiceApiDocumentResponseBodyDataResponseParamList>) };
    inline vector<Models::GetDataServiceApiDocumentResponseBodyDataResponseParamList> responseParamList() { DARABONBA_PTR_GET(responseParamList_, vector<Models::GetDataServiceApiDocumentResponseBodyDataResponseParamList>) };
    inline GetDataServiceApiDocumentResponseBodyData& setResponseParamList(const vector<Models::GetDataServiceApiDocumentResponseBodyDataResponseParamList> & responseParamList) { DARABONBA_PTR_SET_VALUE(responseParamList_, responseParamList) };
    inline GetDataServiceApiDocumentResponseBodyData& setResponseParamList(vector<Models::GetDataServiceApiDocumentResponseBodyDataResponseParamList> && responseParamList) { DARABONBA_PTR_SET_RVALUE(responseParamList_, responseParamList) };


    // resultSample Field Functions 
    bool hasResultSample() const { return this->resultSample_ != nullptr;};
    void deleteResultSample() { this->resultSample_ = nullptr;};
    inline string resultSample() const { DARABONBA_PTR_GET_DEFAULT(resultSample_, "") };
    inline GetDataServiceApiDocumentResponseBodyData& setResultSample(string resultSample) { DARABONBA_PTR_SET_VALUE(resultSample_, resultSample) };


    // returnLimit Field Functions 
    bool hasReturnLimit() const { return this->returnLimit_ != nullptr;};
    void deleteReturnLimit() { this->returnLimit_ = nullptr;};
    inline int32_t returnLimit() const { DARABONBA_PTR_GET_DEFAULT(returnLimit_, 0) };
    inline GetDataServiceApiDocumentResponseBodyData& setReturnLimit(int32_t returnLimit) { DARABONBA_PTR_SET_VALUE(returnLimit_, returnLimit) };


    // returnType Field Functions 
    bool hasReturnType() const { return this->returnType_ != nullptr;};
    void deleteReturnType() { this->returnType_ = nullptr;};
    inline int32_t returnType() const { DARABONBA_PTR_GET_DEFAULT(returnType_, 0) };
    inline GetDataServiceApiDocumentResponseBodyData& setReturnType(int32_t returnType) { DARABONBA_PTR_SET_VALUE(returnType_, returnType) };


    // scriptType Field Functions 
    bool hasScriptType() const { return this->scriptType_ != nullptr;};
    void deleteScriptType() { this->scriptType_ = nullptr;};
    inline string scriptType() const { DARABONBA_PTR_GET_DEFAULT(scriptType_, "") };
    inline GetDataServiceApiDocumentResponseBodyData& setScriptType(string scriptType) { DARABONBA_PTR_SET_VALUE(scriptType_, scriptType) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline GetDataServiceApiDocumentResponseBodyData& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetDataServiceApiDocumentResponseBodyData& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline string timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, "") };
    inline GetDataServiceApiDocumentResponseBodyData& setTimeout(string timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // updateRate Field Functions 
    bool hasUpdateRate() const { return this->updateRate_ != nullptr;};
    void deleteUpdateRate() { this->updateRate_ = nullptr;};
    inline int32_t updateRate() const { DARABONBA_PTR_GET_DEFAULT(updateRate_, 0) };
    inline GetDataServiceApiDocumentResponseBodyData& setUpdateRate(int32_t updateRate) { DARABONBA_PTR_SET_VALUE(updateRate_, updateRate) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetDataServiceApiDocumentResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<int64_t> apiId_ = nullptr;
    std::shared_ptr<Models::GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo> apiRegisterInfo_ = nullptr;
    std::shared_ptr<int32_t> apiTimeout_ = nullptr;
    std::shared_ptr<string> bizUnitName_ = nullptr;
    std::shared_ptr<string> cacheTime_ = nullptr;
    std::shared_ptr<int32_t> createType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> directDatasourceId_ = nullptr;
    std::shared_ptr<string> directDatasourceName_ = nullptr;
    std::shared_ptr<int32_t> env_ = nullptr;
    std::shared_ptr<int32_t> groupId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<bool> isLogicalTable_ = nullptr;
    std::shared_ptr<bool> isPagedQuery_ = nullptr;
    std::shared_ptr<bool> isSpecialSql_ = nullptr;
    std::shared_ptr<int32_t> mode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> openCache_ = nullptr;
    std::shared_ptr<int32_t> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<int32_t> protocol_ = nullptr;
    std::shared_ptr<vector<Models::GetDataServiceApiDocumentResponseBodyDataPublicParamList>> publicParamList_ = nullptr;
    std::shared_ptr<int32_t> requestMethod_ = nullptr;
    std::shared_ptr<vector<Models::GetDataServiceApiDocumentResponseBodyDataRequestParamList>> requestParamList_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    std::shared_ptr<vector<Models::GetDataServiceApiDocumentResponseBodyDataResponseParamList>> responseParamList_ = nullptr;
    std::shared_ptr<string> resultSample_ = nullptr;
    std::shared_ptr<int32_t> returnLimit_ = nullptr;
    std::shared_ptr<int32_t> returnType_ = nullptr;
    std::shared_ptr<string> scriptType_ = nullptr;
    std::shared_ptr<string> sql_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> timeout_ = nullptr;
    std::shared_ptr<int32_t> updateRate_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
