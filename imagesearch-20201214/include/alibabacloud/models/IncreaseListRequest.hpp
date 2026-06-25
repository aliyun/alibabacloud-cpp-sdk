// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCREASELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INCREASELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class IncreaseListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncreaseListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, IncreaseListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    IncreaseListRequest() = default ;
    IncreaseListRequest(const IncreaseListRequest &) = default ;
    IncreaseListRequest(IncreaseListRequest &&) = default ;
    IncreaseListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncreaseListRequest() = default ;
    IncreaseListRequest& operator=(const IncreaseListRequest &) = default ;
    IncreaseListRequest& operator=(IncreaseListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->id_ == nullptr && this->instanceName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->path_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline IncreaseListRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline IncreaseListRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline IncreaseListRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline IncreaseListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline IncreaseListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline IncreaseListRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The name of the bucket.
    shared_ptr<string> bucketName_ {};
    // The batch task ID.
    // >To obtain the batch task ID, call the [batch operation](https://help.aliyun.com/document_detail/377468.html) first and retrieve the ID from the response.
    shared_ptr<int64_t> id_ {};
    // The name of the Image Search instance. The name can be up to 20 characters in length.
    // If you have purchased an Image Search instance, log on to the [Image Search console](https://imagesearch.console.aliyun.com/) to view the instance name.
    // If you have not purchased an Image Search instance, refer to [Activate the service](https://help.aliyun.com/document_detail/179178.html) and [Create an instance](https://help.aliyun.com/document_detail/66569.html).
    // >The instance name is not the instance ID. The instance name must be unique within the same region. Make sure you use the correct value.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The page number of the first page to return. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The absolute path of the increment.meta file in OSS. The path must start with a forward slash (/) and must not end with a forward slash (/).
    shared_ptr<string> path_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
