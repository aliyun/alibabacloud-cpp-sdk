// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERDELIVERYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERDELIVERYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateUserDeliveryTaskRequestHttpDelivery.hpp>
#include <alibabacloud/models/CreateUserDeliveryTaskRequestKafkaDelivery.hpp>
#include <alibabacloud/models/CreateUserDeliveryTaskRequestOssDelivery.hpp>
#include <alibabacloud/models/CreateUserDeliveryTaskRequestS3Delivery.hpp>
#include <alibabacloud/models/CreateUserDeliveryTaskRequestSlsDelivery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateUserDeliveryTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserDeliveryTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(DiscardRate, discardRate_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FilterVer, filterVer_);
      DARABONBA_PTR_TO_JSON(HttpDelivery, httpDelivery_);
      DARABONBA_PTR_TO_JSON(KafkaDelivery, kafkaDelivery_);
      DARABONBA_PTR_TO_JSON(OssDelivery, ossDelivery_);
      DARABONBA_PTR_TO_JSON(S3Delivery, s3Delivery_);
      DARABONBA_PTR_TO_JSON(SlsDelivery, slsDelivery_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserDeliveryTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(DiscardRate, discardRate_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FilterVer, filterVer_);
      DARABONBA_PTR_FROM_JSON(HttpDelivery, httpDelivery_);
      DARABONBA_PTR_FROM_JSON(KafkaDelivery, kafkaDelivery_);
      DARABONBA_PTR_FROM_JSON(OssDelivery, ossDelivery_);
      DARABONBA_PTR_FROM_JSON(S3Delivery, s3Delivery_);
      DARABONBA_PTR_FROM_JSON(SlsDelivery, slsDelivery_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    CreateUserDeliveryTaskRequest() = default ;
    CreateUserDeliveryTaskRequest(const CreateUserDeliveryTaskRequest &) = default ;
    CreateUserDeliveryTaskRequest(CreateUserDeliveryTaskRequest &&) = default ;
    CreateUserDeliveryTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserDeliveryTaskRequest() = default ;
    CreateUserDeliveryTaskRequest& operator=(const CreateUserDeliveryTaskRequest &) = default ;
    CreateUserDeliveryTaskRequest& operator=(CreateUserDeliveryTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr
        && return this->dataCenter_ == nullptr && return this->deliveryType_ == nullptr && return this->details_ == nullptr && return this->discardRate_ == nullptr && return this->fieldName_ == nullptr
        && return this->filterVer_ == nullptr && return this->httpDelivery_ == nullptr && return this->kafkaDelivery_ == nullptr && return this->ossDelivery_ == nullptr && return this->s3Delivery_ == nullptr
        && return this->slsDelivery_ == nullptr && return this->taskName_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline CreateUserDeliveryTaskRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline CreateUserDeliveryTaskRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline string deliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
    inline CreateUserDeliveryTaskRequest& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline string details() const { DARABONBA_PTR_GET_DEFAULT(details_, "") };
    inline CreateUserDeliveryTaskRequest& setDetails(string details) { DARABONBA_PTR_SET_VALUE(details_, details) };


    // discardRate Field Functions 
    bool hasDiscardRate() const { return this->discardRate_ != nullptr;};
    void deleteDiscardRate() { this->discardRate_ = nullptr;};
    inline float discardRate() const { DARABONBA_PTR_GET_DEFAULT(discardRate_, 0.0) };
    inline CreateUserDeliveryTaskRequest& setDiscardRate(float discardRate) { DARABONBA_PTR_SET_VALUE(discardRate_, discardRate) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline CreateUserDeliveryTaskRequest& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // filterVer Field Functions 
    bool hasFilterVer() const { return this->filterVer_ != nullptr;};
    void deleteFilterVer() { this->filterVer_ = nullptr;};
    inline string filterVer() const { DARABONBA_PTR_GET_DEFAULT(filterVer_, "") };
    inline CreateUserDeliveryTaskRequest& setFilterVer(string filterVer) { DARABONBA_PTR_SET_VALUE(filterVer_, filterVer) };


    // httpDelivery Field Functions 
    bool hasHttpDelivery() const { return this->httpDelivery_ != nullptr;};
    void deleteHttpDelivery() { this->httpDelivery_ = nullptr;};
    inline const CreateUserDeliveryTaskRequestHttpDelivery & httpDelivery() const { DARABONBA_PTR_GET_CONST(httpDelivery_, CreateUserDeliveryTaskRequestHttpDelivery) };
    inline CreateUserDeliveryTaskRequestHttpDelivery httpDelivery() { DARABONBA_PTR_GET(httpDelivery_, CreateUserDeliveryTaskRequestHttpDelivery) };
    inline CreateUserDeliveryTaskRequest& setHttpDelivery(const CreateUserDeliveryTaskRequestHttpDelivery & httpDelivery) { DARABONBA_PTR_SET_VALUE(httpDelivery_, httpDelivery) };
    inline CreateUserDeliveryTaskRequest& setHttpDelivery(CreateUserDeliveryTaskRequestHttpDelivery && httpDelivery) { DARABONBA_PTR_SET_RVALUE(httpDelivery_, httpDelivery) };


    // kafkaDelivery Field Functions 
    bool hasKafkaDelivery() const { return this->kafkaDelivery_ != nullptr;};
    void deleteKafkaDelivery() { this->kafkaDelivery_ = nullptr;};
    inline const CreateUserDeliveryTaskRequestKafkaDelivery & kafkaDelivery() const { DARABONBA_PTR_GET_CONST(kafkaDelivery_, CreateUserDeliveryTaskRequestKafkaDelivery) };
    inline CreateUserDeliveryTaskRequestKafkaDelivery kafkaDelivery() { DARABONBA_PTR_GET(kafkaDelivery_, CreateUserDeliveryTaskRequestKafkaDelivery) };
    inline CreateUserDeliveryTaskRequest& setKafkaDelivery(const CreateUserDeliveryTaskRequestKafkaDelivery & kafkaDelivery) { DARABONBA_PTR_SET_VALUE(kafkaDelivery_, kafkaDelivery) };
    inline CreateUserDeliveryTaskRequest& setKafkaDelivery(CreateUserDeliveryTaskRequestKafkaDelivery && kafkaDelivery) { DARABONBA_PTR_SET_RVALUE(kafkaDelivery_, kafkaDelivery) };


    // ossDelivery Field Functions 
    bool hasOssDelivery() const { return this->ossDelivery_ != nullptr;};
    void deleteOssDelivery() { this->ossDelivery_ = nullptr;};
    inline const CreateUserDeliveryTaskRequestOssDelivery & ossDelivery() const { DARABONBA_PTR_GET_CONST(ossDelivery_, CreateUserDeliveryTaskRequestOssDelivery) };
    inline CreateUserDeliveryTaskRequestOssDelivery ossDelivery() { DARABONBA_PTR_GET(ossDelivery_, CreateUserDeliveryTaskRequestOssDelivery) };
    inline CreateUserDeliveryTaskRequest& setOssDelivery(const CreateUserDeliveryTaskRequestOssDelivery & ossDelivery) { DARABONBA_PTR_SET_VALUE(ossDelivery_, ossDelivery) };
    inline CreateUserDeliveryTaskRequest& setOssDelivery(CreateUserDeliveryTaskRequestOssDelivery && ossDelivery) { DARABONBA_PTR_SET_RVALUE(ossDelivery_, ossDelivery) };


    // s3Delivery Field Functions 
    bool hasS3Delivery() const { return this->s3Delivery_ != nullptr;};
    void deleteS3Delivery() { this->s3Delivery_ = nullptr;};
    inline const CreateUserDeliveryTaskRequestS3Delivery & s3Delivery() const { DARABONBA_PTR_GET_CONST(s3Delivery_, CreateUserDeliveryTaskRequestS3Delivery) };
    inline CreateUserDeliveryTaskRequestS3Delivery s3Delivery() { DARABONBA_PTR_GET(s3Delivery_, CreateUserDeliveryTaskRequestS3Delivery) };
    inline CreateUserDeliveryTaskRequest& setS3Delivery(const CreateUserDeliveryTaskRequestS3Delivery & s3Delivery) { DARABONBA_PTR_SET_VALUE(s3Delivery_, s3Delivery) };
    inline CreateUserDeliveryTaskRequest& setS3Delivery(CreateUserDeliveryTaskRequestS3Delivery && s3Delivery) { DARABONBA_PTR_SET_RVALUE(s3Delivery_, s3Delivery) };


    // slsDelivery Field Functions 
    bool hasSlsDelivery() const { return this->slsDelivery_ != nullptr;};
    void deleteSlsDelivery() { this->slsDelivery_ = nullptr;};
    inline const CreateUserDeliveryTaskRequestSlsDelivery & slsDelivery() const { DARABONBA_PTR_GET_CONST(slsDelivery_, CreateUserDeliveryTaskRequestSlsDelivery) };
    inline CreateUserDeliveryTaskRequestSlsDelivery slsDelivery() { DARABONBA_PTR_GET(slsDelivery_, CreateUserDeliveryTaskRequestSlsDelivery) };
    inline CreateUserDeliveryTaskRequest& setSlsDelivery(const CreateUserDeliveryTaskRequestSlsDelivery & slsDelivery) { DARABONBA_PTR_SET_VALUE(slsDelivery_, slsDelivery) };
    inline CreateUserDeliveryTaskRequest& setSlsDelivery(CreateUserDeliveryTaskRequestSlsDelivery && slsDelivery) { DARABONBA_PTR_SET_RVALUE(slsDelivery_, slsDelivery) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateUserDeliveryTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The log category. Valid values:
    // 
    // *   dcdn_log_access_l1 (default): access logs.
    // *   dcdn_log_er: Edge Routine logs.
    // *   dcdn_log_waf: firewall logs.
    // *   dcdn_log_ipa: TCP/UDP proxy logs.
    // 
    // This parameter is required.
    std::shared_ptr<string> businessType_ = nullptr;
    // The data center. Valid values:
    // 
    // *   cn: the Chinese mainland.
    // *   sg: outside the Chinese mainland.
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The destination of the delivery. Valid values:
    // 
    // 1.  sls: Alibaba Cloud SLS.
    // 2.  http: HTTP server.
    // 3.  aws3: Amazon S3.
    // 4.  oss: Alibaba Cloud OSS.
    // 5.  kafka: Kafka.
    // 6.  aws3cmpt: S3-compatible storage service.
    // 
    // This parameter is required.
    std::shared_ptr<string> deliveryType_ = nullptr;
    std::shared_ptr<string> details_ = nullptr;
    // The discard rate. Default value: 0.
    std::shared_ptr<float> discardRate_ = nullptr;
    // The log field. If you specify multiple fields, separate them with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> fieldName_ = nullptr;
    std::shared_ptr<string> filterVer_ = nullptr;
    // The configurations for delivery to an HTTP server.
    std::shared_ptr<CreateUserDeliveryTaskRequestHttpDelivery> httpDelivery_ = nullptr;
    // The configurations for delivery to Kafka.
    std::shared_ptr<CreateUserDeliveryTaskRequestKafkaDelivery> kafkaDelivery_ = nullptr;
    // The configurations for delivery to OSS.
    std::shared_ptr<CreateUserDeliveryTaskRequestOssDelivery> ossDelivery_ = nullptr;
    // The configurations for delivery to Amazon S3 or an S3-compatible service.
    std::shared_ptr<CreateUserDeliveryTaskRequestS3Delivery> s3Delivery_ = nullptr;
    // The configurations for delivery to SLS.
    std::shared_ptr<CreateUserDeliveryTaskRequestSlsDelivery> slsDelivery_ = nullptr;
    // The task name.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
