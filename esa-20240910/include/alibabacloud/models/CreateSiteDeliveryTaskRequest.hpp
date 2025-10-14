// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESITEDELIVERYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESITEDELIVERYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSiteDeliveryTaskRequestHttpDelivery.hpp>
#include <alibabacloud/models/CreateSiteDeliveryTaskRequestKafkaDelivery.hpp>
#include <alibabacloud/models/CreateSiteDeliveryTaskRequestOssDelivery.hpp>
#include <alibabacloud/models/CreateSiteDeliveryTaskRequestS3Delivery.hpp>
#include <alibabacloud/models/CreateSiteDeliveryTaskRequestSlsDelivery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateSiteDeliveryTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSiteDeliveryTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(DiscardRate, discardRate_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FilterVer, filterVer_);
      DARABONBA_PTR_TO_JSON(HttpDelivery, httpDelivery_);
      DARABONBA_PTR_TO_JSON(KafkaDelivery, kafkaDelivery_);
      DARABONBA_PTR_TO_JSON(OssDelivery, ossDelivery_);
      DARABONBA_PTR_TO_JSON(S3Delivery, s3Delivery_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SlsDelivery, slsDelivery_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSiteDeliveryTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(DiscardRate, discardRate_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FilterVer, filterVer_);
      DARABONBA_PTR_FROM_JSON(HttpDelivery, httpDelivery_);
      DARABONBA_PTR_FROM_JSON(KafkaDelivery, kafkaDelivery_);
      DARABONBA_PTR_FROM_JSON(OssDelivery, ossDelivery_);
      DARABONBA_PTR_FROM_JSON(S3Delivery, s3Delivery_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SlsDelivery, slsDelivery_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    CreateSiteDeliveryTaskRequest() = default ;
    CreateSiteDeliveryTaskRequest(const CreateSiteDeliveryTaskRequest &) = default ;
    CreateSiteDeliveryTaskRequest(CreateSiteDeliveryTaskRequest &&) = default ;
    CreateSiteDeliveryTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSiteDeliveryTaskRequest() = default ;
    CreateSiteDeliveryTaskRequest& operator=(const CreateSiteDeliveryTaskRequest &) = default ;
    CreateSiteDeliveryTaskRequest& operator=(CreateSiteDeliveryTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr
        && return this->dataCenter_ == nullptr && return this->deliveryType_ == nullptr && return this->discardRate_ == nullptr && return this->fieldName_ == nullptr && return this->filterVer_ == nullptr
        && return this->httpDelivery_ == nullptr && return this->kafkaDelivery_ == nullptr && return this->ossDelivery_ == nullptr && return this->s3Delivery_ == nullptr && return this->siteId_ == nullptr
        && return this->slsDelivery_ == nullptr && return this->taskName_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline CreateSiteDeliveryTaskRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline CreateSiteDeliveryTaskRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline string deliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
    inline CreateSiteDeliveryTaskRequest& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // discardRate Field Functions 
    bool hasDiscardRate() const { return this->discardRate_ != nullptr;};
    void deleteDiscardRate() { this->discardRate_ = nullptr;};
    inline float discardRate() const { DARABONBA_PTR_GET_DEFAULT(discardRate_, 0.0) };
    inline CreateSiteDeliveryTaskRequest& setDiscardRate(float discardRate) { DARABONBA_PTR_SET_VALUE(discardRate_, discardRate) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline CreateSiteDeliveryTaskRequest& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // filterVer Field Functions 
    bool hasFilterVer() const { return this->filterVer_ != nullptr;};
    void deleteFilterVer() { this->filterVer_ = nullptr;};
    inline string filterVer() const { DARABONBA_PTR_GET_DEFAULT(filterVer_, "") };
    inline CreateSiteDeliveryTaskRequest& setFilterVer(string filterVer) { DARABONBA_PTR_SET_VALUE(filterVer_, filterVer) };


    // httpDelivery Field Functions 
    bool hasHttpDelivery() const { return this->httpDelivery_ != nullptr;};
    void deleteHttpDelivery() { this->httpDelivery_ = nullptr;};
    inline const CreateSiteDeliveryTaskRequestHttpDelivery & httpDelivery() const { DARABONBA_PTR_GET_CONST(httpDelivery_, CreateSiteDeliveryTaskRequestHttpDelivery) };
    inline CreateSiteDeliveryTaskRequestHttpDelivery httpDelivery() { DARABONBA_PTR_GET(httpDelivery_, CreateSiteDeliveryTaskRequestHttpDelivery) };
    inline CreateSiteDeliveryTaskRequest& setHttpDelivery(const CreateSiteDeliveryTaskRequestHttpDelivery & httpDelivery) { DARABONBA_PTR_SET_VALUE(httpDelivery_, httpDelivery) };
    inline CreateSiteDeliveryTaskRequest& setHttpDelivery(CreateSiteDeliveryTaskRequestHttpDelivery && httpDelivery) { DARABONBA_PTR_SET_RVALUE(httpDelivery_, httpDelivery) };


    // kafkaDelivery Field Functions 
    bool hasKafkaDelivery() const { return this->kafkaDelivery_ != nullptr;};
    void deleteKafkaDelivery() { this->kafkaDelivery_ = nullptr;};
    inline const CreateSiteDeliveryTaskRequestKafkaDelivery & kafkaDelivery() const { DARABONBA_PTR_GET_CONST(kafkaDelivery_, CreateSiteDeliveryTaskRequestKafkaDelivery) };
    inline CreateSiteDeliveryTaskRequestKafkaDelivery kafkaDelivery() { DARABONBA_PTR_GET(kafkaDelivery_, CreateSiteDeliveryTaskRequestKafkaDelivery) };
    inline CreateSiteDeliveryTaskRequest& setKafkaDelivery(const CreateSiteDeliveryTaskRequestKafkaDelivery & kafkaDelivery) { DARABONBA_PTR_SET_VALUE(kafkaDelivery_, kafkaDelivery) };
    inline CreateSiteDeliveryTaskRequest& setKafkaDelivery(CreateSiteDeliveryTaskRequestKafkaDelivery && kafkaDelivery) { DARABONBA_PTR_SET_RVALUE(kafkaDelivery_, kafkaDelivery) };


    // ossDelivery Field Functions 
    bool hasOssDelivery() const { return this->ossDelivery_ != nullptr;};
    void deleteOssDelivery() { this->ossDelivery_ = nullptr;};
    inline const CreateSiteDeliveryTaskRequestOssDelivery & ossDelivery() const { DARABONBA_PTR_GET_CONST(ossDelivery_, CreateSiteDeliveryTaskRequestOssDelivery) };
    inline CreateSiteDeliveryTaskRequestOssDelivery ossDelivery() { DARABONBA_PTR_GET(ossDelivery_, CreateSiteDeliveryTaskRequestOssDelivery) };
    inline CreateSiteDeliveryTaskRequest& setOssDelivery(const CreateSiteDeliveryTaskRequestOssDelivery & ossDelivery) { DARABONBA_PTR_SET_VALUE(ossDelivery_, ossDelivery) };
    inline CreateSiteDeliveryTaskRequest& setOssDelivery(CreateSiteDeliveryTaskRequestOssDelivery && ossDelivery) { DARABONBA_PTR_SET_RVALUE(ossDelivery_, ossDelivery) };


    // s3Delivery Field Functions 
    bool hasS3Delivery() const { return this->s3Delivery_ != nullptr;};
    void deleteS3Delivery() { this->s3Delivery_ = nullptr;};
    inline const CreateSiteDeliveryTaskRequestS3Delivery & s3Delivery() const { DARABONBA_PTR_GET_CONST(s3Delivery_, CreateSiteDeliveryTaskRequestS3Delivery) };
    inline CreateSiteDeliveryTaskRequestS3Delivery s3Delivery() { DARABONBA_PTR_GET(s3Delivery_, CreateSiteDeliveryTaskRequestS3Delivery) };
    inline CreateSiteDeliveryTaskRequest& setS3Delivery(const CreateSiteDeliveryTaskRequestS3Delivery & s3Delivery) { DARABONBA_PTR_SET_VALUE(s3Delivery_, s3Delivery) };
    inline CreateSiteDeliveryTaskRequest& setS3Delivery(CreateSiteDeliveryTaskRequestS3Delivery && s3Delivery) { DARABONBA_PTR_SET_RVALUE(s3Delivery_, s3Delivery) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateSiteDeliveryTaskRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // slsDelivery Field Functions 
    bool hasSlsDelivery() const { return this->slsDelivery_ != nullptr;};
    void deleteSlsDelivery() { this->slsDelivery_ = nullptr;};
    inline const CreateSiteDeliveryTaskRequestSlsDelivery & slsDelivery() const { DARABONBA_PTR_GET_CONST(slsDelivery_, CreateSiteDeliveryTaskRequestSlsDelivery) };
    inline CreateSiteDeliveryTaskRequestSlsDelivery slsDelivery() { DARABONBA_PTR_GET(slsDelivery_, CreateSiteDeliveryTaskRequestSlsDelivery) };
    inline CreateSiteDeliveryTaskRequest& setSlsDelivery(const CreateSiteDeliveryTaskRequestSlsDelivery & slsDelivery) { DARABONBA_PTR_SET_VALUE(slsDelivery_, slsDelivery) };
    inline CreateSiteDeliveryTaskRequest& setSlsDelivery(CreateSiteDeliveryTaskRequestSlsDelivery && slsDelivery) { DARABONBA_PTR_SET_RVALUE(slsDelivery_, slsDelivery) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateSiteDeliveryTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


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
    std::shared_ptr<CreateSiteDeliveryTaskRequestHttpDelivery> httpDelivery_ = nullptr;
    // The configurations for delivery to Kafka.
    std::shared_ptr<CreateSiteDeliveryTaskRequestKafkaDelivery> kafkaDelivery_ = nullptr;
    // The configurations for delivery to OSS.
    std::shared_ptr<CreateSiteDeliveryTaskRequestOssDelivery> ossDelivery_ = nullptr;
    // The configurations for delivery to Amazon S3 or an S3-compatible service.
    std::shared_ptr<CreateSiteDeliveryTaskRequestS3Delivery> s3Delivery_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The configurations for delivery to SLS.
    std::shared_ptr<CreateSiteDeliveryTaskRequestSlsDelivery> slsDelivery_ = nullptr;
    // The name of the delivery task.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
