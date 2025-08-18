// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESITEDELIVERYTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESITEDELIVERYTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateSiteDeliveryTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSiteDeliveryTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(DiscardRate, discardRate_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FilterVer, filterVer_);
      DARABONBA_PTR_TO_JSON(HttpDelivery, httpDeliveryShrink_);
      DARABONBA_PTR_TO_JSON(KafkaDelivery, kafkaDeliveryShrink_);
      DARABONBA_PTR_TO_JSON(OssDelivery, ossDeliveryShrink_);
      DARABONBA_PTR_TO_JSON(S3Delivery, s3DeliveryShrink_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SlsDelivery, slsDeliveryShrink_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSiteDeliveryTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(DiscardRate, discardRate_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FilterVer, filterVer_);
      DARABONBA_PTR_FROM_JSON(HttpDelivery, httpDeliveryShrink_);
      DARABONBA_PTR_FROM_JSON(KafkaDelivery, kafkaDeliveryShrink_);
      DARABONBA_PTR_FROM_JSON(OssDelivery, ossDeliveryShrink_);
      DARABONBA_PTR_FROM_JSON(S3Delivery, s3DeliveryShrink_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SlsDelivery, slsDeliveryShrink_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    CreateSiteDeliveryTaskShrinkRequest() = default ;
    CreateSiteDeliveryTaskShrinkRequest(const CreateSiteDeliveryTaskShrinkRequest &) = default ;
    CreateSiteDeliveryTaskShrinkRequest(CreateSiteDeliveryTaskShrinkRequest &&) = default ;
    CreateSiteDeliveryTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSiteDeliveryTaskShrinkRequest() = default ;
    CreateSiteDeliveryTaskShrinkRequest& operator=(const CreateSiteDeliveryTaskShrinkRequest &) = default ;
    CreateSiteDeliveryTaskShrinkRequest& operator=(CreateSiteDeliveryTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessType_ != nullptr
        && this->dataCenter_ != nullptr && this->deliveryType_ != nullptr && this->discardRate_ != nullptr && this->fieldName_ != nullptr && this->filterVer_ != nullptr
        && this->httpDeliveryShrink_ != nullptr && this->kafkaDeliveryShrink_ != nullptr && this->ossDeliveryShrink_ != nullptr && this->s3DeliveryShrink_ != nullptr && this->siteId_ != nullptr
        && this->slsDeliveryShrink_ != nullptr && this->taskName_ != nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline CreateSiteDeliveryTaskShrinkRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline CreateSiteDeliveryTaskShrinkRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline string deliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
    inline CreateSiteDeliveryTaskShrinkRequest& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // discardRate Field Functions 
    bool hasDiscardRate() const { return this->discardRate_ != nullptr;};
    void deleteDiscardRate() { this->discardRate_ = nullptr;};
    inline float discardRate() const { DARABONBA_PTR_GET_DEFAULT(discardRate_, 0.0) };
    inline CreateSiteDeliveryTaskShrinkRequest& setDiscardRate(float discardRate) { DARABONBA_PTR_SET_VALUE(discardRate_, discardRate) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline CreateSiteDeliveryTaskShrinkRequest& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // filterVer Field Functions 
    bool hasFilterVer() const { return this->filterVer_ != nullptr;};
    void deleteFilterVer() { this->filterVer_ = nullptr;};
    inline string filterVer() const { DARABONBA_PTR_GET_DEFAULT(filterVer_, "") };
    inline CreateSiteDeliveryTaskShrinkRequest& setFilterVer(string filterVer) { DARABONBA_PTR_SET_VALUE(filterVer_, filterVer) };


    // httpDeliveryShrink Field Functions 
    bool hasHttpDeliveryShrink() const { return this->httpDeliveryShrink_ != nullptr;};
    void deleteHttpDeliveryShrink() { this->httpDeliveryShrink_ = nullptr;};
    inline string httpDeliveryShrink() const { DARABONBA_PTR_GET_DEFAULT(httpDeliveryShrink_, "") };
    inline CreateSiteDeliveryTaskShrinkRequest& setHttpDeliveryShrink(string httpDeliveryShrink) { DARABONBA_PTR_SET_VALUE(httpDeliveryShrink_, httpDeliveryShrink) };


    // kafkaDeliveryShrink Field Functions 
    bool hasKafkaDeliveryShrink() const { return this->kafkaDeliveryShrink_ != nullptr;};
    void deleteKafkaDeliveryShrink() { this->kafkaDeliveryShrink_ = nullptr;};
    inline string kafkaDeliveryShrink() const { DARABONBA_PTR_GET_DEFAULT(kafkaDeliveryShrink_, "") };
    inline CreateSiteDeliveryTaskShrinkRequest& setKafkaDeliveryShrink(string kafkaDeliveryShrink) { DARABONBA_PTR_SET_VALUE(kafkaDeliveryShrink_, kafkaDeliveryShrink) };


    // ossDeliveryShrink Field Functions 
    bool hasOssDeliveryShrink() const { return this->ossDeliveryShrink_ != nullptr;};
    void deleteOssDeliveryShrink() { this->ossDeliveryShrink_ = nullptr;};
    inline string ossDeliveryShrink() const { DARABONBA_PTR_GET_DEFAULT(ossDeliveryShrink_, "") };
    inline CreateSiteDeliveryTaskShrinkRequest& setOssDeliveryShrink(string ossDeliveryShrink) { DARABONBA_PTR_SET_VALUE(ossDeliveryShrink_, ossDeliveryShrink) };


    // s3DeliveryShrink Field Functions 
    bool hasS3DeliveryShrink() const { return this->s3DeliveryShrink_ != nullptr;};
    void deleteS3DeliveryShrink() { this->s3DeliveryShrink_ = nullptr;};
    inline string s3DeliveryShrink() const { DARABONBA_PTR_GET_DEFAULT(s3DeliveryShrink_, "") };
    inline CreateSiteDeliveryTaskShrinkRequest& setS3DeliveryShrink(string s3DeliveryShrink) { DARABONBA_PTR_SET_VALUE(s3DeliveryShrink_, s3DeliveryShrink) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateSiteDeliveryTaskShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // slsDeliveryShrink Field Functions 
    bool hasSlsDeliveryShrink() const { return this->slsDeliveryShrink_ != nullptr;};
    void deleteSlsDeliveryShrink() { this->slsDeliveryShrink_ = nullptr;};
    inline string slsDeliveryShrink() const { DARABONBA_PTR_GET_DEFAULT(slsDeliveryShrink_, "") };
    inline CreateSiteDeliveryTaskShrinkRequest& setSlsDeliveryShrink(string slsDeliveryShrink) { DARABONBA_PTR_SET_VALUE(slsDeliveryShrink_, slsDeliveryShrink) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateSiteDeliveryTaskShrinkRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The log category. Valid values:
    // 
    // *   **dcdn_log_access_l1** (default): access logs.
    // *   **dcdn_log_er**: Edge Routine logs.
    // *   **dcdn_log_waf**: firewall logs.
    // *   **dcdn_log_ipa**: TCP/UDP proxy logs.
    // 
    // This parameter is required.
    std::shared_ptr<string> businessType_ = nullptr;
    // The data center. Valid values:
    // 
    // *   cn: the Chinese mainland.
    // *   oversea: outside the Chinese mainland.
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The destination of the delivery. Valid values:
    // 
    // *   sls: Alibaba Cloud Simple Log Service (SLS).
    // *   http: HTTP server.
    // *   aws3: Amazon Simple Storage Service (S3).
    // *   oss: Alibaba Cloud Object Storage Service (OSS).
    // *   kafka: Kafka.
    // *   aws3cmpt: S3-compatible storage service.
    // 
    // This parameter is required.
    std::shared_ptr<string> deliveryType_ = nullptr;
    // The discard rate. Default value: 0.
    std::shared_ptr<float> discardRate_ = nullptr;
    // The log fields, which are separated by commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> fieldName_ = nullptr;
    std::shared_ptr<string> filterVer_ = nullptr;
    // The configurations for delivery to an HTTP server.
    std::shared_ptr<string> httpDeliveryShrink_ = nullptr;
    // The configurations for delivery to Kafka.
    std::shared_ptr<string> kafkaDeliveryShrink_ = nullptr;
    // The configurations for delivery to OSS.
    std::shared_ptr<string> ossDeliveryShrink_ = nullptr;
    // The configurations for delivery to Amazon S3 or an S3-compatible service.
    std::shared_ptr<string> s3DeliveryShrink_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The configurations for delivery to SLS.
    std::shared_ptr<string> slsDeliveryShrink_ = nullptr;
    // The name of the delivery task.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
