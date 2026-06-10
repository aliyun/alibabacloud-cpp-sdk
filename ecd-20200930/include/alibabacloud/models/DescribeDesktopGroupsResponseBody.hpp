// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopGroups, desktopGroups_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopGroups, desktopGroups_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDesktopGroupsResponseBody() = default ;
    DescribeDesktopGroupsResponseBody(const DescribeDesktopGroupsResponseBody &) = default ;
    DescribeDesktopGroupsResponseBody(DescribeDesktopGroupsResponseBody &&) = default ;
    DescribeDesktopGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopGroupsResponseBody() = default ;
    DescribeDesktopGroupsResponseBody& operator=(const DescribeDesktopGroupsResponseBody &) = default ;
    DescribeDesktopGroupsResponseBody& operator=(DescribeDesktopGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DesktopGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DesktopGroups& obj) { 
        DARABONBA_PTR_TO_JSON(AccountType, accountType_);
        DARABONBA_PTR_TO_JSON(BindAmount, bindAmount_);
        DARABONBA_PTR_TO_JSON(BuyDesktopsCount, buyDesktopsCount_);
        DARABONBA_PTR_TO_JSON(Comments, comments_);
        DARABONBA_PTR_TO_JSON(ConnectDuration, connectDuration_);
        DARABONBA_PTR_TO_JSON(CountPerStatus, countPerStatus_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(DataDiskCategory, dataDiskCategory_);
        DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_TO_JSON(DesktopCount, desktopCount_);
        DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
        DARABONBA_PTR_TO_JSON(DesktopGroupName, desktopGroupName_);
        DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
        DARABONBA_PTR_TO_JSON(EndUserCount, endUserCount_);
        DARABONBA_PTR_TO_JSON(EntraDomainName, entraDomainName_);
        DARABONBA_PTR_TO_JSON(EnvId, envId_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(ExpiredTimes, expiredTimes_);
        DARABONBA_PTR_TO_JSON(GpuCount, gpuCount_);
        DARABONBA_PTR_TO_JSON(GpuDriverVersion, gpuDriverVersion_);
        DARABONBA_PTR_TO_JSON(GpuSpec, gpuSpec_);
        DARABONBA_PTR_TO_JSON(IdleDisconnectDuration, idleDisconnectDuration_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(IsLdap, isLdap_);
        DARABONBA_PTR_TO_JSON(KeepDuration, keepDuration_);
        DARABONBA_PTR_TO_JSON(LoadPolicy, loadPolicy_);
        DARABONBA_PTR_TO_JSON(MaxDesktopsCount, maxDesktopsCount_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(MinDesktopsCount, minDesktopsCount_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_TO_JSON(OfficeSiteType, officeSiteType_);
        DARABONBA_PTR_TO_JSON(OrgId, orgId_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(OwnBundleId, ownBundleId_);
        DARABONBA_PTR_TO_JSON(OwnBundleName, ownBundleName_);
        DARABONBA_PTR_TO_JSON(OwnType, ownType_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
        DARABONBA_PTR_TO_JSON(PolicyGroupIdList, policyGroupIdList_);
        DARABONBA_PTR_TO_JSON(PolicyGroupName, policyGroupName_);
        DARABONBA_PTR_TO_JSON(PolicyGroupNameList, policyGroupNameList_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(QosRuleId, qosRuleId_);
        DARABONBA_PTR_TO_JSON(RatioThreshold, ratioThreshold_);
        DARABONBA_PTR_TO_JSON(ResetType, resetType_);
        DARABONBA_PTR_TO_JSON(SimpleUserGroupId, simpleUserGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StopDuration, stopDuration_);
        DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
        DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
        DARABONBA_PTR_TO_JSON(UserOuPath, userOuPath_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
        DARABONBA_PTR_TO_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
      };
      friend void from_json(const Darabonba::Json& j, DesktopGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
        DARABONBA_PTR_FROM_JSON(BindAmount, bindAmount_);
        DARABONBA_PTR_FROM_JSON(BuyDesktopsCount, buyDesktopsCount_);
        DARABONBA_PTR_FROM_JSON(Comments, comments_);
        DARABONBA_PTR_FROM_JSON(ConnectDuration, connectDuration_);
        DARABONBA_PTR_FROM_JSON(CountPerStatus, countPerStatus_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(DataDiskCategory, dataDiskCategory_);
        DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_FROM_JSON(DesktopCount, desktopCount_);
        DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
        DARABONBA_PTR_FROM_JSON(DesktopGroupName, desktopGroupName_);
        DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
        DARABONBA_PTR_FROM_JSON(EndUserCount, endUserCount_);
        DARABONBA_PTR_FROM_JSON(EntraDomainName, entraDomainName_);
        DARABONBA_PTR_FROM_JSON(EnvId, envId_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(ExpiredTimes, expiredTimes_);
        DARABONBA_PTR_FROM_JSON(GpuCount, gpuCount_);
        DARABONBA_PTR_FROM_JSON(GpuDriverVersion, gpuDriverVersion_);
        DARABONBA_PTR_FROM_JSON(GpuSpec, gpuSpec_);
        DARABONBA_PTR_FROM_JSON(IdleDisconnectDuration, idleDisconnectDuration_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(IsLdap, isLdap_);
        DARABONBA_PTR_FROM_JSON(KeepDuration, keepDuration_);
        DARABONBA_PTR_FROM_JSON(LoadPolicy, loadPolicy_);
        DARABONBA_PTR_FROM_JSON(MaxDesktopsCount, maxDesktopsCount_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(MinDesktopsCount, minDesktopsCount_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteType, officeSiteType_);
        DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(OwnBundleId, ownBundleId_);
        DARABONBA_PTR_FROM_JSON(OwnBundleName, ownBundleName_);
        DARABONBA_PTR_FROM_JSON(OwnType, ownType_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
        DARABONBA_PTR_FROM_JSON(PolicyGroupIdList, policyGroupIdList_);
        DARABONBA_PTR_FROM_JSON(PolicyGroupName, policyGroupName_);
        DARABONBA_PTR_FROM_JSON(PolicyGroupNameList, policyGroupNameList_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(QosRuleId, qosRuleId_);
        DARABONBA_PTR_FROM_JSON(RatioThreshold, ratioThreshold_);
        DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
        DARABONBA_PTR_FROM_JSON(SimpleUserGroupId, simpleUserGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StopDuration, stopDuration_);
        DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
        DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
        DARABONBA_PTR_FROM_JSON(UserOuPath, userOuPath_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
        DARABONBA_PTR_FROM_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
      };
      DesktopGroups() = default ;
      DesktopGroups(const DesktopGroups &) = default ;
      DesktopGroups(DesktopGroups &&) = default ;
      DesktopGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DesktopGroups() = default ;
      DesktopGroups& operator=(const DesktopGroups &) = default ;
      DesktopGroups& operator=(DesktopGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class CountPerStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CountPerStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, CountPerStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        CountPerStatus() = default ;
        CountPerStatus(const CountPerStatus &) = default ;
        CountPerStatus(CountPerStatus &&) = default ;
        CountPerStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CountPerStatus() = default ;
        CountPerStatus& operator=(const CountPerStatus &) = default ;
        CountPerStatus& operator=(CountPerStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->status_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline CountPerStatus& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CountPerStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The number of cloud desktops in the specified status.
        shared_ptr<int32_t> count_ {};
        // The status of the cloud desktop.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->accountType_ == nullptr
        && this->bindAmount_ == nullptr && this->buyDesktopsCount_ == nullptr && this->comments_ == nullptr && this->connectDuration_ == nullptr && this->countPerStatus_ == nullptr
        && this->cpu_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->dataDiskCategory_ == nullptr && this->dataDiskSize_ == nullptr
        && this->desktopCount_ == nullptr && this->desktopGroupId_ == nullptr && this->desktopGroupName_ == nullptr && this->desktopType_ == nullptr && this->endUserCount_ == nullptr
        && this->entraDomainName_ == nullptr && this->envId_ == nullptr && this->envType_ == nullptr && this->expiredTime_ == nullptr && this->expiredTimes_ == nullptr
        && this->gpuCount_ == nullptr && this->gpuDriverVersion_ == nullptr && this->gpuSpec_ == nullptr && this->idleDisconnectDuration_ == nullptr && this->imageId_ == nullptr
        && this->isLdap_ == nullptr && this->keepDuration_ == nullptr && this->loadPolicy_ == nullptr && this->maxDesktopsCount_ == nullptr && this->memory_ == nullptr
        && this->minDesktopsCount_ == nullptr && this->officeSiteId_ == nullptr && this->officeSiteName_ == nullptr && this->officeSiteType_ == nullptr && this->orgId_ == nullptr
        && this->osType_ == nullptr && this->ownBundleId_ == nullptr && this->ownBundleName_ == nullptr && this->ownType_ == nullptr && this->payType_ == nullptr
        && this->policyGroupId_ == nullptr && this->policyGroupIdList_ == nullptr && this->policyGroupName_ == nullptr && this->policyGroupNameList_ == nullptr && this->protocolType_ == nullptr
        && this->qosRuleId_ == nullptr && this->ratioThreshold_ == nullptr && this->resetType_ == nullptr && this->simpleUserGroupId_ == nullptr && this->status_ == nullptr
        && this->stopDuration_ == nullptr && this->subnetId_ == nullptr && this->systemDiskCategory_ == nullptr && this->systemDiskSize_ == nullptr && this->tags_ == nullptr
        && this->userGroupName_ == nullptr && this->userOuPath_ == nullptr && this->version_ == nullptr && this->volumeEncryptionEnabled_ == nullptr && this->volumeEncryptionKey_ == nullptr; };
      // accountType Field Functions 
      bool hasAccountType() const { return this->accountType_ != nullptr;};
      void deleteAccountType() { this->accountType_ = nullptr;};
      inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
      inline DesktopGroups& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


      // bindAmount Field Functions 
      bool hasBindAmount() const { return this->bindAmount_ != nullptr;};
      void deleteBindAmount() { this->bindAmount_ = nullptr;};
      inline int64_t getBindAmount() const { DARABONBA_PTR_GET_DEFAULT(bindAmount_, 0L) };
      inline DesktopGroups& setBindAmount(int64_t bindAmount) { DARABONBA_PTR_SET_VALUE(bindAmount_, bindAmount) };


      // buyDesktopsCount Field Functions 
      bool hasBuyDesktopsCount() const { return this->buyDesktopsCount_ != nullptr;};
      void deleteBuyDesktopsCount() { this->buyDesktopsCount_ = nullptr;};
      inline int32_t getBuyDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(buyDesktopsCount_, 0) };
      inline DesktopGroups& setBuyDesktopsCount(int32_t buyDesktopsCount) { DARABONBA_PTR_SET_VALUE(buyDesktopsCount_, buyDesktopsCount) };


      // comments Field Functions 
      bool hasComments() const { return this->comments_ != nullptr;};
      void deleteComments() { this->comments_ = nullptr;};
      inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
      inline DesktopGroups& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


      // connectDuration Field Functions 
      bool hasConnectDuration() const { return this->connectDuration_ != nullptr;};
      void deleteConnectDuration() { this->connectDuration_ = nullptr;};
      inline int64_t getConnectDuration() const { DARABONBA_PTR_GET_DEFAULT(connectDuration_, 0L) };
      inline DesktopGroups& setConnectDuration(int64_t connectDuration) { DARABONBA_PTR_SET_VALUE(connectDuration_, connectDuration) };


      // countPerStatus Field Functions 
      bool hasCountPerStatus() const { return this->countPerStatus_ != nullptr;};
      void deleteCountPerStatus() { this->countPerStatus_ = nullptr;};
      inline const vector<DesktopGroups::CountPerStatus> & getCountPerStatus() const { DARABONBA_PTR_GET_CONST(countPerStatus_, vector<DesktopGroups::CountPerStatus>) };
      inline vector<DesktopGroups::CountPerStatus> getCountPerStatus() { DARABONBA_PTR_GET(countPerStatus_, vector<DesktopGroups::CountPerStatus>) };
      inline DesktopGroups& setCountPerStatus(const vector<DesktopGroups::CountPerStatus> & countPerStatus) { DARABONBA_PTR_SET_VALUE(countPerStatus_, countPerStatus) };
      inline DesktopGroups& setCountPerStatus(vector<DesktopGroups::CountPerStatus> && countPerStatus) { DARABONBA_PTR_SET_RVALUE(countPerStatus_, countPerStatus) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
      inline DesktopGroups& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DesktopGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline DesktopGroups& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // dataDiskCategory Field Functions 
      bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
      void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
      inline string getDataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
      inline DesktopGroups& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


      // dataDiskSize Field Functions 
      bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
      void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
      inline string getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, "") };
      inline DesktopGroups& setDataDiskSize(string dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


      // desktopCount Field Functions 
      bool hasDesktopCount() const { return this->desktopCount_ != nullptr;};
      void deleteDesktopCount() { this->desktopCount_ = nullptr;};
      inline int32_t getDesktopCount() const { DARABONBA_PTR_GET_DEFAULT(desktopCount_, 0) };
      inline DesktopGroups& setDesktopCount(int32_t desktopCount) { DARABONBA_PTR_SET_VALUE(desktopCount_, desktopCount) };


      // desktopGroupId Field Functions 
      bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
      void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
      inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
      inline DesktopGroups& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


      // desktopGroupName Field Functions 
      bool hasDesktopGroupName() const { return this->desktopGroupName_ != nullptr;};
      void deleteDesktopGroupName() { this->desktopGroupName_ = nullptr;};
      inline string getDesktopGroupName() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupName_, "") };
      inline DesktopGroups& setDesktopGroupName(string desktopGroupName) { DARABONBA_PTR_SET_VALUE(desktopGroupName_, desktopGroupName) };


      // desktopType Field Functions 
      bool hasDesktopType() const { return this->desktopType_ != nullptr;};
      void deleteDesktopType() { this->desktopType_ = nullptr;};
      inline string getDesktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
      inline DesktopGroups& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


      // endUserCount Field Functions 
      bool hasEndUserCount() const { return this->endUserCount_ != nullptr;};
      void deleteEndUserCount() { this->endUserCount_ = nullptr;};
      inline int32_t getEndUserCount() const { DARABONBA_PTR_GET_DEFAULT(endUserCount_, 0) };
      inline DesktopGroups& setEndUserCount(int32_t endUserCount) { DARABONBA_PTR_SET_VALUE(endUserCount_, endUserCount) };


      // entraDomainName Field Functions 
      bool hasEntraDomainName() const { return this->entraDomainName_ != nullptr;};
      void deleteEntraDomainName() { this->entraDomainName_ = nullptr;};
      inline string getEntraDomainName() const { DARABONBA_PTR_GET_DEFAULT(entraDomainName_, "") };
      inline DesktopGroups& setEntraDomainName(string entraDomainName) { DARABONBA_PTR_SET_VALUE(entraDomainName_, entraDomainName) };


      // envId Field Functions 
      bool hasEnvId() const { return this->envId_ != nullptr;};
      void deleteEnvId() { this->envId_ = nullptr;};
      inline string getEnvId() const { DARABONBA_PTR_GET_DEFAULT(envId_, "") };
      inline DesktopGroups& setEnvId(string envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline DesktopGroups& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline DesktopGroups& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // expiredTimes Field Functions 
      bool hasExpiredTimes() const { return this->expiredTimes_ != nullptr;};
      void deleteExpiredTimes() { this->expiredTimes_ = nullptr;};
      inline const vector<string> & getExpiredTimes() const { DARABONBA_PTR_GET_CONST(expiredTimes_, vector<string>) };
      inline vector<string> getExpiredTimes() { DARABONBA_PTR_GET(expiredTimes_, vector<string>) };
      inline DesktopGroups& setExpiredTimes(const vector<string> & expiredTimes) { DARABONBA_PTR_SET_VALUE(expiredTimes_, expiredTimes) };
      inline DesktopGroups& setExpiredTimes(vector<string> && expiredTimes) { DARABONBA_PTR_SET_RVALUE(expiredTimes_, expiredTimes) };


      // gpuCount Field Functions 
      bool hasGpuCount() const { return this->gpuCount_ != nullptr;};
      void deleteGpuCount() { this->gpuCount_ = nullptr;};
      inline float getGpuCount() const { DARABONBA_PTR_GET_DEFAULT(gpuCount_, 0.0) };
      inline DesktopGroups& setGpuCount(float gpuCount) { DARABONBA_PTR_SET_VALUE(gpuCount_, gpuCount) };


      // gpuDriverVersion Field Functions 
      bool hasGpuDriverVersion() const { return this->gpuDriverVersion_ != nullptr;};
      void deleteGpuDriverVersion() { this->gpuDriverVersion_ = nullptr;};
      inline string getGpuDriverVersion() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverVersion_, "") };
      inline DesktopGroups& setGpuDriverVersion(string gpuDriverVersion) { DARABONBA_PTR_SET_VALUE(gpuDriverVersion_, gpuDriverVersion) };


      // gpuSpec Field Functions 
      bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
      void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
      inline string getGpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
      inline DesktopGroups& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


      // idleDisconnectDuration Field Functions 
      bool hasIdleDisconnectDuration() const { return this->idleDisconnectDuration_ != nullptr;};
      void deleteIdleDisconnectDuration() { this->idleDisconnectDuration_ = nullptr;};
      inline int64_t getIdleDisconnectDuration() const { DARABONBA_PTR_GET_DEFAULT(idleDisconnectDuration_, 0L) };
      inline DesktopGroups& setIdleDisconnectDuration(int64_t idleDisconnectDuration) { DARABONBA_PTR_SET_VALUE(idleDisconnectDuration_, idleDisconnectDuration) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline DesktopGroups& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // isLdap Field Functions 
      bool hasIsLdap() const { return this->isLdap_ != nullptr;};
      void deleteIsLdap() { this->isLdap_ = nullptr;};
      inline bool getIsLdap() const { DARABONBA_PTR_GET_DEFAULT(isLdap_, false) };
      inline DesktopGroups& setIsLdap(bool isLdap) { DARABONBA_PTR_SET_VALUE(isLdap_, isLdap) };


      // keepDuration Field Functions 
      bool hasKeepDuration() const { return this->keepDuration_ != nullptr;};
      void deleteKeepDuration() { this->keepDuration_ = nullptr;};
      inline int64_t getKeepDuration() const { DARABONBA_PTR_GET_DEFAULT(keepDuration_, 0L) };
      inline DesktopGroups& setKeepDuration(int64_t keepDuration) { DARABONBA_PTR_SET_VALUE(keepDuration_, keepDuration) };


      // loadPolicy Field Functions 
      bool hasLoadPolicy() const { return this->loadPolicy_ != nullptr;};
      void deleteLoadPolicy() { this->loadPolicy_ = nullptr;};
      inline int64_t getLoadPolicy() const { DARABONBA_PTR_GET_DEFAULT(loadPolicy_, 0L) };
      inline DesktopGroups& setLoadPolicy(int64_t loadPolicy) { DARABONBA_PTR_SET_VALUE(loadPolicy_, loadPolicy) };


      // maxDesktopsCount Field Functions 
      bool hasMaxDesktopsCount() const { return this->maxDesktopsCount_ != nullptr;};
      void deleteMaxDesktopsCount() { this->maxDesktopsCount_ = nullptr;};
      inline int32_t getMaxDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(maxDesktopsCount_, 0) };
      inline DesktopGroups& setMaxDesktopsCount(int32_t maxDesktopsCount) { DARABONBA_PTR_SET_VALUE(maxDesktopsCount_, maxDesktopsCount) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
      inline DesktopGroups& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // minDesktopsCount Field Functions 
      bool hasMinDesktopsCount() const { return this->minDesktopsCount_ != nullptr;};
      void deleteMinDesktopsCount() { this->minDesktopsCount_ = nullptr;};
      inline int32_t getMinDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(minDesktopsCount_, 0) };
      inline DesktopGroups& setMinDesktopsCount(int32_t minDesktopsCount) { DARABONBA_PTR_SET_VALUE(minDesktopsCount_, minDesktopsCount) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline DesktopGroups& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // officeSiteName Field Functions 
      bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
      void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
      inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
      inline DesktopGroups& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


      // officeSiteType Field Functions 
      bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
      void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
      inline string getOfficeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
      inline DesktopGroups& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


      // orgId Field Functions 
      bool hasOrgId() const { return this->orgId_ != nullptr;};
      void deleteOrgId() { this->orgId_ = nullptr;};
      inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
      inline DesktopGroups& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline DesktopGroups& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // ownBundleId Field Functions 
      bool hasOwnBundleId() const { return this->ownBundleId_ != nullptr;};
      void deleteOwnBundleId() { this->ownBundleId_ = nullptr;};
      inline string getOwnBundleId() const { DARABONBA_PTR_GET_DEFAULT(ownBundleId_, "") };
      inline DesktopGroups& setOwnBundleId(string ownBundleId) { DARABONBA_PTR_SET_VALUE(ownBundleId_, ownBundleId) };


      // ownBundleName Field Functions 
      bool hasOwnBundleName() const { return this->ownBundleName_ != nullptr;};
      void deleteOwnBundleName() { this->ownBundleName_ = nullptr;};
      inline string getOwnBundleName() const { DARABONBA_PTR_GET_DEFAULT(ownBundleName_, "") };
      inline DesktopGroups& setOwnBundleName(string ownBundleName) { DARABONBA_PTR_SET_VALUE(ownBundleName_, ownBundleName) };


      // ownType Field Functions 
      bool hasOwnType() const { return this->ownType_ != nullptr;};
      void deleteOwnType() { this->ownType_ = nullptr;};
      inline int64_t getOwnType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, 0L) };
      inline DesktopGroups& setOwnType(int64_t ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline DesktopGroups& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // policyGroupId Field Functions 
      bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
      void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
      inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
      inline DesktopGroups& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


      // policyGroupIdList Field Functions 
      bool hasPolicyGroupIdList() const { return this->policyGroupIdList_ != nullptr;};
      void deletePolicyGroupIdList() { this->policyGroupIdList_ = nullptr;};
      inline const vector<string> & getPolicyGroupIdList() const { DARABONBA_PTR_GET_CONST(policyGroupIdList_, vector<string>) };
      inline vector<string> getPolicyGroupIdList() { DARABONBA_PTR_GET(policyGroupIdList_, vector<string>) };
      inline DesktopGroups& setPolicyGroupIdList(const vector<string> & policyGroupIdList) { DARABONBA_PTR_SET_VALUE(policyGroupIdList_, policyGroupIdList) };
      inline DesktopGroups& setPolicyGroupIdList(vector<string> && policyGroupIdList) { DARABONBA_PTR_SET_RVALUE(policyGroupIdList_, policyGroupIdList) };


      // policyGroupName Field Functions 
      bool hasPolicyGroupName() const { return this->policyGroupName_ != nullptr;};
      void deletePolicyGroupName() { this->policyGroupName_ = nullptr;};
      inline string getPolicyGroupName() const { DARABONBA_PTR_GET_DEFAULT(policyGroupName_, "") };
      inline DesktopGroups& setPolicyGroupName(string policyGroupName) { DARABONBA_PTR_SET_VALUE(policyGroupName_, policyGroupName) };


      // policyGroupNameList Field Functions 
      bool hasPolicyGroupNameList() const { return this->policyGroupNameList_ != nullptr;};
      void deletePolicyGroupNameList() { this->policyGroupNameList_ = nullptr;};
      inline const vector<string> & getPolicyGroupNameList() const { DARABONBA_PTR_GET_CONST(policyGroupNameList_, vector<string>) };
      inline vector<string> getPolicyGroupNameList() { DARABONBA_PTR_GET(policyGroupNameList_, vector<string>) };
      inline DesktopGroups& setPolicyGroupNameList(const vector<string> & policyGroupNameList) { DARABONBA_PTR_SET_VALUE(policyGroupNameList_, policyGroupNameList) };
      inline DesktopGroups& setPolicyGroupNameList(vector<string> && policyGroupNameList) { DARABONBA_PTR_SET_RVALUE(policyGroupNameList_, policyGroupNameList) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline DesktopGroups& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // qosRuleId Field Functions 
      bool hasQosRuleId() const { return this->qosRuleId_ != nullptr;};
      void deleteQosRuleId() { this->qosRuleId_ = nullptr;};
      inline string getQosRuleId() const { DARABONBA_PTR_GET_DEFAULT(qosRuleId_, "") };
      inline DesktopGroups& setQosRuleId(string qosRuleId) { DARABONBA_PTR_SET_VALUE(qosRuleId_, qosRuleId) };


      // ratioThreshold Field Functions 
      bool hasRatioThreshold() const { return this->ratioThreshold_ != nullptr;};
      void deleteRatioThreshold() { this->ratioThreshold_ = nullptr;};
      inline float getRatioThreshold() const { DARABONBA_PTR_GET_DEFAULT(ratioThreshold_, 0.0) };
      inline DesktopGroups& setRatioThreshold(float ratioThreshold) { DARABONBA_PTR_SET_VALUE(ratioThreshold_, ratioThreshold) };


      // resetType Field Functions 
      bool hasResetType() const { return this->resetType_ != nullptr;};
      void deleteResetType() { this->resetType_ = nullptr;};
      inline int64_t getResetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, 0L) };
      inline DesktopGroups& setResetType(int64_t resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


      // simpleUserGroupId Field Functions 
      bool hasSimpleUserGroupId() const { return this->simpleUserGroupId_ != nullptr;};
      void deleteSimpleUserGroupId() { this->simpleUserGroupId_ = nullptr;};
      inline string getSimpleUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(simpleUserGroupId_, "") };
      inline DesktopGroups& setSimpleUserGroupId(string simpleUserGroupId) { DARABONBA_PTR_SET_VALUE(simpleUserGroupId_, simpleUserGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline DesktopGroups& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // stopDuration Field Functions 
      bool hasStopDuration() const { return this->stopDuration_ != nullptr;};
      void deleteStopDuration() { this->stopDuration_ = nullptr;};
      inline int64_t getStopDuration() const { DARABONBA_PTR_GET_DEFAULT(stopDuration_, 0L) };
      inline DesktopGroups& setStopDuration(int64_t stopDuration) { DARABONBA_PTR_SET_VALUE(stopDuration_, stopDuration) };


      // subnetId Field Functions 
      bool hasSubnetId() const { return this->subnetId_ != nullptr;};
      void deleteSubnetId() { this->subnetId_ = nullptr;};
      inline string getSubnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
      inline DesktopGroups& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


      // systemDiskCategory Field Functions 
      bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
      void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
      inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
      inline DesktopGroups& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
      inline DesktopGroups& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<DesktopGroups::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DesktopGroups::Tags>) };
      inline vector<DesktopGroups::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DesktopGroups::Tags>) };
      inline DesktopGroups& setTags(const vector<DesktopGroups::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline DesktopGroups& setTags(vector<DesktopGroups::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // userGroupName Field Functions 
      bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
      void deleteUserGroupName() { this->userGroupName_ = nullptr;};
      inline string getUserGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
      inline DesktopGroups& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


      // userOuPath Field Functions 
      bool hasUserOuPath() const { return this->userOuPath_ != nullptr;};
      void deleteUserOuPath() { this->userOuPath_ = nullptr;};
      inline string getUserOuPath() const { DARABONBA_PTR_GET_DEFAULT(userOuPath_, "") };
      inline DesktopGroups& setUserOuPath(string userOuPath) { DARABONBA_PTR_SET_VALUE(userOuPath_, userOuPath) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline DesktopGroups& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // volumeEncryptionEnabled Field Functions 
      bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
      void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
      inline bool getVolumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
      inline DesktopGroups& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


      // volumeEncryptionKey Field Functions 
      bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
      void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
      inline string getVolumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
      inline DesktopGroups& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


    protected:
      shared_ptr<string> accountType_ {};
      // The number of concurrent sessions allowed per cloud desktop in a multi-session shared cloud desktop group.
      shared_ptr<int64_t> bindAmount_ {};
      // The number of cloud desktops that you purchase. This parameter applies only to subscription shared cloud desktop groups. Valid values: 0 to 200.
      shared_ptr<int32_t> buyDesktopsCount_ {};
      // The comments on the shared cloud desktop group.
      shared_ptr<string> comments_ {};
      // The maximum session duration, in milliseconds. When this duration is reached, the session is automatically disconnected.
      shared_ptr<int64_t> connectDuration_ {};
      // The number of cloud desktops in each status.
      shared_ptr<vector<DesktopGroups::CountPerStatus>> countPerStatus_ {};
      // The number of vCPU cores.
      shared_ptr<int32_t> cpu_ {};
      // The time when the shared cloud desktop group was created.
      shared_ptr<string> createTime_ {};
      // The ID of the Alibaba Cloud account that created the shared cloud desktop group.
      shared_ptr<string> creator_ {};
      // The type of the data disk.
      shared_ptr<string> dataDiskCategory_ {};
      // The data disk size in GiB.
      shared_ptr<string> dataDiskSize_ {};
      // The number of cloud desktops created.
      shared_ptr<int32_t> desktopCount_ {};
      // The ID of the shared cloud desktop group.
      shared_ptr<string> desktopGroupId_ {};
      // The name of the shared cloud desktop group.
      shared_ptr<string> desktopGroupName_ {};
      // The desktop type. You can call the [DescribeDesktopTypes](https://help.aliyun.com/document_detail/188882.html) operation to query the desktop types supported by WUYING Workspace.
      shared_ptr<string> desktopType_ {};
      // The number of authorized users of the shared cloud desktop group.
      shared_ptr<int32_t> endUserCount_ {};
      shared_ptr<string> entraDomainName_ {};
      shared_ptr<string> envId_ {};
      shared_ptr<string> envType_ {};
      // The time when the subscription shared cloud desktop group expires.
      shared_ptr<string> expiredTime_ {};
      shared_ptr<vector<string>> expiredTimes_ {};
      // The number of vGPU cores.
      shared_ptr<float> gpuCount_ {};
      // The GPU driver version.
      shared_ptr<string> gpuDriverVersion_ {};
      // The GPU memory size.
      shared_ptr<string> gpuSpec_ {};
      // The amount of time, in milliseconds, that a session can remain idle. If a session remains idle for longer than this duration, it is automatically disconnected. A session is considered idle if there is no keyboard or mouse activity.
      shared_ptr<int64_t> idleDisconnectDuration_ {};
      // The ID of the image.
      shared_ptr<string> imageId_ {};
      shared_ptr<bool> isLdap_ {};
      // The duration, in milliseconds, to retain a disconnected session. Valid values: 180000 (3 minutes) to 345600000 (4 days). A value of 0 indicates that the session is always retained.
      // 
      // When a session disconnects, the user can reconnect within this period to resume their work. If the user fails to reconnect in time, the session is terminated and unsaved data is lost.
      shared_ptr<int64_t> keepDuration_ {};
      // The load balancing policy for the multi-session shared cloud desktop group.
      shared_ptr<int64_t> loadPolicy_ {};
      // - For a pay-as-you-go shared cloud desktop group, this parameter specifies the maximum number of cloud desktops that the group can contain.
      // 
      // - For a subscription shared cloud desktop group, this parameter specifies the total number of cloud desktops, which is the sum of the initially purchased desktops (indicated by the `BuyDesktopsCount` parameter) and the desktops that can be automatically created.
      shared_ptr<int32_t> maxDesktopsCount_ {};
      // The memory size in MiB.
      shared_ptr<int64_t> memory_ {};
      // - For a pay-as-you-go shared cloud desktop group, this specifies the minimum number of cloud desktops to maintain in the group.
      // 
      // - For a subscription shared cloud desktop group, this parameter has the same value as `BuyDesktopsCount` and specifies the number of cloud desktops that you initially purchase.
      shared_ptr<int32_t> minDesktopsCount_ {};
      // The ID of the office network.
      shared_ptr<string> officeSiteId_ {};
      // The name of the office network.
      shared_ptr<string> officeSiteName_ {};
      // The account type of the office network.
      shared_ptr<string> officeSiteType_ {};
      shared_ptr<string> orgId_ {};
      // The OS.
      shared_ptr<string> osType_ {};
      // The ID of the cloud desktop template.
      shared_ptr<string> ownBundleId_ {};
      // The name of the cloud desktop template.
      shared_ptr<string> ownBundleName_ {};
      // The type of the shared cloud desktop group.
      shared_ptr<int64_t> ownType_ {};
      // The billing method.
      shared_ptr<string> payType_ {};
      // The ID of the policy associated with the shared cloud desktop group.
      shared_ptr<string> policyGroupId_ {};
      shared_ptr<vector<string>> policyGroupIdList_ {};
      // The name of the policy associated with the shared cloud desktop group.
      shared_ptr<string> policyGroupName_ {};
      shared_ptr<vector<string>> policyGroupNameList_ {};
      // The protocol type.
      shared_ptr<string> protocolType_ {};
      shared_ptr<string> qosRuleId_ {};
      // The session utilization threshold that triggers auto scaling for a multi-session shared cloud desktop group. Session utilization is calculated by using the following formula:
      // 
      // `Session utilization = Number of active sessions / (Total number of cloud desktops × Maximum number of sessions per cloud desktop) × 100%`
      // 
      // When the session utilization exceeds this threshold, the system scales out by creating new cloud desktops. When the utilization falls below this threshold, the system scales in by removing idle cloud desktops.
      shared_ptr<float> ratioThreshold_ {};
      // The reset type of the shared cloud desktop group.
      shared_ptr<int64_t> resetType_ {};
      shared_ptr<string> simpleUserGroupId_ {};
      // The status of the shared cloud desktop group.
      shared_ptr<int32_t> status_ {};
      // The period of inactivity, in milliseconds, after which an idle cloud desktop is automatically stopped. If a user tries to connect to a stopped desktop, the desktop is automatically started.
      shared_ptr<int64_t> stopDuration_ {};
      // The ID of the subnet.
      shared_ptr<string> subnetId_ {};
      // The type of the system disk.
      shared_ptr<string> systemDiskCategory_ {};
      // The system disk size in GiB.
      shared_ptr<int32_t> systemDiskSize_ {};
      // The tags attached to the shared cloud desktop group.
      shared_ptr<vector<DesktopGroups::Tags>> tags_ {};
      shared_ptr<string> userGroupName_ {};
      // The path of the organizational unit (OU).
      shared_ptr<string> userOuPath_ {};
      // The version number of the shared cloud desktop group.
      shared_ptr<int32_t> version_ {};
      // Indicates whether disk encryption is enabled.
      shared_ptr<bool> volumeEncryptionEnabled_ {};
      // The ID of the KMS key used for disk encryption.
      shared_ptr<string> volumeEncryptionKey_ {};
    };

    virtual bool empty() const override { return this->desktopGroups_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // desktopGroups Field Functions 
    bool hasDesktopGroups() const { return this->desktopGroups_ != nullptr;};
    void deleteDesktopGroups() { this->desktopGroups_ = nullptr;};
    inline const vector<DescribeDesktopGroupsResponseBody::DesktopGroups> & getDesktopGroups() const { DARABONBA_PTR_GET_CONST(desktopGroups_, vector<DescribeDesktopGroupsResponseBody::DesktopGroups>) };
    inline vector<DescribeDesktopGroupsResponseBody::DesktopGroups> getDesktopGroups() { DARABONBA_PTR_GET(desktopGroups_, vector<DescribeDesktopGroupsResponseBody::DesktopGroups>) };
    inline DescribeDesktopGroupsResponseBody& setDesktopGroups(const vector<DescribeDesktopGroupsResponseBody::DesktopGroups> & desktopGroups) { DARABONBA_PTR_SET_VALUE(desktopGroups_, desktopGroups) };
    inline DescribeDesktopGroupsResponseBody& setDesktopGroups(vector<DescribeDesktopGroupsResponseBody::DesktopGroups> && desktopGroups) { DARABONBA_PTR_SET_RVALUE(desktopGroups_, desktopGroups) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDesktopGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDesktopGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the shared cloud desktop groups.
    shared_ptr<vector<DescribeDesktopGroupsResponseBody::DesktopGroups>> desktopGroups_ {};
    // The token used to retrieve the next page of results. If this parameter is not returned, it indicates that all results have been returned.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
