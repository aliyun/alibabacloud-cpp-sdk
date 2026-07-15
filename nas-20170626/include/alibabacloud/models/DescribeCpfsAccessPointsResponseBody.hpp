// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECPFSACCESSPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECPFSACCESSPOINTSRESPONSEBODY_HPP_
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
  class DescribeCpfsAccessPointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCpfsAccessPointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPoints, accessPoints_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCpfsAccessPointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPoints, accessPoints_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCpfsAccessPointsResponseBody() = default ;
    DescribeCpfsAccessPointsResponseBody(const DescribeCpfsAccessPointsResponseBody &) = default ;
    DescribeCpfsAccessPointsResponseBody(DescribeCpfsAccessPointsResponseBody &&) = default ;
    DescribeCpfsAccessPointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCpfsAccessPointsResponseBody() = default ;
    DescribeCpfsAccessPointsResponseBody& operator=(const DescribeCpfsAccessPointsResponseBody &) = default ;
    DescribeCpfsAccessPointsResponseBody& operator=(DescribeCpfsAccessPointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessPoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessPoints& obj) { 
        DARABONBA_PTR_TO_JSON(ARN, ARN_);
        DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RootDirectory, rootDirectory_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, AccessPoints& obj) { 
        DARABONBA_PTR_FROM_JSON(ARN, ARN_);
        DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RootDirectory, rootDirectory_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      AccessPoints() = default ;
      AccessPoints(const AccessPoints &) = default ;
      AccessPoints(AccessPoints &&) = default ;
      AccessPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessPoints() = default ;
      AccessPoints& operator=(const AccessPoints &) = default ;
      AccessPoints& operator=(AccessPoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RootDirectory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RootDirectory& obj) { 
          DARABONBA_PTR_TO_JSON(RootPath, rootPath_);
          DARABONBA_PTR_TO_JSON(RootPathStatus, rootPathStatus_);
        };
        friend void from_json(const Darabonba::Json& j, RootDirectory& obj) { 
          DARABONBA_PTR_FROM_JSON(RootPath, rootPath_);
          DARABONBA_PTR_FROM_JSON(RootPathStatus, rootPathStatus_);
        };
        RootDirectory() = default ;
        RootDirectory(const RootDirectory &) = default ;
        RootDirectory(RootDirectory &&) = default ;
        RootDirectory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RootDirectory() = default ;
        RootDirectory& operator=(const RootDirectory &) = default ;
        RootDirectory& operator=(RootDirectory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->rootPath_ == nullptr
        && this->rootPathStatus_ == nullptr; };
        // rootPath Field Functions 
        bool hasRootPath() const { return this->rootPath_ != nullptr;};
        void deleteRootPath() { this->rootPath_ = nullptr;};
        inline string getRootPath() const { DARABONBA_PTR_GET_DEFAULT(rootPath_, "") };
        inline RootDirectory& setRootPath(string rootPath) { DARABONBA_PTR_SET_VALUE(rootPath_, rootPath) };


        // rootPathStatus Field Functions 
        bool hasRootPathStatus() const { return this->rootPathStatus_ != nullptr;};
        void deleteRootPathStatus() { this->rootPathStatus_ = nullptr;};
        inline string getRootPathStatus() const { DARABONBA_PTR_GET_DEFAULT(rootPathStatus_, "") };
        inline RootDirectory& setRootPathStatus(string rootPathStatus) { DARABONBA_PTR_SET_VALUE(rootPathStatus_, rootPathStatus) };


      protected:
        shared_ptr<string> rootPath_ {};
        shared_ptr<string> rootPathStatus_ {};
      };

      virtual bool empty() const override { return this->ARN_ == nullptr
        && this->accessPointId_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->fileSystemId_ == nullptr && this->modifyTime_ == nullptr
        && this->regionId_ == nullptr && this->rootDirectory_ == nullptr && this->status_ == nullptr; };
      // ARN Field Functions 
      bool hasARN() const { return this->ARN_ != nullptr;};
      void deleteARN() { this->ARN_ = nullptr;};
      inline string getARN() const { DARABONBA_PTR_GET_DEFAULT(ARN_, "") };
      inline AccessPoints& setARN(string ARN) { DARABONBA_PTR_SET_VALUE(ARN_, ARN) };


      // accessPointId Field Functions 
      bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
      void deleteAccessPointId() { this->accessPointId_ = nullptr;};
      inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
      inline AccessPoints& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AccessPoints& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AccessPoints& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline AccessPoints& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline AccessPoints& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AccessPoints& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // rootDirectory Field Functions 
      bool hasRootDirectory() const { return this->rootDirectory_ != nullptr;};
      void deleteRootDirectory() { this->rootDirectory_ = nullptr;};
      inline const AccessPoints::RootDirectory & getRootDirectory() const { DARABONBA_PTR_GET_CONST(rootDirectory_, AccessPoints::RootDirectory) };
      inline AccessPoints::RootDirectory getRootDirectory() { DARABONBA_PTR_GET(rootDirectory_, AccessPoints::RootDirectory) };
      inline AccessPoints& setRootDirectory(const AccessPoints::RootDirectory & rootDirectory) { DARABONBA_PTR_SET_VALUE(rootDirectory_, rootDirectory) };
      inline AccessPoints& setRootDirectory(AccessPoints::RootDirectory && rootDirectory) { DARABONBA_PTR_SET_RVALUE(rootDirectory_, rootDirectory) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AccessPoints& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> ARN_ {};
      shared_ptr<string> accessPointId_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> fileSystemId_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<AccessPoints::RootDirectory> rootDirectory_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->accessPoints_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // accessPoints Field Functions 
    bool hasAccessPoints() const { return this->accessPoints_ != nullptr;};
    void deleteAccessPoints() { this->accessPoints_ = nullptr;};
    inline const vector<DescribeCpfsAccessPointsResponseBody::AccessPoints> & getAccessPoints() const { DARABONBA_PTR_GET_CONST(accessPoints_, vector<DescribeCpfsAccessPointsResponseBody::AccessPoints>) };
    inline vector<DescribeCpfsAccessPointsResponseBody::AccessPoints> getAccessPoints() { DARABONBA_PTR_GET(accessPoints_, vector<DescribeCpfsAccessPointsResponseBody::AccessPoints>) };
    inline DescribeCpfsAccessPointsResponseBody& setAccessPoints(const vector<DescribeCpfsAccessPointsResponseBody::AccessPoints> & accessPoints) { DARABONBA_PTR_SET_VALUE(accessPoints_, accessPoints) };
    inline DescribeCpfsAccessPointsResponseBody& setAccessPoints(vector<DescribeCpfsAccessPointsResponseBody::AccessPoints> && accessPoints) { DARABONBA_PTR_SET_RVALUE(accessPoints_, accessPoints) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCpfsAccessPointsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCpfsAccessPointsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCpfsAccessPointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCpfsAccessPointsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeCpfsAccessPointsResponseBody::AccessPoints>> accessPoints_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
