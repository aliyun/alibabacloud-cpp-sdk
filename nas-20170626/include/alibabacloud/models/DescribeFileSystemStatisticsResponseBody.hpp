// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSTATISTICSRESPONSEBODY_HPP_
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
  class DescribeFileSystemStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemStatistics, fileSystemStatistics_);
      DARABONBA_PTR_TO_JSON(FileSystems, fileSystems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemStatistics, fileSystemStatistics_);
      DARABONBA_PTR_FROM_JSON(FileSystems, fileSystems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeFileSystemStatisticsResponseBody() = default ;
    DescribeFileSystemStatisticsResponseBody(const DescribeFileSystemStatisticsResponseBody &) = default ;
    DescribeFileSystemStatisticsResponseBody(DescribeFileSystemStatisticsResponseBody &&) = default ;
    DescribeFileSystemStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemStatisticsResponseBody() = default ;
    DescribeFileSystemStatisticsResponseBody& operator=(const DescribeFileSystemStatisticsResponseBody &) = default ;
    DescribeFileSystemStatisticsResponseBody& operator=(DescribeFileSystemStatisticsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Capacity, capacity_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
          DARABONBA_PTR_TO_JSON(MeteredIASize, meteredIASize_);
          DARABONBA_PTR_TO_JSON(MeteredSize, meteredSize_);
          DARABONBA_PTR_TO_JSON(Packages, packages_);
          DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, FileSystem& obj) { 
          DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
          DARABONBA_PTR_FROM_JSON(MeteredIASize, meteredIASize_);
          DARABONBA_PTR_FROM_JSON(MeteredSize, meteredSize_);
          DARABONBA_PTR_FROM_JSON(Packages, packages_);
          DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
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
              DARABONBA_PTR_TO_JSON(Size, size_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            };
            friend void from_json(const Darabonba::Json& j, Package& obj) { 
              DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
              DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
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
        && this->packageId_ == nullptr && this->size_ == nullptr && this->startTime_ == nullptr; };
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
            // The capacity of the storage plan.
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

        virtual bool empty() const override { return this->capacity_ == nullptr
        && this->chargeType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->expiredTime_ == nullptr && this->fileSystemId_ == nullptr
        && this->fileSystemType_ == nullptr && this->meteredIASize_ == nullptr && this->meteredSize_ == nullptr && this->packages_ == nullptr && this->protocolType_ == nullptr
        && this->regionId_ == nullptr && this->status_ == nullptr && this->storageType_ == nullptr && this->zoneId_ == nullptr; };
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


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline FileSystem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline FileSystem& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The capacity of the file system.
        // 
        // Unit: GiB.
        shared_ptr<int64_t> capacity_ {};
        // The billing method.
        // 
        // Valid values:
        // 
        // *   Subscription: The subscription billing method is used.
        // *   PayAsYouGo: The pay-as-you-go billing method is used.
        // *   Package: A storage plan is attached to the file system.
        shared_ptr<string> chargeType_ {};
        // The time when the NAS file system was created.
        shared_ptr<string> createTime_ {};
        // The description of the file system.
        shared_ptr<string> description_ {};
        // The time when the file system expires.
        shared_ptr<string> expiredTime_ {};
        // The ID of the file system.
        shared_ptr<string> fileSystemId_ {};
        // The type of the file system.
        // 
        // Valid values:
        // 
        // *   standard: General-purpose NAS file system
        // *   extreme: Extreme NAS file system
        // *   cpfs: CPFS file system
        shared_ptr<string> fileSystemType_ {};
        // The storage usage of the Infrequent Access (IA) storage medium.
        // 
        // Unit: bytes.
        shared_ptr<int64_t> meteredIASize_ {};
        // The storage usage of the file system.
        // 
        // The value of this parameter is the maximum storage usage of the file system over the last hour. Unit: bytes.
        shared_ptr<int64_t> meteredSize_ {};
        // The information about storage plans.
        shared_ptr<FileSystem::Packages> packages_ {};
        // The protocol type of the file system.
        // 
        // Valid values:
        // 
        // *   NFS: Network File System (NFS)
        // *   SMB: Server Message Block (SMB)
        // *   cpfs: the protocol type supported by the CPFS file system
        shared_ptr<string> protocolType_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The status of the file system.
        // 
        // This parameter is returned for Extreme NAS file systems and Cloud Parallel File Storage (CPFS) file systems. Valid values:
        // 
        // *   Pending: The file system is being created or modified.
        // *   Running: The file system is available. Before you create a mount target for the file system, make sure that the file system is in the Running state.
        // *   Stopped: The file system is unavailable.
        // *   Extending: The file system is being scaled out.
        // *   Stopping: The file system is being disabled.
        // *   Deleting: The file system is being deleted.
        shared_ptr<string> status_ {};
        // The storage type.
        // 
        // Valid values:
        // 
        // *   Valid values for General-purpose NAS file systems: Capacity and Performance.
        // *   Valid values for Extreme NAS file systems: standard and advance.
        // *   Valid values for CPFS file systems: advance_100 (100 MB/s/TiB baseline) and advance_200 (200 MB/s/TiB baseline).
        shared_ptr<string> storageType_ {};
        // The zone ID.
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

    class FileSystemStatistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileSystemStatistics& obj) { 
        DARABONBA_PTR_TO_JSON(FileSystemStatistic, fileSystemStatistic_);
      };
      friend void from_json(const Darabonba::Json& j, FileSystemStatistics& obj) { 
        DARABONBA_PTR_FROM_JSON(FileSystemStatistic, fileSystemStatistic_);
      };
      FileSystemStatistics() = default ;
      FileSystemStatistics(const FileSystemStatistics &) = default ;
      FileSystemStatistics(FileSystemStatistics &&) = default ;
      FileSystemStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileSystemStatistics() = default ;
      FileSystemStatistics& operator=(const FileSystemStatistics &) = default ;
      FileSystemStatistics& operator=(FileSystemStatistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FileSystemStatistic : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileSystemStatistic& obj) { 
          DARABONBA_PTR_TO_JSON(ExpiredCount, expiredCount_);
          DARABONBA_PTR_TO_JSON(ExpiringCount, expiringCount_);
          DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
          DARABONBA_PTR_TO_JSON(MeteredSize, meteredSize_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, FileSystemStatistic& obj) { 
          DARABONBA_PTR_FROM_JSON(ExpiredCount, expiredCount_);
          DARABONBA_PTR_FROM_JSON(ExpiringCount, expiringCount_);
          DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
          DARABONBA_PTR_FROM_JSON(MeteredSize, meteredSize_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        FileSystemStatistic() = default ;
        FileSystemStatistic(const FileSystemStatistic &) = default ;
        FileSystemStatistic(FileSystemStatistic &&) = default ;
        FileSystemStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileSystemStatistic() = default ;
        FileSystemStatistic& operator=(const FileSystemStatistic &) = default ;
        FileSystemStatistic& operator=(FileSystemStatistic &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->expiredCount_ == nullptr
        && this->expiringCount_ == nullptr && this->fileSystemType_ == nullptr && this->meteredSize_ == nullptr && this->totalCount_ == nullptr; };
        // expiredCount Field Functions 
        bool hasExpiredCount() const { return this->expiredCount_ != nullptr;};
        void deleteExpiredCount() { this->expiredCount_ = nullptr;};
        inline int32_t getExpiredCount() const { DARABONBA_PTR_GET_DEFAULT(expiredCount_, 0) };
        inline FileSystemStatistic& setExpiredCount(int32_t expiredCount) { DARABONBA_PTR_SET_VALUE(expiredCount_, expiredCount) };


        // expiringCount Field Functions 
        bool hasExpiringCount() const { return this->expiringCount_ != nullptr;};
        void deleteExpiringCount() { this->expiringCount_ = nullptr;};
        inline int32_t getExpiringCount() const { DARABONBA_PTR_GET_DEFAULT(expiringCount_, 0) };
        inline FileSystemStatistic& setExpiringCount(int32_t expiringCount) { DARABONBA_PTR_SET_VALUE(expiringCount_, expiringCount) };


        // fileSystemType Field Functions 
        bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
        void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
        inline string getFileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
        inline FileSystemStatistic& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


        // meteredSize Field Functions 
        bool hasMeteredSize() const { return this->meteredSize_ != nullptr;};
        void deleteMeteredSize() { this->meteredSize_ = nullptr;};
        inline int64_t getMeteredSize() const { DARABONBA_PTR_GET_DEFAULT(meteredSize_, 0L) };
        inline FileSystemStatistic& setMeteredSize(int64_t meteredSize) { DARABONBA_PTR_SET_VALUE(meteredSize_, meteredSize) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline FileSystemStatistic& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The number of expired file systems.
        shared_ptr<int32_t> expiredCount_ {};
        // The number of expiring file systems.
        // 
        // File systems whose expiration time is less than or equal to seven days away from the current time are counted.
        shared_ptr<int32_t> expiringCount_ {};
        // The type of the file system.
        shared_ptr<string> fileSystemType_ {};
        // The storage usage of the file system.
        // 
        // The value of this parameter is the maximum storage usage of the file system over the last hour.
        // 
        // Unit: bytes.
        shared_ptr<int64_t> meteredSize_ {};
        // The number of file systems of the current type.
        shared_ptr<int32_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->fileSystemStatistic_ == nullptr; };
      // fileSystemStatistic Field Functions 
      bool hasFileSystemStatistic() const { return this->fileSystemStatistic_ != nullptr;};
      void deleteFileSystemStatistic() { this->fileSystemStatistic_ = nullptr;};
      inline const vector<FileSystemStatistics::FileSystemStatistic> & getFileSystemStatistic() const { DARABONBA_PTR_GET_CONST(fileSystemStatistic_, vector<FileSystemStatistics::FileSystemStatistic>) };
      inline vector<FileSystemStatistics::FileSystemStatistic> getFileSystemStatistic() { DARABONBA_PTR_GET(fileSystemStatistic_, vector<FileSystemStatistics::FileSystemStatistic>) };
      inline FileSystemStatistics& setFileSystemStatistic(const vector<FileSystemStatistics::FileSystemStatistic> & fileSystemStatistic) { DARABONBA_PTR_SET_VALUE(fileSystemStatistic_, fileSystemStatistic) };
      inline FileSystemStatistics& setFileSystemStatistic(vector<FileSystemStatistics::FileSystemStatistic> && fileSystemStatistic) { DARABONBA_PTR_SET_RVALUE(fileSystemStatistic_, fileSystemStatistic) };


    protected:
      shared_ptr<vector<FileSystemStatistics::FileSystemStatistic>> fileSystemStatistic_ {};
    };

    virtual bool empty() const override { return this->fileSystemStatistics_ == nullptr
        && this->fileSystems_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // fileSystemStatistics Field Functions 
    bool hasFileSystemStatistics() const { return this->fileSystemStatistics_ != nullptr;};
    void deleteFileSystemStatistics() { this->fileSystemStatistics_ = nullptr;};
    inline const DescribeFileSystemStatisticsResponseBody::FileSystemStatistics & getFileSystemStatistics() const { DARABONBA_PTR_GET_CONST(fileSystemStatistics_, DescribeFileSystemStatisticsResponseBody::FileSystemStatistics) };
    inline DescribeFileSystemStatisticsResponseBody::FileSystemStatistics getFileSystemStatistics() { DARABONBA_PTR_GET(fileSystemStatistics_, DescribeFileSystemStatisticsResponseBody::FileSystemStatistics) };
    inline DescribeFileSystemStatisticsResponseBody& setFileSystemStatistics(const DescribeFileSystemStatisticsResponseBody::FileSystemStatistics & fileSystemStatistics) { DARABONBA_PTR_SET_VALUE(fileSystemStatistics_, fileSystemStatistics) };
    inline DescribeFileSystemStatisticsResponseBody& setFileSystemStatistics(DescribeFileSystemStatisticsResponseBody::FileSystemStatistics && fileSystemStatistics) { DARABONBA_PTR_SET_RVALUE(fileSystemStatistics_, fileSystemStatistics) };


    // fileSystems Field Functions 
    bool hasFileSystems() const { return this->fileSystems_ != nullptr;};
    void deleteFileSystems() { this->fileSystems_ = nullptr;};
    inline const DescribeFileSystemStatisticsResponseBody::FileSystems & getFileSystems() const { DARABONBA_PTR_GET_CONST(fileSystems_, DescribeFileSystemStatisticsResponseBody::FileSystems) };
    inline DescribeFileSystemStatisticsResponseBody::FileSystems getFileSystems() { DARABONBA_PTR_GET(fileSystems_, DescribeFileSystemStatisticsResponseBody::FileSystems) };
    inline DescribeFileSystemStatisticsResponseBody& setFileSystems(const DescribeFileSystemStatisticsResponseBody::FileSystems & fileSystems) { DARABONBA_PTR_SET_VALUE(fileSystems_, fileSystems) };
    inline DescribeFileSystemStatisticsResponseBody& setFileSystems(DescribeFileSystemStatisticsResponseBody::FileSystems && fileSystems) { DARABONBA_PTR_SET_RVALUE(fileSystems_, fileSystems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeFileSystemStatisticsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeFileSystemStatisticsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFileSystemStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeFileSystemStatisticsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The statistics of file systems.
    shared_ptr<DescribeFileSystemStatisticsResponseBody::FileSystemStatistics> fileSystemStatistics_ {};
    // The queried file systems.
    shared_ptr<DescribeFileSystemStatisticsResponseBody::FileSystems> fileSystems_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of file system entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
