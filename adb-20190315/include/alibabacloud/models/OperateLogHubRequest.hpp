// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATELOGHUBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATELOGHUBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OperateLogHubRequestLogHubStores.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class OperateLogHubRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateLogHubRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Create, create_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DeliverName, deliverName_);
      DARABONBA_PTR_TO_JSON(DeliverTime, deliverTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FilterDirtyData, filterDirtyData_);
      DARABONBA_PTR_TO_JSON(LogHubStores, logHubStores_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, OperateLogHubRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Create, create_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DeliverName, deliverName_);
      DARABONBA_PTR_FROM_JSON(DeliverTime, deliverTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FilterDirtyData, filterDirtyData_);
      DARABONBA_PTR_FROM_JSON(LogHubStores, logHubStores_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    OperateLogHubRequest() = default ;
    OperateLogHubRequest(const OperateLogHubRequest &) = default ;
    OperateLogHubRequest(OperateLogHubRequest &&) = default ;
    OperateLogHubRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateLogHubRequest() = default ;
    OperateLogHubRequest& operator=(const OperateLogHubRequest &) = default ;
    OperateLogHubRequest& operator=(OperateLogHubRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->create_ != nullptr
        && this->DBClusterId_ != nullptr && this->deliverName_ != nullptr && this->deliverTime_ != nullptr && this->description_ != nullptr && this->filterDirtyData_ != nullptr
        && this->logHubStores_ != nullptr && this->logStoreName_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->password_ != nullptr
        && this->projectName_ != nullptr && this->provider_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->schemaName_ != nullptr
        && this->tableName_ != nullptr && this->userName_ != nullptr; };
    // create Field Functions 
    bool hasCreate() const { return this->create_ != nullptr;};
    void deleteCreate() { this->create_ = nullptr;};
    inline bool create() const { DARABONBA_PTR_GET_DEFAULT(create_, false) };
    inline OperateLogHubRequest& setCreate(bool create) { DARABONBA_PTR_SET_VALUE(create_, create) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline OperateLogHubRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // deliverName Field Functions 
    bool hasDeliverName() const { return this->deliverName_ != nullptr;};
    void deleteDeliverName() { this->deliverName_ = nullptr;};
    inline string deliverName() const { DARABONBA_PTR_GET_DEFAULT(deliverName_, "") };
    inline OperateLogHubRequest& setDeliverName(string deliverName) { DARABONBA_PTR_SET_VALUE(deliverName_, deliverName) };


    // deliverTime Field Functions 
    bool hasDeliverTime() const { return this->deliverTime_ != nullptr;};
    void deleteDeliverTime() { this->deliverTime_ = nullptr;};
    inline string deliverTime() const { DARABONBA_PTR_GET_DEFAULT(deliverTime_, "") };
    inline OperateLogHubRequest& setDeliverTime(string deliverTime) { DARABONBA_PTR_SET_VALUE(deliverTime_, deliverTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline OperateLogHubRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // filterDirtyData Field Functions 
    bool hasFilterDirtyData() const { return this->filterDirtyData_ != nullptr;};
    void deleteFilterDirtyData() { this->filterDirtyData_ = nullptr;};
    inline bool filterDirtyData() const { DARABONBA_PTR_GET_DEFAULT(filterDirtyData_, false) };
    inline OperateLogHubRequest& setFilterDirtyData(bool filterDirtyData) { DARABONBA_PTR_SET_VALUE(filterDirtyData_, filterDirtyData) };


    // logHubStores Field Functions 
    bool hasLogHubStores() const { return this->logHubStores_ != nullptr;};
    void deleteLogHubStores() { this->logHubStores_ = nullptr;};
    inline const vector<OperateLogHubRequestLogHubStores> & logHubStores() const { DARABONBA_PTR_GET_CONST(logHubStores_, vector<OperateLogHubRequestLogHubStores>) };
    inline vector<OperateLogHubRequestLogHubStores> logHubStores() { DARABONBA_PTR_GET(logHubStores_, vector<OperateLogHubRequestLogHubStores>) };
    inline OperateLogHubRequest& setLogHubStores(const vector<OperateLogHubRequestLogHubStores> & logHubStores) { DARABONBA_PTR_SET_VALUE(logHubStores_, logHubStores) };
    inline OperateLogHubRequest& setLogHubStores(vector<OperateLogHubRequestLogHubStores> && logHubStores) { DARABONBA_PTR_SET_RVALUE(logHubStores_, logHubStores) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline OperateLogHubRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline OperateLogHubRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline OperateLogHubRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline OperateLogHubRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline OperateLogHubRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline OperateLogHubRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline OperateLogHubRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline OperateLogHubRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline OperateLogHubRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline OperateLogHubRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline OperateLogHubRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // Specifies whether to create the log shipping job.
    // 
    // This parameter is required.
    std::shared_ptr<bool> create_ = nullptr;
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the IDs of all AnalyticDB for MySQL Data Warehouse Edition clusters within a region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The name of the log shipping job.
    // 
    // This parameter is required.
    std::shared_ptr<string> deliverName_ = nullptr;
    // The shipping time.
    // 
    // This parameter is required.
    std::shared_ptr<string> deliverTime_ = nullptr;
    // The description of the log shipping job.
    // 
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to filter dirty data.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> filterDirtyData_ = nullptr;
    // The log keywords.
    // 
    // This parameter is required.
    std::shared_ptr<vector<OperateLogHubRequestLogHubStores>> logHubStores_ = nullptr;
    // The name of the Logstore.
    // 
    // This parameter is required.
    std::shared_ptr<string> logStoreName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The password of the database account.
    // 
    // This parameter is required.
    std::shared_ptr<string> password_ = nullptr;
    // The name of the Simple Log Service project.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The channel of the log shipping job.
    std::shared_ptr<string> provider_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The name of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name of the table.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    // The name of the database account.
    // 
    // This parameter is required.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
