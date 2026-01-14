// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCECONNECTIONINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCECONNECTIONINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class GetDataSourceConnectionInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceConnectionInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceConnectionInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataSourceConnectionInfoResponseBody() = default ;
    GetDataSourceConnectionInfoResponseBody(const GetDataSourceConnectionInfoResponseBody &) = default ;
    GetDataSourceConnectionInfoResponseBody(GetDataSourceConnectionInfoResponseBody &&) = default ;
    GetDataSourceConnectionInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceConnectionInfoResponseBody() = default ;
    GetDataSourceConnectionInfoResponseBody& operator=(const GetDataSourceConnectionInfoResponseBody &) = default ;
    GetDataSourceConnectionInfoResponseBody& operator=(GetDataSourceConnectionInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(AuthLevel, authLevel_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(DsId, dsId_);
        DARABONBA_PTR_TO_JSON(DsType, dsType_);
        DARABONBA_PTR_TO_JSON(DsVersion, dsVersion_);
        DARABONBA_PTR_TO_JSON(Instance, instance_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_TO_JSON(NoSasl, noSasl_);
        DARABONBA_PTR_TO_JSON(ParentDsType, parentDsType_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Project, project_);
        DARABONBA_PTR_TO_JSON(Schema, schema_);
        DARABONBA_PTR_TO_JSON(ShowName, showName_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(AuthLevel, authLevel_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(DsId, dsId_);
        DARABONBA_PTR_FROM_JSON(DsType, dsType_);
        DARABONBA_PTR_FROM_JSON(DsVersion, dsVersion_);
        DARABONBA_PTR_FROM_JSON(Instance, instance_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_FROM_JSON(NoSasl, noSasl_);
        DARABONBA_PTR_FROM_JSON(ParentDsType, parentDsType_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Project, project_);
        DARABONBA_PTR_FROM_JSON(Schema, schema_);
        DARABONBA_PTR_FROM_JSON(ShowName, showName_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->address_ == nullptr
        && this->authLevel_ == nullptr && this->creatorId_ == nullptr && this->dsId_ == nullptr && this->dsType_ == nullptr && this->dsVersion_ == nullptr
        && this->instance_ == nullptr && this->instanceId_ == nullptr && this->modifyUser_ == nullptr && this->noSasl_ == nullptr && this->parentDsType_ == nullptr
        && this->port_ == nullptr && this->project_ == nullptr && this->schema_ == nullptr && this->showName_ == nullptr && this->workspaceId_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline Result& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // authLevel Field Functions 
      bool hasAuthLevel() const { return this->authLevel_ != nullptr;};
      void deleteAuthLevel() { this->authLevel_ = nullptr;};
      inline string getAuthLevel() const { DARABONBA_PTR_GET_DEFAULT(authLevel_, "") };
      inline Result& setAuthLevel(string authLevel) { DARABONBA_PTR_SET_VALUE(authLevel_, authLevel) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline Result& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // dsId Field Functions 
      bool hasDsId() const { return this->dsId_ != nullptr;};
      void deleteDsId() { this->dsId_ = nullptr;};
      inline string getDsId() const { DARABONBA_PTR_GET_DEFAULT(dsId_, "") };
      inline Result& setDsId(string dsId) { DARABONBA_PTR_SET_VALUE(dsId_, dsId) };


      // dsType Field Functions 
      bool hasDsType() const { return this->dsType_ != nullptr;};
      void deleteDsType() { this->dsType_ = nullptr;};
      inline string getDsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
      inline Result& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


      // dsVersion Field Functions 
      bool hasDsVersion() const { return this->dsVersion_ != nullptr;};
      void deleteDsVersion() { this->dsVersion_ = nullptr;};
      inline string getDsVersion() const { DARABONBA_PTR_GET_DEFAULT(dsVersion_, "") };
      inline Result& setDsVersion(string dsVersion) { DARABONBA_PTR_SET_VALUE(dsVersion_, dsVersion) };


      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline string getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
      inline Result& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // modifyUser Field Functions 
      bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
      void deleteModifyUser() { this->modifyUser_ = nullptr;};
      inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
      inline Result& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


      // noSasl Field Functions 
      bool hasNoSasl() const { return this->noSasl_ != nullptr;};
      void deleteNoSasl() { this->noSasl_ = nullptr;};
      inline bool getNoSasl() const { DARABONBA_PTR_GET_DEFAULT(noSasl_, false) };
      inline Result& setNoSasl(bool noSasl) { DARABONBA_PTR_SET_VALUE(noSasl_, noSasl) };


      // parentDsType Field Functions 
      bool hasParentDsType() const { return this->parentDsType_ != nullptr;};
      void deleteParentDsType() { this->parentDsType_ = nullptr;};
      inline string getParentDsType() const { DARABONBA_PTR_GET_DEFAULT(parentDsType_, "") };
      inline Result& setParentDsType(string parentDsType) { DARABONBA_PTR_SET_VALUE(parentDsType_, parentDsType) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline Result& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline Result& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // schema Field Functions 
      bool hasSchema() const { return this->schema_ != nullptr;};
      void deleteSchema() { this->schema_ = nullptr;};
      inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
      inline Result& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


      // showName Field Functions 
      bool hasShowName() const { return this->showName_ != nullptr;};
      void deleteShowName() { this->showName_ = nullptr;};
      inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
      inline Result& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Result& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // Database connection string address (domain or IP).
      shared_ptr<string> address_ {};
      // Permission level:
      // 
      // - 0 -- Private
      // - 1 -- Collaborative Editing (old)
      // - 11 -- Collaborative Editing - Space Members
      // - 12 -- Collaborative Editing - Specified to Individuals
      shared_ptr<string> authLevel_ {};
      // Quick BI user ID of the creator.
      shared_ptr<string> creatorId_ {};
      // Data source ID.
      shared_ptr<string> dsId_ {};
      // Data source type.
      shared_ptr<string> dsType_ {};
      // Version of the data source.
      shared_ptr<string> dsVersion_ {};
      // Database instance, corresponding to the database name, and for ODPS, it is the project.
      shared_ptr<string> instance_ {};
      // Instance ID.
      shared_ptr<string> instanceId_ {};
      // Quick BI user ID of the modifier.
      shared_ptr<string> modifyUser_ {};
      // Whether the impala data source requires authentication to log in:
      // 
      // - true - Requires account and password login  
      // - false - No authentication required (default)
      shared_ptr<bool> noSasl_ {};
      // Primary data source type for multi-engine data sources.
      shared_ptr<string> parentDsType_ {};
      // Port.
      shared_ptr<string> port_ {};
      // Used for front-end display when obtaining connection details for ODPS.
      shared_ptr<string> project_ {};
      // Database schema, only needs to be set for databases that support schemas.
      shared_ptr<string> schema_ {};
      // Display name of the data source on the front end.
      shared_ptr<string> showName_ {};
      // Workspace ID to which the data source belongs.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataSourceConnectionInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetDataSourceConnectionInfoResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetDataSourceConnectionInfoResponseBody::Result) };
    inline GetDataSourceConnectionInfoResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetDataSourceConnectionInfoResponseBody::Result) };
    inline GetDataSourceConnectionInfoResponseBody& setResult(const GetDataSourceConnectionInfoResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetDataSourceConnectionInfoResponseBody& setResult(GetDataSourceConnectionInfoResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataSourceConnectionInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Data source information.
    shared_ptr<GetDataSourceConnectionInfoResponseBody::Result> result_ {};
    // Indicates whether the operation was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
