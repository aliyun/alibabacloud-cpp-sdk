// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARENTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARENTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeParentInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParentInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_TO_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MemberAccount, memberAccount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParentInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_FROM_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MemberAccount, memberAccount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
    };
    DescribeParentInstanceRequest() = default ;
    DescribeParentInstanceRequest(const DescribeParentInstanceRequest &) = default ;
    DescribeParentInstanceRequest(DescribeParentInstanceRequest &&) = default ;
    DescribeParentInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParentInstanceRequest() = default ;
    DescribeParentInstanceRequest& operator=(const DescribeParentInstanceRequest &) = default ;
    DescribeParentInstanceRequest& operator=(DescribeParentInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authStatus_ != nullptr
        && this->checkStatus_ != nullptr && this->clusterStatus_ != nullptr && this->currentPage_ != nullptr && this->dbName_ != nullptr && this->engineType_ != nullptr
        && this->instanceId_ != nullptr && this->lang_ != nullptr && this->memberAccount_ != nullptr && this->pageSize_ != nullptr && this->resourceType_ != nullptr
        && this->serviceRegionId_ != nullptr; };
    // authStatus Field Functions 
    bool hasAuthStatus() const { return this->authStatus_ != nullptr;};
    void deleteAuthStatus() { this->authStatus_ = nullptr;};
    inline int32_t authStatus() const { DARABONBA_PTR_GET_DEFAULT(authStatus_, 0) };
    inline DescribeParentInstanceRequest& setAuthStatus(int32_t authStatus) { DARABONBA_PTR_SET_VALUE(authStatus_, authStatus) };


    // checkStatus Field Functions 
    bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
    void deleteCheckStatus() { this->checkStatus_ = nullptr;};
    inline int32_t checkStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, 0) };
    inline DescribeParentInstanceRequest& setCheckStatus(int32_t checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


    // clusterStatus Field Functions 
    bool hasClusterStatus() const { return this->clusterStatus_ != nullptr;};
    void deleteClusterStatus() { this->clusterStatus_ = nullptr;};
    inline string clusterStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterStatus_, "") };
    inline DescribeParentInstanceRequest& setClusterStatus(string clusterStatus) { DARABONBA_PTR_SET_VALUE(clusterStatus_, clusterStatus) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeParentInstanceRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DescribeParentInstanceRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline DescribeParentInstanceRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeParentInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeParentInstanceRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // memberAccount Field Functions 
    bool hasMemberAccount() const { return this->memberAccount_ != nullptr;};
    void deleteMemberAccount() { this->memberAccount_ = nullptr;};
    inline int64_t memberAccount() const { DARABONBA_PTR_GET_DEFAULT(memberAccount_, 0L) };
    inline DescribeParentInstanceRequest& setMemberAccount(int64_t memberAccount) { DARABONBA_PTR_SET_VALUE(memberAccount_, memberAccount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeParentInstanceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int64_t resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0L) };
    inline DescribeParentInstanceRequest& setResourceType(int64_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string serviceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline DescribeParentInstanceRequest& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


  protected:
    // Authorization status of the data asset instance.
    // - **0**: Unauthorized
    // - **1**: Authorized
    std::shared_ptr<int32_t> authStatus_ = nullptr;
    // Connection status of the instance or the database under the instance. Values:
    // - **-3**: Database not created
    // - **-2**: Released
    // - **-1**: Not connected
    // - **2**: Connectivity test in progress
    // - **3**: Connected
    // - **4**: Connection failed
    std::shared_ptr<int32_t> checkStatus_ = nullptr;
    // Instance status.
    // - **Running**: Running
    // - **Released**: Released
    // - **DatabaseNotCreated**: Database not created
    std::shared_ptr<string> clusterStatus_ = nullptr;
    // When performing a paginated query, set the current page number. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Database name.
    std::shared_ptr<string> dbName_ = nullptr;
    // Engine type. Values:
    // - **MySQL**
    // - **MariaDB**
    // - **Oracle**
    // - **PostgreSQL**
    // - **SQLServer**
    std::shared_ptr<string> engineType_ = nullptr;
    // The instance ID to which the data in the data asset table belongs.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Language type for request and response messages. Values:
    // - **zh_cn**: Default, Simplified Chinese
    // - **en_us**: English (US)
    std::shared_ptr<string> lang_ = nullptr;
    // Member account ID.
    std::shared_ptr<int64_t> memberAccount_ = nullptr;
    // When performing a paginated query, set the number of rows per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The product type. Valid values:
    // - **1**: MaxCompute
    // - **2**: OSS
    // - **3**: ADB-MYSQL
    // - **4**: TableStore
    // - **5**: RDS
    // - **6**: SelfDB
    // - **7**: PolarDB-X
    // - **8**: PolarDB
    // - **9**: ADB-PG
    // - **10**: OceanBase
    // - **11**: MongoDB
    // - **25**: Redis
    std::shared_ptr<int64_t> resourceType_ = nullptr;
    // The region where the asset is located. Values:
    // - **cn-beijing**: China (Beijing)
    // - **cn-zhangjiakou**: China (Zhangjiakou)
    // - **cn-huhehaote**: China (Hohhot)
    // - **cn-hangzhou**: China (Hangzhou)
    // - **cn-shanghai**: China (Shanghai)
    // - **cn-shenzhen**: China (Shenzhen)
    // - **cn-hongkong**:  China (Hong Kong)
    std::shared_ptr<string> serviceRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
