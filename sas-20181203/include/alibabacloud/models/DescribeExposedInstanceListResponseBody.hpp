// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCELISTRESPONSEBODY_HPP_
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
  class DescribeExposedInstanceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedInstanceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExposedInstances, exposedInstances_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedInstanceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExposedInstances, exposedInstances_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeExposedInstanceListResponseBody() = default ;
    DescribeExposedInstanceListResponseBody(const DescribeExposedInstanceListResponseBody &) = default ;
    DescribeExposedInstanceListResponseBody(DescribeExposedInstanceListResponseBody &&) = default ;
    DescribeExposedInstanceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedInstanceListResponseBody() = default ;
    DescribeExposedInstanceListResponseBody& operator=(const DescribeExposedInstanceListResponseBody &) = default ;
    DescribeExposedInstanceListResponseBody& operator=(DescribeExposedInstanceListResponseBody &&) = default ;
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
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class ExposedInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExposedInstances& obj) { 
        DARABONBA_PTR_TO_JSON(AsapVulCount, asapVulCount_);
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(CloudAssetInfo, cloudAssetInfo_);
        DARABONBA_PTR_TO_JSON(CspmAlarmCount, cspmAlarmCount_);
        DARABONBA_PTR_TO_JSON(ExploitHealthCount, exploitHealthCount_);
        DARABONBA_PTR_TO_JSON(ExposureComponent, exposureComponent_);
        DARABONBA_PTR_TO_JSON(ExposureComponentList, exposureComponentList_);
        DARABONBA_PTR_TO_JSON(ExposureIp, exposureIp_);
        DARABONBA_PTR_TO_JSON(ExposurePort, exposurePort_);
        DARABONBA_PTR_TO_JSON(ExposureType, exposureType_);
        DARABONBA_PTR_TO_JSON(ExposureTypeId, exposureTypeId_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(LaterVulCount, laterVulCount_);
        DARABONBA_PTR_TO_JSON(NntfVulCount, nntfVulCount_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(TotalVulCount, totalVulCount_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, ExposedInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(AsapVulCount, asapVulCount_);
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(CloudAssetInfo, cloudAssetInfo_);
        DARABONBA_PTR_FROM_JSON(CspmAlarmCount, cspmAlarmCount_);
        DARABONBA_PTR_FROM_JSON(ExploitHealthCount, exploitHealthCount_);
        DARABONBA_PTR_FROM_JSON(ExposureComponent, exposureComponent_);
        DARABONBA_PTR_FROM_JSON(ExposureComponentList, exposureComponentList_);
        DARABONBA_PTR_FROM_JSON(ExposureIp, exposureIp_);
        DARABONBA_PTR_FROM_JSON(ExposurePort, exposurePort_);
        DARABONBA_PTR_FROM_JSON(ExposureType, exposureType_);
        DARABONBA_PTR_FROM_JSON(ExposureTypeId, exposureTypeId_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(LaterVulCount, laterVulCount_);
        DARABONBA_PTR_FROM_JSON(NntfVulCount, nntfVulCount_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(TotalVulCount, totalVulCount_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      ExposedInstances() = default ;
      ExposedInstances(const ExposedInstances &) = default ;
      ExposedInstances(ExposedInstances &&) = default ;
      ExposedInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExposedInstances() = default ;
      ExposedInstances& operator=(const ExposedInstances &) = default ;
      ExposedInstances& operator=(ExposedInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ExposureComponentList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExposureComponentList& obj) { 
          DARABONBA_PTR_TO_JSON(ComponentBizType, componentBizType_);
          DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
          DARABONBA_PTR_TO_JSON(ComponentVersion, componentVersion_);
          DARABONBA_PTR_TO_JSON(ListenPort, listenPort_);
        };
        friend void from_json(const Darabonba::Json& j, ExposureComponentList& obj) { 
          DARABONBA_PTR_FROM_JSON(ComponentBizType, componentBizType_);
          DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
          DARABONBA_PTR_FROM_JSON(ComponentVersion, componentVersion_);
          DARABONBA_PTR_FROM_JSON(ListenPort, listenPort_);
        };
        ExposureComponentList() = default ;
        ExposureComponentList(const ExposureComponentList &) = default ;
        ExposureComponentList(ExposureComponentList &&) = default ;
        ExposureComponentList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExposureComponentList() = default ;
        ExposureComponentList& operator=(const ExposureComponentList &) = default ;
        ExposureComponentList& operator=(ExposureComponentList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->componentBizType_ == nullptr
        && this->componentName_ == nullptr && this->componentVersion_ == nullptr && this->listenPort_ == nullptr; };
        // componentBizType Field Functions 
        bool hasComponentBizType() const { return this->componentBizType_ != nullptr;};
        void deleteComponentBizType() { this->componentBizType_ = nullptr;};
        inline string getComponentBizType() const { DARABONBA_PTR_GET_DEFAULT(componentBizType_, "") };
        inline ExposureComponentList& setComponentBizType(string componentBizType) { DARABONBA_PTR_SET_VALUE(componentBizType_, componentBizType) };


        // componentName Field Functions 
        bool hasComponentName() const { return this->componentName_ != nullptr;};
        void deleteComponentName() { this->componentName_ = nullptr;};
        inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
        inline ExposureComponentList& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


        // componentVersion Field Functions 
        bool hasComponentVersion() const { return this->componentVersion_ != nullptr;};
        void deleteComponentVersion() { this->componentVersion_ = nullptr;};
        inline string getComponentVersion() const { DARABONBA_PTR_GET_DEFAULT(componentVersion_, "") };
        inline ExposureComponentList& setComponentVersion(string componentVersion) { DARABONBA_PTR_SET_VALUE(componentVersion_, componentVersion) };


        // listenPort Field Functions 
        bool hasListenPort() const { return this->listenPort_ != nullptr;};
        void deleteListenPort() { this->listenPort_ = nullptr;};
        inline string getListenPort() const { DARABONBA_PTR_GET_DEFAULT(listenPort_, "") };
        inline ExposureComponentList& setListenPort(string listenPort) { DARABONBA_PTR_SET_VALUE(listenPort_, listenPort) };


      protected:
        // Expose component type.
        shared_ptr<string> componentBizType_ {};
        // Expose components.
        shared_ptr<string> componentName_ {};
        // Expose component version.
        shared_ptr<string> componentVersion_ {};
        // Exposed port.
        shared_ptr<string> listenPort_ {};
      };

      virtual bool empty() const override { return this->asapVulCount_ == nullptr
        && this->assetType_ == nullptr && this->cloudAssetInfo_ == nullptr && this->cspmAlarmCount_ == nullptr && this->exploitHealthCount_ == nullptr && this->exposureComponent_ == nullptr
        && this->exposureComponentList_ == nullptr && this->exposureIp_ == nullptr && this->exposurePort_ == nullptr && this->exposureType_ == nullptr && this->exposureTypeId_ == nullptr
        && this->groupId_ == nullptr && this->groupName_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr
        && this->intranetIp_ == nullptr && this->laterVulCount_ == nullptr && this->nntfVulCount_ == nullptr && this->regionId_ == nullptr && this->totalVulCount_ == nullptr
        && this->uuid_ == nullptr; };
      // asapVulCount Field Functions 
      bool hasAsapVulCount() const { return this->asapVulCount_ != nullptr;};
      void deleteAsapVulCount() { this->asapVulCount_ = nullptr;};
      inline int32_t getAsapVulCount() const { DARABONBA_PTR_GET_DEFAULT(asapVulCount_, 0) };
      inline ExposedInstances& setAsapVulCount(int32_t asapVulCount) { DARABONBA_PTR_SET_VALUE(asapVulCount_, asapVulCount) };


      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
      inline ExposedInstances& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // cloudAssetInfo Field Functions 
      bool hasCloudAssetInfo() const { return this->cloudAssetInfo_ != nullptr;};
      void deleteCloudAssetInfo() { this->cloudAssetInfo_ = nullptr;};
      inline string getCloudAssetInfo() const { DARABONBA_PTR_GET_DEFAULT(cloudAssetInfo_, "") };
      inline ExposedInstances& setCloudAssetInfo(string cloudAssetInfo) { DARABONBA_PTR_SET_VALUE(cloudAssetInfo_, cloudAssetInfo) };


      // cspmAlarmCount Field Functions 
      bool hasCspmAlarmCount() const { return this->cspmAlarmCount_ != nullptr;};
      void deleteCspmAlarmCount() { this->cspmAlarmCount_ = nullptr;};
      inline int32_t getCspmAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(cspmAlarmCount_, 0) };
      inline ExposedInstances& setCspmAlarmCount(int32_t cspmAlarmCount) { DARABONBA_PTR_SET_VALUE(cspmAlarmCount_, cspmAlarmCount) };


      // exploitHealthCount Field Functions 
      bool hasExploitHealthCount() const { return this->exploitHealthCount_ != nullptr;};
      void deleteExploitHealthCount() { this->exploitHealthCount_ = nullptr;};
      inline int32_t getExploitHealthCount() const { DARABONBA_PTR_GET_DEFAULT(exploitHealthCount_, 0) };
      inline ExposedInstances& setExploitHealthCount(int32_t exploitHealthCount) { DARABONBA_PTR_SET_VALUE(exploitHealthCount_, exploitHealthCount) };


      // exposureComponent Field Functions 
      bool hasExposureComponent() const { return this->exposureComponent_ != nullptr;};
      void deleteExposureComponent() { this->exposureComponent_ = nullptr;};
      inline string getExposureComponent() const { DARABONBA_PTR_GET_DEFAULT(exposureComponent_, "") };
      inline ExposedInstances& setExposureComponent(string exposureComponent) { DARABONBA_PTR_SET_VALUE(exposureComponent_, exposureComponent) };


      // exposureComponentList Field Functions 
      bool hasExposureComponentList() const { return this->exposureComponentList_ != nullptr;};
      void deleteExposureComponentList() { this->exposureComponentList_ = nullptr;};
      inline const vector<ExposedInstances::ExposureComponentList> & getExposureComponentList() const { DARABONBA_PTR_GET_CONST(exposureComponentList_, vector<ExposedInstances::ExposureComponentList>) };
      inline vector<ExposedInstances::ExposureComponentList> getExposureComponentList() { DARABONBA_PTR_GET(exposureComponentList_, vector<ExposedInstances::ExposureComponentList>) };
      inline ExposedInstances& setExposureComponentList(const vector<ExposedInstances::ExposureComponentList> & exposureComponentList) { DARABONBA_PTR_SET_VALUE(exposureComponentList_, exposureComponentList) };
      inline ExposedInstances& setExposureComponentList(vector<ExposedInstances::ExposureComponentList> && exposureComponentList) { DARABONBA_PTR_SET_RVALUE(exposureComponentList_, exposureComponentList) };


      // exposureIp Field Functions 
      bool hasExposureIp() const { return this->exposureIp_ != nullptr;};
      void deleteExposureIp() { this->exposureIp_ = nullptr;};
      inline string getExposureIp() const { DARABONBA_PTR_GET_DEFAULT(exposureIp_, "") };
      inline ExposedInstances& setExposureIp(string exposureIp) { DARABONBA_PTR_SET_VALUE(exposureIp_, exposureIp) };


      // exposurePort Field Functions 
      bool hasExposurePort() const { return this->exposurePort_ != nullptr;};
      void deleteExposurePort() { this->exposurePort_ = nullptr;};
      inline string getExposurePort() const { DARABONBA_PTR_GET_DEFAULT(exposurePort_, "") };
      inline ExposedInstances& setExposurePort(string exposurePort) { DARABONBA_PTR_SET_VALUE(exposurePort_, exposurePort) };


      // exposureType Field Functions 
      bool hasExposureType() const { return this->exposureType_ != nullptr;};
      void deleteExposureType() { this->exposureType_ = nullptr;};
      inline string getExposureType() const { DARABONBA_PTR_GET_DEFAULT(exposureType_, "") };
      inline ExposedInstances& setExposureType(string exposureType) { DARABONBA_PTR_SET_VALUE(exposureType_, exposureType) };


      // exposureTypeId Field Functions 
      bool hasExposureTypeId() const { return this->exposureTypeId_ != nullptr;};
      void deleteExposureTypeId() { this->exposureTypeId_ = nullptr;};
      inline string getExposureTypeId() const { DARABONBA_PTR_GET_DEFAULT(exposureTypeId_, "") };
      inline ExposedInstances& setExposureTypeId(string exposureTypeId) { DARABONBA_PTR_SET_VALUE(exposureTypeId_, exposureTypeId) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline ExposedInstances& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline ExposedInstances& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ExposedInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline ExposedInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline ExposedInstances& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline ExposedInstances& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // laterVulCount Field Functions 
      bool hasLaterVulCount() const { return this->laterVulCount_ != nullptr;};
      void deleteLaterVulCount() { this->laterVulCount_ = nullptr;};
      inline int32_t getLaterVulCount() const { DARABONBA_PTR_GET_DEFAULT(laterVulCount_, 0) };
      inline ExposedInstances& setLaterVulCount(int32_t laterVulCount) { DARABONBA_PTR_SET_VALUE(laterVulCount_, laterVulCount) };


      // nntfVulCount Field Functions 
      bool hasNntfVulCount() const { return this->nntfVulCount_ != nullptr;};
      void deleteNntfVulCount() { this->nntfVulCount_ = nullptr;};
      inline int32_t getNntfVulCount() const { DARABONBA_PTR_GET_DEFAULT(nntfVulCount_, 0) };
      inline ExposedInstances& setNntfVulCount(int32_t nntfVulCount) { DARABONBA_PTR_SET_VALUE(nntfVulCount_, nntfVulCount) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ExposedInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // totalVulCount Field Functions 
      bool hasTotalVulCount() const { return this->totalVulCount_ != nullptr;};
      void deleteTotalVulCount() { this->totalVulCount_ = nullptr;};
      inline int32_t getTotalVulCount() const { DARABONBA_PTR_GET_DEFAULT(totalVulCount_, 0) };
      inline ExposedInstances& setTotalVulCount(int32_t totalVulCount) { DARABONBA_PTR_SET_VALUE(totalVulCount_, totalVulCount) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline ExposedInstances& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The number of high-severity vulnerabilities that are exposed on the Internet and can be exploited by attackers.
      shared_ptr<int32_t> asapVulCount_ {};
      // The type of the asset. Valid values:
      // 
      // *   **0**: an ECS instance.
      // *   **1**: a SLB instance.
      // *   **2**: a NAT gateway.
      // *   **3**: an ApsaraDB RDS instance.
      // *   **4**: an ApsaraDB for MongoDB instance.
      // *   **5**: an ApsaraDB for Redis instance.
      // *   **6**: a container image.
      // *   **7**: a container.
      shared_ptr<int32_t> assetType_ {};
      // The JSON string that specifies the information about a database asset, which contains the following fields.
      // 
      // *   assetSubType: the asset subtype.
      // *   assetSubTypeName: the name of the asset subtype.
      // *   assetType: the type of the asset.
      // *   assetTypeName: the name of the asset type.
      // *   vendor: the service provider of the asset.
      shared_ptr<string> cloudAssetInfo_ {};
      // The number of CSPM risks.
      shared_ptr<int32_t> cspmAlarmCount_ {};
      // The number of weak password risks.
      shared_ptr<int32_t> exploitHealthCount_ {};
      // The server component that is exposed on the Internet.
      shared_ptr<string> exposureComponent_ {};
      // Expose component information list.
      shared_ptr<vector<ExposedInstances::ExposureComponentList>> exposureComponentList_ {};
      // The public IP address that is exposed on the Internet.
      shared_ptr<string> exposureIp_ {};
      // The port that is exposed on the Internet.
      shared_ptr<string> exposurePort_ {};
      // The resource from which the asset is exposed. Valid values:
      // 
      // *   **INTERNET_IP**: the public IP address of an ECS instance.
      // *   **SLB**: the public IP address of a Server Load Balancer (SLB) instance.
      // *   **EIP**: an elastic IP address (EIP).
      // *   **DNAT**: the NAT gateway that connects to the Internet by using the Destination Network Address Translation (DNAT) feature.
      // *   **DB_CONNECTION**: the public endpoint of a database.
      shared_ptr<string> exposureType_ {};
      // The ID of the instance to which the resource belongs. The valid values of this parameter vary based on the value of the ExposureType parameter.
      // 
      // *   If the value of the ExposureType parameter is **INTERNET_IP**, this parameter is empty.
      // *   If the value of the ExposureType parameter is **SLB**, the value of this parameter is the ID of the SLB instance.
      // *   If the value of the ExposureType parameter is **EIP**, the value of this parameter is the ID of the EIP.
      // *   If the value of the ExposureType parameter is **DNAT**, the value of this parameter is the ID of the NAT gateway.
      // *   If the value of the ExposureType parameter is **DB_CONNECTION**, the value of this parameter is the ID of the database.
      shared_ptr<string> exposureTypeId_ {};
      // The ID of the server group.
      shared_ptr<int64_t> groupId_ {};
      // The name of the server group.
      shared_ptr<string> groupName_ {};
      // The instance ID of the asset.
      shared_ptr<string> instanceId_ {};
      // The name of the asset.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // The number of medium-severity vulnerabilities that are exposed on the Internet and can be exploited by attackers.
      shared_ptr<int32_t> laterVulCount_ {};
      // The number of low-severity vulnerabilities that are exposed on the Internet and can be exploited by attackers.
      shared_ptr<int32_t> nntfVulCount_ {};
      // The ID of the region in which the asset resides.
      // 
      // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
      shared_ptr<string> regionId_ {};
      // The total number of vulnerabilities that are exposed on the Internet and can be exploited by attackers.
      shared_ptr<int32_t> totalVulCount_ {};
      // The UUID of the server or the instance ID of the cloud service.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->exposedInstances_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // exposedInstances Field Functions 
    bool hasExposedInstances() const { return this->exposedInstances_ != nullptr;};
    void deleteExposedInstances() { this->exposedInstances_ = nullptr;};
    inline const vector<DescribeExposedInstanceListResponseBody::ExposedInstances> & getExposedInstances() const { DARABONBA_PTR_GET_CONST(exposedInstances_, vector<DescribeExposedInstanceListResponseBody::ExposedInstances>) };
    inline vector<DescribeExposedInstanceListResponseBody::ExposedInstances> getExposedInstances() { DARABONBA_PTR_GET(exposedInstances_, vector<DescribeExposedInstanceListResponseBody::ExposedInstances>) };
    inline DescribeExposedInstanceListResponseBody& setExposedInstances(const vector<DescribeExposedInstanceListResponseBody::ExposedInstances> & exposedInstances) { DARABONBA_PTR_SET_VALUE(exposedInstances_, exposedInstances) };
    inline DescribeExposedInstanceListResponseBody& setExposedInstances(vector<DescribeExposedInstanceListResponseBody::ExposedInstances> && exposedInstances) { DARABONBA_PTR_SET_RVALUE(exposedInstances_, exposedInstances) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeExposedInstanceListResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeExposedInstanceListResponseBody::PageInfo) };
    inline DescribeExposedInstanceListResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeExposedInstanceListResponseBody::PageInfo) };
    inline DescribeExposedInstanceListResponseBody& setPageInfo(const DescribeExposedInstanceListResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeExposedInstanceListResponseBody& setPageInfo(DescribeExposedInstanceListResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExposedInstanceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the exposures.
    shared_ptr<vector<DescribeExposedInstanceListResponseBody::ExposedInstances>> exposedInstances_ {};
    // The pagination information.
    shared_ptr<DescribeExposedInstanceListResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
