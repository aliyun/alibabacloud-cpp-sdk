// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWARNINGMACHINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWARNINGMACHINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWarningMachinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWarningMachinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WarningMachines, warningMachines_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWarningMachinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WarningMachines, warningMachines_);
    };
    DescribeWarningMachinesResponseBody() = default ;
    DescribeWarningMachinesResponseBody(const DescribeWarningMachinesResponseBody &) = default ;
    DescribeWarningMachinesResponseBody(DescribeWarningMachinesResponseBody &&) = default ;
    DescribeWarningMachinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWarningMachinesResponseBody() = default ;
    DescribeWarningMachinesResponseBody& operator=(const DescribeWarningMachinesResponseBody &) = default ;
    DescribeWarningMachinesResponseBody& operator=(DescribeWarningMachinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WarningMachines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WarningMachines& obj) { 
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(AuthVersion, authVersion_);
        DARABONBA_PTR_TO_JSON(Bind, bind_);
        DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
        DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
        DARABONBA_PTR_TO_JSON(HighWarningCount, highWarningCount_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(LowWarningCount, lowWarningCount_);
        DARABONBA_PTR_TO_JSON(MediumWarningCount, mediumWarningCount_);
        DARABONBA_PTR_TO_JSON(Online, online_);
        DARABONBA_PTR_TO_JSON(PassCount, passCount_);
        DARABONBA_PTR_TO_JSON(PortOpen, portOpen_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, WarningMachines& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(AuthVersion, authVersion_);
        DARABONBA_PTR_FROM_JSON(Bind, bind_);
        DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
        DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
        DARABONBA_PTR_FROM_JSON(HighWarningCount, highWarningCount_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(LowWarningCount, lowWarningCount_);
        DARABONBA_PTR_FROM_JSON(MediumWarningCount, mediumWarningCount_);
        DARABONBA_PTR_FROM_JSON(Online, online_);
        DARABONBA_PTR_FROM_JSON(PassCount, passCount_);
        DARABONBA_PTR_FROM_JSON(PortOpen, portOpen_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      WarningMachines() = default ;
      WarningMachines(const WarningMachines &) = default ;
      WarningMachines(WarningMachines &&) = default ;
      WarningMachines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WarningMachines() = default ;
      WarningMachines& operator=(const WarningMachines &) = default ;
      WarningMachines& operator=(WarningMachines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetType_ == nullptr
        && this->authVersion_ == nullptr && this->bind_ == nullptr && this->containerId_ == nullptr && this->containerName_ == nullptr && this->highWarningCount_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->lowWarningCount_ == nullptr
        && this->mediumWarningCount_ == nullptr && this->online_ == nullptr && this->passCount_ == nullptr && this->portOpen_ == nullptr && this->regionId_ == nullptr
        && this->status_ == nullptr && this->uuid_ == nullptr; };
      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
      inline WarningMachines& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // authVersion Field Functions 
      bool hasAuthVersion() const { return this->authVersion_ != nullptr;};
      void deleteAuthVersion() { this->authVersion_ = nullptr;};
      inline int32_t getAuthVersion() const { DARABONBA_PTR_GET_DEFAULT(authVersion_, 0) };
      inline WarningMachines& setAuthVersion(int32_t authVersion) { DARABONBA_PTR_SET_VALUE(authVersion_, authVersion) };


      // bind Field Functions 
      bool hasBind() const { return this->bind_ != nullptr;};
      void deleteBind() { this->bind_ = nullptr;};
      inline bool getBind() const { DARABONBA_PTR_GET_DEFAULT(bind_, false) };
      inline WarningMachines& setBind(bool bind) { DARABONBA_PTR_SET_VALUE(bind_, bind) };


      // containerId Field Functions 
      bool hasContainerId() const { return this->containerId_ != nullptr;};
      void deleteContainerId() { this->containerId_ = nullptr;};
      inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
      inline WarningMachines& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


      // containerName Field Functions 
      bool hasContainerName() const { return this->containerName_ != nullptr;};
      void deleteContainerName() { this->containerName_ = nullptr;};
      inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
      inline WarningMachines& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


      // highWarningCount Field Functions 
      bool hasHighWarningCount() const { return this->highWarningCount_ != nullptr;};
      void deleteHighWarningCount() { this->highWarningCount_ = nullptr;};
      inline int32_t getHighWarningCount() const { DARABONBA_PTR_GET_DEFAULT(highWarningCount_, 0) };
      inline WarningMachines& setHighWarningCount(int32_t highWarningCount) { DARABONBA_PTR_SET_VALUE(highWarningCount_, highWarningCount) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline WarningMachines& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline WarningMachines& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline WarningMachines& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline WarningMachines& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // lowWarningCount Field Functions 
      bool hasLowWarningCount() const { return this->lowWarningCount_ != nullptr;};
      void deleteLowWarningCount() { this->lowWarningCount_ = nullptr;};
      inline int32_t getLowWarningCount() const { DARABONBA_PTR_GET_DEFAULT(lowWarningCount_, 0) };
      inline WarningMachines& setLowWarningCount(int32_t lowWarningCount) { DARABONBA_PTR_SET_VALUE(lowWarningCount_, lowWarningCount) };


      // mediumWarningCount Field Functions 
      bool hasMediumWarningCount() const { return this->mediumWarningCount_ != nullptr;};
      void deleteMediumWarningCount() { this->mediumWarningCount_ = nullptr;};
      inline int32_t getMediumWarningCount() const { DARABONBA_PTR_GET_DEFAULT(mediumWarningCount_, 0) };
      inline WarningMachines& setMediumWarningCount(int32_t mediumWarningCount) { DARABONBA_PTR_SET_VALUE(mediumWarningCount_, mediumWarningCount) };


      // online Field Functions 
      bool hasOnline() const { return this->online_ != nullptr;};
      void deleteOnline() { this->online_ = nullptr;};
      inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
      inline WarningMachines& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


      // passCount Field Functions 
      bool hasPassCount() const { return this->passCount_ != nullptr;};
      void deletePassCount() { this->passCount_ = nullptr;};
      inline int32_t getPassCount() const { DARABONBA_PTR_GET_DEFAULT(passCount_, 0) };
      inline WarningMachines& setPassCount(int32_t passCount) { DARABONBA_PTR_SET_VALUE(passCount_, passCount) };


      // portOpen Field Functions 
      bool hasPortOpen() const { return this->portOpen_ != nullptr;};
      void deletePortOpen() { this->portOpen_ = nullptr;};
      inline bool getPortOpen() const { DARABONBA_PTR_GET_DEFAULT(portOpen_, false) };
      inline WarningMachines& setPortOpen(bool portOpen) { DARABONBA_PTR_SET_VALUE(portOpen_, portOpen) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline WarningMachines& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline WarningMachines& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline WarningMachines& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The type of cloud product assets.
      // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the types of cloud product assets.
      shared_ptr<string> assetType_ {};
      // The edition of Security Center that is authorized to protect the asset. Valid values:
      // 
      // *   **1**: Basic edition
      // *   **6**: Anti-virus edition
      // *   **5**: Advanced edition
      // *   **3**: Enterprise edition
      // *   **7**: Ultimate edition
      // *   **10**: Value-added Plan edition
      shared_ptr<int32_t> authVersion_ {};
      // Indicates whether Security Center is authorized to protect the asset. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> bind_ {};
      // The container ID.
      shared_ptr<string> containerId_ {};
      // The name of the container.
      shared_ptr<string> containerName_ {};
      // The number of **high-risk** items on the server.
      shared_ptr<int32_t> highWarningCount_ {};
      // The server ID.
      shared_ptr<string> instanceId_ {};
      // The name of the server.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // The number of **low-risk** items on the server.
      shared_ptr<int32_t> lowWarningCount_ {};
      // The number of **medium-risk** items on the server.
      shared_ptr<int32_t> mediumWarningCount_ {};
      // Indicates whether the agent is online. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> online_ {};
      // The number of the check items that passed the baseline check on the server.
      shared_ptr<int32_t> passCount_ {};
      // Indicates whether a port on the server is accessible over the Internet. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> portOpen_ {};
      // The ID of the region in which the server is deployed.
      shared_ptr<string> regionId_ {};
      // The verification status of the risk item after the risk item is fixed. Valid values:
      // 
      // *   **1**: complete
      // *   **2**: verifying
      shared_ptr<int32_t> status_ {};
      // The UUID of the server on which the baseline check is performed.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->warningMachines_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeWarningMachinesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeWarningMachinesResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWarningMachinesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWarningMachinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWarningMachinesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // warningMachines Field Functions 
    bool hasWarningMachines() const { return this->warningMachines_ != nullptr;};
    void deleteWarningMachines() { this->warningMachines_ = nullptr;};
    inline const vector<DescribeWarningMachinesResponseBody::WarningMachines> & getWarningMachines() const { DARABONBA_PTR_GET_CONST(warningMachines_, vector<DescribeWarningMachinesResponseBody::WarningMachines>) };
    inline vector<DescribeWarningMachinesResponseBody::WarningMachines> getWarningMachines() { DARABONBA_PTR_GET(warningMachines_, vector<DescribeWarningMachinesResponseBody::WarningMachines>) };
    inline DescribeWarningMachinesResponseBody& setWarningMachines(const vector<DescribeWarningMachinesResponseBody::WarningMachines> & warningMachines) { DARABONBA_PTR_SET_VALUE(warningMachines_, warningMachines) };
    inline DescribeWarningMachinesResponseBody& setWarningMachines(vector<DescribeWarningMachinesResponseBody::WarningMachines> && warningMachines) { DARABONBA_PTR_SET_RVALUE(warningMachines_, warningMachines) };


  protected:
    // The number of entries returned on the current page.
    shared_ptr<int32_t> count_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries returned per page. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The information about the servers.
    shared_ptr<vector<DescribeWarningMachinesResponseBody::WarningMachines>> warningMachines_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
