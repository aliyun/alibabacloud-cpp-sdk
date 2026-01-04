// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUCKETINFO_HPP_
#define ALIBABACLOUD_MODELS_BUCKETINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class BucketInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BucketInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BucketAcl, bucketAcl_);
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataRedundancyType, dataRedundancyType_);
      DARABONBA_PTR_TO_JSON(DispatcherType, dispatcherType_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
    };
    friend void from_json(const Darabonba::Json& j, BucketInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketAcl, bucketAcl_);
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataRedundancyType, dataRedundancyType_);
      DARABONBA_PTR_FROM_JSON(DispatcherType, dispatcherType_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
    };
    BucketInfo() = default ;
    BucketInfo(const BucketInfo &) = default ;
    BucketInfo(BucketInfo &&) = default ;
    BucketInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BucketInfo() = default ;
    BucketInfo& operator=(const BucketInfo &) = default ;
    BucketInfo& operator=(BucketInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketAcl_ == nullptr
        && this->bucketName_ == nullptr && this->comment_ == nullptr && this->createTime_ == nullptr && this->dataRedundancyType_ == nullptr && this->dispatcherType_ == nullptr
        && this->endpoint_ == nullptr && this->ensRegionId_ == nullptr && this->modifyTime_ == nullptr && this->resourceType_ == nullptr && this->storageClass_ == nullptr; };
    // bucketAcl Field Functions 
    bool hasBucketAcl() const { return this->bucketAcl_ != nullptr;};
    void deleteBucketAcl() { this->bucketAcl_ = nullptr;};
    inline string getBucketAcl() const { DARABONBA_PTR_GET_DEFAULT(bucketAcl_, "") };
    inline BucketInfo& setBucketAcl(string bucketAcl) { DARABONBA_PTR_SET_VALUE(bucketAcl_, bucketAcl) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline BucketInfo& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline BucketInfo& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline BucketInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataRedundancyType Field Functions 
    bool hasDataRedundancyType() const { return this->dataRedundancyType_ != nullptr;};
    void deleteDataRedundancyType() { this->dataRedundancyType_ = nullptr;};
    inline string getDataRedundancyType() const { DARABONBA_PTR_GET_DEFAULT(dataRedundancyType_, "") };
    inline BucketInfo& setDataRedundancyType(string dataRedundancyType) { DARABONBA_PTR_SET_VALUE(dataRedundancyType_, dataRedundancyType) };


    // dispatcherType Field Functions 
    bool hasDispatcherType() const { return this->dispatcherType_ != nullptr;};
    void deleteDispatcherType() { this->dispatcherType_ = nullptr;};
    inline string getDispatcherType() const { DARABONBA_PTR_GET_DEFAULT(dispatcherType_, "") };
    inline BucketInfo& setDispatcherType(string dispatcherType) { DARABONBA_PTR_SET_VALUE(dispatcherType_, dispatcherType) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline BucketInfo& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline BucketInfo& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline BucketInfo& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline BucketInfo& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline BucketInfo& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


  protected:
    shared_ptr<string> bucketAcl_ {};
    // This parameter is required.
    shared_ptr<string> bucketName_ {};
    shared_ptr<string> comment_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> dataRedundancyType_ {};
    shared_ptr<string> dispatcherType_ {};
    shared_ptr<string> endpoint_ {};
    shared_ptr<string> ensRegionId_ {};
    shared_ptr<string> modifyTime_ {};
    shared_ptr<string> resourceType_ {};
    shared_ptr<string> storageClass_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
