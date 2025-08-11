// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCECONNECTIONINFORESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCECONNECTIONINFORESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class GetDataSourceConnectionInfoResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceConnectionInfoResponseBodyResult& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetDataSourceConnectionInfoResponseBodyResult& obj) { 
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
    GetDataSourceConnectionInfoResponseBodyResult() = default ;
    GetDataSourceConnectionInfoResponseBodyResult(const GetDataSourceConnectionInfoResponseBodyResult &) = default ;
    GetDataSourceConnectionInfoResponseBodyResult(GetDataSourceConnectionInfoResponseBodyResult &&) = default ;
    GetDataSourceConnectionInfoResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceConnectionInfoResponseBodyResult() = default ;
    GetDataSourceConnectionInfoResponseBodyResult& operator=(const GetDataSourceConnectionInfoResponseBodyResult &) = default ;
    GetDataSourceConnectionInfoResponseBodyResult& operator=(GetDataSourceConnectionInfoResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->authLevel_ != nullptr && this->creatorId_ != nullptr && this->dsId_ != nullptr && this->dsType_ != nullptr && this->dsVersion_ != nullptr
        && this->instance_ != nullptr && this->instanceId_ != nullptr && this->modifyUser_ != nullptr && this->noSasl_ != nullptr && this->parentDsType_ != nullptr
        && this->port_ != nullptr && this->project_ != nullptr && this->schema_ != nullptr && this->showName_ != nullptr && this->workspaceId_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline GetDataSourceConnectionInfoResponseBodyResult& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // authLevel Field Functions 
    bool hasAuthLevel() const { return this->authLevel_ != nullptr;};
    void deleteAuthLevel() { this->authLevel_ = nullptr;};
    inline string authLevel() const { DARABONBA_PTR_GET_DEFAULT(authLevel_, "") };
    inline GetDataSourceConnectionInfoResponseBodyResult& setAuthLevel(string authLevel) { DARABONBA_PTR_SET_VALUE(authLevel_, authLevel) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetDataSourceConnectionInfoResponseBodyResult& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // dsId Field Functions 
    bool hasDsId() const { return this->dsId_ != nullptr;};
    void deleteDsId() { this->dsId_ = nullptr;};
    inline string dsId() const { DARABONBA_PTR_GET_DEFAULT(dsId_, "") };
    inline GetDataSourceConnectionInfoResponseBodyResult& setDsId(string dsId) { DARABONBA_PTR_SET_VALUE(dsId_, dsId) };


    // dsType Field Functions 
    bool hasDsType() const { return this->dsType_ != nullptr;};
    void deleteDsType() { this->dsType_ = nullptr;};
    inline string dsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
    inline GetDataSourceConnectionInfoResponseBodyResult& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


    // dsVersion Field Functions 
    bool hasDsVersion() const { return this->dsVersion_ != nullptr;};
    void deleteDsVersion() { this->dsVersion_ = nullptr;};
    inline string dsVersion() const { DARABONBA_PTR_GET_DEFAULT(dsVersion_, "") };
    inline GetDataSourceConnectionInfoResponseBodyResult& setDsVersion(string dsVersion) { DARABONBA_PTR_SET_VALUE(dsVersion_, dsVersion) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline GetDataSourceConnectionInfoResponseBodyResult& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetDataSourceConnectionInfoResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline GetDataSourceConnectionInfoResponseBodyResult& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // noSasl Field Functions 
    bool hasNoSasl() const { return this->noSasl_ != nullptr;};
    void deleteNoSasl() { this->noSasl_ = nullptr;};
    inline bool noSasl() const { DARABONBA_PTR_GET_DEFAULT(noSasl_, false) };
    inline GetDataSourceConnectionInfoResponseBodyResult& setNoSasl(bool noSasl) { DARABONBA_PTR_SET_VALUE(noSasl_, noSasl) };


    // parentDsType Field Functions 
    bool hasParentDsType() const { return this->parentDsType_ != nullptr;};
    void deleteParentDsType() { this->parentDsType_ = nullptr;};
    inline string parentDsType() const { DARABONBA_PTR_GET_DEFAULT(parentDsType_, "") };
    inline GetDataSourceConnectionInfoResponseBodyResult& setParentDsType(string parentDsType) { DARABONBA_PTR_SET_VALUE(parentDsType_, parentDsType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline GetDataSourceConnectionInfoResponseBodyResult& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline GetDataSourceConnectionInfoResponseBodyResult& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline GetDataSourceConnectionInfoResponseBodyResult& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline GetDataSourceConnectionInfoResponseBodyResult& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetDataSourceConnectionInfoResponseBodyResult& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Database connection string address (domain or IP).
    std::shared_ptr<string> address_ = nullptr;
    // Permission level:
    // 
    // - 0 -- Private
    // - 1 -- Collaborative Editing (old)
    // - 11 -- Collaborative Editing - Space Members
    // - 12 -- Collaborative Editing - Specified to Individuals
    std::shared_ptr<string> authLevel_ = nullptr;
    // Quick BI user ID of the creator.
    std::shared_ptr<string> creatorId_ = nullptr;
    // Data source ID.
    std::shared_ptr<string> dsId_ = nullptr;
    // Data source type.
    std::shared_ptr<string> dsType_ = nullptr;
    // Version of the data source.
    std::shared_ptr<string> dsVersion_ = nullptr;
    // Database instance, corresponding to the database name, and for ODPS, it is the project.
    std::shared_ptr<string> instance_ = nullptr;
    // Instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Quick BI user ID of the modifier.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // Whether the impala data source requires authentication to log in:
    // 
    // - true - Requires account and password login  
    // - false - No authentication required (default)
    std::shared_ptr<bool> noSasl_ = nullptr;
    // Primary data source type for multi-engine data sources.
    std::shared_ptr<string> parentDsType_ = nullptr;
    // Port.
    std::shared_ptr<string> port_ = nullptr;
    // Used for front-end display when obtaining connection details for ODPS.
    std::shared_ptr<string> project_ = nullptr;
    // Database schema, only needs to be set for databases that support schemas.
    std::shared_ptr<string> schema_ = nullptr;
    // Display name of the data source on the front end.
    std::shared_ptr<string> showName_ = nullptr;
    // Workspace ID to which the data source belongs.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
