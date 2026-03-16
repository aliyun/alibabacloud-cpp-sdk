// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CreateServiceInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Commodity, commodity_);
      DARABONBA_PTR_TO_JSON(ContactGroup, contactGroup_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EnableInstanceOps, enableInstanceOps_);
      DARABONBA_PTR_TO_JSON(EnableUserPrometheus, enableUserPrometheus_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OperationMetadata, operationMetadata_);
      DARABONBA_ANY_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceAutoPay, resourceAutoPay_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(SpecificationCode, specificationCode_);
      DARABONBA_PTR_TO_JSON(SpecificationName, specificationName_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TrialType, trialType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
      DARABONBA_PTR_FROM_JSON(ContactGroup, contactGroup_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EnableInstanceOps, enableInstanceOps_);
      DARABONBA_PTR_FROM_JSON(EnableUserPrometheus, enableUserPrometheus_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OperationMetadata, operationMetadata_);
      DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceAutoPay, resourceAutoPay_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(SpecificationCode, specificationCode_);
      DARABONBA_PTR_FROM_JSON(SpecificationName, specificationName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TrialType, trialType_);
    };
    CreateServiceInstanceRequest() = default ;
    CreateServiceInstanceRequest(const CreateServiceInstanceRequest &) = default ;
    CreateServiceInstanceRequest(CreateServiceInstanceRequest &&) = default ;
    CreateServiceInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceInstanceRequest() = default ;
    CreateServiceInstanceRequest& operator=(const CreateServiceInstanceRequest &) = default ;
    CreateServiceInstanceRequest& operator=(CreateServiceInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class OperationMetadata : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationMetadata& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_TO_JSON(Resources, resources_);
        DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, OperationMetadata& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_FROM_JSON(Resources, resources_);
        DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      OperationMetadata() = default ;
      OperationMetadata(const OperationMetadata &) = default ;
      OperationMetadata(OperationMetadata &&) = default ;
      OperationMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationMetadata() = default ;
      OperationMetadata& operator=(const OperationMetadata &) = default ;
      OperationMetadata& operator=(OperationMetadata &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->extraInfo_ == nullptr && this->resources_ == nullptr && this->serviceInstanceId_ == nullptr && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline OperationMetadata& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // extraInfo Field Functions 
      bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
      void deleteExtraInfo() { this->extraInfo_ = nullptr;};
      inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
      inline OperationMetadata& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


      // resources Field Functions 
      bool hasResources() const { return this->resources_ != nullptr;};
      void deleteResources() { this->resources_ = nullptr;};
      inline string getResources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
      inline OperationMetadata& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


      // serviceInstanceId Field Functions 
      bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
      void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
      inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
      inline OperationMetadata& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline OperationMetadata& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The operation end time.
      shared_ptr<string> endTime_ {};
      // The additional information.
      shared_ptr<string> extraInfo_ {};
      // Imported resource.
      shared_ptr<string> resources_ {};
      // The ID of the service instance.
      shared_ptr<string> serviceInstanceId_ {};
      // The operation start time.
      shared_ptr<string> startTime_ {};
    };

    class Commodity : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Commodity& obj) { 
        DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
        DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_TO_JSON(CouponId, couponId_);
        DARABONBA_PTR_TO_JSON(PayPeriod, payPeriod_);
        DARABONBA_PTR_TO_JSON(PayPeriodUnit, payPeriodUnit_);
        DARABONBA_PTR_TO_JSON(QuotationId, quotationId_);
      };
      friend void from_json(const Darabonba::Json& j, Commodity& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
        DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_FROM_JSON(CouponId, couponId_);
        DARABONBA_PTR_FROM_JSON(PayPeriod, payPeriod_);
        DARABONBA_PTR_FROM_JSON(PayPeriodUnit, payPeriodUnit_);
        DARABONBA_PTR_FROM_JSON(QuotationId, quotationId_);
      };
      Commodity() = default ;
      Commodity(const Commodity &) = default ;
      Commodity(Commodity &&) = default ;
      Commodity(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Commodity() = default ;
      Commodity& operator=(const Commodity &) = default ;
      Commodity& operator=(Commodity &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->couponId_ == nullptr && this->payPeriod_ == nullptr && this->payPeriodUnit_ == nullptr && this->quotationId_ == nullptr; };
      // autoPay Field Functions 
      bool hasAutoPay() const { return this->autoPay_ != nullptr;};
      void deleteAutoPay() { this->autoPay_ = nullptr;};
      inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
      inline Commodity& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


      // autoRenew Field Functions 
      bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
      void deleteAutoRenew() { this->autoRenew_ = nullptr;};
      inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
      inline Commodity& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


      // couponId Field Functions 
      bool hasCouponId() const { return this->couponId_ != nullptr;};
      void deleteCouponId() { this->couponId_ = nullptr;};
      inline string getCouponId() const { DARABONBA_PTR_GET_DEFAULT(couponId_, "") };
      inline Commodity& setCouponId(string couponId) { DARABONBA_PTR_SET_VALUE(couponId_, couponId) };


      // payPeriod Field Functions 
      bool hasPayPeriod() const { return this->payPeriod_ != nullptr;};
      void deletePayPeriod() { this->payPeriod_ = nullptr;};
      inline int64_t getPayPeriod() const { DARABONBA_PTR_GET_DEFAULT(payPeriod_, 0L) };
      inline Commodity& setPayPeriod(int64_t payPeriod) { DARABONBA_PTR_SET_VALUE(payPeriod_, payPeriod) };


      // payPeriodUnit Field Functions 
      bool hasPayPeriodUnit() const { return this->payPeriodUnit_ != nullptr;};
      void deletePayPeriodUnit() { this->payPeriodUnit_ = nullptr;};
      inline string getPayPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(payPeriodUnit_, "") };
      inline Commodity& setPayPeriodUnit(string payPeriodUnit) { DARABONBA_PTR_SET_VALUE(payPeriodUnit_, payPeriodUnit) };


      // quotationId Field Functions 
      bool hasQuotationId() const { return this->quotationId_ != nullptr;};
      void deleteQuotationId() { this->quotationId_ = nullptr;};
      inline string getQuotationId() const { DARABONBA_PTR_GET_DEFAULT(quotationId_, "") };
      inline Commodity& setQuotationId(string quotationId) { DARABONBA_PTR_SET_VALUE(quotationId_, quotationId) };


    protected:
      // Specifies whether to automatically complete the payment. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> autoPay_ {};
      // Specifies whether to enable auto-renewal for the service instance. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> autoRenew_ {};
      // The coupon ID.
      shared_ptr<string> couponId_ {};
      // The subscription duration.
      shared_ptr<int64_t> payPeriod_ {};
      // The unit of the subscription duration. Valid values:
      // 
      // *   **Year**
      // *   **Month**
      // *   **Day**
      shared_ptr<string> payPeriodUnit_ {};
      // privet offer Id
      shared_ptr<string> quotationId_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->commodity_ == nullptr && this->contactGroup_ == nullptr && this->dryRun_ == nullptr && this->enableInstanceOps_ == nullptr && this->enableUserPrometheus_ == nullptr
        && this->name_ == nullptr && this->operationMetadata_ == nullptr && this->parameters_ == nullptr && this->regionId_ == nullptr && this->resourceAutoPay_ == nullptr
        && this->resourceGroupId_ == nullptr && this->serviceId_ == nullptr && this->serviceInstanceId_ == nullptr && this->serviceVersion_ == nullptr && this->specificationCode_ == nullptr
        && this->specificationName_ == nullptr && this->tag_ == nullptr && this->templateName_ == nullptr && this->trialType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateServiceInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commodity Field Functions 
    bool hasCommodity() const { return this->commodity_ != nullptr;};
    void deleteCommodity() { this->commodity_ = nullptr;};
    inline const CreateServiceInstanceRequest::Commodity & getCommodity() const { DARABONBA_PTR_GET_CONST(commodity_, CreateServiceInstanceRequest::Commodity) };
    inline CreateServiceInstanceRequest::Commodity getCommodity() { DARABONBA_PTR_GET(commodity_, CreateServiceInstanceRequest::Commodity) };
    inline CreateServiceInstanceRequest& setCommodity(const CreateServiceInstanceRequest::Commodity & commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };
    inline CreateServiceInstanceRequest& setCommodity(CreateServiceInstanceRequest::Commodity && commodity) { DARABONBA_PTR_SET_RVALUE(commodity_, commodity) };


    // contactGroup Field Functions 
    bool hasContactGroup() const { return this->contactGroup_ != nullptr;};
    void deleteContactGroup() { this->contactGroup_ = nullptr;};
    inline string getContactGroup() const { DARABONBA_PTR_GET_DEFAULT(contactGroup_, "") };
    inline CreateServiceInstanceRequest& setContactGroup(string contactGroup) { DARABONBA_PTR_SET_VALUE(contactGroup_, contactGroup) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateServiceInstanceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // enableInstanceOps Field Functions 
    bool hasEnableInstanceOps() const { return this->enableInstanceOps_ != nullptr;};
    void deleteEnableInstanceOps() { this->enableInstanceOps_ = nullptr;};
    inline bool getEnableInstanceOps() const { DARABONBA_PTR_GET_DEFAULT(enableInstanceOps_, false) };
    inline CreateServiceInstanceRequest& setEnableInstanceOps(bool enableInstanceOps) { DARABONBA_PTR_SET_VALUE(enableInstanceOps_, enableInstanceOps) };


    // enableUserPrometheus Field Functions 
    bool hasEnableUserPrometheus() const { return this->enableUserPrometheus_ != nullptr;};
    void deleteEnableUserPrometheus() { this->enableUserPrometheus_ = nullptr;};
    inline bool getEnableUserPrometheus() const { DARABONBA_PTR_GET_DEFAULT(enableUserPrometheus_, false) };
    inline CreateServiceInstanceRequest& setEnableUserPrometheus(bool enableUserPrometheus) { DARABONBA_PTR_SET_VALUE(enableUserPrometheus_, enableUserPrometheus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateServiceInstanceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operationMetadata Field Functions 
    bool hasOperationMetadata() const { return this->operationMetadata_ != nullptr;};
    void deleteOperationMetadata() { this->operationMetadata_ = nullptr;};
    inline const CreateServiceInstanceRequest::OperationMetadata & getOperationMetadata() const { DARABONBA_PTR_GET_CONST(operationMetadata_, CreateServiceInstanceRequest::OperationMetadata) };
    inline CreateServiceInstanceRequest::OperationMetadata getOperationMetadata() { DARABONBA_PTR_GET(operationMetadata_, CreateServiceInstanceRequest::OperationMetadata) };
    inline CreateServiceInstanceRequest& setOperationMetadata(const CreateServiceInstanceRequest::OperationMetadata & operationMetadata) { DARABONBA_PTR_SET_VALUE(operationMetadata_, operationMetadata) };
    inline CreateServiceInstanceRequest& setOperationMetadata(CreateServiceInstanceRequest::OperationMetadata && operationMetadata) { DARABONBA_PTR_SET_RVALUE(operationMetadata_, operationMetadata) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
    inline CreateServiceInstanceRequest& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline CreateServiceInstanceRequest& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateServiceInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceAutoPay Field Functions 
    bool hasResourceAutoPay() const { return this->resourceAutoPay_ != nullptr;};
    void deleteResourceAutoPay() { this->resourceAutoPay_ = nullptr;};
    inline bool getResourceAutoPay() const { DARABONBA_PTR_GET_DEFAULT(resourceAutoPay_, false) };
    inline CreateServiceInstanceRequest& setResourceAutoPay(bool resourceAutoPay) { DARABONBA_PTR_SET_VALUE(resourceAutoPay_, resourceAutoPay) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateServiceInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateServiceInstanceRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline CreateServiceInstanceRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string getServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline CreateServiceInstanceRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // specificationCode Field Functions 
    bool hasSpecificationCode() const { return this->specificationCode_ != nullptr;};
    void deleteSpecificationCode() { this->specificationCode_ = nullptr;};
    inline string getSpecificationCode() const { DARABONBA_PTR_GET_DEFAULT(specificationCode_, "") };
    inline CreateServiceInstanceRequest& setSpecificationCode(string specificationCode) { DARABONBA_PTR_SET_VALUE(specificationCode_, specificationCode) };


    // specificationName Field Functions 
    bool hasSpecificationName() const { return this->specificationName_ != nullptr;};
    void deleteSpecificationName() { this->specificationName_ = nullptr;};
    inline string getSpecificationName() const { DARABONBA_PTR_GET_DEFAULT(specificationName_, "") };
    inline CreateServiceInstanceRequest& setSpecificationName(string specificationName) { DARABONBA_PTR_SET_VALUE(specificationName_, specificationName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateServiceInstanceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateServiceInstanceRequest::Tag>) };
    inline vector<CreateServiceInstanceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateServiceInstanceRequest::Tag>) };
    inline CreateServiceInstanceRequest& setTag(const vector<CreateServiceInstanceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateServiceInstanceRequest& setTag(vector<CreateServiceInstanceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateServiceInstanceRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // trialType Field Functions 
    bool hasTrialType() const { return this->trialType_ != nullptr;};
    void deleteTrialType() { this->trialType_ = nullptr;};
    inline string getTrialType() const { DARABONBA_PTR_GET_DEFAULT(trialType_, "") };
    inline CreateServiceInstanceRequest& setTrialType(string trialType) { DARABONBA_PTR_SET_VALUE(trialType_, trialType) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The information about the order placed in Alibaba Cloud Marketplace. You do not need to specify this parameter if the service is not published in Alibaba Cloud Marketplace or uses the pay-as-you-go billing method.
    shared_ptr<CreateServiceInstanceRequest::Commodity> commodity_ {};
    // The alert contact group.
    shared_ptr<string> contactGroup_ {};
    // Specifies whether to perform only a dry run for the request to check information such as the permissions and instance status. Valid values:
    // 
    // *   **true**: performs a dry run for the request, but does not create a service instance.
    // *   **false**: performs a dry run for the request, and creates a service instance if the request passes the dry run.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether the service instance supports the hosted O\\&M feature. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> enableInstanceOps_ {};
    // Specifies whether to enable the Prometheus monitoring feature. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> enableUserPrometheus_ {};
    // The serviceInstance name.
    shared_ptr<string> name_ {};
    // The operation metadata.
    shared_ptr<CreateServiceInstanceRequest::OperationMetadata> operationMetadata_ {};
    // The parameters that the customer specifies to deploy the service instance.
    // 
    // >  If region information is required to create a service instance, you must specify the region ID in the value of Parameters.
    Darabonba::Json parameters_ {};
    // The region ID. Valid values:
    // 
    // *   cn-hangzhou: China (Hangzhou).
    // *   ap-southeast-1: Singapore.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Specifies whether to automatically deduct the resource fees from the account balance. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> resourceAutoPay_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The service ID.
    // 
    // This parameter is required.
    shared_ptr<string> serviceId_ {};
    // The trial service instance id witch you want to convert to formal
    shared_ptr<string> serviceInstanceId_ {};
    // The service version.
    shared_ptr<string> serviceVersion_ {};
    // Specification code.
    shared_ptr<string> specificationCode_ {};
    // The package name.
    shared_ptr<string> specificationName_ {};
    // The tags.
    shared_ptr<vector<CreateServiceInstanceRequest::Tag>> tag_ {};
    // The name of the template.
    shared_ptr<string> templateName_ {};
    // The trial type of the service instance. Valid values:
    // 
    // *   **Trial**: Trials are supported.
    // *   **NotTrial**: Trials are not supported.
    shared_ptr<string> trialType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
