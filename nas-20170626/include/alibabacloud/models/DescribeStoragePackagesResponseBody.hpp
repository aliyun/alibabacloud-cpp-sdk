// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGEPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGEPACKAGESRESPONSEBODY_HPP_
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
  class DescribeStoragePackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStoragePackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Packages, packages_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStoragePackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Packages, packages_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeStoragePackagesResponseBody() = default ;
    DescribeStoragePackagesResponseBody(const DescribeStoragePackagesResponseBody &) = default ;
    DescribeStoragePackagesResponseBody(DescribeStoragePackagesResponseBody &&) = default ;
    DescribeStoragePackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStoragePackagesResponseBody() = default ;
    DescribeStoragePackagesResponseBody& operator=(const DescribeStoragePackagesResponseBody &) = default ;
    DescribeStoragePackagesResponseBody& operator=(DescribeStoragePackagesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_TO_JSON(PackageId, packageId_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        };
        friend void from_json(const Darabonba::Json& j, Package& obj) { 
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
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
        && this->fileSystemId_ == nullptr && this->packageId_ == nullptr && this->size_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->storageType_ == nullptr; };
        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline Package& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // fileSystemId Field Functions 
        bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
        void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
        inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
        inline Package& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


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


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Package& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline Package& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      protected:
        // The end time of the validity period for the storage plan.
        shared_ptr<string> expiredTime_ {};
        // The ID of the file system that is bound to the storage plan.
        shared_ptr<string> fileSystemId_ {};
        // The ID of the storage plan.
        shared_ptr<string> packageId_ {};
        // The capacity of the storage plan.
        // 
        // Unit: bytes.
        shared_ptr<int64_t> size_ {};
        // The start time of the validity period for the storage plan.
        shared_ptr<string> startTime_ {};
        // The status of the storage plan.
        // 
        // Valid values:
        // 
        // *   free: The storage plan is not bound to a file system. You can bind the storage plan to a file system of the same storage type.
        // *   bound: The storage plan is bound to a file system.
        shared_ptr<string> status_ {};
        // The type of the storage plan.
        // 
        // Valid values:
        // 
        // *   Performance
        // *   Capacity
        shared_ptr<string> storageType_ {};
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

    virtual bool empty() const override { return this->packages_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // packages Field Functions 
    bool hasPackages() const { return this->packages_ != nullptr;};
    void deletePackages() { this->packages_ = nullptr;};
    inline const DescribeStoragePackagesResponseBody::Packages & getPackages() const { DARABONBA_PTR_GET_CONST(packages_, DescribeStoragePackagesResponseBody::Packages) };
    inline DescribeStoragePackagesResponseBody::Packages getPackages() { DARABONBA_PTR_GET(packages_, DescribeStoragePackagesResponseBody::Packages) };
    inline DescribeStoragePackagesResponseBody& setPackages(const DescribeStoragePackagesResponseBody::Packages & packages) { DARABONBA_PTR_SET_VALUE(packages_, packages) };
    inline DescribeStoragePackagesResponseBody& setPackages(DescribeStoragePackagesResponseBody::Packages && packages) { DARABONBA_PTR_SET_RVALUE(packages_, packages) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeStoragePackagesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeStoragePackagesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStoragePackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeStoragePackagesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of storage plans.
    shared_ptr<DescribeStoragePackagesResponseBody::Packages> packages_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of storage plans returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of storage plans.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
