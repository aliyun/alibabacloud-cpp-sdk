// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSRESPONSEBODY_HPP_
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
  class DescribeDesktopsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Desktops, desktops_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Desktops, desktops_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDesktopsResponseBody() = default ;
    DescribeDesktopsResponseBody(const DescribeDesktopsResponseBody &) = default ;
    DescribeDesktopsResponseBody(DescribeDesktopsResponseBody &&) = default ;
    DescribeDesktopsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopsResponseBody() = default ;
    DescribeDesktopsResponseBody& operator=(const DescribeDesktopsResponseBody &) = default ;
    DescribeDesktopsResponseBody& operator=(DescribeDesktopsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Desktops : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Desktops& obj) { 
        DARABONBA_PTR_TO_JSON(AccountType, accountType_);
        DARABONBA_PTR_TO_JSON(BindAmount, bindAmount_);
        DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
        DARABONBA_PTR_TO_JSON(BundleName, bundleName_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DataDiskCategory, dataDiskCategory_);
        DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_TO_JSON(DesktopDurationList, desktopDurationList_);
        DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_TO_JSON(DesktopStatus, desktopStatus_);
        DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(DirectoryType, directoryType_);
        DARABONBA_PTR_TO_JSON(Disks, disks_);
        DARABONBA_PTR_TO_JSON(DomainType, domainType_);
        DARABONBA_PTR_TO_JSON(DowngradeQuota, downgradeQuota_);
        DARABONBA_PTR_TO_JSON(DowngradedTimes, downgradedTimes_);
        DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
        DARABONBA_PTR_TO_JSON(EntraDomainName, entraDomainName_);
        DARABONBA_PTR_TO_JSON(EnvId, envId_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(FotaUpdate, fotaUpdate_);
        DARABONBA_PTR_TO_JSON(GpuCategory, gpuCategory_);
        DARABONBA_PTR_TO_JSON(GpuCount, gpuCount_);
        DARABONBA_PTR_TO_JSON(GpuDriverVersion, gpuDriverVersion_);
        DARABONBA_PTR_TO_JSON(GpuSpec, gpuSpec_);
        DARABONBA_PTR_TO_JSON(HibernationBeta, hibernationBeta_);
        DARABONBA_PTR_TO_JSON(HibernationOptionsConfigured, hibernationOptionsConfigured_);
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(IsLdap, isLdap_);
        DARABONBA_PTR_TO_JSON(ManagementFlag, managementFlag_);
        DARABONBA_PTR_TO_JSON(ManagementFlags, managementFlags_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceIp, networkInterfaceIp_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_TO_JSON(OfficeSiteType, officeSiteType_);
        DARABONBA_PTR_TO_JSON(OfficeSiteVpcType, officeSiteVpcType_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(OsUpdate, osUpdate_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
        DARABONBA_PTR_TO_JSON(PolicyGroupIdList, policyGroupIdList_);
        DARABONBA_PTR_TO_JSON(PolicyGroupName, policyGroupName_);
        DARABONBA_PTR_TO_JSON(PolicyGroupNameList, policyGroupNameList_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(ResourceGroups, resourceGroups_);
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_TO_JSON(SessionType, sessionType_);
        DARABONBA_PTR_TO_JSON(Sessions, sessions_);
        DARABONBA_PTR_TO_JSON(SnapshotPolicyId, snapshotPolicyId_);
        DARABONBA_PTR_TO_JSON(SnapshotPolicyName, snapshotPolicyName_);
        DARABONBA_PTR_TO_JSON(StandardStartTime, standardStartTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(SupportHibernation, supportHibernation_);
        DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
        DARABONBA_PTR_TO_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
        DARABONBA_PTR_TO_JSON(ZoneType, zoneType_);
      };
      friend void from_json(const Darabonba::Json& j, Desktops& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
        DARABONBA_PTR_FROM_JSON(BindAmount, bindAmount_);
        DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
        DARABONBA_PTR_FROM_JSON(BundleName, bundleName_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DataDiskCategory, dataDiskCategory_);
        DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_FROM_JSON(DesktopDurationList, desktopDurationList_);
        DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_FROM_JSON(DesktopStatus, desktopStatus_);
        DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(DirectoryType, directoryType_);
        DARABONBA_PTR_FROM_JSON(Disks, disks_);
        DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
        DARABONBA_PTR_FROM_JSON(DowngradeQuota, downgradeQuota_);
        DARABONBA_PTR_FROM_JSON(DowngradedTimes, downgradedTimes_);
        DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
        DARABONBA_PTR_FROM_JSON(EntraDomainName, entraDomainName_);
        DARABONBA_PTR_FROM_JSON(EnvId, envId_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(FotaUpdate, fotaUpdate_);
        DARABONBA_PTR_FROM_JSON(GpuCategory, gpuCategory_);
        DARABONBA_PTR_FROM_JSON(GpuCount, gpuCount_);
        DARABONBA_PTR_FROM_JSON(GpuDriverVersion, gpuDriverVersion_);
        DARABONBA_PTR_FROM_JSON(GpuSpec, gpuSpec_);
        DARABONBA_PTR_FROM_JSON(HibernationBeta, hibernationBeta_);
        DARABONBA_PTR_FROM_JSON(HibernationOptionsConfigured, hibernationOptionsConfigured_);
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(IsLdap, isLdap_);
        DARABONBA_PTR_FROM_JSON(ManagementFlag, managementFlag_);
        DARABONBA_PTR_FROM_JSON(ManagementFlags, managementFlags_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceIp, networkInterfaceIp_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteType, officeSiteType_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteVpcType, officeSiteVpcType_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(OsUpdate, osUpdate_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
        DARABONBA_PTR_FROM_JSON(PolicyGroupIdList, policyGroupIdList_);
        DARABONBA_PTR_FROM_JSON(PolicyGroupName, policyGroupName_);
        DARABONBA_PTR_FROM_JSON(PolicyGroupNameList, policyGroupNameList_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(ResourceGroups, resourceGroups_);
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_FROM_JSON(SessionType, sessionType_);
        DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
        DARABONBA_PTR_FROM_JSON(SnapshotPolicyId, snapshotPolicyId_);
        DARABONBA_PTR_FROM_JSON(SnapshotPolicyName, snapshotPolicyName_);
        DARABONBA_PTR_FROM_JSON(StandardStartTime, standardStartTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(SupportHibernation, supportHibernation_);
        DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
        DARABONBA_PTR_FROM_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
        DARABONBA_PTR_FROM_JSON(ZoneType, zoneType_);
      };
      Desktops() = default ;
      Desktops(const Desktops &) = default ;
      Desktops(Desktops &&) = default ;
      Desktops(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Desktops() = default ;
      Desktops& operator=(const Desktops &) = default ;
      Desktops& operator=(Desktops &&) = default ;
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

      class Sessions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sessions& obj) { 
          DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_TO_JSON(EstablishmentTime, establishmentTime_);
          DARABONBA_PTR_TO_JSON(ExternalUserName, externalUserName_);
        };
        friend void from_json(const Darabonba::Json& j, Sessions& obj) { 
          DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_FROM_JSON(EstablishmentTime, establishmentTime_);
          DARABONBA_PTR_FROM_JSON(ExternalUserName, externalUserName_);
        };
        Sessions() = default ;
        Sessions(const Sessions &) = default ;
        Sessions(Sessions &&) = default ;
        Sessions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sessions() = default ;
        Sessions& operator=(const Sessions &) = default ;
        Sessions& operator=(Sessions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endUserId_ == nullptr
        && this->establishmentTime_ == nullptr && this->externalUserName_ == nullptr; };
        // endUserId Field Functions 
        bool hasEndUserId() const { return this->endUserId_ != nullptr;};
        void deleteEndUserId() { this->endUserId_ = nullptr;};
        inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
        inline Sessions& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


        // establishmentTime Field Functions 
        bool hasEstablishmentTime() const { return this->establishmentTime_ != nullptr;};
        void deleteEstablishmentTime() { this->establishmentTime_ = nullptr;};
        inline string getEstablishmentTime() const { DARABONBA_PTR_GET_DEFAULT(establishmentTime_, "") };
        inline Sessions& setEstablishmentTime(string establishmentTime) { DARABONBA_PTR_SET_VALUE(establishmentTime_, establishmentTime) };


        // externalUserName Field Functions 
        bool hasExternalUserName() const { return this->externalUserName_ != nullptr;};
        void deleteExternalUserName() { this->externalUserName_ = nullptr;};
        inline string getExternalUserName() const { DARABONBA_PTR_GET_DEFAULT(externalUserName_, "") };
        inline Sessions& setExternalUserName(string externalUserName) { DARABONBA_PTR_SET_VALUE(externalUserName_, externalUserName) };


      protected:
        // The ID of the end user that connects to the cloud computer.
        shared_ptr<string> endUserId_ {};
        // The time when the cloud computer session was established.
        shared_ptr<string> establishmentTime_ {};
        // The name of the external user.
        shared_ptr<string> externalUserName_ {};
      };

      class ResourceGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceGroups& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        ResourceGroups() = default ;
        ResourceGroups(const ResourceGroups &) = default ;
        ResourceGroups(ResourceGroups &&) = default ;
        ResourceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceGroups() = default ;
        ResourceGroups& operator=(const ResourceGroups &) = default ;
        ResourceGroups& operator=(ResourceGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline ResourceGroups& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ResourceGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The ID of the enterprise resource group.
        shared_ptr<string> id_ {};
        // The name of the enterprise resource group.
        shared_ptr<string> name_ {};
      };

      class OsUpdate : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OsUpdate& obj) { 
          DARABONBA_PTR_TO_JSON(CheckId, checkId_);
          DARABONBA_PTR_TO_JSON(PackageCount, packageCount_);
          DARABONBA_PTR_TO_JSON(Packages, packages_);
        };
        friend void from_json(const Darabonba::Json& j, OsUpdate& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
          DARABONBA_PTR_FROM_JSON(PackageCount, packageCount_);
          DARABONBA_PTR_FROM_JSON(Packages, packages_);
        };
        OsUpdate() = default ;
        OsUpdate(const OsUpdate &) = default ;
        OsUpdate(OsUpdate &&) = default ;
        OsUpdate(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OsUpdate() = default ;
        OsUpdate& operator=(const OsUpdate &) = default ;
        OsUpdate& operator=(OsUpdate &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Packages : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Packages& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Kb, kb_);
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, Packages& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Kb, kb_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
          };
          Packages() = default ;
          Packages(const Packages &) = default ;
          Packages(Packages &&) = default ;
          Packages(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Packages() = default ;
          Packages& operator=(const Packages &) = default ;
          Packages& operator=(Packages &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->kb_ == nullptr && this->title_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Packages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // kb Field Functions 
          bool hasKb() const { return this->kb_ != nullptr;};
          void deleteKb() { this->kb_ = nullptr;};
          inline string getKb() const { DARABONBA_PTR_GET_DEFAULT(kb_, "") };
          inline Packages& setKb(string kb) { DARABONBA_PTR_SET_VALUE(kb_, kb) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline Packages& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<string> description_ {};
          shared_ptr<string> kb_ {};
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->checkId_ == nullptr
        && this->packageCount_ == nullptr && this->packages_ == nullptr; };
        // checkId Field Functions 
        bool hasCheckId() const { return this->checkId_ != nullptr;};
        void deleteCheckId() { this->checkId_ = nullptr;};
        inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
        inline OsUpdate& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


        // packageCount Field Functions 
        bool hasPackageCount() const { return this->packageCount_ != nullptr;};
        void deletePackageCount() { this->packageCount_ = nullptr;};
        inline int32_t getPackageCount() const { DARABONBA_PTR_GET_DEFAULT(packageCount_, 0) };
        inline OsUpdate& setPackageCount(int32_t packageCount) { DARABONBA_PTR_SET_VALUE(packageCount_, packageCount) };


        // packages Field Functions 
        bool hasPackages() const { return this->packages_ != nullptr;};
        void deletePackages() { this->packages_ = nullptr;};
        inline const vector<OsUpdate::Packages> & getPackages() const { DARABONBA_PTR_GET_CONST(packages_, vector<OsUpdate::Packages>) };
        inline vector<OsUpdate::Packages> getPackages() { DARABONBA_PTR_GET(packages_, vector<OsUpdate::Packages>) };
        inline OsUpdate& setPackages(const vector<OsUpdate::Packages> & packages) { DARABONBA_PTR_SET_VALUE(packages_, packages) };
        inline OsUpdate& setPackages(vector<OsUpdate::Packages> && packages) { DARABONBA_PTR_SET_RVALUE(packages_, packages) };


      protected:
        shared_ptr<string> checkId_ {};
        shared_ptr<int32_t> packageCount_ {};
        shared_ptr<vector<OsUpdate::Packages>> packages_ {};
      };

      class FotaUpdate : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FotaUpdate& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentAppVersion, currentAppVersion_);
          DARABONBA_PTR_TO_JSON(NewAppVersion, newAppVersion_);
          DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
          DARABONBA_PTR_TO_JSON(ReleaseNoteEn, releaseNoteEn_);
          DARABONBA_PTR_TO_JSON(ReleaseNoteJp, releaseNoteJp_);
          DARABONBA_PTR_TO_JSON(Size, size_);
        };
        friend void from_json(const Darabonba::Json& j, FotaUpdate& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentAppVersion, currentAppVersion_);
          DARABONBA_PTR_FROM_JSON(NewAppVersion, newAppVersion_);
          DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
          DARABONBA_PTR_FROM_JSON(ReleaseNoteEn, releaseNoteEn_);
          DARABONBA_PTR_FROM_JSON(ReleaseNoteJp, releaseNoteJp_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
        };
        FotaUpdate() = default ;
        FotaUpdate(const FotaUpdate &) = default ;
        FotaUpdate(FotaUpdate &&) = default ;
        FotaUpdate(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FotaUpdate() = default ;
        FotaUpdate& operator=(const FotaUpdate &) = default ;
        FotaUpdate& operator=(FotaUpdate &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentAppVersion_ == nullptr
        && this->newAppVersion_ == nullptr && this->releaseNote_ == nullptr && this->releaseNoteEn_ == nullptr && this->releaseNoteJp_ == nullptr && this->size_ == nullptr; };
        // currentAppVersion Field Functions 
        bool hasCurrentAppVersion() const { return this->currentAppVersion_ != nullptr;};
        void deleteCurrentAppVersion() { this->currentAppVersion_ = nullptr;};
        inline string getCurrentAppVersion() const { DARABONBA_PTR_GET_DEFAULT(currentAppVersion_, "") };
        inline FotaUpdate& setCurrentAppVersion(string currentAppVersion) { DARABONBA_PTR_SET_VALUE(currentAppVersion_, currentAppVersion) };


        // newAppVersion Field Functions 
        bool hasNewAppVersion() const { return this->newAppVersion_ != nullptr;};
        void deleteNewAppVersion() { this->newAppVersion_ = nullptr;};
        inline string getNewAppVersion() const { DARABONBA_PTR_GET_DEFAULT(newAppVersion_, "") };
        inline FotaUpdate& setNewAppVersion(string newAppVersion) { DARABONBA_PTR_SET_VALUE(newAppVersion_, newAppVersion) };


        // releaseNote Field Functions 
        bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
        void deleteReleaseNote() { this->releaseNote_ = nullptr;};
        inline string getReleaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
        inline FotaUpdate& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


        // releaseNoteEn Field Functions 
        bool hasReleaseNoteEn() const { return this->releaseNoteEn_ != nullptr;};
        void deleteReleaseNoteEn() { this->releaseNoteEn_ = nullptr;};
        inline string getReleaseNoteEn() const { DARABONBA_PTR_GET_DEFAULT(releaseNoteEn_, "") };
        inline FotaUpdate& setReleaseNoteEn(string releaseNoteEn) { DARABONBA_PTR_SET_VALUE(releaseNoteEn_, releaseNoteEn) };


        // releaseNoteJp Field Functions 
        bool hasReleaseNoteJp() const { return this->releaseNoteJp_ != nullptr;};
        void deleteReleaseNoteJp() { this->releaseNoteJp_ = nullptr;};
        inline string getReleaseNoteJp() const { DARABONBA_PTR_GET_DEFAULT(releaseNoteJp_, "") };
        inline FotaUpdate& setReleaseNoteJp(string releaseNoteJp) { DARABONBA_PTR_SET_VALUE(releaseNoteJp_, releaseNoteJp) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline FotaUpdate& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      protected:
        // The current image version of the cloud computer.
        shared_ptr<string> currentAppVersion_ {};
        // The version number to which the image of the cloud computer can be updated.
        shared_ptr<string> newAppVersion_ {};
        // The description of the version to which the image of the cloud computer can be updated.
        shared_ptr<string> releaseNote_ {};
        // The English description of the version to which the image of the cloud computer can be updated.
        shared_ptr<string> releaseNoteEn_ {};
        // The Japanese description of the image version to which the cloud desktop can be updated.
        shared_ptr<string> releaseNoteJp_ {};
        // The size of the installation package for the image to which the cloud desktop can be updated. Unit: KB.
        shared_ptr<int64_t> size_ {};
      };

      class Disks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Disks& obj) { 
          DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
          DARABONBA_PTR_TO_JSON(DiskId, diskId_);
          DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
          DARABONBA_PTR_TO_JSON(DiskType, diskType_);
          DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
        };
        friend void from_json(const Darabonba::Json& j, Disks& obj) { 
          DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
          DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
          DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
          DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
          DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
        };
        Disks() = default ;
        Disks(const Disks &) = default ;
        Disks(Disks &&) = default ;
        Disks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Disks() = default ;
        Disks& operator=(const Disks &) = default ;
        Disks& operator=(Disks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->diskCategory_ == nullptr
        && this->diskId_ == nullptr && this->diskSize_ == nullptr && this->diskType_ == nullptr && this->performanceLevel_ == nullptr; };
        // diskCategory Field Functions 
        bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
        void deleteDiskCategory() { this->diskCategory_ = nullptr;};
        inline string getDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
        inline Disks& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


        // diskId Field Functions 
        bool hasDiskId() const { return this->diskId_ != nullptr;};
        void deleteDiskId() { this->diskId_ = nullptr;};
        inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
        inline Disks& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


        // diskSize Field Functions 
        bool hasDiskSize() const { return this->diskSize_ != nullptr;};
        void deleteDiskSize() { this->diskSize_ = nullptr;};
        inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
        inline Disks& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline Disks& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // performanceLevel Field Functions 
        bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
        void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
        inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
        inline Disks& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


      protected:
        // The type of the disk. Valid values:
        // 
        // *   cloud_efficiency: ultra disk.
        // *   cloud_auto: standard SSD.
        // *   cloud_essd: enhanced SSD (ESSD).
        shared_ptr<string> diskCategory_ {};
        // The disk ID.
        shared_ptr<string> diskId_ {};
        // The disk size. Unit: GiB.
        shared_ptr<int32_t> diskSize_ {};
        // The type of the disk.
        // 
        // Valid values:
        // 
        // *   SYSTEM: system disk
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        // *   DATA: data disk
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        shared_ptr<string> diskType_ {};
        // The performance level (PL) of the disk when an enterprise SSD (ESSD) is used.
        // 
        // For more information about the differences among enterprise SSDs (ESSDs) at different PLs, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
        // 
        // Valid values:
        // 
        // *   PL1
        // *   PL0
        // *   PL3
        // *   PL2
        shared_ptr<string> performanceLevel_ {};
      };

      class DesktopDurationList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DesktopDurationList& obj) { 
          DARABONBA_PTR_TO_JSON(OrderInstanceId, orderInstanceId_);
          DARABONBA_PTR_TO_JSON(PackageCreationTime, packageCreationTime_);
          DARABONBA_PTR_TO_JSON(PackageExpiredTime, packageExpiredTime_);
          DARABONBA_PTR_TO_JSON(PackageId, packageId_);
          DARABONBA_PTR_TO_JSON(PackageStatus, packageStatus_);
          DARABONBA_PTR_TO_JSON(PackageType, packageType_);
          DARABONBA_PTR_TO_JSON(PackageUsedUpStrategy, packageUsedUpStrategy_);
          DARABONBA_PTR_TO_JSON(PeriodEndTime, periodEndTime_);
          DARABONBA_PTR_TO_JSON(PeriodStartTime, periodStartTime_);
          DARABONBA_PTR_TO_JSON(PostPaidLimitFee, postPaidLimitFee_);
          DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_TO_JSON(UsedDuration, usedDuration_);
        };
        friend void from_json(const Darabonba::Json& j, DesktopDurationList& obj) { 
          DARABONBA_PTR_FROM_JSON(OrderInstanceId, orderInstanceId_);
          DARABONBA_PTR_FROM_JSON(PackageCreationTime, packageCreationTime_);
          DARABONBA_PTR_FROM_JSON(PackageExpiredTime, packageExpiredTime_);
          DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
          DARABONBA_PTR_FROM_JSON(PackageStatus, packageStatus_);
          DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
          DARABONBA_PTR_FROM_JSON(PackageUsedUpStrategy, packageUsedUpStrategy_);
          DARABONBA_PTR_FROM_JSON(PeriodEndTime, periodEndTime_);
          DARABONBA_PTR_FROM_JSON(PeriodStartTime, periodStartTime_);
          DARABONBA_PTR_FROM_JSON(PostPaidLimitFee, postPaidLimitFee_);
          DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_FROM_JSON(UsedDuration, usedDuration_);
        };
        DesktopDurationList() = default ;
        DesktopDurationList(const DesktopDurationList &) = default ;
        DesktopDurationList(DesktopDurationList &&) = default ;
        DesktopDurationList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DesktopDurationList() = default ;
        DesktopDurationList& operator=(const DesktopDurationList &) = default ;
        DesktopDurationList& operator=(DesktopDurationList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->orderInstanceId_ == nullptr
        && this->packageCreationTime_ == nullptr && this->packageExpiredTime_ == nullptr && this->packageId_ == nullptr && this->packageStatus_ == nullptr && this->packageType_ == nullptr
        && this->packageUsedUpStrategy_ == nullptr && this->periodEndTime_ == nullptr && this->periodStartTime_ == nullptr && this->postPaidLimitFee_ == nullptr && this->totalDuration_ == nullptr
        && this->usedDuration_ == nullptr; };
        // orderInstanceId Field Functions 
        bool hasOrderInstanceId() const { return this->orderInstanceId_ != nullptr;};
        void deleteOrderInstanceId() { this->orderInstanceId_ = nullptr;};
        inline string getOrderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(orderInstanceId_, "") };
        inline DesktopDurationList& setOrderInstanceId(string orderInstanceId) { DARABONBA_PTR_SET_VALUE(orderInstanceId_, orderInstanceId) };


        // packageCreationTime Field Functions 
        bool hasPackageCreationTime() const { return this->packageCreationTime_ != nullptr;};
        void deletePackageCreationTime() { this->packageCreationTime_ = nullptr;};
        inline string getPackageCreationTime() const { DARABONBA_PTR_GET_DEFAULT(packageCreationTime_, "") };
        inline DesktopDurationList& setPackageCreationTime(string packageCreationTime) { DARABONBA_PTR_SET_VALUE(packageCreationTime_, packageCreationTime) };


        // packageExpiredTime Field Functions 
        bool hasPackageExpiredTime() const { return this->packageExpiredTime_ != nullptr;};
        void deletePackageExpiredTime() { this->packageExpiredTime_ = nullptr;};
        inline string getPackageExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(packageExpiredTime_, "") };
        inline DesktopDurationList& setPackageExpiredTime(string packageExpiredTime) { DARABONBA_PTR_SET_VALUE(packageExpiredTime_, packageExpiredTime) };


        // packageId Field Functions 
        bool hasPackageId() const { return this->packageId_ != nullptr;};
        void deletePackageId() { this->packageId_ = nullptr;};
        inline string getPackageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, "") };
        inline DesktopDurationList& setPackageId(string packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


        // packageStatus Field Functions 
        bool hasPackageStatus() const { return this->packageStatus_ != nullptr;};
        void deletePackageStatus() { this->packageStatus_ = nullptr;};
        inline string getPackageStatus() const { DARABONBA_PTR_GET_DEFAULT(packageStatus_, "") };
        inline DesktopDurationList& setPackageStatus(string packageStatus) { DARABONBA_PTR_SET_VALUE(packageStatus_, packageStatus) };


        // packageType Field Functions 
        bool hasPackageType() const { return this->packageType_ != nullptr;};
        void deletePackageType() { this->packageType_ = nullptr;};
        inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
        inline DesktopDurationList& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


        // packageUsedUpStrategy Field Functions 
        bool hasPackageUsedUpStrategy() const { return this->packageUsedUpStrategy_ != nullptr;};
        void deletePackageUsedUpStrategy() { this->packageUsedUpStrategy_ = nullptr;};
        inline string getPackageUsedUpStrategy() const { DARABONBA_PTR_GET_DEFAULT(packageUsedUpStrategy_, "") };
        inline DesktopDurationList& setPackageUsedUpStrategy(string packageUsedUpStrategy) { DARABONBA_PTR_SET_VALUE(packageUsedUpStrategy_, packageUsedUpStrategy) };


        // periodEndTime Field Functions 
        bool hasPeriodEndTime() const { return this->periodEndTime_ != nullptr;};
        void deletePeriodEndTime() { this->periodEndTime_ = nullptr;};
        inline string getPeriodEndTime() const { DARABONBA_PTR_GET_DEFAULT(periodEndTime_, "") };
        inline DesktopDurationList& setPeriodEndTime(string periodEndTime) { DARABONBA_PTR_SET_VALUE(periodEndTime_, periodEndTime) };


        // periodStartTime Field Functions 
        bool hasPeriodStartTime() const { return this->periodStartTime_ != nullptr;};
        void deletePeriodStartTime() { this->periodStartTime_ = nullptr;};
        inline string getPeriodStartTime() const { DARABONBA_PTR_GET_DEFAULT(periodStartTime_, "") };
        inline DesktopDurationList& setPeriodStartTime(string periodStartTime) { DARABONBA_PTR_SET_VALUE(periodStartTime_, periodStartTime) };


        // postPaidLimitFee Field Functions 
        bool hasPostPaidLimitFee() const { return this->postPaidLimitFee_ != nullptr;};
        void deletePostPaidLimitFee() { this->postPaidLimitFee_ = nullptr;};
        inline float getPostPaidLimitFee() const { DARABONBA_PTR_GET_DEFAULT(postPaidLimitFee_, 0.0) };
        inline DesktopDurationList& setPostPaidLimitFee(float postPaidLimitFee) { DARABONBA_PTR_SET_VALUE(postPaidLimitFee_, postPaidLimitFee) };


        // totalDuration Field Functions 
        bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
        void deleteTotalDuration() { this->totalDuration_ = nullptr;};
        inline int64_t getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0L) };
        inline DesktopDurationList& setTotalDuration(int64_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


        // usedDuration Field Functions 
        bool hasUsedDuration() const { return this->usedDuration_ != nullptr;};
        void deleteUsedDuration() { this->usedDuration_ = nullptr;};
        inline int64_t getUsedDuration() const { DARABONBA_PTR_GET_DEFAULT(usedDuration_, 0L) };
        inline DesktopDurationList& setUsedDuration(int64_t usedDuration) { DARABONBA_PTR_SET_VALUE(usedDuration_, usedDuration) };


      protected:
        shared_ptr<string> orderInstanceId_ {};
        shared_ptr<string> packageCreationTime_ {};
        shared_ptr<string> packageExpiredTime_ {};
        shared_ptr<string> packageId_ {};
        shared_ptr<string> packageStatus_ {};
        shared_ptr<string> packageType_ {};
        shared_ptr<string> packageUsedUpStrategy_ {};
        shared_ptr<string> periodEndTime_ {};
        shared_ptr<string> periodStartTime_ {};
        shared_ptr<float> postPaidLimitFee_ {};
        shared_ptr<int64_t> totalDuration_ {};
        shared_ptr<int64_t> usedDuration_ {};
      };

      virtual bool empty() const override { return this->accountType_ == nullptr
        && this->bindAmount_ == nullptr && this->bundleId_ == nullptr && this->bundleName_ == nullptr && this->chargeType_ == nullptr && this->connectionStatus_ == nullptr
        && this->cpu_ == nullptr && this->creationTime_ == nullptr && this->dataDiskCategory_ == nullptr && this->dataDiskSize_ == nullptr && this->desktopDurationList_ == nullptr
        && this->desktopGroupId_ == nullptr && this->desktopId_ == nullptr && this->desktopName_ == nullptr && this->desktopStatus_ == nullptr && this->desktopType_ == nullptr
        && this->directoryId_ == nullptr && this->directoryType_ == nullptr && this->disks_ == nullptr && this->domainType_ == nullptr && this->downgradeQuota_ == nullptr
        && this->downgradedTimes_ == nullptr && this->endUserIds_ == nullptr && this->entraDomainName_ == nullptr && this->envId_ == nullptr && this->envType_ == nullptr
        && this->expiredTime_ == nullptr && this->fotaUpdate_ == nullptr && this->gpuCategory_ == nullptr && this->gpuCount_ == nullptr && this->gpuDriverVersion_ == nullptr
        && this->gpuSpec_ == nullptr && this->hibernationBeta_ == nullptr && this->hibernationOptionsConfigured_ == nullptr && this->hostName_ == nullptr && this->imageId_ == nullptr
        && this->isLdap_ == nullptr && this->managementFlag_ == nullptr && this->managementFlags_ == nullptr && this->memory_ == nullptr && this->networkInterfaceId_ == nullptr
        && this->networkInterfaceIp_ == nullptr && this->officeSiteId_ == nullptr && this->officeSiteName_ == nullptr && this->officeSiteType_ == nullptr && this->officeSiteVpcType_ == nullptr
        && this->osType_ == nullptr && this->osUpdate_ == nullptr && this->platform_ == nullptr && this->policyGroupId_ == nullptr && this->policyGroupIdList_ == nullptr
        && this->policyGroupName_ == nullptr && this->policyGroupNameList_ == nullptr && this->progress_ == nullptr && this->protocolType_ == nullptr && this->resourceGroups_ == nullptr
        && this->serialNumber_ == nullptr && this->sessionType_ == nullptr && this->sessions_ == nullptr && this->snapshotPolicyId_ == nullptr && this->snapshotPolicyName_ == nullptr
        && this->standardStartTime_ == nullptr && this->startTime_ == nullptr && this->supportHibernation_ == nullptr && this->systemDiskCategory_ == nullptr && this->systemDiskSize_ == nullptr
        && this->tags_ == nullptr && this->volumeEncryptionEnabled_ == nullptr && this->volumeEncryptionKey_ == nullptr && this->zoneType_ == nullptr; };
      // accountType Field Functions 
      bool hasAccountType() const { return this->accountType_ != nullptr;};
      void deleteAccountType() { this->accountType_ = nullptr;};
      inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
      inline Desktops& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


      // bindAmount Field Functions 
      bool hasBindAmount() const { return this->bindAmount_ != nullptr;};
      void deleteBindAmount() { this->bindAmount_ = nullptr;};
      inline int32_t getBindAmount() const { DARABONBA_PTR_GET_DEFAULT(bindAmount_, 0) };
      inline Desktops& setBindAmount(int32_t bindAmount) { DARABONBA_PTR_SET_VALUE(bindAmount_, bindAmount) };


      // bundleId Field Functions 
      bool hasBundleId() const { return this->bundleId_ != nullptr;};
      void deleteBundleId() { this->bundleId_ = nullptr;};
      inline string getBundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
      inline Desktops& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


      // bundleName Field Functions 
      bool hasBundleName() const { return this->bundleName_ != nullptr;};
      void deleteBundleName() { this->bundleName_ = nullptr;};
      inline string getBundleName() const { DARABONBA_PTR_GET_DEFAULT(bundleName_, "") };
      inline Desktops& setBundleName(string bundleName) { DARABONBA_PTR_SET_VALUE(bundleName_, bundleName) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Desktops& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // connectionStatus Field Functions 
      bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
      void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
      inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
      inline Desktops& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
      inline Desktops& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Desktops& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // dataDiskCategory Field Functions 
      bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
      void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
      inline string getDataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
      inline Desktops& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


      // dataDiskSize Field Functions 
      bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
      void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
      inline string getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, "") };
      inline Desktops& setDataDiskSize(string dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


      // desktopDurationList Field Functions 
      bool hasDesktopDurationList() const { return this->desktopDurationList_ != nullptr;};
      void deleteDesktopDurationList() { this->desktopDurationList_ = nullptr;};
      inline const vector<Desktops::DesktopDurationList> & getDesktopDurationList() const { DARABONBA_PTR_GET_CONST(desktopDurationList_, vector<Desktops::DesktopDurationList>) };
      inline vector<Desktops::DesktopDurationList> getDesktopDurationList() { DARABONBA_PTR_GET(desktopDurationList_, vector<Desktops::DesktopDurationList>) };
      inline Desktops& setDesktopDurationList(const vector<Desktops::DesktopDurationList> & desktopDurationList) { DARABONBA_PTR_SET_VALUE(desktopDurationList_, desktopDurationList) };
      inline Desktops& setDesktopDurationList(vector<Desktops::DesktopDurationList> && desktopDurationList) { DARABONBA_PTR_SET_RVALUE(desktopDurationList_, desktopDurationList) };


      // desktopGroupId Field Functions 
      bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
      void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
      inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
      inline Desktops& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline Desktops& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline Desktops& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // desktopStatus Field Functions 
      bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
      void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
      inline string getDesktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
      inline Desktops& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


      // desktopType Field Functions 
      bool hasDesktopType() const { return this->desktopType_ != nullptr;};
      void deleteDesktopType() { this->desktopType_ = nullptr;};
      inline string getDesktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
      inline Desktops& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline Desktops& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // directoryType Field Functions 
      bool hasDirectoryType() const { return this->directoryType_ != nullptr;};
      void deleteDirectoryType() { this->directoryType_ = nullptr;};
      inline string getDirectoryType() const { DARABONBA_PTR_GET_DEFAULT(directoryType_, "") };
      inline Desktops& setDirectoryType(string directoryType) { DARABONBA_PTR_SET_VALUE(directoryType_, directoryType) };


      // disks Field Functions 
      bool hasDisks() const { return this->disks_ != nullptr;};
      void deleteDisks() { this->disks_ = nullptr;};
      inline const vector<Desktops::Disks> & getDisks() const { DARABONBA_PTR_GET_CONST(disks_, vector<Desktops::Disks>) };
      inline vector<Desktops::Disks> getDisks() { DARABONBA_PTR_GET(disks_, vector<Desktops::Disks>) };
      inline Desktops& setDisks(const vector<Desktops::Disks> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
      inline Desktops& setDisks(vector<Desktops::Disks> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


      // domainType Field Functions 
      bool hasDomainType() const { return this->domainType_ != nullptr;};
      void deleteDomainType() { this->domainType_ = nullptr;};
      inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
      inline Desktops& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


      // downgradeQuota Field Functions 
      bool hasDowngradeQuota() const { return this->downgradeQuota_ != nullptr;};
      void deleteDowngradeQuota() { this->downgradeQuota_ = nullptr;};
      inline int64_t getDowngradeQuota() const { DARABONBA_PTR_GET_DEFAULT(downgradeQuota_, 0L) };
      inline Desktops& setDowngradeQuota(int64_t downgradeQuota) { DARABONBA_PTR_SET_VALUE(downgradeQuota_, downgradeQuota) };


      // downgradedTimes Field Functions 
      bool hasDowngradedTimes() const { return this->downgradedTimes_ != nullptr;};
      void deleteDowngradedTimes() { this->downgradedTimes_ = nullptr;};
      inline int64_t getDowngradedTimes() const { DARABONBA_PTR_GET_DEFAULT(downgradedTimes_, 0L) };
      inline Desktops& setDowngradedTimes(int64_t downgradedTimes) { DARABONBA_PTR_SET_VALUE(downgradedTimes_, downgradedTimes) };


      // endUserIds Field Functions 
      bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
      void deleteEndUserIds() { this->endUserIds_ = nullptr;};
      inline const vector<string> & getEndUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
      inline vector<string> getEndUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
      inline Desktops& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
      inline Desktops& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


      // entraDomainName Field Functions 
      bool hasEntraDomainName() const { return this->entraDomainName_ != nullptr;};
      void deleteEntraDomainName() { this->entraDomainName_ = nullptr;};
      inline string getEntraDomainName() const { DARABONBA_PTR_GET_DEFAULT(entraDomainName_, "") };
      inline Desktops& setEntraDomainName(string entraDomainName) { DARABONBA_PTR_SET_VALUE(entraDomainName_, entraDomainName) };


      // envId Field Functions 
      bool hasEnvId() const { return this->envId_ != nullptr;};
      void deleteEnvId() { this->envId_ = nullptr;};
      inline string getEnvId() const { DARABONBA_PTR_GET_DEFAULT(envId_, "") };
      inline Desktops& setEnvId(string envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline Desktops& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline Desktops& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // fotaUpdate Field Functions 
      bool hasFotaUpdate() const { return this->fotaUpdate_ != nullptr;};
      void deleteFotaUpdate() { this->fotaUpdate_ = nullptr;};
      inline const Desktops::FotaUpdate & getFotaUpdate() const { DARABONBA_PTR_GET_CONST(fotaUpdate_, Desktops::FotaUpdate) };
      inline Desktops::FotaUpdate getFotaUpdate() { DARABONBA_PTR_GET(fotaUpdate_, Desktops::FotaUpdate) };
      inline Desktops& setFotaUpdate(const Desktops::FotaUpdate & fotaUpdate) { DARABONBA_PTR_SET_VALUE(fotaUpdate_, fotaUpdate) };
      inline Desktops& setFotaUpdate(Desktops::FotaUpdate && fotaUpdate) { DARABONBA_PTR_SET_RVALUE(fotaUpdate_, fotaUpdate) };


      // gpuCategory Field Functions 
      bool hasGpuCategory() const { return this->gpuCategory_ != nullptr;};
      void deleteGpuCategory() { this->gpuCategory_ = nullptr;};
      inline int64_t getGpuCategory() const { DARABONBA_PTR_GET_DEFAULT(gpuCategory_, 0L) };
      inline Desktops& setGpuCategory(int64_t gpuCategory) { DARABONBA_PTR_SET_VALUE(gpuCategory_, gpuCategory) };


      // gpuCount Field Functions 
      bool hasGpuCount() const { return this->gpuCount_ != nullptr;};
      void deleteGpuCount() { this->gpuCount_ = nullptr;};
      inline float getGpuCount() const { DARABONBA_PTR_GET_DEFAULT(gpuCount_, 0.0) };
      inline Desktops& setGpuCount(float gpuCount) { DARABONBA_PTR_SET_VALUE(gpuCount_, gpuCount) };


      // gpuDriverVersion Field Functions 
      bool hasGpuDriverVersion() const { return this->gpuDriverVersion_ != nullptr;};
      void deleteGpuDriverVersion() { this->gpuDriverVersion_ = nullptr;};
      inline string getGpuDriverVersion() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverVersion_, "") };
      inline Desktops& setGpuDriverVersion(string gpuDriverVersion) { DARABONBA_PTR_SET_VALUE(gpuDriverVersion_, gpuDriverVersion) };


      // gpuSpec Field Functions 
      bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
      void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
      inline string getGpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
      inline Desktops& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


      // hibernationBeta Field Functions 
      bool hasHibernationBeta() const { return this->hibernationBeta_ != nullptr;};
      void deleteHibernationBeta() { this->hibernationBeta_ = nullptr;};
      inline bool getHibernationBeta() const { DARABONBA_PTR_GET_DEFAULT(hibernationBeta_, false) };
      inline Desktops& setHibernationBeta(bool hibernationBeta) { DARABONBA_PTR_SET_VALUE(hibernationBeta_, hibernationBeta) };


      // hibernationOptionsConfigured Field Functions 
      bool hasHibernationOptionsConfigured() const { return this->hibernationOptionsConfigured_ != nullptr;};
      void deleteHibernationOptionsConfigured() { this->hibernationOptionsConfigured_ = nullptr;};
      inline bool getHibernationOptionsConfigured() const { DARABONBA_PTR_GET_DEFAULT(hibernationOptionsConfigured_, false) };
      inline Desktops& setHibernationOptionsConfigured(bool hibernationOptionsConfigured) { DARABONBA_PTR_SET_VALUE(hibernationOptionsConfigured_, hibernationOptionsConfigured) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline Desktops& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Desktops& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // isLdap Field Functions 
      bool hasIsLdap() const { return this->isLdap_ != nullptr;};
      void deleteIsLdap() { this->isLdap_ = nullptr;};
      inline bool getIsLdap() const { DARABONBA_PTR_GET_DEFAULT(isLdap_, false) };
      inline Desktops& setIsLdap(bool isLdap) { DARABONBA_PTR_SET_VALUE(isLdap_, isLdap) };


      // managementFlag Field Functions 
      bool hasManagementFlag() const { return this->managementFlag_ != nullptr;};
      void deleteManagementFlag() { this->managementFlag_ = nullptr;};
      inline string getManagementFlag() const { DARABONBA_PTR_GET_DEFAULT(managementFlag_, "") };
      inline Desktops& setManagementFlag(string managementFlag) { DARABONBA_PTR_SET_VALUE(managementFlag_, managementFlag) };


      // managementFlags Field Functions 
      bool hasManagementFlags() const { return this->managementFlags_ != nullptr;};
      void deleteManagementFlags() { this->managementFlags_ = nullptr;};
      inline const vector<string> & getManagementFlags() const { DARABONBA_PTR_GET_CONST(managementFlags_, vector<string>) };
      inline vector<string> getManagementFlags() { DARABONBA_PTR_GET(managementFlags_, vector<string>) };
      inline Desktops& setManagementFlags(const vector<string> & managementFlags) { DARABONBA_PTR_SET_VALUE(managementFlags_, managementFlags) };
      inline Desktops& setManagementFlags(vector<string> && managementFlags) { DARABONBA_PTR_SET_RVALUE(managementFlags_, managementFlags) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
      inline Desktops& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // networkInterfaceId Field Functions 
      bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
      void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
      inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
      inline Desktops& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


      // networkInterfaceIp Field Functions 
      bool hasNetworkInterfaceIp() const { return this->networkInterfaceIp_ != nullptr;};
      void deleteNetworkInterfaceIp() { this->networkInterfaceIp_ = nullptr;};
      inline string getNetworkInterfaceIp() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceIp_, "") };
      inline Desktops& setNetworkInterfaceIp(string networkInterfaceIp) { DARABONBA_PTR_SET_VALUE(networkInterfaceIp_, networkInterfaceIp) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline Desktops& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // officeSiteName Field Functions 
      bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
      void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
      inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
      inline Desktops& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


      // officeSiteType Field Functions 
      bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
      void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
      inline string getOfficeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
      inline Desktops& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


      // officeSiteVpcType Field Functions 
      bool hasOfficeSiteVpcType() const { return this->officeSiteVpcType_ != nullptr;};
      void deleteOfficeSiteVpcType() { this->officeSiteVpcType_ = nullptr;};
      inline string getOfficeSiteVpcType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteVpcType_, "") };
      inline Desktops& setOfficeSiteVpcType(string officeSiteVpcType) { DARABONBA_PTR_SET_VALUE(officeSiteVpcType_, officeSiteVpcType) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Desktops& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // osUpdate Field Functions 
      bool hasOsUpdate() const { return this->osUpdate_ != nullptr;};
      void deleteOsUpdate() { this->osUpdate_ = nullptr;};
      inline const Desktops::OsUpdate & getOsUpdate() const { DARABONBA_PTR_GET_CONST(osUpdate_, Desktops::OsUpdate) };
      inline Desktops::OsUpdate getOsUpdate() { DARABONBA_PTR_GET(osUpdate_, Desktops::OsUpdate) };
      inline Desktops& setOsUpdate(const Desktops::OsUpdate & osUpdate) { DARABONBA_PTR_SET_VALUE(osUpdate_, osUpdate) };
      inline Desktops& setOsUpdate(Desktops::OsUpdate && osUpdate) { DARABONBA_PTR_SET_RVALUE(osUpdate_, osUpdate) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Desktops& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // policyGroupId Field Functions 
      bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
      void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
      inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
      inline Desktops& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


      // policyGroupIdList Field Functions 
      bool hasPolicyGroupIdList() const { return this->policyGroupIdList_ != nullptr;};
      void deletePolicyGroupIdList() { this->policyGroupIdList_ = nullptr;};
      inline const vector<string> & getPolicyGroupIdList() const { DARABONBA_PTR_GET_CONST(policyGroupIdList_, vector<string>) };
      inline vector<string> getPolicyGroupIdList() { DARABONBA_PTR_GET(policyGroupIdList_, vector<string>) };
      inline Desktops& setPolicyGroupIdList(const vector<string> & policyGroupIdList) { DARABONBA_PTR_SET_VALUE(policyGroupIdList_, policyGroupIdList) };
      inline Desktops& setPolicyGroupIdList(vector<string> && policyGroupIdList) { DARABONBA_PTR_SET_RVALUE(policyGroupIdList_, policyGroupIdList) };


      // policyGroupName Field Functions 
      bool hasPolicyGroupName() const { return this->policyGroupName_ != nullptr;};
      void deletePolicyGroupName() { this->policyGroupName_ = nullptr;};
      inline string getPolicyGroupName() const { DARABONBA_PTR_GET_DEFAULT(policyGroupName_, "") };
      inline Desktops& setPolicyGroupName(string policyGroupName) { DARABONBA_PTR_SET_VALUE(policyGroupName_, policyGroupName) };


      // policyGroupNameList Field Functions 
      bool hasPolicyGroupNameList() const { return this->policyGroupNameList_ != nullptr;};
      void deletePolicyGroupNameList() { this->policyGroupNameList_ = nullptr;};
      inline const vector<string> & getPolicyGroupNameList() const { DARABONBA_PTR_GET_CONST(policyGroupNameList_, vector<string>) };
      inline vector<string> getPolicyGroupNameList() { DARABONBA_PTR_GET(policyGroupNameList_, vector<string>) };
      inline Desktops& setPolicyGroupNameList(const vector<string> & policyGroupNameList) { DARABONBA_PTR_SET_VALUE(policyGroupNameList_, policyGroupNameList) };
      inline Desktops& setPolicyGroupNameList(vector<string> && policyGroupNameList) { DARABONBA_PTR_SET_RVALUE(policyGroupNameList_, policyGroupNameList) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline Desktops& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline Desktops& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // resourceGroups Field Functions 
      bool hasResourceGroups() const { return this->resourceGroups_ != nullptr;};
      void deleteResourceGroups() { this->resourceGroups_ = nullptr;};
      inline const vector<Desktops::ResourceGroups> & getResourceGroups() const { DARABONBA_PTR_GET_CONST(resourceGroups_, vector<Desktops::ResourceGroups>) };
      inline vector<Desktops::ResourceGroups> getResourceGroups() { DARABONBA_PTR_GET(resourceGroups_, vector<Desktops::ResourceGroups>) };
      inline Desktops& setResourceGroups(const vector<Desktops::ResourceGroups> & resourceGroups) { DARABONBA_PTR_SET_VALUE(resourceGroups_, resourceGroups) };
      inline Desktops& setResourceGroups(vector<Desktops::ResourceGroups> && resourceGroups) { DARABONBA_PTR_SET_RVALUE(resourceGroups_, resourceGroups) };


      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
      inline Desktops& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      // sessionType Field Functions 
      bool hasSessionType() const { return this->sessionType_ != nullptr;};
      void deleteSessionType() { this->sessionType_ = nullptr;};
      inline string getSessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
      inline Desktops& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


      // sessions Field Functions 
      bool hasSessions() const { return this->sessions_ != nullptr;};
      void deleteSessions() { this->sessions_ = nullptr;};
      inline const vector<Desktops::Sessions> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<Desktops::Sessions>) };
      inline vector<Desktops::Sessions> getSessions() { DARABONBA_PTR_GET(sessions_, vector<Desktops::Sessions>) };
      inline Desktops& setSessions(const vector<Desktops::Sessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
      inline Desktops& setSessions(vector<Desktops::Sessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


      // snapshotPolicyId Field Functions 
      bool hasSnapshotPolicyId() const { return this->snapshotPolicyId_ != nullptr;};
      void deleteSnapshotPolicyId() { this->snapshotPolicyId_ = nullptr;};
      inline string getSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(snapshotPolicyId_, "") };
      inline Desktops& setSnapshotPolicyId(string snapshotPolicyId) { DARABONBA_PTR_SET_VALUE(snapshotPolicyId_, snapshotPolicyId) };


      // snapshotPolicyName Field Functions 
      bool hasSnapshotPolicyName() const { return this->snapshotPolicyName_ != nullptr;};
      void deleteSnapshotPolicyName() { this->snapshotPolicyName_ = nullptr;};
      inline string getSnapshotPolicyName() const { DARABONBA_PTR_GET_DEFAULT(snapshotPolicyName_, "") };
      inline Desktops& setSnapshotPolicyName(string snapshotPolicyName) { DARABONBA_PTR_SET_VALUE(snapshotPolicyName_, snapshotPolicyName) };


      // standardStartTime Field Functions 
      bool hasStandardStartTime() const { return this->standardStartTime_ != nullptr;};
      void deleteStandardStartTime() { this->standardStartTime_ = nullptr;};
      inline string getStandardStartTime() const { DARABONBA_PTR_GET_DEFAULT(standardStartTime_, "") };
      inline Desktops& setStandardStartTime(string standardStartTime) { DARABONBA_PTR_SET_VALUE(standardStartTime_, standardStartTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Desktops& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // supportHibernation Field Functions 
      bool hasSupportHibernation() const { return this->supportHibernation_ != nullptr;};
      void deleteSupportHibernation() { this->supportHibernation_ = nullptr;};
      inline bool getSupportHibernation() const { DARABONBA_PTR_GET_DEFAULT(supportHibernation_, false) };
      inline Desktops& setSupportHibernation(bool supportHibernation) { DARABONBA_PTR_SET_VALUE(supportHibernation_, supportHibernation) };


      // systemDiskCategory Field Functions 
      bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
      void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
      inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
      inline Desktops& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
      inline Desktops& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Desktops::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Desktops::Tags>) };
      inline vector<Desktops::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Desktops::Tags>) };
      inline Desktops& setTags(const vector<Desktops::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Desktops& setTags(vector<Desktops::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // volumeEncryptionEnabled Field Functions 
      bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
      void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
      inline bool getVolumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
      inline Desktops& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


      // volumeEncryptionKey Field Functions 
      bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
      void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
      inline string getVolumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
      inline Desktops& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


      // zoneType Field Functions 
      bool hasZoneType() const { return this->zoneType_ != nullptr;};
      void deleteZoneType() { this->zoneType_ = nullptr;};
      inline string getZoneType() const { DARABONBA_PTR_GET_DEFAULT(zoneType_, "") };
      inline Desktops& setZoneType(string zoneType) { DARABONBA_PTR_SET_VALUE(zoneType_, zoneType) };


    protected:
      shared_ptr<string> accountType_ {};
      // The number of concurrent sessions of each cloud computer in a multi-session cloud computer pool.
      shared_ptr<int32_t> bindAmount_ {};
      // The ID of the template used to create the cloud computer.
      shared_ptr<string> bundleId_ {};
      // The name of the template used to create the cloud computer.
      shared_ptr<string> bundleName_ {};
      // The billing method of the cloud computer.
      // 
      // Valid values:
      // 
      // *   Postpaid (default): pay-as-you-go
      // *   PrePaid: subscription
      shared_ptr<string> chargeType_ {};
      // The connection status of the end user.
      // 
      // Valid values:
      // 
      // *   Unknown
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Connected
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Disconnected
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> connectionStatus_ {};
      // The number of vCPUs.
      shared_ptr<int32_t> cpu_ {};
      // The time when the cloud computer was created.
      shared_ptr<string> creationTime_ {};
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<string> dataDiskCategory_ {};
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<string> dataDiskSize_ {};
      shared_ptr<vector<Desktops::DesktopDurationList>> desktopDurationList_ {};
      // The ID of the cloud computer pool to which cloud computers belong. Default value: null.``
      shared_ptr<string> desktopGroupId_ {};
      // The cloud computer ID.
      shared_ptr<string> desktopId_ {};
      // The cloud computer name.
      shared_ptr<string> desktopName_ {};
      // The cloud computer status.
      shared_ptr<string> desktopStatus_ {};
      // The cloud computer type.
      shared_ptr<string> desktopType_ {};
      // The directory ID, which is the same as the office network ID (OfficeSiteId).
      shared_ptr<string> directoryId_ {};
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<string> directoryType_ {};
      // The information about the disks.
      shared_ptr<vector<Desktops::Disks>> disks_ {};
      shared_ptr<string> domainType_ {};
      // The number of times for which the cloud desktop can be downgraded.
      shared_ptr<int64_t> downgradeQuota_ {};
      // The number of times for which the cloud desktop has been downgraded.
      shared_ptr<int64_t> downgradedTimes_ {};
      // The end user IDs.
      shared_ptr<vector<string>> endUserIds_ {};
      shared_ptr<string> entraDomainName_ {};
      shared_ptr<string> envId_ {};
      shared_ptr<string> envType_ {};
      // The time when a subscription cloud computer expired.
      shared_ptr<string> expiredTime_ {};
      // The information about the image version of the cloud computer.
      shared_ptr<Desktops::FotaUpdate> fotaUpdate_ {};
      // Indicates whether the cloud computer uses GPUs.
      shared_ptr<int64_t> gpuCategory_ {};
      // The number of GPU cores.
      shared_ptr<float> gpuCount_ {};
      // The GPU driver version used by the cloud computer.
      shared_ptr<string> gpuDriverVersion_ {};
      // The GPU Specifications.
      shared_ptr<string> gpuSpec_ {};
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<bool> hibernationBeta_ {};
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<bool> hibernationOptionsConfigured_ {};
      // The hostname of the cloud desktop.
      shared_ptr<string> hostName_ {};
      // The image ID.
      shared_ptr<string> imageId_ {};
      shared_ptr<bool> isLdap_ {};
      // The flag that is used to manage the cloud computer.
      // 
      // Valid values:
      // 
      // *   Migrating: The cloud computer is being migrated.
      // *   Updating: The configurations of the cloud computer are being updated.
      // *   NoFlag: No flags are available.
      shared_ptr<string> managementFlag_ {};
      // The flags that are used to manage the cloud computers.
      shared_ptr<vector<string>> managementFlags_ {};
      // The memory size. Unit: MiB.
      shared_ptr<int64_t> memory_ {};
      // The ID of the supplementary network interface controller (NIC) created by EDS within an RAM user or Active Directory (AD) user. You cannot modify the ID.
      shared_ptr<string> networkInterfaceId_ {};
      // The IP address of the supplementary NIC created by EDS within an RAM or AD user.
      shared_ptr<string> networkInterfaceIp_ {};
      // The office network ID.
      shared_ptr<string> officeSiteId_ {};
      // The office network name.
      shared_ptr<string> officeSiteName_ {};
      // The account type of the office network.
      // 
      // Valid values:
      // 
      // *   SIMPLE: convenience account
      // *   AD_CONNECTOR: enterprise AD account
      shared_ptr<string> officeSiteType_ {};
      // The VPC type of the office network.
      // 
      // Valid values:
      // 
      // *   standard
      // *   customized
      // *   basic
      shared_ptr<string> officeSiteVpcType_ {};
      // The OS that is defined in the desktop template.
      shared_ptr<string> osType_ {};
      shared_ptr<Desktops::OsUpdate> osUpdate_ {};
      // The information about the OS platform.
      // 
      // Valid values:
      // 
      // *   Ubuntu
      // *   Windows Server 2022
      // *   UOS
      // *   CentOS
      // *   Windows Server 2019
      // *   Windows Server 2016
      shared_ptr<string> platform_ {};
      // The policy ID.
      shared_ptr<string> policyGroupId_ {};
      // The IDs of the cloud computer policies.
      shared_ptr<vector<string>> policyGroupIdList_ {};
      // The policy name.
      shared_ptr<string> policyGroupName_ {};
      // The names of the cloud computer policies.
      shared_ptr<vector<string>> policyGroupNameList_ {};
      // The progress of creating the cloud computer.
      shared_ptr<string> progress_ {};
      // The protocol.
      // 
      // Valid values:
      // 
      // *   HDX
      // *   ASP
      shared_ptr<string> protocolType_ {};
      // The information about the enterprise resource groups.
      shared_ptr<vector<Desktops::ResourceGroups>> resourceGroups_ {};
      shared_ptr<string> serialNumber_ {};
      // The type of the session.
      // 
      // Valid values:
      // 
      // *   SINGLE_SESSION
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   MULTIPLE_SESSION
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> sessionType_ {};
      // The session information about cloud computers connected by end users.
      shared_ptr<vector<Desktops::Sessions>> sessions_ {};
      // The snapshot policy ID.
      shared_ptr<string> snapshotPolicyId_ {};
      // The name of the snapshot policy.
      shared_ptr<string> snapshotPolicyName_ {};
      // The standard start time.
      shared_ptr<string> standardStartTime_ {};
      // The time when the cloud computer was first started.
      shared_ptr<string> startTime_ {};
      // Indicates whether the cloud desktop supports hibernation.
      shared_ptr<bool> supportHibernation_ {};
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<string> systemDiskCategory_ {};
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<int32_t> systemDiskSize_ {};
      // Details about the tags.
      shared_ptr<vector<Desktops::Tags>> tags_ {};
      // Indicates whether disk encryption is enabled.
      shared_ptr<bool> volumeEncryptionEnabled_ {};
      // The ID of the Key Management Service (KMS) key that is used when disk encryption is enabled. You can call the [ListKeys](https://help.aliyun.com/document_detail/28951.html) operation to query the list of KMS keys.
      shared_ptr<string> volumeEncryptionKey_ {};
      // The zone type. Default value: `AvailabilityZone`. This value indicates Alibaba Cloud zones.
      shared_ptr<string> zoneType_ {};
    };

    virtual bool empty() const override { return this->desktops_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // desktops Field Functions 
    bool hasDesktops() const { return this->desktops_ != nullptr;};
    void deleteDesktops() { this->desktops_ = nullptr;};
    inline const vector<DescribeDesktopsResponseBody::Desktops> & getDesktops() const { DARABONBA_PTR_GET_CONST(desktops_, vector<DescribeDesktopsResponseBody::Desktops>) };
    inline vector<DescribeDesktopsResponseBody::Desktops> getDesktops() { DARABONBA_PTR_GET(desktops_, vector<DescribeDesktopsResponseBody::Desktops>) };
    inline DescribeDesktopsResponseBody& setDesktops(const vector<DescribeDesktopsResponseBody::Desktops> & desktops) { DARABONBA_PTR_SET_VALUE(desktops_, desktops) };
    inline DescribeDesktopsResponseBody& setDesktops(vector<DescribeDesktopsResponseBody::Desktops> && desktops) { DARABONBA_PTR_SET_RVALUE(desktops_, desktops) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDesktopsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDesktopsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDesktopsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDesktopsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDesktopsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cloud computers.
    shared_ptr<vector<DescribeDesktopsResponseBody::Desktops>> desktops_ {};
    // The token that is used for the next query. If this parameter is left empty, all results are returned.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of cloud computers.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
