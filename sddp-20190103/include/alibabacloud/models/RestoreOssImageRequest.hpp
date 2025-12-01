// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTOREOSSIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTOREOSSIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class RestoreOssImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreOssImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_TO_JSON(TargetObjectKey, targetObjectKey_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreOssImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_FROM_JSON(TargetObjectKey, targetObjectKey_);
    };
    RestoreOssImageRequest() = default ;
    RestoreOssImageRequest(const RestoreOssImageRequest &) = default ;
    RestoreOssImageRequest(RestoreOssImageRequest &&) = default ;
    RestoreOssImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestoreOssImageRequest() = default ;
    RestoreOssImageRequest& operator=(const RestoreOssImageRequest &) = default ;
    RestoreOssImageRequest& operator=(RestoreOssImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr
        && return this->lang_ == nullptr && return this->objectKey_ == nullptr && return this->serviceRegionId_ == nullptr && return this->targetObjectKey_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline RestoreOssImageRequest& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline RestoreOssImageRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // objectKey Field Functions 
    bool hasObjectKey() const { return this->objectKey_ != nullptr;};
    void deleteObjectKey() { this->objectKey_ = nullptr;};
    inline string objectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
    inline RestoreOssImageRequest& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string serviceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline RestoreOssImageRequest& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


    // targetObjectKey Field Functions 
    bool hasTargetObjectKey() const { return this->targetObjectKey_ != nullptr;};
    void deleteTargetObjectKey() { this->targetObjectKey_ = nullptr;};
    inline string targetObjectKey() const { DARABONBA_PTR_GET_DEFAULT(targetObjectKey_, "") };
    inline RestoreOssImageRequest& setTargetObjectKey(string targetObjectKey) { DARABONBA_PTR_SET_VALUE(targetObjectKey_, targetObjectKey) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bucket_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> objectKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> serviceRegionId_ = nullptr;
    std::shared_ptr<string> targetObjectKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
