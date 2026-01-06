// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFileSystemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystems, fileSystems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystems, fileSystems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeFileSystemsResponseBody() = default ;
    DescribeFileSystemsResponseBody(const DescribeFileSystemsResponseBody &) = default ;
    DescribeFileSystemsResponseBody(DescribeFileSystemsResponseBody &&) = default ;
    DescribeFileSystemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsResponseBody() = default ;
    DescribeFileSystemsResponseBody& operator=(const DescribeFileSystemsResponseBody &) = default ;
    DescribeFileSystemsResponseBody& operator=(DescribeFileSystemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FileSystems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileSystems& obj) { 
        DARABONBA_PTR_TO_JSON(FileSystem, fileSystem_);
      };
      friend void from_json(const Darabonba::Json& j, FileSystems& obj) { 
        DARABONBA_PTR_FROM_JSON(FileSystem, fileSystem_);
      };
      FileSystems() = default ;
      FileSystems(const FileSystems &) = default ;
      FileSystems(FileSystems &&) = default ;
      FileSystems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileSystems() = default ;
      FileSystems& operator=(const FileSystems &) = default ;
      FileSystems& operator=(FileSystems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FileSystem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileSystem& obj) { 
          DARABONBA_PTR_TO_JSON(AccessPointCount, accessPointCount_);
          DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(Capacity, capacity_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
          DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
          DARABONBA_PTR_TO_JSON(Ldap, ldap_);
          DARABONBA_PTR_TO_JSON(MeteredArchiveSize, meteredArchiveSize_);
          DARABONBA_PTR_TO_JSON(MeteredIASize, meteredIASize_);
          DARABONBA_PTR_TO_JSON(MeteredSize, meteredSize_);
          DARABONBA_PTR_TO_JSON(MountTargets, mountTargets_);
          DARABONBA_PTR_TO_JSON(Options, options_);
          DARABONBA_PTR_TO_JSON(Packages, packages_);
          DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
          DARABONBA_PTR_TO_JSON(QuorumVswId, quorumVswId_);
          DARABONBA_PTR_TO_JSON(RedundancyType, redundancyType_);
          DARABONBA_PTR_TO_JSON(RedundancyVSwitchIds, redundancyVSwitchIds_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
          DARABONBA_PTR_TO_JSON(SupportedFeatures, supportedFeatures_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Version, version_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VscTarget, vscTarget_);
          DARABONBA_PTR_TO_JSON(VswIds, vswIds_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, FileSystem& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessPointCount, accessPointCount_);
          DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
          DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
          DARABONBA_PTR_FROM_JSON(Ldap, ldap_);
          DARABONBA_PTR_FROM_JSON(MeteredArchiveSize, meteredArchiveSize_);
          DARABONBA_PTR_FROM_JSON(MeteredIASize, meteredIASize_);
          DARABONBA_PTR_FROM_JSON(MeteredSize, meteredSize_);
          DARABONBA_PTR_FROM_JSON(MountTargets, mountTargets_);
          DARABONBA_PTR_FROM_JSON(Options, options_);
          DARABONBA_PTR_FROM_JSON(Packages, packages_);
          DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
          DARABONBA_PTR_FROM_JSON(QuorumVswId, quorumVswId_);
          DARABONBA_PTR_FROM_JSON(RedundancyType, redundancyType_);
          DARABONBA_PTR_FROM_JSON(RedundancyVSwitchIds, redundancyVSwitchIds_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
          DARABONBA_PTR_FROM_JSON(SupportedFeatures, supportedFeatures_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VscTarget, vscTarget_);
          DARABONBA_PTR_FROM_JSON(VswIds, vswIds_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        FileSystem() = default ;
        FileSystem(const FileSystem &) = default ;
        FileSystem(FileSystem &&) = default ;
        FileSystem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileSystem() = default ;
        FileSystem& operator=(const FileSystem &) = default ;
        FileSystem& operator=(FileSystem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VswIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VswIds& obj) { 
            DARABONBA_PTR_TO_JSON(VswId, vswId_);
          };
          friend void from_json(const Darabonba::Json& j, VswIds& obj) { 
            DARABONBA_PTR_FROM_JSON(VswId, vswId_);
          };
          VswIds() = default ;
          VswIds(const VswIds &) = default ;
          VswIds(VswIds &&) = default ;
          VswIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VswIds() = default ;
          VswIds& operator=(const VswIds &) = default ;
          VswIds& operator=(VswIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->vswId_ == nullptr; };
          // vswId Field Functions 
          bool hasVswId() const { return this->vswId_ != nullptr;};
          void deleteVswId() { this->vswId_ = nullptr;};
          inline const vector<string> & getVswId() const { DARABONBA_PTR_GET_CONST(vswId_, vector<string>) };
          inline vector<string> getVswId() { DARABONBA_PTR_GET(vswId_, vector<string>) };
          inline VswIds& setVswId(const vector<string> & vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };
          inline VswIds& setVswId(vector<string> && vswId) { DARABONBA_PTR_SET_RVALUE(vswId_, vswId) };


        protected:
          shared_ptr<vector<string>> vswId_ {};
        };

        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
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
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag key.
            shared_ptr<string> key_ {};
            // The tag value.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class SupportedFeatures : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SupportedFeatures& obj) { 
            DARABONBA_PTR_TO_JSON(SupportedFeature, supportedFeature_);
          };
          friend void from_json(const Darabonba::Json& j, SupportedFeatures& obj) { 
            DARABONBA_PTR_FROM_JSON(SupportedFeature, supportedFeature_);
          };
          SupportedFeatures() = default ;
          SupportedFeatures(const SupportedFeatures &) = default ;
          SupportedFeatures(SupportedFeatures &&) = default ;
          SupportedFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SupportedFeatures() = default ;
          SupportedFeatures& operator=(const SupportedFeatures &) = default ;
          SupportedFeatures& operator=(SupportedFeatures &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->supportedFeature_ == nullptr; };
          // supportedFeature Field Functions 
          bool hasSupportedFeature() const { return this->supportedFeature_ != nullptr;};
          void deleteSupportedFeature() { this->supportedFeature_ = nullptr;};
          inline const vector<string> & getSupportedFeature() const { DARABONBA_PTR_GET_CONST(supportedFeature_, vector<string>) };
          inline vector<string> getSupportedFeature() { DARABONBA_PTR_GET(supportedFeature_, vector<string>) };
          inline SupportedFeatures& setSupportedFeature(const vector<string> & supportedFeature) { DARABONBA_PTR_SET_VALUE(supportedFeature_, supportedFeature) };
          inline SupportedFeatures& setSupportedFeature(vector<string> && supportedFeature) { DARABONBA_PTR_SET_RVALUE(supportedFeature_, supportedFeature) };


        protected:
          shared_ptr<vector<string>> supportedFeature_ {};
        };

        class RedundancyVSwitchIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RedundancyVSwitchIds& obj) { 
            DARABONBA_PTR_TO_JSON(RedundancyVSwitchId, redundancyVSwitchId_);
          };
          friend void from_json(const Darabonba::Json& j, RedundancyVSwitchIds& obj) { 
            DARABONBA_PTR_FROM_JSON(RedundancyVSwitchId, redundancyVSwitchId_);
          };
          RedundancyVSwitchIds() = default ;
          RedundancyVSwitchIds(const RedundancyVSwitchIds &) = default ;
          RedundancyVSwitchIds(RedundancyVSwitchIds &&) = default ;
          RedundancyVSwitchIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RedundancyVSwitchIds() = default ;
          RedundancyVSwitchIds& operator=(const RedundancyVSwitchIds &) = default ;
          RedundancyVSwitchIds& operator=(RedundancyVSwitchIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->redundancyVSwitchId_ == nullptr; };
          // redundancyVSwitchId Field Functions 
          bool hasRedundancyVSwitchId() const { return this->redundancyVSwitchId_ != nullptr;};
          void deleteRedundancyVSwitchId() { this->redundancyVSwitchId_ = nullptr;};
          inline const vector<string> & getRedundancyVSwitchId() const { DARABONBA_PTR_GET_CONST(redundancyVSwitchId_, vector<string>) };
          inline vector<string> getRedundancyVSwitchId() { DARABONBA_PTR_GET(redundancyVSwitchId_, vector<string>) };
          inline RedundancyVSwitchIds& setRedundancyVSwitchId(const vector<string> & redundancyVSwitchId) { DARABONBA_PTR_SET_VALUE(redundancyVSwitchId_, redundancyVSwitchId) };
          inline RedundancyVSwitchIds& setRedundancyVSwitchId(vector<string> && redundancyVSwitchId) { DARABONBA_PTR_SET_RVALUE(redundancyVSwitchId_, redundancyVSwitchId) };


        protected:
          shared_ptr<vector<string>> redundancyVSwitchId_ {};
        };

        class Packages : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Packages& obj) { 
            DARABONBA_PTR_TO_JSON(Package, package_);
          };
          friend void from_json(const Darabonba::Json& j, Packages& obj) { 
            DARABONBA_PTR_FROM_JSON(Package, package_);
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
          class Package : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Package& obj) { 
              DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
              DARABONBA_PTR_TO_JSON(PackageId, packageId_);
              DARABONBA_PTR_TO_JSON(PackageType, packageType_);
              DARABONBA_PTR_TO_JSON(Size, size_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            };
            friend void from_json(const Darabonba::Json& j, Package& obj) { 
              DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
              DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
              DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
              DARABONBA_PTR_FROM_JSON(Size, size_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            };
            Package() = default ;
            Package(const Package &) = default ;
            Package(Package &&) = default ;
            Package(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Package() = default ;
            Package& operator=(const Package &) = default ;
            Package& operator=(Package &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->expiredTime_ == nullptr
        && this->packageId_ == nullptr && this->packageType_ == nullptr && this->size_ == nullptr && this->startTime_ == nullptr; };
            // expiredTime Field Functions 
            bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
            void deleteExpiredTime() { this->expiredTime_ = nullptr;};
            inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
            inline Package& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


            // packageId Field Functions 
            bool hasPackageId() const { return this->packageId_ != nullptr;};
            void deletePackageId() { this->packageId_ = nullptr;};
            inline string getPackageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, "") };
            inline Package& setPackageId(string packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


            // packageType Field Functions 
            bool hasPackageType() const { return this->packageType_ != nullptr;};
            void deletePackageType() { this->packageType_ = nullptr;};
            inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
            inline Package& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


            // size Field Functions 
            bool hasSize() const { return this->size_ != nullptr;};
            void deleteSize() { this->size_ = nullptr;};
            inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
            inline Package& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline Package& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          protected:
            // The end time of the validity period for the storage plan.
            shared_ptr<string> expiredTime_ {};
            // The ID of the storage plan.
            shared_ptr<string> packageId_ {};
            // The type of the storage plan.
            // 
            // Valid values:
            // 
            // *   ssd: The storage plan for Performance NAS file systems.
            // *   hybrid: The storage plan for Capacity NAS file systems.
            shared_ptr<string> packageType_ {};
            // The capacity of the storage plan. Unit: bytes.
            shared_ptr<int64_t> size_ {};
            // The start time of the validity period for the storage plan.
            shared_ptr<string> startTime_ {};
          };

          virtual bool empty() const override { return this->package_ == nullptr; };
          // package Field Functions 
          bool hasPackage() const { return this->package_ != nullptr;};
          void deletePackage() { this->package_ = nullptr;};
          inline const vector<Packages::Package> & getPackage() const { DARABONBA_PTR_GET_CONST(package_, vector<Packages::Package>) };
          inline vector<Packages::Package> getPackage() { DARABONBA_PTR_GET(package_, vector<Packages::Package>) };
          inline Packages& setPackage(const vector<Packages::Package> & package) { DARABONBA_PTR_SET_VALUE(package_, package) };
          inline Packages& setPackage(vector<Packages::Package> && package) { DARABONBA_PTR_SET_RVALUE(package_, package) };


        protected:
          shared_ptr<vector<Packages::Package>> package_ {};
        };

        class Options : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Options& obj) { 
            DARABONBA_PTR_TO_JSON(EnableOplock, enableOplock_);
          };
          friend void from_json(const Darabonba::Json& j, Options& obj) { 
            DARABONBA_PTR_FROM_JSON(EnableOplock, enableOplock_);
          };
          Options() = default ;
          Options(const Options &) = default ;
          Options(Options &&) = default ;
          Options(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Options() = default ;
          Options& operator=(const Options &) = default ;
          Options& operator=(Options &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enableOplock_ == nullptr; };
          // enableOplock Field Functions 
          bool hasEnableOplock() const { return this->enableOplock_ != nullptr;};
          void deleteEnableOplock() { this->enableOplock_ = nullptr;};
          inline bool getEnableOplock() const { DARABONBA_PTR_GET_DEFAULT(enableOplock_, false) };
          inline Options& setEnableOplock(bool enableOplock) { DARABONBA_PTR_SET_VALUE(enableOplock_, enableOplock) };


        protected:
          // Specifies whether to enable the oplock feature. Valid values:
          // 
          // *   true: enables the feature.
          // *   false: disables the feature.
          // 
          // >  Only Server Message Block (SMB) file systems support this feature.
          shared_ptr<bool> enableOplock_ {};
        };

        class MountTargets : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MountTargets& obj) { 
            DARABONBA_PTR_TO_JSON(MountTarget, mountTarget_);
          };
          friend void from_json(const Darabonba::Json& j, MountTargets& obj) { 
            DARABONBA_PTR_FROM_JSON(MountTarget, mountTarget_);
          };
          MountTargets() = default ;
          MountTargets(const MountTargets &) = default ;
          MountTargets(MountTargets &&) = default ;
          MountTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MountTargets() = default ;
          MountTargets& operator=(const MountTargets &) = default ;
          MountTargets& operator=(MountTargets &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class MountTarget : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MountTarget& obj) { 
              DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
              DARABONBA_PTR_TO_JSON(ClientMasterNodes, clientMasterNodes_);
              DARABONBA_PTR_TO_JSON(DualStackMountTargetDomain, dualStackMountTargetDomain_);
              DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
              DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
              DARABONBA_PTR_TO_JSON(Status, status_);
              DARABONBA_PTR_TO_JSON(Tags, tags_);
              DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
              DARABONBA_PTR_TO_JSON(VswId, vswId_);
            };
            friend void from_json(const Darabonba::Json& j, MountTarget& obj) { 
              DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
              DARABONBA_PTR_FROM_JSON(ClientMasterNodes, clientMasterNodes_);
              DARABONBA_PTR_FROM_JSON(DualStackMountTargetDomain, dualStackMountTargetDomain_);
              DARABONBA_PTR_FROM_JSON(MountTargetDomain, mountTargetDomain_);
              DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
              DARABONBA_PTR_FROM_JSON(Tags, tags_);
              DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
              DARABONBA_PTR_FROM_JSON(VswId, vswId_);
            };
            MountTarget() = default ;
            MountTarget(const MountTarget &) = default ;
            MountTarget(MountTarget &&) = default ;
            MountTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MountTarget() = default ;
            MountTarget& operator=(const MountTarget &) = default ;
            MountTarget& operator=(MountTarget &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Tags : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Tags& obj) { 
                DARABONBA_PTR_TO_JSON(Tag, tag_);
              };
              friend void from_json(const Darabonba::Json& j, Tags& obj) { 
                DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
              class Tag : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Tag& obj) { 
                  DARABONBA_PTR_TO_JSON(Key, key_);
                  DARABONBA_PTR_TO_JSON(Value, value_);
                };
                friend void from_json(const Darabonba::Json& j, Tag& obj) { 
                  DARABONBA_PTR_FROM_JSON(Key, key_);
                  DARABONBA_PTR_FROM_JSON(Value, value_);
                };
                Tag() = default ;
                Tag(const Tag &) = default ;
                Tag(Tag &&) = default ;
                Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Tag() = default ;
                Tag& operator=(const Tag &) = default ;
                Tag& operator=(Tag &&) = default ;
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
                inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


                // value Field Functions 
                bool hasValue() const { return this->value_ != nullptr;};
                void deleteValue() { this->value_ = nullptr;};
                inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


              protected:
                // The tag key.
                shared_ptr<string> key_ {};
                // The tag value.
                shared_ptr<string> value_ {};
              };

              virtual bool empty() const override { return this->tag_ == nullptr; };
              // tag Field Functions 
              bool hasTag() const { return this->tag_ != nullptr;};
              void deleteTag() { this->tag_ = nullptr;};
              inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
              inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
              inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
              inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


            protected:
              shared_ptr<vector<Tags::Tag>> tag_ {};
            };

            class ClientMasterNodes : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ClientMasterNodes& obj) { 
                DARABONBA_PTR_TO_JSON(ClientMasterNode, clientMasterNode_);
              };
              friend void from_json(const Darabonba::Json& j, ClientMasterNodes& obj) { 
                DARABONBA_PTR_FROM_JSON(ClientMasterNode, clientMasterNode_);
              };
              ClientMasterNodes() = default ;
              ClientMasterNodes(const ClientMasterNodes &) = default ;
              ClientMasterNodes(ClientMasterNodes &&) = default ;
              ClientMasterNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ClientMasterNodes() = default ;
              ClientMasterNodes& operator=(const ClientMasterNodes &) = default ;
              ClientMasterNodes& operator=(ClientMasterNodes &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class ClientMasterNode : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ClientMasterNode& obj) { 
                  DARABONBA_PTR_TO_JSON(DefaultPasswd, defaultPasswd_);
                  DARABONBA_PTR_TO_JSON(EcsId, ecsId_);
                  DARABONBA_PTR_TO_JSON(EcsIp, ecsIp_);
                };
                friend void from_json(const Darabonba::Json& j, ClientMasterNode& obj) { 
                  DARABONBA_PTR_FROM_JSON(DefaultPasswd, defaultPasswd_);
                  DARABONBA_PTR_FROM_JSON(EcsId, ecsId_);
                  DARABONBA_PTR_FROM_JSON(EcsIp, ecsIp_);
                };
                ClientMasterNode() = default ;
                ClientMasterNode(const ClientMasterNode &) = default ;
                ClientMasterNode(ClientMasterNode &&) = default ;
                ClientMasterNode(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ClientMasterNode() = default ;
                ClientMasterNode& operator=(const ClientMasterNode &) = default ;
                ClientMasterNode& operator=(ClientMasterNode &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->defaultPasswd_ == nullptr
        && this->ecsId_ == nullptr && this->ecsIp_ == nullptr; };
                // defaultPasswd Field Functions 
                bool hasDefaultPasswd() const { return this->defaultPasswd_ != nullptr;};
                void deleteDefaultPasswd() { this->defaultPasswd_ = nullptr;};
                inline string getDefaultPasswd() const { DARABONBA_PTR_GET_DEFAULT(defaultPasswd_, "") };
                inline ClientMasterNode& setDefaultPasswd(string defaultPasswd) { DARABONBA_PTR_SET_VALUE(defaultPasswd_, defaultPasswd) };


                // ecsId Field Functions 
                bool hasEcsId() const { return this->ecsId_ != nullptr;};
                void deleteEcsId() { this->ecsId_ = nullptr;};
                inline string getEcsId() const { DARABONBA_PTR_GET_DEFAULT(ecsId_, "") };
                inline ClientMasterNode& setEcsId(string ecsId) { DARABONBA_PTR_SET_VALUE(ecsId_, ecsId) };


                // ecsIp Field Functions 
                bool hasEcsIp() const { return this->ecsIp_ != nullptr;};
                void deleteEcsIp() { this->ecsIp_ = nullptr;};
                inline string getEcsIp() const { DARABONBA_PTR_GET_DEFAULT(ecsIp_, "") };
                inline ClientMasterNode& setEcsIp(string ecsIp) { DARABONBA_PTR_SET_VALUE(ecsIp_, ecsIp) };


              protected:
                // The default logon password of the ECS instance on the client management node.
                shared_ptr<string> defaultPasswd_ {};
                // The ID of the ECS instance on the client management node.
                shared_ptr<string> ecsId_ {};
                // The IP address of the ECS instance on the client management node.
                shared_ptr<string> ecsIp_ {};
              };

              virtual bool empty() const override { return this->clientMasterNode_ == nullptr; };
              // clientMasterNode Field Functions 
              bool hasClientMasterNode() const { return this->clientMasterNode_ != nullptr;};
              void deleteClientMasterNode() { this->clientMasterNode_ = nullptr;};
              inline const vector<ClientMasterNodes::ClientMasterNode> & getClientMasterNode() const { DARABONBA_PTR_GET_CONST(clientMasterNode_, vector<ClientMasterNodes::ClientMasterNode>) };
              inline vector<ClientMasterNodes::ClientMasterNode> getClientMasterNode() { DARABONBA_PTR_GET(clientMasterNode_, vector<ClientMasterNodes::ClientMasterNode>) };
              inline ClientMasterNodes& setClientMasterNode(const vector<ClientMasterNodes::ClientMasterNode> & clientMasterNode) { DARABONBA_PTR_SET_VALUE(clientMasterNode_, clientMasterNode) };
              inline ClientMasterNodes& setClientMasterNode(vector<ClientMasterNodes::ClientMasterNode> && clientMasterNode) { DARABONBA_PTR_SET_RVALUE(clientMasterNode_, clientMasterNode) };


            protected:
              shared_ptr<vector<ClientMasterNodes::ClientMasterNode>> clientMasterNode_ {};
            };

            virtual bool empty() const override { return this->accessGroupName_ == nullptr
        && this->clientMasterNodes_ == nullptr && this->dualStackMountTargetDomain_ == nullptr && this->mountTargetDomain_ == nullptr && this->networkType_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->vpcId_ == nullptr && this->vswId_ == nullptr; };
            // accessGroupName Field Functions 
            bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
            void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
            inline string getAccessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
            inline MountTarget& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


            // clientMasterNodes Field Functions 
            bool hasClientMasterNodes() const { return this->clientMasterNodes_ != nullptr;};
            void deleteClientMasterNodes() { this->clientMasterNodes_ = nullptr;};
            inline const MountTarget::ClientMasterNodes & getClientMasterNodes() const { DARABONBA_PTR_GET_CONST(clientMasterNodes_, MountTarget::ClientMasterNodes) };
            inline MountTarget::ClientMasterNodes getClientMasterNodes() { DARABONBA_PTR_GET(clientMasterNodes_, MountTarget::ClientMasterNodes) };
            inline MountTarget& setClientMasterNodes(const MountTarget::ClientMasterNodes & clientMasterNodes) { DARABONBA_PTR_SET_VALUE(clientMasterNodes_, clientMasterNodes) };
            inline MountTarget& setClientMasterNodes(MountTarget::ClientMasterNodes && clientMasterNodes) { DARABONBA_PTR_SET_RVALUE(clientMasterNodes_, clientMasterNodes) };


            // dualStackMountTargetDomain Field Functions 
            bool hasDualStackMountTargetDomain() const { return this->dualStackMountTargetDomain_ != nullptr;};
            void deleteDualStackMountTargetDomain() { this->dualStackMountTargetDomain_ = nullptr;};
            inline string getDualStackMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(dualStackMountTargetDomain_, "") };
            inline MountTarget& setDualStackMountTargetDomain(string dualStackMountTargetDomain) { DARABONBA_PTR_SET_VALUE(dualStackMountTargetDomain_, dualStackMountTargetDomain) };


            // mountTargetDomain Field Functions 
            bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
            void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
            inline string getMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
            inline MountTarget& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


            // networkType Field Functions 
            bool hasNetworkType() const { return this->networkType_ != nullptr;};
            void deleteNetworkType() { this->networkType_ = nullptr;};
            inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
            inline MountTarget& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline MountTarget& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // tags Field Functions 
            bool hasTags() const { return this->tags_ != nullptr;};
            void deleteTags() { this->tags_ = nullptr;};
            inline const MountTarget::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, MountTarget::Tags) };
            inline MountTarget::Tags getTags() { DARABONBA_PTR_GET(tags_, MountTarget::Tags) };
            inline MountTarget& setTags(const MountTarget::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
            inline MountTarget& setTags(MountTarget::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


            // vpcId Field Functions 
            bool hasVpcId() const { return this->vpcId_ != nullptr;};
            void deleteVpcId() { this->vpcId_ = nullptr;};
            inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
            inline MountTarget& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


            // vswId Field Functions 
            bool hasVswId() const { return this->vswId_ != nullptr;};
            void deleteVswId() { this->vswId_ = nullptr;};
            inline string getVswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
            inline MountTarget& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


          protected:
            // The name of the permission group that is attached to the mount target.
            shared_ptr<string> accessGroupName_ {};
            // The information about client management nodes.
            // 
            // This parameter is available only for CPFS file systems.
            shared_ptr<MountTarget::ClientMasterNodes> clientMasterNodes_ {};
            // The dual-stack (IPv4 and IPv6) domain name of the mount target.
            // > Only Extreme NAS file systems that reside in the Chinese mainland support IPv6.
            shared_ptr<string> dualStackMountTargetDomain_ {};
            // The domain name of the mount target.
            shared_ptr<string> mountTargetDomain_ {};
            // The network type. Valid value: vpc.
            shared_ptr<string> networkType_ {};
            // The status of the mount target.
            // 
            // Valid values:
            // 
            // *   Active
            // *   Inactive
            // *   Pending
            // *   Deleting
            // *   Hibernating
            // *   Hibernated
            shared_ptr<string> status_ {};
            // The tags that are attached to the mount target.
            shared_ptr<MountTarget::Tags> tags_ {};
            // The ID of the VPC.
            shared_ptr<string> vpcId_ {};
            // The ID of the vSwitch.
            shared_ptr<string> vswId_ {};
          };

          virtual bool empty() const override { return this->mountTarget_ == nullptr; };
          // mountTarget Field Functions 
          bool hasMountTarget() const { return this->mountTarget_ != nullptr;};
          void deleteMountTarget() { this->mountTarget_ = nullptr;};
          inline const vector<MountTargets::MountTarget> & getMountTarget() const { DARABONBA_PTR_GET_CONST(mountTarget_, vector<MountTargets::MountTarget>) };
          inline vector<MountTargets::MountTarget> getMountTarget() { DARABONBA_PTR_GET(mountTarget_, vector<MountTargets::MountTarget>) };
          inline MountTargets& setMountTarget(const vector<MountTargets::MountTarget> & mountTarget) { DARABONBA_PTR_SET_VALUE(mountTarget_, mountTarget) };
          inline MountTargets& setMountTarget(vector<MountTargets::MountTarget> && mountTarget) { DARABONBA_PTR_SET_RVALUE(mountTarget_, mountTarget) };


        protected:
          shared_ptr<vector<MountTargets::MountTarget>> mountTarget_ {};
        };

        class Ldap : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ldap& obj) { 
            DARABONBA_PTR_TO_JSON(BindDN, bindDN_);
            DARABONBA_PTR_TO_JSON(SearchBase, searchBase_);
            DARABONBA_PTR_TO_JSON(URI, URI_);
          };
          friend void from_json(const Darabonba::Json& j, Ldap& obj) { 
            DARABONBA_PTR_FROM_JSON(BindDN, bindDN_);
            DARABONBA_PTR_FROM_JSON(SearchBase, searchBase_);
            DARABONBA_PTR_FROM_JSON(URI, URI_);
          };
          Ldap() = default ;
          Ldap(const Ldap &) = default ;
          Ldap(Ldap &&) = default ;
          Ldap(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ldap() = default ;
          Ldap& operator=(const Ldap &) = default ;
          Ldap& operator=(Ldap &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bindDN_ == nullptr
        && this->searchBase_ == nullptr && this->URI_ == nullptr; };
          // bindDN Field Functions 
          bool hasBindDN() const { return this->bindDN_ != nullptr;};
          void deleteBindDN() { this->bindDN_ = nullptr;};
          inline string getBindDN() const { DARABONBA_PTR_GET_DEFAULT(bindDN_, "") };
          inline Ldap& setBindDN(string bindDN) { DARABONBA_PTR_SET_VALUE(bindDN_, bindDN) };


          // searchBase Field Functions 
          bool hasSearchBase() const { return this->searchBase_ != nullptr;};
          void deleteSearchBase() { this->searchBase_ = nullptr;};
          inline string getSearchBase() const { DARABONBA_PTR_GET_DEFAULT(searchBase_, "") };
          inline Ldap& setSearchBase(string searchBase) { DARABONBA_PTR_SET_VALUE(searchBase_, searchBase) };


          // URI Field Functions 
          bool hasURI() const { return this->URI_ != nullptr;};
          void deleteURI() { this->URI_ = nullptr;};
          inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
          inline Ldap& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


        protected:
          // An LDAP entry.
          shared_ptr<string> bindDN_ {};
          // An LDAP search base.
          shared_ptr<string> searchBase_ {};
          // An LDAP URI.
          shared_ptr<string> URI_ {};
        };

        virtual bool empty() const override { return this->accessPointCount_ == nullptr
        && this->autoSnapshotPolicyId_ == nullptr && this->bandwidth_ == nullptr && this->capacity_ == nullptr && this->chargeType_ == nullptr && this->createTime_ == nullptr
        && this->description_ == nullptr && this->encryptType_ == nullptr && this->expiredTime_ == nullptr && this->fileSystemId_ == nullptr && this->fileSystemType_ == nullptr
        && this->KMSKeyId_ == nullptr && this->ldap_ == nullptr && this->meteredArchiveSize_ == nullptr && this->meteredIASize_ == nullptr && this->meteredSize_ == nullptr
        && this->mountTargets_ == nullptr && this->options_ == nullptr && this->packages_ == nullptr && this->protocolType_ == nullptr && this->quorumVswId_ == nullptr
        && this->redundancyType_ == nullptr && this->redundancyVSwitchIds_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr
        && this->storageType_ == nullptr && this->supportedFeatures_ == nullptr && this->tags_ == nullptr && this->version_ == nullptr && this->vpcId_ == nullptr
        && this->vscTarget_ == nullptr && this->vswIds_ == nullptr && this->zoneId_ == nullptr; };
        // accessPointCount Field Functions 
        bool hasAccessPointCount() const { return this->accessPointCount_ != nullptr;};
        void deleteAccessPointCount() { this->accessPointCount_ = nullptr;};
        inline string getAccessPointCount() const { DARABONBA_PTR_GET_DEFAULT(accessPointCount_, "") };
        inline FileSystem& setAccessPointCount(string accessPointCount) { DARABONBA_PTR_SET_VALUE(accessPointCount_, accessPointCount) };


        // autoSnapshotPolicyId Field Functions 
        bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
        void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
        inline string getAutoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
        inline FileSystem& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
        inline FileSystem& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // capacity Field Functions 
        bool hasCapacity() const { return this->capacity_ != nullptr;};
        void deleteCapacity() { this->capacity_ = nullptr;};
        inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
        inline FileSystem& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline FileSystem& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline FileSystem& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline FileSystem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // encryptType Field Functions 
        bool hasEncryptType() const { return this->encryptType_ != nullptr;};
        void deleteEncryptType() { this->encryptType_ = nullptr;};
        inline int32_t getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, 0) };
        inline FileSystem& setEncryptType(int32_t encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline FileSystem& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // fileSystemId Field Functions 
        bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
        void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
        inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
        inline FileSystem& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


        // fileSystemType Field Functions 
        bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
        void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
        inline string getFileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
        inline FileSystem& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


        // KMSKeyId Field Functions 
        bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
        void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
        inline string getKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
        inline FileSystem& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


        // ldap Field Functions 
        bool hasLdap() const { return this->ldap_ != nullptr;};
        void deleteLdap() { this->ldap_ = nullptr;};
        inline const FileSystem::Ldap & getLdap() const { DARABONBA_PTR_GET_CONST(ldap_, FileSystem::Ldap) };
        inline FileSystem::Ldap getLdap() { DARABONBA_PTR_GET(ldap_, FileSystem::Ldap) };
        inline FileSystem& setLdap(const FileSystem::Ldap & ldap) { DARABONBA_PTR_SET_VALUE(ldap_, ldap) };
        inline FileSystem& setLdap(FileSystem::Ldap && ldap) { DARABONBA_PTR_SET_RVALUE(ldap_, ldap) };


        // meteredArchiveSize Field Functions 
        bool hasMeteredArchiveSize() const { return this->meteredArchiveSize_ != nullptr;};
        void deleteMeteredArchiveSize() { this->meteredArchiveSize_ = nullptr;};
        inline int64_t getMeteredArchiveSize() const { DARABONBA_PTR_GET_DEFAULT(meteredArchiveSize_, 0L) };
        inline FileSystem& setMeteredArchiveSize(int64_t meteredArchiveSize) { DARABONBA_PTR_SET_VALUE(meteredArchiveSize_, meteredArchiveSize) };


        // meteredIASize Field Functions 
        bool hasMeteredIASize() const { return this->meteredIASize_ != nullptr;};
        void deleteMeteredIASize() { this->meteredIASize_ = nullptr;};
        inline int64_t getMeteredIASize() const { DARABONBA_PTR_GET_DEFAULT(meteredIASize_, 0L) };
        inline FileSystem& setMeteredIASize(int64_t meteredIASize) { DARABONBA_PTR_SET_VALUE(meteredIASize_, meteredIASize) };


        // meteredSize Field Functions 
        bool hasMeteredSize() const { return this->meteredSize_ != nullptr;};
        void deleteMeteredSize() { this->meteredSize_ = nullptr;};
        inline int64_t getMeteredSize() const { DARABONBA_PTR_GET_DEFAULT(meteredSize_, 0L) };
        inline FileSystem& setMeteredSize(int64_t meteredSize) { DARABONBA_PTR_SET_VALUE(meteredSize_, meteredSize) };


        // mountTargets Field Functions 
        bool hasMountTargets() const { return this->mountTargets_ != nullptr;};
        void deleteMountTargets() { this->mountTargets_ = nullptr;};
        inline const FileSystem::MountTargets & getMountTargets() const { DARABONBA_PTR_GET_CONST(mountTargets_, FileSystem::MountTargets) };
        inline FileSystem::MountTargets getMountTargets() { DARABONBA_PTR_GET(mountTargets_, FileSystem::MountTargets) };
        inline FileSystem& setMountTargets(const FileSystem::MountTargets & mountTargets) { DARABONBA_PTR_SET_VALUE(mountTargets_, mountTargets) };
        inline FileSystem& setMountTargets(FileSystem::MountTargets && mountTargets) { DARABONBA_PTR_SET_RVALUE(mountTargets_, mountTargets) };


        // options Field Functions 
        bool hasOptions() const { return this->options_ != nullptr;};
        void deleteOptions() { this->options_ = nullptr;};
        inline const FileSystem::Options & getOptions() const { DARABONBA_PTR_GET_CONST(options_, FileSystem::Options) };
        inline FileSystem::Options getOptions() { DARABONBA_PTR_GET(options_, FileSystem::Options) };
        inline FileSystem& setOptions(const FileSystem::Options & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
        inline FileSystem& setOptions(FileSystem::Options && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


        // packages Field Functions 
        bool hasPackages() const { return this->packages_ != nullptr;};
        void deletePackages() { this->packages_ = nullptr;};
        inline const FileSystem::Packages & getPackages() const { DARABONBA_PTR_GET_CONST(packages_, FileSystem::Packages) };
        inline FileSystem::Packages getPackages() { DARABONBA_PTR_GET(packages_, FileSystem::Packages) };
        inline FileSystem& setPackages(const FileSystem::Packages & packages) { DARABONBA_PTR_SET_VALUE(packages_, packages) };
        inline FileSystem& setPackages(FileSystem::Packages && packages) { DARABONBA_PTR_SET_RVALUE(packages_, packages) };


        // protocolType Field Functions 
        bool hasProtocolType() const { return this->protocolType_ != nullptr;};
        void deleteProtocolType() { this->protocolType_ = nullptr;};
        inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
        inline FileSystem& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


        // quorumVswId Field Functions 
        bool hasQuorumVswId() const { return this->quorumVswId_ != nullptr;};
        void deleteQuorumVswId() { this->quorumVswId_ = nullptr;};
        inline string getQuorumVswId() const { DARABONBA_PTR_GET_DEFAULT(quorumVswId_, "") };
        inline FileSystem& setQuorumVswId(string quorumVswId) { DARABONBA_PTR_SET_VALUE(quorumVswId_, quorumVswId) };


        // redundancyType Field Functions 
        bool hasRedundancyType() const { return this->redundancyType_ != nullptr;};
        void deleteRedundancyType() { this->redundancyType_ = nullptr;};
        inline string getRedundancyType() const { DARABONBA_PTR_GET_DEFAULT(redundancyType_, "") };
        inline FileSystem& setRedundancyType(string redundancyType) { DARABONBA_PTR_SET_VALUE(redundancyType_, redundancyType) };


        // redundancyVSwitchIds Field Functions 
        bool hasRedundancyVSwitchIds() const { return this->redundancyVSwitchIds_ != nullptr;};
        void deleteRedundancyVSwitchIds() { this->redundancyVSwitchIds_ = nullptr;};
        inline const FileSystem::RedundancyVSwitchIds & getRedundancyVSwitchIds() const { DARABONBA_PTR_GET_CONST(redundancyVSwitchIds_, FileSystem::RedundancyVSwitchIds) };
        inline FileSystem::RedundancyVSwitchIds getRedundancyVSwitchIds() { DARABONBA_PTR_GET(redundancyVSwitchIds_, FileSystem::RedundancyVSwitchIds) };
        inline FileSystem& setRedundancyVSwitchIds(const FileSystem::RedundancyVSwitchIds & redundancyVSwitchIds) { DARABONBA_PTR_SET_VALUE(redundancyVSwitchIds_, redundancyVSwitchIds) };
        inline FileSystem& setRedundancyVSwitchIds(FileSystem::RedundancyVSwitchIds && redundancyVSwitchIds) { DARABONBA_PTR_SET_RVALUE(redundancyVSwitchIds_, redundancyVSwitchIds) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline FileSystem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline FileSystem& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline FileSystem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline FileSystem& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // supportedFeatures Field Functions 
        bool hasSupportedFeatures() const { return this->supportedFeatures_ != nullptr;};
        void deleteSupportedFeatures() { this->supportedFeatures_ = nullptr;};
        inline const FileSystem::SupportedFeatures & getSupportedFeatures() const { DARABONBA_PTR_GET_CONST(supportedFeatures_, FileSystem::SupportedFeatures) };
        inline FileSystem::SupportedFeatures getSupportedFeatures() { DARABONBA_PTR_GET(supportedFeatures_, FileSystem::SupportedFeatures) };
        inline FileSystem& setSupportedFeatures(const FileSystem::SupportedFeatures & supportedFeatures) { DARABONBA_PTR_SET_VALUE(supportedFeatures_, supportedFeatures) };
        inline FileSystem& setSupportedFeatures(FileSystem::SupportedFeatures && supportedFeatures) { DARABONBA_PTR_SET_RVALUE(supportedFeatures_, supportedFeatures) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const FileSystem::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, FileSystem::Tags) };
        inline FileSystem::Tags getTags() { DARABONBA_PTR_GET(tags_, FileSystem::Tags) };
        inline FileSystem& setTags(const FileSystem::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline FileSystem& setTags(FileSystem::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline FileSystem& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline FileSystem& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vscTarget Field Functions 
        bool hasVscTarget() const { return this->vscTarget_ != nullptr;};
        void deleteVscTarget() { this->vscTarget_ = nullptr;};
        inline string getVscTarget() const { DARABONBA_PTR_GET_DEFAULT(vscTarget_, "") };
        inline FileSystem& setVscTarget(string vscTarget) { DARABONBA_PTR_SET_VALUE(vscTarget_, vscTarget) };


        // vswIds Field Functions 
        bool hasVswIds() const { return this->vswIds_ != nullptr;};
        void deleteVswIds() { this->vswIds_ = nullptr;};
        inline const FileSystem::VswIds & getVswIds() const { DARABONBA_PTR_GET_CONST(vswIds_, FileSystem::VswIds) };
        inline FileSystem::VswIds getVswIds() { DARABONBA_PTR_GET(vswIds_, FileSystem::VswIds) };
        inline FileSystem& setVswIds(const FileSystem::VswIds & vswIds) { DARABONBA_PTR_SET_VALUE(vswIds_, vswIds) };
        inline FileSystem& setVswIds(FileSystem::VswIds && vswIds) { DARABONBA_PTR_SET_RVALUE(vswIds_, vswIds) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline FileSystem& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // Number of access points.
        shared_ptr<string> accessPointCount_ {};
        // The ID of the automatic snapshot policy.
        shared_ptr<string> autoSnapshotPolicyId_ {};
        // The bandwidth of the file system.
        // 
        // Unit: MB/s. This parameter is unavailable for General-purpose NAS file systems.
        shared_ptr<int64_t> bandwidth_ {};
        // The capacity of the file system.
        // 
        // Unit: GiB.
        shared_ptr<int64_t> capacity_ {};
        // The billing method.
        // 
        // Valid values:
        // 
        // *   Subscription
        // *   PayAsYouGo
        // *   Package: storage plan
        shared_ptr<string> chargeType_ {};
        // The time when the file system was created.
        shared_ptr<string> createTime_ {};
        // The description of the file system.
        shared_ptr<string> description_ {};
        // Indicates whether the data in the file system is encrypted.
        // 
        // Valid values:
        // 
        // *   0: The data in the file system is not encrypted.
        // *   1: A NAS-managed key is used to encrypt the data in the file system.
        // *   2: A KMS-managed key is used to encrypt the data in the file system.
        shared_ptr<int32_t> encryptType_ {};
        // The time when the file system expires.
        shared_ptr<string> expiredTime_ {};
        // The ID of the file system.
        shared_ptr<string> fileSystemId_ {};
        // The file system type.
        // 
        // The following information is displayed:
        // 
        // *   standard: General-purpose NAS file system.
        // *   extreme: Extreme NAS file system.
        // *   cpfs: CPFS file system.
        shared_ptr<string> fileSystemType_ {};
        // The ID of the key that is managed by Key Management Service (KMS).
        shared_ptr<string> KMSKeyId_ {};
        // The Lightweight Directory Access Protocol (LDAP) configurations.
        // 
        // This parameter is available only for CPFS file systems.
        shared_ptr<FileSystem::Ldap> ldap_ {};
        // Archive storage usage.
        // 
        // Unit: Byte.
        shared_ptr<int64_t> meteredArchiveSize_ {};
        // The storage usage of the Infrequent Access (IA) storage medium.
        // 
        // Unit: bytes.
        shared_ptr<int64_t> meteredIASize_ {};
        // The storage usage of the file system.
        // 
        // The value of this parameter is the maximum storage usage of the file system over the last hour. Unit: bytes.
        shared_ptr<int64_t> meteredSize_ {};
        // The queried mount targets.
        shared_ptr<FileSystem::MountTargets> mountTargets_ {};
        // The options.
        shared_ptr<FileSystem::Options> options_ {};
        // The information about storage plans.
        shared_ptr<FileSystem::Packages> packages_ {};
        // The protocol type of the file system.
        // 
        // The following information is displayed:
        // 
        // *   NFS: Network File System.
        // *   SMB: Server Message Block.
        // *   cpfs: The protocol type supported by the CPFS file system.
        shared_ptr<string> protocolType_ {};
        // The vSwitch ID.
        shared_ptr<string> quorumVswId_ {};
        shared_ptr<string> redundancyType_ {};
        shared_ptr<FileSystem::RedundancyVSwitchIds> redundancyVSwitchIds_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
        // The status of the file system. Valid values:
        // - Pending: The file system is being created or modified.
        // - Running: The file system is available. Before you create a mount target for the file system, make sure that the file system is in the Running state.
        // - Stopped: The file system is unavailable.
        // - Extending: The file system is being scaled up.
        // - Stopping: The file system is being stopped.
        // - Deleting: The file system is being deleted.
        shared_ptr<string> status_ {};
        // The type of the storage.
        // 
        // The following information is displayed:
        // 
        // *   Valid values for General-purpose NAS file systems: Capacity, Performance, and Premium
        // *   Valid values for Extreme NAS file systems: standard and advance
        // *   Valid values for Cloud Parallel File Storage (CPFS) file systems: advance_100 (100 MB/s/TiB baseline) and advance_200 (200 MB/s/TiB baseline)
        shared_ptr<string> storageType_ {};
        // The features that are supported by the file system.
        shared_ptr<FileSystem::SupportedFeatures> supportedFeatures_ {};
        // The tags that are attached to the file system.
        shared_ptr<FileSystem::Tags> tags_ {};
        // The version number of the file system.
        // 
        // This parameter is available only for Extreme NAS file systems and CPFS file systems.
        shared_ptr<string> version_ {};
        // The ID of the virtual private cloud (VPC).
        shared_ptr<string> vpcId_ {};
        // >  This parameter is not publicly available.
        shared_ptr<string> vscTarget_ {};
        // The information about vSwitch.
        shared_ptr<FileSystem::VswIds> vswIds_ {};
        // The ID of the zone where the file system resides.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->fileSystem_ == nullptr; };
      // fileSystem Field Functions 
      bool hasFileSystem() const { return this->fileSystem_ != nullptr;};
      void deleteFileSystem() { this->fileSystem_ = nullptr;};
      inline const vector<FileSystems::FileSystem> & getFileSystem() const { DARABONBA_PTR_GET_CONST(fileSystem_, vector<FileSystems::FileSystem>) };
      inline vector<FileSystems::FileSystem> getFileSystem() { DARABONBA_PTR_GET(fileSystem_, vector<FileSystems::FileSystem>) };
      inline FileSystems& setFileSystem(const vector<FileSystems::FileSystem> & fileSystem) { DARABONBA_PTR_SET_VALUE(fileSystem_, fileSystem) };
      inline FileSystems& setFileSystem(vector<FileSystems::FileSystem> && fileSystem) { DARABONBA_PTR_SET_RVALUE(fileSystem_, fileSystem) };


    protected:
      shared_ptr<vector<FileSystems::FileSystem>> fileSystem_ {};
    };

    virtual bool empty() const override { return this->fileSystems_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // fileSystems Field Functions 
    bool hasFileSystems() const { return this->fileSystems_ != nullptr;};
    void deleteFileSystems() { this->fileSystems_ = nullptr;};
    inline const DescribeFileSystemsResponseBody::FileSystems & getFileSystems() const { DARABONBA_PTR_GET_CONST(fileSystems_, DescribeFileSystemsResponseBody::FileSystems) };
    inline DescribeFileSystemsResponseBody::FileSystems getFileSystems() { DARABONBA_PTR_GET(fileSystems_, DescribeFileSystemsResponseBody::FileSystems) };
    inline DescribeFileSystemsResponseBody& setFileSystems(const DescribeFileSystemsResponseBody::FileSystems & fileSystems) { DARABONBA_PTR_SET_VALUE(fileSystems_, fileSystems) };
    inline DescribeFileSystemsResponseBody& setFileSystems(DescribeFileSystemsResponseBody::FileSystems && fileSystems) { DARABONBA_PTR_SET_RVALUE(fileSystems_, fileSystems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeFileSystemsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeFileSystemsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFileSystemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeFileSystemsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The file system list.
    shared_ptr<DescribeFileSystemsResponseBody::FileSystems> fileSystems_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of file systems.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
