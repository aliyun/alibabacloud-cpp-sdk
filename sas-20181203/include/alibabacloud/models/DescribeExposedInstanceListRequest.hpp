// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedInstanceListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedInstanceListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(CspmStatus, cspmStatus_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ExposureComponent, exposureComponent_);
      DARABONBA_PTR_TO_JSON(ExposureComponentBizType, exposureComponentBizType_);
      DARABONBA_PTR_TO_JSON(ExposureIp, exposureIp_);
      DARABONBA_PTR_TO_JSON(ExposurePort, exposurePort_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(VulStatus, vulStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedInstanceListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(CspmStatus, cspmStatus_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ExposureComponent, exposureComponent_);
      DARABONBA_PTR_FROM_JSON(ExposureComponentBizType, exposureComponentBizType_);
      DARABONBA_PTR_FROM_JSON(ExposureIp, exposureIp_);
      DARABONBA_PTR_FROM_JSON(ExposurePort, exposurePort_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(VulStatus, vulStatus_);
    };
    DescribeExposedInstanceListRequest() = default ;
    DescribeExposedInstanceListRequest(const DescribeExposedInstanceListRequest &) = default ;
    DescribeExposedInstanceListRequest(DescribeExposedInstanceListRequest &&) = default ;
    DescribeExposedInstanceListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedInstanceListRequest() = default ;
    DescribeExposedInstanceListRequest& operator=(const DescribeExposedInstanceListRequest &) = default ;
    DescribeExposedInstanceListRequest& operator=(DescribeExposedInstanceListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetType_ == nullptr
        && this->cspmStatus_ == nullptr && this->currentPage_ == nullptr && this->exposureComponent_ == nullptr && this->exposureComponentBizType_ == nullptr && this->exposureIp_ == nullptr
        && this->exposurePort_ == nullptr && this->groupId_ == nullptr && this->healthStatus_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->pageSize_ == nullptr && this->resourceDirectoryAccountId_ == nullptr && this->vulStatus_ == nullptr; };
    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline DescribeExposedInstanceListRequest& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // cspmStatus Field Functions 
    bool hasCspmStatus() const { return this->cspmStatus_ != nullptr;};
    void deleteCspmStatus() { this->cspmStatus_ = nullptr;};
    inline bool getCspmStatus() const { DARABONBA_PTR_GET_DEFAULT(cspmStatus_, false) };
    inline DescribeExposedInstanceListRequest& setCspmStatus(bool cspmStatus) { DARABONBA_PTR_SET_VALUE(cspmStatus_, cspmStatus) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeExposedInstanceListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // exposureComponent Field Functions 
    bool hasExposureComponent() const { return this->exposureComponent_ != nullptr;};
    void deleteExposureComponent() { this->exposureComponent_ = nullptr;};
    inline string getExposureComponent() const { DARABONBA_PTR_GET_DEFAULT(exposureComponent_, "") };
    inline DescribeExposedInstanceListRequest& setExposureComponent(string exposureComponent) { DARABONBA_PTR_SET_VALUE(exposureComponent_, exposureComponent) };


    // exposureComponentBizType Field Functions 
    bool hasExposureComponentBizType() const { return this->exposureComponentBizType_ != nullptr;};
    void deleteExposureComponentBizType() { this->exposureComponentBizType_ = nullptr;};
    inline string getExposureComponentBizType() const { DARABONBA_PTR_GET_DEFAULT(exposureComponentBizType_, "") };
    inline DescribeExposedInstanceListRequest& setExposureComponentBizType(string exposureComponentBizType) { DARABONBA_PTR_SET_VALUE(exposureComponentBizType_, exposureComponentBizType) };


    // exposureIp Field Functions 
    bool hasExposureIp() const { return this->exposureIp_ != nullptr;};
    void deleteExposureIp() { this->exposureIp_ = nullptr;};
    inline string getExposureIp() const { DARABONBA_PTR_GET_DEFAULT(exposureIp_, "") };
    inline DescribeExposedInstanceListRequest& setExposureIp(string exposureIp) { DARABONBA_PTR_SET_VALUE(exposureIp_, exposureIp) };


    // exposurePort Field Functions 
    bool hasExposurePort() const { return this->exposurePort_ != nullptr;};
    void deleteExposurePort() { this->exposurePort_ = nullptr;};
    inline string getExposurePort() const { DARABONBA_PTR_GET_DEFAULT(exposurePort_, "") };
    inline DescribeExposedInstanceListRequest& setExposurePort(string exposurePort) { DARABONBA_PTR_SET_VALUE(exposurePort_, exposurePort) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeExposedInstanceListRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline bool getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, false) };
    inline DescribeExposedInstanceListRequest& setHealthStatus(bool healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeExposedInstanceListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeExposedInstanceListRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeExposedInstanceListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeExposedInstanceListRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // vulStatus Field Functions 
    bool hasVulStatus() const { return this->vulStatus_ != nullptr;};
    void deleteVulStatus() { this->vulStatus_ = nullptr;};
    inline bool getVulStatus() const { DARABONBA_PTR_GET_DEFAULT(vulStatus_, false) };
    inline DescribeExposedInstanceListRequest& setVulStatus(bool vulStatus) { DARABONBA_PTR_SET_VALUE(vulStatus_, vulStatus) };


  protected:
    // The type of the asset. Valid values:
    // 
    // *   **0**: an Elastic Compute Service (ECS) instance.
    // *   **3**: an ApsaraDB RDS instance.
    // *   **4**: an ApsaraDB for MongoDB instance.
    // *   **5**: an ApsaraDB for Redis instance.
    shared_ptr<string> assetType_ {};
    // Specifies whether the asset has Cloud Security Posture Management (CSPM) risks. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> cspmStatus_ {};
    // The number of the page to return.
    shared_ptr<int32_t> currentPage_ {};
    // The server component that is exposed on the Internet.
    shared_ptr<string> exposureComponent_ {};
    // Expose component type.
    shared_ptr<string> exposureComponentBizType_ {};
    // The public IP address of the server or the public endpoint of the database.
    shared_ptr<string> exposureIp_ {};
    // The port that is exposed on the Internet.
    shared_ptr<string> exposurePort_ {};
    // The ID of the server group.
    // 
    // > You can call the [DescribeAllGroups](~~DescribeAllGroups~~) operation to query the IDs of server groups.
    shared_ptr<int64_t> groupId_ {};
    // Specifies whether the asset has weak password risks. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> healthStatus_ {};
    // The instance ID of the asset.
    shared_ptr<string> instanceId_ {};
    // The name of the asset.
    shared_ptr<string> instanceName_ {};
    // The number of entries to return on each page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    shared_ptr<int32_t> pageSize_ {};
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain the ID.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // Specifies whether the asset has vulnerabilities. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> vulStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
