// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTDETAILV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTDETAILV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeOssObjectDetailV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssObjectDetailV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssObjectDetailV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeOssObjectDetailV2Request() = default ;
    DescribeOssObjectDetailV2Request(const DescribeOssObjectDetailV2Request &) = default ;
    DescribeOssObjectDetailV2Request(DescribeOssObjectDetailV2Request &&) = default ;
    DescribeOssObjectDetailV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssObjectDetailV2Request() = default ;
    DescribeOssObjectDetailV2Request& operator=(const DescribeOssObjectDetailV2Request &) = default ;
    DescribeOssObjectDetailV2Request& operator=(DescribeOssObjectDetailV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketName_ != nullptr
        && this->id_ != nullptr && this->lang_ != nullptr && this->objectKey_ != nullptr && this->serviceRegionId_ != nullptr && this->templateId_ != nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline DescribeOssObjectDetailV2Request& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeOssObjectDetailV2Request& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeOssObjectDetailV2Request& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // objectKey Field Functions 
    bool hasObjectKey() const { return this->objectKey_ != nullptr;};
    void deleteObjectKey() { this->objectKey_ = nullptr;};
    inline string objectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
    inline DescribeOssObjectDetailV2Request& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string serviceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline DescribeOssObjectDetailV2Request& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeOssObjectDetailV2Request& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // Bucket name.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The unique identifier ID of the OSS storage object.
    // 
    // > Call the [DescribeOssObjects](https://help.aliyun.com/document_detail/410152.html) interface to get the ID.
    std::shared_ptr<string> id_ = nullptr;
    // Sets the language type for request and response messages. The default value is **zh_cn**. Values:
    // 
    // - **zh_cn**: Simplified Chinese
    // - **en_us**: English (US)
    std::shared_ptr<string> lang_ = nullptr;
    // The full file name of the file stored on OSS.
    std::shared_ptr<string> objectKey_ = nullptr;
    // Service region ID, i.e., the region ID where the Bucket is located.
    std::shared_ptr<string> serviceRegionId_ = nullptr;
    // Industry template ID.
    // > You can obtain the industry template ID by calling the [DescribeCategoryTemplateList](https://help.aliyun.com/document_detail/2399296.html) interface.
    std::shared_ptr<int64_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
