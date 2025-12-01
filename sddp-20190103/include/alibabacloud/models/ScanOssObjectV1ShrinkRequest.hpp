// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANOSSOBJECTV1SHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCANOSSOBJECTV1SHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class ScanOssObjectV1ShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanOssObjectV1ShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ObjectKeyList, objectKeyListShrink_);
      DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, ScanOssObjectV1ShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ObjectKeyList, objectKeyListShrink_);
      DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    ScanOssObjectV1ShrinkRequest() = default ;
    ScanOssObjectV1ShrinkRequest(const ScanOssObjectV1ShrinkRequest &) = default ;
    ScanOssObjectV1ShrinkRequest(ScanOssObjectV1ShrinkRequest &&) = default ;
    ScanOssObjectV1ShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanOssObjectV1ShrinkRequest() = default ;
    ScanOssObjectV1ShrinkRequest& operator=(const ScanOssObjectV1ShrinkRequest &) = default ;
    ScanOssObjectV1ShrinkRequest& operator=(ScanOssObjectV1ShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->lang_ == nullptr && return this->objectKeyListShrink_ == nullptr && return this->serviceRegionId_ == nullptr && return this->templateId_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline ScanOssObjectV1ShrinkRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ScanOssObjectV1ShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // objectKeyListShrink Field Functions 
    bool hasObjectKeyListShrink() const { return this->objectKeyListShrink_ != nullptr;};
    void deleteObjectKeyListShrink() { this->objectKeyListShrink_ = nullptr;};
    inline string objectKeyListShrink() const { DARABONBA_PTR_GET_DEFAULT(objectKeyListShrink_, "") };
    inline ScanOssObjectV1ShrinkRequest& setObjectKeyListShrink(string objectKeyListShrink) { DARABONBA_PTR_SET_VALUE(objectKeyListShrink_, objectKeyListShrink) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string serviceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline ScanOssObjectV1ShrinkRequest& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ScanOssObjectV1ShrinkRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The name of the OSS bucket.
    // 
    // This parameter is required.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The objects in the OSS bucket that you want to scan. You can specify up to 50 objects at a time.
    // 
    // This parameter is required.
    std::shared_ptr<string> objectKeyListShrink_ = nullptr;
    // The ID of the region in which the OSS bucket is located.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceRegionId_ = nullptr;
    // The ID of the industry-specific classification template.
    // 
    // >  You can call the **DescribeCategoryTemplateList** operation to query industry-specific classification templates. If you do not specify this parameter, the system automatically uses the main template.
    std::shared_ptr<int64_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
