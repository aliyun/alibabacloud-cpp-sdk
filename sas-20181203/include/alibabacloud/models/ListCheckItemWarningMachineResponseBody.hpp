// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMWARNINGMACHINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMWARNINGMACHINERESPONSEBODY_HPP_
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
  class ListCheckItemWarningMachineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemWarningMachineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckItemWarningMachineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCheckItemWarningMachineResponseBody() = default ;
    ListCheckItemWarningMachineResponseBody(const ListCheckItemWarningMachineResponseBody &) = default ;
    ListCheckItemWarningMachineResponseBody(ListCheckItemWarningMachineResponseBody &&) = default ;
    ListCheckItemWarningMachineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemWarningMachineResponseBody() = default ;
    ListCheckItemWarningMachineResponseBody& operator=(const ListCheckItemWarningMachineResponseBody &) = default ;
    ListCheckItemWarningMachineResponseBody& operator=(ListCheckItemWarningMachineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of affected assets returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of affected assets.
      shared_ptr<int32_t> totalCount_ {};
    };

    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(AuthVersion, authVersion_);
        DARABONBA_PTR_TO_JSON(Bind, bind_);
        DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
        DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
        DARABONBA_PTR_TO_JSON(FixList, fixList_);
        DARABONBA_PTR_TO_JSON(FixStatus, fixStatus_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(LastHandleTime, lastHandleTime_);
        DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_TO_JSON(PortOpen, portOpen_);
        DARABONBA_PTR_TO_JSON(Prompt, prompt_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(WarningRiskList, warningRiskList_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(AuthVersion, authVersion_);
        DARABONBA_PTR_FROM_JSON(Bind, bind_);
        DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
        DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
        DARABONBA_PTR_FROM_JSON(FixList, fixList_);
        DARABONBA_PTR_FROM_JSON(FixStatus, fixStatus_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(LastHandleTime, lastHandleTime_);
        DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_FROM_JSON(PortOpen, portOpen_);
        DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(WarningRiskList, warningRiskList_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WarningRiskList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WarningRiskList& obj) { 
          DARABONBA_PTR_TO_JSON(RiskId, riskId_);
          DARABONBA_PTR_TO_JSON(RiskName, riskName_);
        };
        friend void from_json(const Darabonba::Json& j, WarningRiskList& obj) { 
          DARABONBA_PTR_FROM_JSON(RiskId, riskId_);
          DARABONBA_PTR_FROM_JSON(RiskName, riskName_);
        };
        WarningRiskList() = default ;
        WarningRiskList(const WarningRiskList &) = default ;
        WarningRiskList(WarningRiskList &&) = default ;
        WarningRiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WarningRiskList() = default ;
        WarningRiskList& operator=(const WarningRiskList &) = default ;
        WarningRiskList& operator=(WarningRiskList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->riskId_ == nullptr
        && this->riskName_ == nullptr; };
        // riskId Field Functions 
        bool hasRiskId() const { return this->riskId_ != nullptr;};
        void deleteRiskId() { this->riskId_ = nullptr;};
        inline int64_t getRiskId() const { DARABONBA_PTR_GET_DEFAULT(riskId_, 0L) };
        inline WarningRiskList& setRiskId(int64_t riskId) { DARABONBA_PTR_SET_VALUE(riskId_, riskId) };


        // riskName Field Functions 
        bool hasRiskName() const { return this->riskName_ != nullptr;};
        void deleteRiskName() { this->riskName_ = nullptr;};
        inline string getRiskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
        inline WarningRiskList& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


      protected:
        // The ID of the baseline.
        shared_ptr<int64_t> riskId_ {};
        // The name of the baseline.
        shared_ptr<string> riskName_ {};
      };

      class FixList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FixList& obj) { 
          DARABONBA_PTR_TO_JSON(RiskId, riskId_);
          DARABONBA_PTR_TO_JSON(RiskName, riskName_);
        };
        friend void from_json(const Darabonba::Json& j, FixList& obj) { 
          DARABONBA_PTR_FROM_JSON(RiskId, riskId_);
          DARABONBA_PTR_FROM_JSON(RiskName, riskName_);
        };
        FixList() = default ;
        FixList(const FixList &) = default ;
        FixList(FixList &&) = default ;
        FixList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FixList() = default ;
        FixList& operator=(const FixList &) = default ;
        FixList& operator=(FixList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->riskId_ == nullptr
        && this->riskName_ == nullptr; };
        // riskId Field Functions 
        bool hasRiskId() const { return this->riskId_ != nullptr;};
        void deleteRiskId() { this->riskId_ = nullptr;};
        inline int64_t getRiskId() const { DARABONBA_PTR_GET_DEFAULT(riskId_, 0L) };
        inline FixList& setRiskId(int64_t riskId) { DARABONBA_PTR_SET_VALUE(riskId_, riskId) };


        // riskName Field Functions 
        bool hasRiskName() const { return this->riskName_ != nullptr;};
        void deleteRiskName() { this->riskName_ = nullptr;};
        inline string getRiskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
        inline FixList& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


      protected:
        // The ID of the baseline.
        shared_ptr<int64_t> riskId_ {};
        // The name of the baseline.
        shared_ptr<string> riskName_ {};
      };

      virtual bool empty() const override { return this->assetType_ == nullptr
        && this->authVersion_ == nullptr && this->bind_ == nullptr && this->containerId_ == nullptr && this->containerName_ == nullptr && this->fixList_ == nullptr
        && this->fixStatus_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr
        && this->lastHandleTime_ == nullptr && this->lastScanTime_ == nullptr && this->portOpen_ == nullptr && this->prompt_ == nullptr && this->regionId_ == nullptr
        && this->status_ == nullptr && this->targetId_ == nullptr && this->targetName_ == nullptr && this->targetType_ == nullptr && this->uuid_ == nullptr
        && this->warningRiskList_ == nullptr; };
      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
      inline List& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // authVersion Field Functions 
      bool hasAuthVersion() const { return this->authVersion_ != nullptr;};
      void deleteAuthVersion() { this->authVersion_ = nullptr;};
      inline int32_t getAuthVersion() const { DARABONBA_PTR_GET_DEFAULT(authVersion_, 0) };
      inline List& setAuthVersion(int32_t authVersion) { DARABONBA_PTR_SET_VALUE(authVersion_, authVersion) };


      // bind Field Functions 
      bool hasBind() const { return this->bind_ != nullptr;};
      void deleteBind() { this->bind_ = nullptr;};
      inline bool getBind() const { DARABONBA_PTR_GET_DEFAULT(bind_, false) };
      inline List& setBind(bool bind) { DARABONBA_PTR_SET_VALUE(bind_, bind) };


      // containerId Field Functions 
      bool hasContainerId() const { return this->containerId_ != nullptr;};
      void deleteContainerId() { this->containerId_ = nullptr;};
      inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
      inline List& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


      // containerName Field Functions 
      bool hasContainerName() const { return this->containerName_ != nullptr;};
      void deleteContainerName() { this->containerName_ = nullptr;};
      inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
      inline List& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


      // fixList Field Functions 
      bool hasFixList() const { return this->fixList_ != nullptr;};
      void deleteFixList() { this->fixList_ = nullptr;};
      inline const vector<List::FixList> & getFixList() const { DARABONBA_PTR_GET_CONST(fixList_, vector<List::FixList>) };
      inline vector<List::FixList> getFixList() { DARABONBA_PTR_GET(fixList_, vector<List::FixList>) };
      inline List& setFixList(const vector<List::FixList> & fixList) { DARABONBA_PTR_SET_VALUE(fixList_, fixList) };
      inline List& setFixList(vector<List::FixList> && fixList) { DARABONBA_PTR_SET_RVALUE(fixList_, fixList) };


      // fixStatus Field Functions 
      bool hasFixStatus() const { return this->fixStatus_ != nullptr;};
      void deleteFixStatus() { this->fixStatus_ = nullptr;};
      inline int32_t getFixStatus() const { DARABONBA_PTR_GET_DEFAULT(fixStatus_, 0) };
      inline List& setFixStatus(int32_t fixStatus) { DARABONBA_PTR_SET_VALUE(fixStatus_, fixStatus) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline List& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline List& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline List& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // lastHandleTime Field Functions 
      bool hasLastHandleTime() const { return this->lastHandleTime_ != nullptr;};
      void deleteLastHandleTime() { this->lastHandleTime_ = nullptr;};
      inline int64_t getLastHandleTime() const { DARABONBA_PTR_GET_DEFAULT(lastHandleTime_, 0L) };
      inline List& setLastHandleTime(int64_t lastHandleTime) { DARABONBA_PTR_SET_VALUE(lastHandleTime_, lastHandleTime) };


      // lastScanTime Field Functions 
      bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
      void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
      inline int64_t getLastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
      inline List& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


      // portOpen Field Functions 
      bool hasPortOpen() const { return this->portOpen_ != nullptr;};
      void deletePortOpen() { this->portOpen_ = nullptr;};
      inline bool getPortOpen() const { DARABONBA_PTR_GET_DEFAULT(portOpen_, false) };
      inline List& setPortOpen(bool portOpen) { DARABONBA_PTR_SET_VALUE(portOpen_, portOpen) };


      // prompt Field Functions 
      bool hasPrompt() const { return this->prompt_ != nullptr;};
      void deletePrompt() { this->prompt_ = nullptr;};
      inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
      inline List& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline List& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline List& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline List& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline List& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline List& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline List& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // warningRiskList Field Functions 
      bool hasWarningRiskList() const { return this->warningRiskList_ != nullptr;};
      void deleteWarningRiskList() { this->warningRiskList_ = nullptr;};
      inline const vector<List::WarningRiskList> & getWarningRiskList() const { DARABONBA_PTR_GET_CONST(warningRiskList_, vector<List::WarningRiskList>) };
      inline vector<List::WarningRiskList> getWarningRiskList() { DARABONBA_PTR_GET(warningRiskList_, vector<List::WarningRiskList>) };
      inline List& setWarningRiskList(const vector<List::WarningRiskList> & warningRiskList) { DARABONBA_PTR_SET_VALUE(warningRiskList_, warningRiskList) };
      inline List& setWarningRiskList(vector<List::WarningRiskList> && warningRiskList) { DARABONBA_PTR_SET_RVALUE(warningRiskList_, warningRiskList) };


    protected:
      // 云产品资产的类型。
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
      // The ID of the container.
      shared_ptr<string> containerId_ {};
      // The name of the container.
      shared_ptr<string> containerName_ {};
      // The details of the baselines for which the risk item can be fixed.
      shared_ptr<vector<List::FixList>> fixList_ {};
      // Whether the repair is supported. Valid values:
      // *   **0**: Supported
      // *   **1**: Not Supported
      shared_ptr<int32_t> fixStatus_ {};
      // The instance ID of the server.
      shared_ptr<string> instanceId_ {};
      // The name of the server.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the affected asset.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the affected asset.
      shared_ptr<string> intranetIp_ {};
      // The timestamp of the latest processing of the check item risk of the machine. Unit: milliseconds.
      shared_ptr<int64_t> lastHandleTime_ {};
      // The timestamp generated when the last scan was performed. Unit: milliseconds.
      shared_ptr<int64_t> lastScanTime_ {};
      // Indicates whether a port on the server is accessible over the Internet. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> portOpen_ {};
      // The prompt for the risk item.
      shared_ptr<string> prompt_ {};
      // The region ID of the asset.
      shared_ptr<string> regionId_ {};
      // The status of the check item. Valid values:
      // 
      // *   **1**: failed
      // *   **2**: verifying
      // *   **3**: passed
      // *   **6**: ignored
      // *   **7**: fixing
      // *   **8**: fixed
      shared_ptr<int32_t> status_ {};
      // The ID of the asset that is scanned.
      shared_ptr<string> targetId_ {};
      // The name of the asset on which the malicious image sample is detected.
      shared_ptr<string> targetName_ {};
      // The type of the asset. Valid values:
      // 
      // *   **ECS_SNAPSHOT**
      // *   **ECS_IMAGE**
      shared_ptr<string> targetType_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
      // The information about the baselines on which the risk item is detected.
      shared_ptr<vector<List::WarningRiskList>> warningRiskList_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListCheckItemWarningMachineResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListCheckItemWarningMachineResponseBody::List>) };
    inline vector<ListCheckItemWarningMachineResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListCheckItemWarningMachineResponseBody::List>) };
    inline ListCheckItemWarningMachineResponseBody& setList(const vector<ListCheckItemWarningMachineResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListCheckItemWarningMachineResponseBody& setList(vector<ListCheckItemWarningMachineResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCheckItemWarningMachineResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCheckItemWarningMachineResponseBody::PageInfo) };
    inline ListCheckItemWarningMachineResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCheckItemWarningMachineResponseBody::PageInfo) };
    inline ListCheckItemWarningMachineResponseBody& setPageInfo(const ListCheckItemWarningMachineResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCheckItemWarningMachineResponseBody& setPageInfo(ListCheckItemWarningMachineResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCheckItemWarningMachineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The servers on which the alerts are generated.
    shared_ptr<vector<ListCheckItemWarningMachineResponseBody::List>> list_ {};
    // The pagination information.
    shared_ptr<ListCheckItemWarningMachineResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
