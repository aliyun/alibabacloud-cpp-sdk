// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIBYAPPRESPONSEBODYLISTRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIBYAPPRESPONSEBODYLISTRESULTDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApiByAppResponseBodyListResultDataPublicParamList.hpp>
#include <alibabacloud/models/ListApiByAppResponseBodyListResultDataRegisterApi.hpp>
#include <alibabacloud/models/ListApiByAppResponseBodyListResultDataRequestParamList.hpp>
#include <alibabacloud/models/ListApiByAppResponseBodyListResultDataResponseParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListApiByAppResponseBodyListResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiByAppResponseBodyListResultData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListApiByAppResponseBodyListResultData& obj) { 
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
    ListApiByAppResponseBodyListResultData() = default ;
    ListApiByAppResponseBodyListResultData(const ListApiByAppResponseBodyListResultData &) = default ;
    ListApiByAppResponseBodyListResultData(ListApiByAppResponseBodyListResultData &&) = default ;
    ListApiByAppResponseBodyListResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiByAppResponseBodyListResultData() = default ;
    ListApiByAppResponseBodyListResultData& operator=(const ListApiByAppResponseBodyListResultData &) = default ;
    ListApiByAppResponseBodyListResultData& operator=(ListApiByAppResponseBodyListResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiNo_ == nullptr
        && return this->apiTimeout_ == nullptr && return this->appName_ == nullptr && return this->bizModuleEnName_ == nullptr && return this->cacheSwitch_ == nullptr && return this->cacheTime_ == nullptr
        && return this->createType_ == nullptr && return this->dbEnv_ == nullptr && return this->description_ == nullptr && return this->directDatasourceId_ == nullptr && return this->directDatasourceName_ == nullptr
        && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->id_ == nullptr && return this->isLogicalTable_ == nullptr && return this->isPagedQuery_ == nullptr
        && return this->maxReturnNum_ == nullptr && return this->modelType_ == nullptr && return this->name_ == nullptr && return this->projId_ == nullptr && return this->projName_ == nullptr
        && return this->protocol_ == nullptr && return this->protocolName_ == nullptr && return this->publicParamList_ == nullptr && return this->registerApi_ == nullptr && return this->requestMethod_ == nullptr
        && return this->requestMethodName_ == nullptr && return this->requestParamList_ == nullptr && return this->resourceGroupName_ == nullptr && return this->responseParamList_ == nullptr && return this->resultSample_ == nullptr
        && return this->returnType_ == nullptr && return this->returnTypeName_ == nullptr && return this->rsGrpId_ == nullptr && return this->scriptType_ == nullptr && return this->specialSql_ == nullptr
        && return this->sqlStatement_ == nullptr && return this->tableName_ == nullptr && return this->timeout_ == nullptr && return this->updateRate_ == nullptr && return this->updateRateName_ == nullptr
        && return this->version_ == nullptr; };
    // apiNo Field Functions 
    bool hasApiNo() const { return this->apiNo_ != nullptr;};
    void deleteApiNo() { this->apiNo_ = nullptr;};
    inline int64_t apiNo() const { DARABONBA_PTR_GET_DEFAULT(apiNo_, 0L) };
    inline ListApiByAppResponseBodyListResultData& setApiNo(int64_t apiNo) { DARABONBA_PTR_SET_VALUE(apiNo_, apiNo) };


    // apiTimeout Field Functions 
    bool hasApiTimeout() const { return this->apiTimeout_ != nullptr;};
    void deleteApiTimeout() { this->apiTimeout_ = nullptr;};
    inline int64_t apiTimeout() const { DARABONBA_PTR_GET_DEFAULT(apiTimeout_, 0L) };
    inline ListApiByAppResponseBodyListResultData& setApiTimeout(int64_t apiTimeout) { DARABONBA_PTR_SET_VALUE(apiTimeout_, apiTimeout) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListApiByAppResponseBodyListResultData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bizModuleEnName Field Functions 
    bool hasBizModuleEnName() const { return this->bizModuleEnName_ != nullptr;};
    void deleteBizModuleEnName() { this->bizModuleEnName_ = nullptr;};
    inline string bizModuleEnName() const { DARABONBA_PTR_GET_DEFAULT(bizModuleEnName_, "") };
    inline ListApiByAppResponseBodyListResultData& setBizModuleEnName(string bizModuleEnName) { DARABONBA_PTR_SET_VALUE(bizModuleEnName_, bizModuleEnName) };


    // cacheSwitch Field Functions 
    bool hasCacheSwitch() const { return this->cacheSwitch_ != nullptr;};
    void deleteCacheSwitch() { this->cacheSwitch_ = nullptr;};
    inline string cacheSwitch() const { DARABONBA_PTR_GET_DEFAULT(cacheSwitch_, "") };
    inline ListApiByAppResponseBodyListResultData& setCacheSwitch(string cacheSwitch) { DARABONBA_PTR_SET_VALUE(cacheSwitch_, cacheSwitch) };


    // cacheTime Field Functions 
    bool hasCacheTime() const { return this->cacheTime_ != nullptr;};
    void deleteCacheTime() { this->cacheTime_ = nullptr;};
    inline string cacheTime() const { DARABONBA_PTR_GET_DEFAULT(cacheTime_, "") };
    inline ListApiByAppResponseBodyListResultData& setCacheTime(string cacheTime) { DARABONBA_PTR_SET_VALUE(cacheTime_, cacheTime) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline int64_t createType() const { DARABONBA_PTR_GET_DEFAULT(createType_, 0L) };
    inline ListApiByAppResponseBodyListResultData& setCreateType(int64_t createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // dbEnv Field Functions 
    bool hasDbEnv() const { return this->dbEnv_ != nullptr;};
    void deleteDbEnv() { this->dbEnv_ = nullptr;};
    inline int64_t dbEnv() const { DARABONBA_PTR_GET_DEFAULT(dbEnv_, 0L) };
    inline ListApiByAppResponseBodyListResultData& setDbEnv(int64_t dbEnv) { DARABONBA_PTR_SET_VALUE(dbEnv_, dbEnv) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListApiByAppResponseBodyListResultData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directDatasourceId Field Functions 
    bool hasDirectDatasourceId() const { return this->directDatasourceId_ != nullptr;};
    void deleteDirectDatasourceId() { this->directDatasourceId_ = nullptr;};
    inline int64_t directDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(directDatasourceId_, 0L) };
    inline ListApiByAppResponseBodyListResultData& setDirectDatasourceId(int64_t directDatasourceId) { DARABONBA_PTR_SET_VALUE(directDatasourceId_, directDatasourceId) };


    // directDatasourceName Field Functions 
    bool hasDirectDatasourceName() const { return this->directDatasourceName_ != nullptr;};
    void deleteDirectDatasourceName() { this->directDatasourceName_ = nullptr;};
    inline string directDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(directDatasourceName_, "") };
    inline ListApiByAppResponseBodyListResultData& setDirectDatasourceName(string directDatasourceName) { DARABONBA_PTR_SET_VALUE(directDatasourceName_, directDatasourceName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ListApiByAppResponseBodyListResultData& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListApiByAppResponseBodyListResultData& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListApiByAppResponseBodyListResultData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isLogicalTable Field Functions 
    bool hasIsLogicalTable() const { return this->isLogicalTable_ != nullptr;};
    void deleteIsLogicalTable() { this->isLogicalTable_ = nullptr;};
    inline bool isLogicalTable() const { DARABONBA_PTR_GET_DEFAULT(isLogicalTable_, false) };
    inline ListApiByAppResponseBodyListResultData& setIsLogicalTable(bool isLogicalTable) { DARABONBA_PTR_SET_VALUE(isLogicalTable_, isLogicalTable) };


    // isPagedQuery Field Functions 
    bool hasIsPagedQuery() const { return this->isPagedQuery_ != nullptr;};
    void deleteIsPagedQuery() { this->isPagedQuery_ = nullptr;};
    inline int64_t isPagedQuery() const { DARABONBA_PTR_GET_DEFAULT(isPagedQuery_, 0L) };
    inline ListApiByAppResponseBodyListResultData& setIsPagedQuery(int64_t isPagedQuery) { DARABONBA_PTR_SET_VALUE(isPagedQuery_, isPagedQuery) };


    // maxReturnNum Field Functions 
    bool hasMaxReturnNum() const { return this->maxReturnNum_ != nullptr;};
    void deleteMaxReturnNum() { this->maxReturnNum_ = nullptr;};
    inline int64_t maxReturnNum() const { DARABONBA_PTR_GET_DEFAULT(maxReturnNum_, 0L) };
    inline ListApiByAppResponseBodyListResultData& setMaxReturnNum(int64_t maxReturnNum) { DARABONBA_PTR_SET_VALUE(maxReturnNum_, maxReturnNum) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline int64_t modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, 0L) };
    inline ListApiByAppResponseBodyListResultData& setModelType(int64_t modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListApiByAppResponseBodyListResultData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projId Field Functions 
    bool hasProjId() const { return this->projId_ != nullptr;};
    void deleteProjId() { this->projId_ = nullptr;};
    inline int64_t projId() const { DARABONBA_PTR_GET_DEFAULT(projId_, 0L) };
    inline ListApiByAppResponseBodyListResultData& setProjId(int64_t projId) { DARABONBA_PTR_SET_VALUE(projId_, projId) };


    // projName Field Functions 
    bool hasProjName() const { return this->projName_ != nullptr;};
    void deleteProjName() { this->projName_ = nullptr;};
    inline string projName() const { DARABONBA_PTR_GET_DEFAULT(projName_, "") };
    inline ListApiByAppResponseBodyListResultData& setProjName(string projName) { DARABONBA_PTR_SET_VALUE(projName_, projName) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline int64_t protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, 0L) };
    inline ListApiByAppResponseBodyListResultData& setProtocol(int64_t protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // protocolName Field Functions 
    bool hasProtocolName() const { return this->protocolName_ != nullptr;};
    void deleteProtocolName() { this->protocolName_ = nullptr;};
    inline string protocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
    inline ListApiByAppResponseBodyListResultData& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


    // publicParamList Field Functions 
    bool hasPublicParamList() const { return this->publicParamList_ != nullptr;};
    void deletePublicParamList() { this->publicParamList_ = nullptr;};
    inline const vector<Models::ListApiByAppResponseBodyListResultDataPublicParamList> & publicParamList() const { DARABONBA_PTR_GET_CONST(publicParamList_, vector<Models::ListApiByAppResponseBodyListResultDataPublicParamList>) };
    inline vector<Models::ListApiByAppResponseBodyListResultDataPublicParamList> publicParamList() { DARABONBA_PTR_GET(publicParamList_, vector<Models::ListApiByAppResponseBodyListResultDataPublicParamList>) };
    inline ListApiByAppResponseBodyListResultData& setPublicParamList(const vector<Models::ListApiByAppResponseBodyListResultDataPublicParamList> & publicParamList) { DARABONBA_PTR_SET_VALUE(publicParamList_, publicParamList) };
    inline ListApiByAppResponseBodyListResultData& setPublicParamList(vector<Models::ListApiByAppResponseBodyListResultDataPublicParamList> && publicParamList) { DARABONBA_PTR_SET_RVALUE(publicParamList_, publicParamList) };


    // registerApi Field Functions 
    bool hasRegisterApi() const { return this->registerApi_ != nullptr;};
    void deleteRegisterApi() { this->registerApi_ = nullptr;};
    inline const Models::ListApiByAppResponseBodyListResultDataRegisterApi & registerApi() const { DARABONBA_PTR_GET_CONST(registerApi_, Models::ListApiByAppResponseBodyListResultDataRegisterApi) };
    inline Models::ListApiByAppResponseBodyListResultDataRegisterApi registerApi() { DARABONBA_PTR_GET(registerApi_, Models::ListApiByAppResponseBodyListResultDataRegisterApi) };
    inline ListApiByAppResponseBodyListResultData& setRegisterApi(const Models::ListApiByAppResponseBodyListResultDataRegisterApi & registerApi) { DARABONBA_PTR_SET_VALUE(registerApi_, registerApi) };
    inline ListApiByAppResponseBodyListResultData& setRegisterApi(Models::ListApiByAppResponseBodyListResultDataRegisterApi && registerApi) { DARABONBA_PTR_SET_RVALUE(registerApi_, registerApi) };


    // requestMethod Field Functions 
    bool hasRequestMethod() const { return this->requestMethod_ != nullptr;};
    void deleteRequestMethod() { this->requestMethod_ = nullptr;};
    inline int64_t requestMethod() const { DARABONBA_PTR_GET_DEFAULT(requestMethod_, 0L) };
    inline ListApiByAppResponseBodyListResultData& setRequestMethod(int64_t requestMethod) { DARABONBA_PTR_SET_VALUE(requestMethod_, requestMethod) };


    // requestMethodName Field Functions 
    bool hasRequestMethodName() const { return this->requestMethodName_ != nullptr;};
    void deleteRequestMethodName() { this->requestMethodName_ = nullptr;};
    inline string requestMethodName() const { DARABONBA_PTR_GET_DEFAULT(requestMethodName_, "") };
    inline ListApiByAppResponseBodyListResultData& setRequestMethodName(string requestMethodName) { DARABONBA_PTR_SET_VALUE(requestMethodName_, requestMethodName) };


    // requestParamList Field Functions 
    bool hasRequestParamList() const { return this->requestParamList_ != nullptr;};
    void deleteRequestParamList() { this->requestParamList_ = nullptr;};
    inline const vector<Models::ListApiByAppResponseBodyListResultDataRequestParamList> & requestParamList() const { DARABONBA_PTR_GET_CONST(requestParamList_, vector<Models::ListApiByAppResponseBodyListResultDataRequestParamList>) };
    inline vector<Models::ListApiByAppResponseBodyListResultDataRequestParamList> requestParamList() { DARABONBA_PTR_GET(requestParamList_, vector<Models::ListApiByAppResponseBodyListResultDataRequestParamList>) };
    inline ListApiByAppResponseBodyListResultData& setRequestParamList(const vector<Models::ListApiByAppResponseBodyListResultDataRequestParamList> & requestParamList) { DARABONBA_PTR_SET_VALUE(requestParamList_, requestParamList) };
    inline ListApiByAppResponseBodyListResultData& setRequestParamList(vector<Models::ListApiByAppResponseBodyListResultDataRequestParamList> && requestParamList) { DARABONBA_PTR_SET_RVALUE(requestParamList_, requestParamList) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline ListApiByAppResponseBodyListResultData& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // responseParamList Field Functions 
    bool hasResponseParamList() const { return this->responseParamList_ != nullptr;};
    void deleteResponseParamList() { this->responseParamList_ = nullptr;};
    inline const vector<Models::ListApiByAppResponseBodyListResultDataResponseParamList> & responseParamList() const { DARABONBA_PTR_GET_CONST(responseParamList_, vector<Models::ListApiByAppResponseBodyListResultDataResponseParamList>) };
    inline vector<Models::ListApiByAppResponseBodyListResultDataResponseParamList> responseParamList() { DARABONBA_PTR_GET(responseParamList_, vector<Models::ListApiByAppResponseBodyListResultDataResponseParamList>) };
    inline ListApiByAppResponseBodyListResultData& setResponseParamList(const vector<Models::ListApiByAppResponseBodyListResultDataResponseParamList> & responseParamList) { DARABONBA_PTR_SET_VALUE(responseParamList_, responseParamList) };
    inline ListApiByAppResponseBodyListResultData& setResponseParamList(vector<Models::ListApiByAppResponseBodyListResultDataResponseParamList> && responseParamList) { DARABONBA_PTR_SET_RVALUE(responseParamList_, responseParamList) };


    // resultSample Field Functions 
    bool hasResultSample() const { return this->resultSample_ != nullptr;};
    void deleteResultSample() { this->resultSample_ = nullptr;};
    inline string resultSample() const { DARABONBA_PTR_GET_DEFAULT(resultSample_, "") };
    inline ListApiByAppResponseBodyListResultData& setResultSample(string resultSample) { DARABONBA_PTR_SET_VALUE(resultSample_, resultSample) };


    // returnType Field Functions 
    bool hasReturnType() const { return this->returnType_ != nullptr;};
    void deleteReturnType() { this->returnType_ = nullptr;};
    inline int64_t returnType() const { DARABONBA_PTR_GET_DEFAULT(returnType_, 0L) };
    inline ListApiByAppResponseBodyListResultData& setReturnType(int64_t returnType) { DARABONBA_PTR_SET_VALUE(returnType_, returnType) };


    // returnTypeName Field Functions 
    bool hasReturnTypeName() const { return this->returnTypeName_ != nullptr;};
    void deleteReturnTypeName() { this->returnTypeName_ = nullptr;};
    inline string returnTypeName() const { DARABONBA_PTR_GET_DEFAULT(returnTypeName_, "") };
    inline ListApiByAppResponseBodyListResultData& setReturnTypeName(string returnTypeName) { DARABONBA_PTR_SET_VALUE(returnTypeName_, returnTypeName) };


    // rsGrpId Field Functions 
    bool hasRsGrpId() const { return this->rsGrpId_ != nullptr;};
    void deleteRsGrpId() { this->rsGrpId_ = nullptr;};
    inline string rsGrpId() const { DARABONBA_PTR_GET_DEFAULT(rsGrpId_, "") };
    inline ListApiByAppResponseBodyListResultData& setRsGrpId(string rsGrpId) { DARABONBA_PTR_SET_VALUE(rsGrpId_, rsGrpId) };


    // scriptType Field Functions 
    bool hasScriptType() const { return this->scriptType_ != nullptr;};
    void deleteScriptType() { this->scriptType_ = nullptr;};
    inline string scriptType() const { DARABONBA_PTR_GET_DEFAULT(scriptType_, "") };
    inline ListApiByAppResponseBodyListResultData& setScriptType(string scriptType) { DARABONBA_PTR_SET_VALUE(scriptType_, scriptType) };


    // specialSql Field Functions 
    bool hasSpecialSql() const { return this->specialSql_ != nullptr;};
    void deleteSpecialSql() { this->specialSql_ = nullptr;};
    inline int64_t specialSql() const { DARABONBA_PTR_GET_DEFAULT(specialSql_, 0L) };
    inline ListApiByAppResponseBodyListResultData& setSpecialSql(int64_t specialSql) { DARABONBA_PTR_SET_VALUE(specialSql_, specialSql) };


    // sqlStatement Field Functions 
    bool hasSqlStatement() const { return this->sqlStatement_ != nullptr;};
    void deleteSqlStatement() { this->sqlStatement_ = nullptr;};
    inline string sqlStatement() const { DARABONBA_PTR_GET_DEFAULT(sqlStatement_, "") };
    inline ListApiByAppResponseBodyListResultData& setSqlStatement(string sqlStatement) { DARABONBA_PTR_SET_VALUE(sqlStatement_, sqlStatement) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListApiByAppResponseBodyListResultData& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline string timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, "") };
    inline ListApiByAppResponseBodyListResultData& setTimeout(string timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // updateRate Field Functions 
    bool hasUpdateRate() const { return this->updateRate_ != nullptr;};
    void deleteUpdateRate() { this->updateRate_ = nullptr;};
    inline int64_t updateRate() const { DARABONBA_PTR_GET_DEFAULT(updateRate_, 0L) };
    inline ListApiByAppResponseBodyListResultData& setUpdateRate(int64_t updateRate) { DARABONBA_PTR_SET_VALUE(updateRate_, updateRate) };


    // updateRateName Field Functions 
    bool hasUpdateRateName() const { return this->updateRateName_ != nullptr;};
    void deleteUpdateRateName() { this->updateRateName_ = nullptr;};
    inline string updateRateName() const { DARABONBA_PTR_GET_DEFAULT(updateRateName_, "") };
    inline ListApiByAppResponseBodyListResultData& setUpdateRateName(string updateRateName) { DARABONBA_PTR_SET_VALUE(updateRateName_, updateRateName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListApiByAppResponseBodyListResultData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<int64_t> apiNo_ = nullptr;
    std::shared_ptr<int64_t> apiTimeout_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> bizModuleEnName_ = nullptr;
    std::shared_ptr<string> cacheSwitch_ = nullptr;
    std::shared_ptr<string> cacheTime_ = nullptr;
    std::shared_ptr<int64_t> createType_ = nullptr;
    std::shared_ptr<int64_t> dbEnv_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> directDatasourceId_ = nullptr;
    std::shared_ptr<string> directDatasourceName_ = nullptr;
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<bool> isLogicalTable_ = nullptr;
    std::shared_ptr<int64_t> isPagedQuery_ = nullptr;
    std::shared_ptr<int64_t> maxReturnNum_ = nullptr;
    std::shared_ptr<int64_t> modelType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> projId_ = nullptr;
    std::shared_ptr<string> projName_ = nullptr;
    std::shared_ptr<int64_t> protocol_ = nullptr;
    std::shared_ptr<string> protocolName_ = nullptr;
    // -
    std::shared_ptr<vector<Models::ListApiByAppResponseBodyListResultDataPublicParamList>> publicParamList_ = nullptr;
    std::shared_ptr<Models::ListApiByAppResponseBodyListResultDataRegisterApi> registerApi_ = nullptr;
    std::shared_ptr<int64_t> requestMethod_ = nullptr;
    std::shared_ptr<string> requestMethodName_ = nullptr;
    // -
    std::shared_ptr<vector<Models::ListApiByAppResponseBodyListResultDataRequestParamList>> requestParamList_ = nullptr;
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    // -
    std::shared_ptr<vector<Models::ListApiByAppResponseBodyListResultDataResponseParamList>> responseParamList_ = nullptr;
    std::shared_ptr<string> resultSample_ = nullptr;
    std::shared_ptr<int64_t> returnType_ = nullptr;
    std::shared_ptr<string> returnTypeName_ = nullptr;
    std::shared_ptr<string> rsGrpId_ = nullptr;
    std::shared_ptr<string> scriptType_ = nullptr;
    std::shared_ptr<int64_t> specialSql_ = nullptr;
    std::shared_ptr<string> sqlStatement_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> timeout_ = nullptr;
    std::shared_ptr<int64_t> updateRate_ = nullptr;
    std::shared_ptr<string> updateRateName_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
