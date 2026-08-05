// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARFSMAPPINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARFSMAPPINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarFsMappingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarFsMappingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultAccessKeyId, defaultAccessKeyId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PathMappingItems, pathMappingItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarFsMappingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultAccessKeyId, defaultAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PathMappingItems, pathMappingItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribePolarFsMappingResponseBody() = default ;
    DescribePolarFsMappingResponseBody(const DescribePolarFsMappingResponseBody &) = default ;
    DescribePolarFsMappingResponseBody(DescribePolarFsMappingResponseBody &&) = default ;
    DescribePolarFsMappingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarFsMappingResponseBody() = default ;
    DescribePolarFsMappingResponseBody& operator=(const DescribePolarFsMappingResponseBody &) = default ;
    DescribePolarFsMappingResponseBody& operator=(DescribePolarFsMappingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PathMappingItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PathMappingItems& obj) { 
        DARABONBA_PTR_TO_JSON(Bucket, bucket_);
        DARABONBA_PTR_TO_JSON(BucketAccessKeyId, bucketAccessKeyId_);
        DARABONBA_PTR_TO_JSON(Path, path_);
      };
      friend void from_json(const Darabonba::Json& j, PathMappingItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
        DARABONBA_PTR_FROM_JSON(BucketAccessKeyId, bucketAccessKeyId_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
      };
      PathMappingItems() = default ;
      PathMappingItems(const PathMappingItems &) = default ;
      PathMappingItems(PathMappingItems &&) = default ;
      PathMappingItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PathMappingItems() = default ;
      PathMappingItems& operator=(const PathMappingItems &) = default ;
      PathMappingItems& operator=(PathMappingItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bucket_ == nullptr
        && this->bucketAccessKeyId_ == nullptr && this->path_ == nullptr; };
      // bucket Field Functions 
      bool hasBucket() const { return this->bucket_ != nullptr;};
      void deleteBucket() { this->bucket_ = nullptr;};
      inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
      inline PathMappingItems& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


      // bucketAccessKeyId Field Functions 
      bool hasBucketAccessKeyId() const { return this->bucketAccessKeyId_ != nullptr;};
      void deleteBucketAccessKeyId() { this->bucketAccessKeyId_ = nullptr;};
      inline string getBucketAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(bucketAccessKeyId_, "") };
      inline PathMappingItems& setBucketAccessKeyId(string bucketAccessKeyId) { DARABONBA_PTR_SET_VALUE(bucketAccessKeyId_, bucketAccessKeyId) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline PathMappingItems& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    protected:
      // The storage bucket.
      shared_ptr<string> bucket_ {};
      // The AccessKey ID of the storage bucket.
      shared_ptr<string> bucketAccessKeyId_ {};
      // The mapping path.
      shared_ptr<string> path_ {};
    };

    virtual bool empty() const override { return this->defaultAccessKeyId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->pageSize_ == nullptr && this->pathMappingItems_ == nullptr && this->requestId_ == nullptr
        && this->totalRecordCount_ == nullptr; };
    // defaultAccessKeyId Field Functions 
    bool hasDefaultAccessKeyId() const { return this->defaultAccessKeyId_ != nullptr;};
    void deleteDefaultAccessKeyId() { this->defaultAccessKeyId_ = nullptr;};
    inline string getDefaultAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(defaultAccessKeyId_, "") };
    inline DescribePolarFsMappingResponseBody& setDefaultAccessKeyId(string defaultAccessKeyId) { DARABONBA_PTR_SET_VALUE(defaultAccessKeyId_, defaultAccessKeyId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribePolarFsMappingResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline string getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, "") };
    inline DescribePolarFsMappingResponseBody& setPageRecordCount(string pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribePolarFsMappingResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pathMappingItems Field Functions 
    bool hasPathMappingItems() const { return this->pathMappingItems_ != nullptr;};
    void deletePathMappingItems() { this->pathMappingItems_ = nullptr;};
    inline const vector<DescribePolarFsMappingResponseBody::PathMappingItems> & getPathMappingItems() const { DARABONBA_PTR_GET_CONST(pathMappingItems_, vector<DescribePolarFsMappingResponseBody::PathMappingItems>) };
    inline vector<DescribePolarFsMappingResponseBody::PathMappingItems> getPathMappingItems() { DARABONBA_PTR_GET(pathMappingItems_, vector<DescribePolarFsMappingResponseBody::PathMappingItems>) };
    inline DescribePolarFsMappingResponseBody& setPathMappingItems(const vector<DescribePolarFsMappingResponseBody::PathMappingItems> & pathMappingItems) { DARABONBA_PTR_SET_VALUE(pathMappingItems_, pathMappingItems) };
    inline DescribePolarFsMappingResponseBody& setPathMappingItems(vector<DescribePolarFsMappingResponseBody::PathMappingItems> && pathMappingItems) { DARABONBA_PTR_SET_RVALUE(pathMappingItems_, pathMappingItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarFsMappingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline string getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, "") };
    inline DescribePolarFsMappingResponseBody& setTotalRecordCount(string totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The default AccessKey ID at the instance level.
    shared_ptr<string> defaultAccessKeyId_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of records on the current page.
    shared_ptr<string> pageRecordCount_ {};
    // The number of entries per page. Valid values:
    // 
    // - **30**
    // 
    // - **50**
    // 
    // - **100**
    shared_ptr<string> pageSize_ {};
    // The list of path mappings.
    shared_ptr<vector<DescribePolarFsMappingResponseBody::PathMappingItems>> pathMappingItems_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<string> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
