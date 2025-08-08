// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROJECTINFORESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROJECTINFORESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProjectInfoResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProjectInfoResponseBodyResult& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeProjectInfoResponseBodyResult& obj) { 
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
    DescribeProjectInfoResponseBodyResult() = default ;
    DescribeProjectInfoResponseBodyResult(const DescribeProjectInfoResponseBodyResult &) = default ;
    DescribeProjectInfoResponseBodyResult(DescribeProjectInfoResponseBodyResult &&) = default ;
    DescribeProjectInfoResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProjectInfoResponseBodyResult() = default ;
    DescribeProjectInfoResponseBodyResult& operator=(const DescribeProjectInfoResponseBodyResult &) = default ;
    DescribeProjectInfoResponseBodyResult& operator=(DescribeProjectInfoResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentStepNo_ != nullptr
        && this->customerAliUid_ != nullptr && this->finalStepNo_ != nullptr && this->finishType_ != nullptr && this->gmtCreate_ != nullptr && this->gmtExpired_ != nullptr
        && this->gmtFinished_ != nullptr && this->instanceId_ != nullptr && this->orderId_ != nullptr && this->productCode_ != nullptr && this->productName_ != nullptr
        && this->productSkuCode_ != nullptr && this->productSkuName_ != nullptr && this->projectStatus_ != nullptr && this->supplierAliUid_ != nullptr && this->templateId_ != nullptr
        && this->templateType_ != nullptr; };
    // currentStepNo Field Functions 
    bool hasCurrentStepNo() const { return this->currentStepNo_ != nullptr;};
    void deleteCurrentStepNo() { this->currentStepNo_ = nullptr;};
    inline int32_t currentStepNo() const { DARABONBA_PTR_GET_DEFAULT(currentStepNo_, 0) };
    inline DescribeProjectInfoResponseBodyResult& setCurrentStepNo(int32_t currentStepNo) { DARABONBA_PTR_SET_VALUE(currentStepNo_, currentStepNo) };


    // customerAliUid Field Functions 
    bool hasCustomerAliUid() const { return this->customerAliUid_ != nullptr;};
    void deleteCustomerAliUid() { this->customerAliUid_ = nullptr;};
    inline int64_t customerAliUid() const { DARABONBA_PTR_GET_DEFAULT(customerAliUid_, 0L) };
    inline DescribeProjectInfoResponseBodyResult& setCustomerAliUid(int64_t customerAliUid) { DARABONBA_PTR_SET_VALUE(customerAliUid_, customerAliUid) };


    // finalStepNo Field Functions 
    bool hasFinalStepNo() const { return this->finalStepNo_ != nullptr;};
    void deleteFinalStepNo() { this->finalStepNo_ = nullptr;};
    inline int32_t finalStepNo() const { DARABONBA_PTR_GET_DEFAULT(finalStepNo_, 0) };
    inline DescribeProjectInfoResponseBodyResult& setFinalStepNo(int32_t finalStepNo) { DARABONBA_PTR_SET_VALUE(finalStepNo_, finalStepNo) };


    // finishType Field Functions 
    bool hasFinishType() const { return this->finishType_ != nullptr;};
    void deleteFinishType() { this->finishType_ = nullptr;};
    inline string finishType() const { DARABONBA_PTR_GET_DEFAULT(finishType_, "") };
    inline DescribeProjectInfoResponseBodyResult& setFinishType(string finishType) { DARABONBA_PTR_SET_VALUE(finishType_, finishType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeProjectInfoResponseBodyResult& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtExpired Field Functions 
    bool hasGmtExpired() const { return this->gmtExpired_ != nullptr;};
    void deleteGmtExpired() { this->gmtExpired_ = nullptr;};
    inline int64_t gmtExpired() const { DARABONBA_PTR_GET_DEFAULT(gmtExpired_, 0L) };
    inline DescribeProjectInfoResponseBodyResult& setGmtExpired(int64_t gmtExpired) { DARABONBA_PTR_SET_VALUE(gmtExpired_, gmtExpired) };


    // gmtFinished Field Functions 
    bool hasGmtFinished() const { return this->gmtFinished_ != nullptr;};
    void deleteGmtFinished() { this->gmtFinished_ = nullptr;};
    inline int64_t gmtFinished() const { DARABONBA_PTR_GET_DEFAULT(gmtFinished_, 0L) };
    inline DescribeProjectInfoResponseBodyResult& setGmtFinished(int64_t gmtFinished) { DARABONBA_PTR_SET_VALUE(gmtFinished_, gmtFinished) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeProjectInfoResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline DescribeProjectInfoResponseBodyResult& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeProjectInfoResponseBodyResult& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeProjectInfoResponseBodyResult& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productSkuCode Field Functions 
    bool hasProductSkuCode() const { return this->productSkuCode_ != nullptr;};
    void deleteProductSkuCode() { this->productSkuCode_ = nullptr;};
    inline string productSkuCode() const { DARABONBA_PTR_GET_DEFAULT(productSkuCode_, "") };
    inline DescribeProjectInfoResponseBodyResult& setProductSkuCode(string productSkuCode) { DARABONBA_PTR_SET_VALUE(productSkuCode_, productSkuCode) };


    // productSkuName Field Functions 
    bool hasProductSkuName() const { return this->productSkuName_ != nullptr;};
    void deleteProductSkuName() { this->productSkuName_ = nullptr;};
    inline string productSkuName() const { DARABONBA_PTR_GET_DEFAULT(productSkuName_, "") };
    inline DescribeProjectInfoResponseBodyResult& setProductSkuName(string productSkuName) { DARABONBA_PTR_SET_VALUE(productSkuName_, productSkuName) };


    // projectStatus Field Functions 
    bool hasProjectStatus() const { return this->projectStatus_ != nullptr;};
    void deleteProjectStatus() { this->projectStatus_ = nullptr;};
    inline string projectStatus() const { DARABONBA_PTR_GET_DEFAULT(projectStatus_, "") };
    inline DescribeProjectInfoResponseBodyResult& setProjectStatus(string projectStatus) { DARABONBA_PTR_SET_VALUE(projectStatus_, projectStatus) };


    // supplierAliUid Field Functions 
    bool hasSupplierAliUid() const { return this->supplierAliUid_ != nullptr;};
    void deleteSupplierAliUid() { this->supplierAliUid_ = nullptr;};
    inline int64_t supplierAliUid() const { DARABONBA_PTR_GET_DEFAULT(supplierAliUid_, 0L) };
    inline DescribeProjectInfoResponseBodyResult& setSupplierAliUid(int64_t supplierAliUid) { DARABONBA_PTR_SET_VALUE(supplierAliUid_, supplierAliUid) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeProjectInfoResponseBodyResult& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline DescribeProjectInfoResponseBodyResult& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    std::shared_ptr<int32_t> currentStepNo_ = nullptr;
    std::shared_ptr<int64_t> customerAliUid_ = nullptr;
    std::shared_ptr<int32_t> finalStepNo_ = nullptr;
    std::shared_ptr<string> finishType_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtExpired_ = nullptr;
    std::shared_ptr<int64_t> gmtFinished_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> productSkuCode_ = nullptr;
    std::shared_ptr<string> productSkuName_ = nullptr;
    std::shared_ptr<string> projectStatus_ = nullptr;
    std::shared_ptr<int64_t> supplierAliUid_ = nullptr;
    std::shared_ptr<int64_t> templateId_ = nullptr;
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
