// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPIDOCUMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPIDOCUMENTRESPONSEBODY_HPP_
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
  class GetDataServiceApiDocumentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiDocumentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiDocumentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataServiceApiDocumentResponseBody() = default ;
    GetDataServiceApiDocumentResponseBody(const GetDataServiceApiDocumentResponseBody &) = default ;
    GetDataServiceApiDocumentResponseBody(GetDataServiceApiDocumentResponseBody &&) = default ;
    GetDataServiceApiDocumentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiDocumentResponseBody() = default ;
    GetDataServiceApiDocumentResponseBody& operator=(const GetDataServiceApiDocumentResponseBody &) = default ;
    GetDataServiceApiDocumentResponseBody& operator=(GetDataServiceApiDocumentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Sample, sample_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ResponseParamList& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Sample, sample_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->sample_ == nullptr && this->type_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ResponseParamList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ResponseParamList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // sample Field Functions 
        bool hasSample() const { return this->sample_ != nullptr;};
        void deleteSample() { this->sample_ = nullptr;};
        inline string getSample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
        inline ResponseParamList& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ResponseParamList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> sample_ {};
        shared_ptr<string> type_ {};
      };

      class RequestParamList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RequestParamList& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(IsRequired, isRequired_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Sample, sample_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, RequestParamList& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(IsRequired, isRequired_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Sample, sample_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->description_ == nullptr && this->isRequired_ == nullptr && this->name_ == nullptr && this->sample_ == nullptr && this->type_ == nullptr; };
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


        // isRequired Field Functions 
        bool hasIsRequired() const { return this->isRequired_ != nullptr;};
        void deleteIsRequired() { this->isRequired_ = nullptr;};
        inline bool getIsRequired() const { DARABONBA_PTR_GET_DEFAULT(isRequired_, false) };
        inline RequestParamList& setIsRequired(bool isRequired) { DARABONBA_PTR_SET_VALUE(isRequired_, isRequired) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RequestParamList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // sample Field Functions 
        bool hasSample() const { return this->sample_ != nullptr;};
        void deleteSample() { this->sample_ = nullptr;};
        inline string getSample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
        inline RequestParamList& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline RequestParamList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> defaultValue_ {};
        shared_ptr<string> description_ {};
        shared_ptr<bool> isRequired_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> sample_ {};
        shared_ptr<string> type_ {};
      };

      class PublicParamList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PublicParamList& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(IsRequired, isRequired_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Sample, sample_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, PublicParamList& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(IsRequired, isRequired_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Sample, sample_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        virtual bool empty() const override { return this->description_ == nullptr
        && this->isRequired_ == nullptr && this->name_ == nullptr && this->sample_ == nullptr && this->type_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PublicParamList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // isRequired Field Functions 
        bool hasIsRequired() const { return this->isRequired_ != nullptr;};
        void deleteIsRequired() { this->isRequired_ = nullptr;};
        inline bool getIsRequired() const { DARABONBA_PTR_GET_DEFAULT(isRequired_, false) };
        inline PublicParamList& setIsRequired(bool isRequired) { DARABONBA_PTR_SET_VALUE(isRequired_, isRequired) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PublicParamList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // sample Field Functions 
        bool hasSample() const { return this->sample_ != nullptr;};
        void deleteSample() { this->sample_ = nullptr;};
        inline string getSample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
        inline PublicParamList& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline PublicParamList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<bool> isRequired_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> sample_ {};
        shared_ptr<string> type_ {};
      };

      class ApiRegisterInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiRegisterInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AuthType, authType_);
          DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
          DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
          DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, ApiRegisterInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthType, authType_);
          DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
          DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
          DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        ApiRegisterInfo() = default ;
        ApiRegisterInfo(const ApiRegisterInfo &) = default ;
        ApiRegisterInfo(ApiRegisterInfo &&) = default ;
        ApiRegisterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiRegisterInfo() = default ;
        ApiRegisterInfo& operator=(const ApiRegisterInfo &) = default ;
        ApiRegisterInfo& operator=(ApiRegisterInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authType_ == nullptr
        && this->datasourceId_ == nullptr && this->datasourceName_ == nullptr && this->httpMethod_ == nullptr && this->mode_ == nullptr && this->path_ == nullptr
        && this->protocol_ == nullptr && this->timeout_ == nullptr && this->url_ == nullptr; };
        // authType Field Functions 
        bool hasAuthType() const { return this->authType_ != nullptr;};
        void deleteAuthType() { this->authType_ = nullptr;};
        inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
        inline ApiRegisterInfo& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


        // datasourceId Field Functions 
        bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
        void deleteDatasourceId() { this->datasourceId_ = nullptr;};
        inline string getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, "") };
        inline ApiRegisterInfo& setDatasourceId(string datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


        // datasourceName Field Functions 
        bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
        void deleteDatasourceName() { this->datasourceName_ = nullptr;};
        inline string getDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
        inline ApiRegisterInfo& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


        // httpMethod Field Functions 
        bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
        void deleteHttpMethod() { this->httpMethod_ = nullptr;};
        inline int32_t getHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, 0) };
        inline ApiRegisterInfo& setHttpMethod(int32_t httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline int32_t getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
        inline ApiRegisterInfo& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline ApiRegisterInfo& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline ApiRegisterInfo& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
        inline ApiRegisterInfo& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline ApiRegisterInfo& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> authType_ {};
        shared_ptr<string> datasourceId_ {};
        shared_ptr<string> datasourceName_ {};
        shared_ptr<int32_t> httpMethod_ {};
        shared_ptr<int32_t> mode_ {};
        shared_ptr<string> path_ {};
        shared_ptr<string> protocol_ {};
        shared_ptr<int32_t> timeout_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiRegisterInfo_ == nullptr && this->apiTimeout_ == nullptr && this->bizUnitName_ == nullptr && this->cacheTime_ == nullptr && this->createType_ == nullptr
        && this->description_ == nullptr && this->directDatasourceId_ == nullptr && this->directDatasourceName_ == nullptr && this->env_ == nullptr && this->groupId_ == nullptr
        && this->groupName_ == nullptr && this->isLogicalTable_ == nullptr && this->isPagedQuery_ == nullptr && this->isSpecialSql_ == nullptr && this->mode_ == nullptr
        && this->name_ == nullptr && this->openCache_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr && this->protocol_ == nullptr
        && this->publicParamList_ == nullptr && this->requestMethod_ == nullptr && this->requestParamList_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceGroupName_ == nullptr
        && this->responseParamList_ == nullptr && this->resultSample_ == nullptr && this->returnLimit_ == nullptr && this->returnType_ == nullptr && this->scriptType_ == nullptr
        && this->sql_ == nullptr && this->tableName_ == nullptr && this->timeout_ == nullptr && this->updateRate_ == nullptr && this->version_ == nullptr; };
      // apiId Field Functions 
      bool hasApiId() const { return this->apiId_ != nullptr;};
      void deleteApiId() { this->apiId_ = nullptr;};
      inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
      inline Data& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


      // apiRegisterInfo Field Functions 
      bool hasApiRegisterInfo() const { return this->apiRegisterInfo_ != nullptr;};
      void deleteApiRegisterInfo() { this->apiRegisterInfo_ = nullptr;};
      inline const Data::ApiRegisterInfo & getApiRegisterInfo() const { DARABONBA_PTR_GET_CONST(apiRegisterInfo_, Data::ApiRegisterInfo) };
      inline Data::ApiRegisterInfo getApiRegisterInfo() { DARABONBA_PTR_GET(apiRegisterInfo_, Data::ApiRegisterInfo) };
      inline Data& setApiRegisterInfo(const Data::ApiRegisterInfo & apiRegisterInfo) { DARABONBA_PTR_SET_VALUE(apiRegisterInfo_, apiRegisterInfo) };
      inline Data& setApiRegisterInfo(Data::ApiRegisterInfo && apiRegisterInfo) { DARABONBA_PTR_SET_RVALUE(apiRegisterInfo_, apiRegisterInfo) };


      // apiTimeout Field Functions 
      bool hasApiTimeout() const { return this->apiTimeout_ != nullptr;};
      void deleteApiTimeout() { this->apiTimeout_ = nullptr;};
      inline int32_t getApiTimeout() const { DARABONBA_PTR_GET_DEFAULT(apiTimeout_, 0) };
      inline Data& setApiTimeout(int32_t apiTimeout) { DARABONBA_PTR_SET_VALUE(apiTimeout_, apiTimeout) };


      // bizUnitName Field Functions 
      bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
      void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
      inline string getBizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
      inline Data& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


      // cacheTime Field Functions 
      bool hasCacheTime() const { return this->cacheTime_ != nullptr;};
      void deleteCacheTime() { this->cacheTime_ = nullptr;};
      inline string getCacheTime() const { DARABONBA_PTR_GET_DEFAULT(cacheTime_, "") };
      inline Data& setCacheTime(string cacheTime) { DARABONBA_PTR_SET_VALUE(cacheTime_, cacheTime) };


      // createType Field Functions 
      bool hasCreateType() const { return this->createType_ != nullptr;};
      void deleteCreateType() { this->createType_ = nullptr;};
      inline int32_t getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, 0) };
      inline Data& setCreateType(int32_t createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


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


      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline int32_t getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, 0) };
      inline Data& setEnv(int32_t env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int32_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
      inline Data& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Data& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // isLogicalTable Field Functions 
      bool hasIsLogicalTable() const { return this->isLogicalTable_ != nullptr;};
      void deleteIsLogicalTable() { this->isLogicalTable_ = nullptr;};
      inline bool getIsLogicalTable() const { DARABONBA_PTR_GET_DEFAULT(isLogicalTable_, false) };
      inline Data& setIsLogicalTable(bool isLogicalTable) { DARABONBA_PTR_SET_VALUE(isLogicalTable_, isLogicalTable) };


      // isPagedQuery Field Functions 
      bool hasIsPagedQuery() const { return this->isPagedQuery_ != nullptr;};
      void deleteIsPagedQuery() { this->isPagedQuery_ = nullptr;};
      inline bool getIsPagedQuery() const { DARABONBA_PTR_GET_DEFAULT(isPagedQuery_, false) };
      inline Data& setIsPagedQuery(bool isPagedQuery) { DARABONBA_PTR_SET_VALUE(isPagedQuery_, isPagedQuery) };


      // isSpecialSql Field Functions 
      bool hasIsSpecialSql() const { return this->isSpecialSql_ != nullptr;};
      void deleteIsSpecialSql() { this->isSpecialSql_ = nullptr;};
      inline bool getIsSpecialSql() const { DARABONBA_PTR_GET_DEFAULT(isSpecialSql_, false) };
      inline Data& setIsSpecialSql(bool isSpecialSql) { DARABONBA_PTR_SET_VALUE(isSpecialSql_, isSpecialSql) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline int32_t getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
      inline Data& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // openCache Field Functions 
      bool hasOpenCache() const { return this->openCache_ != nullptr;};
      void deleteOpenCache() { this->openCache_ = nullptr;};
      inline bool getOpenCache() const { DARABONBA_PTR_GET_DEFAULT(openCache_, false) };
      inline Data& setOpenCache(bool openCache) { DARABONBA_PTR_SET_VALUE(openCache_, openCache) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int32_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
      inline Data& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Data& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline int32_t getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, 0) };
      inline Data& setProtocol(int32_t protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // publicParamList Field Functions 
      bool hasPublicParamList() const { return this->publicParamList_ != nullptr;};
      void deletePublicParamList() { this->publicParamList_ = nullptr;};
      inline const vector<Data::PublicParamList> & getPublicParamList() const { DARABONBA_PTR_GET_CONST(publicParamList_, vector<Data::PublicParamList>) };
      inline vector<Data::PublicParamList> getPublicParamList() { DARABONBA_PTR_GET(publicParamList_, vector<Data::PublicParamList>) };
      inline Data& setPublicParamList(const vector<Data::PublicParamList> & publicParamList) { DARABONBA_PTR_SET_VALUE(publicParamList_, publicParamList) };
      inline Data& setPublicParamList(vector<Data::PublicParamList> && publicParamList) { DARABONBA_PTR_SET_RVALUE(publicParamList_, publicParamList) };


      // requestMethod Field Functions 
      bool hasRequestMethod() const { return this->requestMethod_ != nullptr;};
      void deleteRequestMethod() { this->requestMethod_ = nullptr;};
      inline int32_t getRequestMethod() const { DARABONBA_PTR_GET_DEFAULT(requestMethod_, 0) };
      inline Data& setRequestMethod(int32_t requestMethod) { DARABONBA_PTR_SET_VALUE(requestMethod_, requestMethod) };


      // requestParamList Field Functions 
      bool hasRequestParamList() const { return this->requestParamList_ != nullptr;};
      void deleteRequestParamList() { this->requestParamList_ = nullptr;};
      inline const vector<Data::RequestParamList> & getRequestParamList() const { DARABONBA_PTR_GET_CONST(requestParamList_, vector<Data::RequestParamList>) };
      inline vector<Data::RequestParamList> getRequestParamList() { DARABONBA_PTR_GET(requestParamList_, vector<Data::RequestParamList>) };
      inline Data& setRequestParamList(const vector<Data::RequestParamList> & requestParamList) { DARABONBA_PTR_SET_VALUE(requestParamList_, requestParamList) };
      inline Data& setRequestParamList(vector<Data::RequestParamList> && requestParamList) { DARABONBA_PTR_SET_RVALUE(requestParamList_, requestParamList) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


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


      // returnLimit Field Functions 
      bool hasReturnLimit() const { return this->returnLimit_ != nullptr;};
      void deleteReturnLimit() { this->returnLimit_ = nullptr;};
      inline int32_t getReturnLimit() const { DARABONBA_PTR_GET_DEFAULT(returnLimit_, 0) };
      inline Data& setReturnLimit(int32_t returnLimit) { DARABONBA_PTR_SET_VALUE(returnLimit_, returnLimit) };


      // returnType Field Functions 
      bool hasReturnType() const { return this->returnType_ != nullptr;};
      void deleteReturnType() { this->returnType_ = nullptr;};
      inline int32_t getReturnType() const { DARABONBA_PTR_GET_DEFAULT(returnType_, 0) };
      inline Data& setReturnType(int32_t returnType) { DARABONBA_PTR_SET_VALUE(returnType_, returnType) };


      // scriptType Field Functions 
      bool hasScriptType() const { return this->scriptType_ != nullptr;};
      void deleteScriptType() { this->scriptType_ = nullptr;};
      inline string getScriptType() const { DARABONBA_PTR_GET_DEFAULT(scriptType_, "") };
      inline Data& setScriptType(string scriptType) { DARABONBA_PTR_SET_VALUE(scriptType_, scriptType) };


      // sql Field Functions 
      bool hasSql() const { return this->sql_ != nullptr;};
      void deleteSql() { this->sql_ = nullptr;};
      inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
      inline Data& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


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
      inline int32_t getUpdateRate() const { DARABONBA_PTR_GET_DEFAULT(updateRate_, 0) };
      inline Data& setUpdateRate(int32_t updateRate) { DARABONBA_PTR_SET_VALUE(updateRate_, updateRate) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<int64_t> apiId_ {};
      shared_ptr<Data::ApiRegisterInfo> apiRegisterInfo_ {};
      shared_ptr<int32_t> apiTimeout_ {};
      shared_ptr<string> bizUnitName_ {};
      shared_ptr<string> cacheTime_ {};
      shared_ptr<int32_t> createType_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int64_t> directDatasourceId_ {};
      shared_ptr<string> directDatasourceName_ {};
      shared_ptr<int32_t> env_ {};
      shared_ptr<int32_t> groupId_ {};
      shared_ptr<string> groupName_ {};
      shared_ptr<bool> isLogicalTable_ {};
      shared_ptr<bool> isPagedQuery_ {};
      shared_ptr<bool> isSpecialSql_ {};
      shared_ptr<int32_t> mode_ {};
      shared_ptr<string> name_ {};
      shared_ptr<bool> openCache_ {};
      shared_ptr<int32_t> projectId_ {};
      shared_ptr<string> projectName_ {};
      shared_ptr<int32_t> protocol_ {};
      shared_ptr<vector<Data::PublicParamList>> publicParamList_ {};
      shared_ptr<int32_t> requestMethod_ {};
      shared_ptr<vector<Data::RequestParamList>> requestParamList_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> resourceGroupName_ {};
      shared_ptr<vector<Data::ResponseParamList>> responseParamList_ {};
      shared_ptr<string> resultSample_ {};
      shared_ptr<int32_t> returnLimit_ {};
      shared_ptr<int32_t> returnType_ {};
      shared_ptr<string> scriptType_ {};
      shared_ptr<string> sql_ {};
      shared_ptr<string> tableName_ {};
      shared_ptr<string> timeout_ {};
      shared_ptr<int32_t> updateRate_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDataServiceApiDocumentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDataServiceApiDocumentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDataServiceApiDocumentResponseBody::Data) };
    inline GetDataServiceApiDocumentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDataServiceApiDocumentResponseBody::Data) };
    inline GetDataServiceApiDocumentResponseBody& setData(const GetDataServiceApiDocumentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataServiceApiDocumentResponseBody& setData(GetDataServiceApiDocumentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDataServiceApiDocumentResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDataServiceApiDocumentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataServiceApiDocumentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataServiceApiDocumentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetDataServiceApiDocumentResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
