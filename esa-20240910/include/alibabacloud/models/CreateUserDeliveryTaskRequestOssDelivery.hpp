// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERDELIVERYTASKREQUESTOSSDELIVERY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERDELIVERYTASKREQUESTOSSDELIVERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateUserDeliveryTaskRequestOssDelivery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserDeliveryTaskRequestOssDelivery& obj) { 
      DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(PrefixPath, prefixPath_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserDeliveryTaskRequestOssDelivery& obj) { 
      DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(PrefixPath, prefixPath_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    CreateUserDeliveryTaskRequestOssDelivery() = default ;
    CreateUserDeliveryTaskRequestOssDelivery(const CreateUserDeliveryTaskRequestOssDelivery &) = default ;
    CreateUserDeliveryTaskRequestOssDelivery(CreateUserDeliveryTaskRequestOssDelivery &&) = default ;
    CreateUserDeliveryTaskRequestOssDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserDeliveryTaskRequestOssDelivery() = default ;
    CreateUserDeliveryTaskRequestOssDelivery& operator=(const CreateUserDeliveryTaskRequestOssDelivery &) = default ;
    CreateUserDeliveryTaskRequestOssDelivery& operator=(CreateUserDeliveryTaskRequestOssDelivery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliuid_ == nullptr
        && return this->bucketName_ == nullptr && return this->prefixPath_ == nullptr && return this->region_ == nullptr; };
    // aliuid Field Functions 
    bool hasAliuid() const { return this->aliuid_ != nullptr;};
    void deleteAliuid() { this->aliuid_ = nullptr;};
    inline string aliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, "") };
    inline CreateUserDeliveryTaskRequestOssDelivery& setAliuid(string aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline CreateUserDeliveryTaskRequestOssDelivery& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // prefixPath Field Functions 
    bool hasPrefixPath() const { return this->prefixPath_ != nullptr;};
    void deletePrefixPath() { this->prefixPath_ = nullptr;};
    inline string prefixPath() const { DARABONBA_PTR_GET_DEFAULT(prefixPath_, "") };
    inline CreateUserDeliveryTaskRequestOssDelivery& setPrefixPath(string prefixPath) { DARABONBA_PTR_SET_VALUE(prefixPath_, prefixPath) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateUserDeliveryTaskRequestOssDelivery& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The ID of your Alibaba Cloud account.
    std::shared_ptr<string> aliuid_ = nullptr;
    // The name of the OSS bucket.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The prefix of the path in which you want to store logs.
    std::shared_ptr<string> prefixPath_ = nullptr;
    // The region in which the bucket is located.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
