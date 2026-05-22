// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROJECTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROJECTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProjectInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProjectInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProjectInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeProjectInfoResponseBody() = default ;
    DescribeProjectInfoResponseBody(const DescribeProjectInfoResponseBody &) = default ;
    DescribeProjectInfoResponseBody(DescribeProjectInfoResponseBody &&) = default ;
    DescribeProjectInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProjectInfoResponseBody() = default ;
    DescribeProjectInfoResponseBody& operator=(const DescribeProjectInfoResponseBody &) = default ;
    DescribeProjectInfoResponseBody& operator=(DescribeProjectInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentStepNo, currentStepNo_);
        DARABONBA_PTR_TO_JSON(CustomerAliUid, customerAliUid_);
        DARABONBA_PTR_TO_JSON(FinalStepNo, finalStepNo_);
        DARABONBA_PTR_TO_JSON(FinishType, finishType_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtExpired, gmtExpired_);
        DARABONBA_PTR_TO_JSON(GmtFinished, gmtFinished_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(ProductSkuCode, productSkuCode_);
        DARABONBA_PTR_TO_JSON(ProductSkuName, productSkuName_);
        DARABONBA_PTR_TO_JSON(ProjectStatus, projectStatus_);
        DARABONBA_PTR_TO_JSON(SupplierAliUid, supplierAliUid_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentStepNo, currentStepNo_);
        DARABONBA_PTR_FROM_JSON(CustomerAliUid, customerAliUid_);
        DARABONBA_PTR_FROM_JSON(FinalStepNo, finalStepNo_);
        DARABONBA_PTR_FROM_JSON(FinishType, finishType_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtExpired, gmtExpired_);
        DARABONBA_PTR_FROM_JSON(GmtFinished, gmtFinished_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(ProductSkuCode, productSkuCode_);
        DARABONBA_PTR_FROM_JSON(ProductSkuName, productSkuName_);
        DARABONBA_PTR_FROM_JSON(ProjectStatus, projectStatus_);
        DARABONBA_PTR_FROM_JSON(SupplierAliUid, supplierAliUid_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentStepNo_ == nullptr
        && this->customerAliUid_ == nullptr && this->finalStepNo_ == nullptr && this->finishType_ == nullptr && this->gmtCreate_ == nullptr && this->gmtExpired_ == nullptr
        && this->gmtFinished_ == nullptr && this->instanceId_ == nullptr && this->orderId_ == nullptr && this->productCode_ == nullptr && this->productName_ == nullptr
        && this->productSkuCode_ == nullptr && this->productSkuName_ == nullptr && this->projectStatus_ == nullptr && this->supplierAliUid_ == nullptr && this->templateId_ == nullptr
        && this->templateType_ == nullptr; };
      // currentStepNo Field Functions 
      bool hasCurrentStepNo() const { return this->currentStepNo_ != nullptr;};
      void deleteCurrentStepNo() { this->currentStepNo_ = nullptr;};
      inline int32_t getCurrentStepNo() const { DARABONBA_PTR_GET_DEFAULT(currentStepNo_, 0) };
      inline Result& setCurrentStepNo(int32_t currentStepNo) { DARABONBA_PTR_SET_VALUE(currentStepNo_, currentStepNo) };


      // customerAliUid Field Functions 
      bool hasCustomerAliUid() const { return this->customerAliUid_ != nullptr;};
      void deleteCustomerAliUid() { this->customerAliUid_ = nullptr;};
      inline int64_t getCustomerAliUid() const { DARABONBA_PTR_GET_DEFAULT(customerAliUid_, 0L) };
      inline Result& setCustomerAliUid(int64_t customerAliUid) { DARABONBA_PTR_SET_VALUE(customerAliUid_, customerAliUid) };


      // finalStepNo Field Functions 
      bool hasFinalStepNo() const { return this->finalStepNo_ != nullptr;};
      void deleteFinalStepNo() { this->finalStepNo_ = nullptr;};
      inline int32_t getFinalStepNo() const { DARABONBA_PTR_GET_DEFAULT(finalStepNo_, 0) };
      inline Result& setFinalStepNo(int32_t finalStepNo) { DARABONBA_PTR_SET_VALUE(finalStepNo_, finalStepNo) };


      // finishType Field Functions 
      bool hasFinishType() const { return this->finishType_ != nullptr;};
      void deleteFinishType() { this->finishType_ = nullptr;};
      inline string getFinishType() const { DARABONBA_PTR_GET_DEFAULT(finishType_, "") };
      inline Result& setFinishType(string finishType) { DARABONBA_PTR_SET_VALUE(finishType_, finishType) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Result& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtExpired Field Functions 
      bool hasGmtExpired() const { return this->gmtExpired_ != nullptr;};
      void deleteGmtExpired() { this->gmtExpired_ = nullptr;};
      inline int64_t getGmtExpired() const { DARABONBA_PTR_GET_DEFAULT(gmtExpired_, 0L) };
      inline Result& setGmtExpired(int64_t gmtExpired) { DARABONBA_PTR_SET_VALUE(gmtExpired_, gmtExpired) };


      // gmtFinished Field Functions 
      bool hasGmtFinished() const { return this->gmtFinished_ != nullptr;};
      void deleteGmtFinished() { this->gmtFinished_ = nullptr;};
      inline int64_t getGmtFinished() const { DARABONBA_PTR_GET_DEFAULT(gmtFinished_, 0L) };
      inline Result& setGmtFinished(int64_t gmtFinished) { DARABONBA_PTR_SET_VALUE(gmtFinished_, gmtFinished) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline Result& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Result& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline Result& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // productSkuCode Field Functions 
      bool hasProductSkuCode() const { return this->productSkuCode_ != nullptr;};
      void deleteProductSkuCode() { this->productSkuCode_ = nullptr;};
      inline string getProductSkuCode() const { DARABONBA_PTR_GET_DEFAULT(productSkuCode_, "") };
      inline Result& setProductSkuCode(string productSkuCode) { DARABONBA_PTR_SET_VALUE(productSkuCode_, productSkuCode) };


      // productSkuName Field Functions 
      bool hasProductSkuName() const { return this->productSkuName_ != nullptr;};
      void deleteProductSkuName() { this->productSkuName_ = nullptr;};
      inline string getProductSkuName() const { DARABONBA_PTR_GET_DEFAULT(productSkuName_, "") };
      inline Result& setProductSkuName(string productSkuName) { DARABONBA_PTR_SET_VALUE(productSkuName_, productSkuName) };


      // projectStatus Field Functions 
      bool hasProjectStatus() const { return this->projectStatus_ != nullptr;};
      void deleteProjectStatus() { this->projectStatus_ = nullptr;};
      inline string getProjectStatus() const { DARABONBA_PTR_GET_DEFAULT(projectStatus_, "") };
      inline Result& setProjectStatus(string projectStatus) { DARABONBA_PTR_SET_VALUE(projectStatus_, projectStatus) };


      // supplierAliUid Field Functions 
      bool hasSupplierAliUid() const { return this->supplierAliUid_ != nullptr;};
      void deleteSupplierAliUid() { this->supplierAliUid_ = nullptr;};
      inline int64_t getSupplierAliUid() const { DARABONBA_PTR_GET_DEFAULT(supplierAliUid_, 0L) };
      inline Result& setSupplierAliUid(int64_t supplierAliUid) { DARABONBA_PTR_SET_VALUE(supplierAliUid_, supplierAliUid) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline Result& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline Result& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    protected:
      shared_ptr<int32_t> currentStepNo_ {};
      shared_ptr<int64_t> customerAliUid_ {};
      shared_ptr<int32_t> finalStepNo_ {};
      shared_ptr<string> finishType_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<int64_t> gmtExpired_ {};
      shared_ptr<int64_t> gmtFinished_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<int64_t> orderId_ {};
      shared_ptr<string> productCode_ {};
      shared_ptr<string> productName_ {};
      shared_ptr<string> productSkuCode_ {};
      shared_ptr<string> productSkuName_ {};
      shared_ptr<string> projectStatus_ {};
      shared_ptr<int64_t> supplierAliUid_ {};
      shared_ptr<int64_t> templateId_ {};
      shared_ptr<string> templateType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProjectInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeProjectInfoResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DescribeProjectInfoResponseBody::Result) };
    inline DescribeProjectInfoResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DescribeProjectInfoResponseBody::Result) };
    inline DescribeProjectInfoResponseBody& setResult(const DescribeProjectInfoResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeProjectInfoResponseBody& setResult(DescribeProjectInfoResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeProjectInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeProjectInfoResponseBody::Result> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
