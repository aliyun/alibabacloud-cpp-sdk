// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MASKOSSIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MASKOSSIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class MaskOssImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MaskOssImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(IsAlwaysUpload, isAlwaysUpload_);
      DARABONBA_PTR_TO_JSON(IsSupportRestore, isSupportRestore_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaskRuleIdList, maskRuleIdList_);
      DARABONBA_PTR_TO_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, MaskOssImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(IsAlwaysUpload, isAlwaysUpload_);
      DARABONBA_PTR_FROM_JSON(IsSupportRestore, isSupportRestore_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaskRuleIdList, maskRuleIdList_);
      DARABONBA_PTR_FROM_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
    };
    MaskOssImageRequest() = default ;
    MaskOssImageRequest(const MaskOssImageRequest &) = default ;
    MaskOssImageRequest(MaskOssImageRequest &&) = default ;
    MaskOssImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MaskOssImageRequest() = default ;
    MaskOssImageRequest& operator=(const MaskOssImageRequest &) = default ;
    MaskOssImageRequest& operator=(MaskOssImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->isAlwaysUpload_ == nullptr && return this->isSupportRestore_ == nullptr && return this->lang_ == nullptr && return this->maskRuleIdList_ == nullptr && return this->objectKey_ == nullptr
        && return this->serviceRegionId_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline MaskOssImageRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // isAlwaysUpload Field Functions 
    bool hasIsAlwaysUpload() const { return this->isAlwaysUpload_ != nullptr;};
    void deleteIsAlwaysUpload() { this->isAlwaysUpload_ = nullptr;};
    inline bool isAlwaysUpload() const { DARABONBA_PTR_GET_DEFAULT(isAlwaysUpload_, false) };
    inline MaskOssImageRequest& setIsAlwaysUpload(bool isAlwaysUpload) { DARABONBA_PTR_SET_VALUE(isAlwaysUpload_, isAlwaysUpload) };


    // isSupportRestore Field Functions 
    bool hasIsSupportRestore() const { return this->isSupportRestore_ != nullptr;};
    void deleteIsSupportRestore() { this->isSupportRestore_ = nullptr;};
    inline bool isSupportRestore() const { DARABONBA_PTR_GET_DEFAULT(isSupportRestore_, false) };
    inline MaskOssImageRequest& setIsSupportRestore(bool isSupportRestore) { DARABONBA_PTR_SET_VALUE(isSupportRestore_, isSupportRestore) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline MaskOssImageRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maskRuleIdList Field Functions 
    bool hasMaskRuleIdList() const { return this->maskRuleIdList_ != nullptr;};
    void deleteMaskRuleIdList() { this->maskRuleIdList_ = nullptr;};
    inline string maskRuleIdList() const { DARABONBA_PTR_GET_DEFAULT(maskRuleIdList_, "") };
    inline MaskOssImageRequest& setMaskRuleIdList(string maskRuleIdList) { DARABONBA_PTR_SET_VALUE(maskRuleIdList_, maskRuleIdList) };


    // objectKey Field Functions 
    bool hasObjectKey() const { return this->objectKey_ != nullptr;};
    void deleteObjectKey() { this->objectKey_ = nullptr;};
    inline string objectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
    inline MaskOssImageRequest& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string serviceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline MaskOssImageRequest& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bucketName_ = nullptr;
    std::shared_ptr<bool> isAlwaysUpload_ = nullptr;
    std::shared_ptr<bool> isSupportRestore_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> maskRuleIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> objectKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> serviceRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
