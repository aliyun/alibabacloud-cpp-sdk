// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMSMARTCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LLMSMARTCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class LlmSmartCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LlmSmartCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(PromptParam, promptParam_);
      DARABONBA_PTR_TO_JSON(ScenesCode, scenesCode_);
      DARABONBA_PTR_TO_JSON(SkillType, skillType_);
      DARABONBA_PTR_TO_JSON(StartWordParam, startWordParam_);
      DARABONBA_PTR_TO_JSON(TenantCode, tenantCode_);
    };
    friend void from_json(const Darabonba::Json& j, LlmSmartCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(PromptParam, promptParam_);
      DARABONBA_PTR_FROM_JSON(ScenesCode, scenesCode_);
      DARABONBA_PTR_FROM_JSON(SkillType, skillType_);
      DARABONBA_PTR_FROM_JSON(StartWordParam, startWordParam_);
      DARABONBA_PTR_FROM_JSON(TenantCode, tenantCode_);
    };
    LlmSmartCallRequest() = default ;
    LlmSmartCallRequest(const LlmSmartCallRequest &) = default ;
    LlmSmartCallRequest(LlmSmartCallRequest &&) = default ;
    LlmSmartCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LlmSmartCallRequest() = default ;
    LlmSmartCallRequest& operator=(const LlmSmartCallRequest &) = default ;
    LlmSmartCallRequest& operator=(LlmSmartCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->bizType_ == nullptr && this->callerNumber_ == nullptr && this->productCode_ == nullptr && this->promptParam_ == nullptr && this->scenesCode_ == nullptr
        && this->skillType_ == nullptr && this->startWordParam_ == nullptr && this->tenantCode_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline LlmSmartCallRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline LlmSmartCallRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // callerNumber Field Functions 
    bool hasCallerNumber() const { return this->callerNumber_ != nullptr;};
    void deleteCallerNumber() { this->callerNumber_ = nullptr;};
    inline string getCallerNumber() const { DARABONBA_PTR_GET_DEFAULT(callerNumber_, "") };
    inline LlmSmartCallRequest& setCallerNumber(string callerNumber) { DARABONBA_PTR_SET_VALUE(callerNumber_, callerNumber) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline LlmSmartCallRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // promptParam Field Functions 
    bool hasPromptParam() const { return this->promptParam_ != nullptr;};
    void deletePromptParam() { this->promptParam_ = nullptr;};
    inline string getPromptParam() const { DARABONBA_PTR_GET_DEFAULT(promptParam_, "") };
    inline LlmSmartCallRequest& setPromptParam(string promptParam) { DARABONBA_PTR_SET_VALUE(promptParam_, promptParam) };


    // scenesCode Field Functions 
    bool hasScenesCode() const { return this->scenesCode_ != nullptr;};
    void deleteScenesCode() { this->scenesCode_ = nullptr;};
    inline string getScenesCode() const { DARABONBA_PTR_GET_DEFAULT(scenesCode_, "") };
    inline LlmSmartCallRequest& setScenesCode(string scenesCode) { DARABONBA_PTR_SET_VALUE(scenesCode_, scenesCode) };


    // skillType Field Functions 
    bool hasSkillType() const { return this->skillType_ != nullptr;};
    void deleteSkillType() { this->skillType_ = nullptr;};
    inline int32_t getSkillType() const { DARABONBA_PTR_GET_DEFAULT(skillType_, 0) };
    inline LlmSmartCallRequest& setSkillType(int32_t skillType) { DARABONBA_PTR_SET_VALUE(skillType_, skillType) };


    // startWordParam Field Functions 
    bool hasStartWordParam() const { return this->startWordParam_ != nullptr;};
    void deleteStartWordParam() { this->startWordParam_ = nullptr;};
    inline string getStartWordParam() const { DARABONBA_PTR_GET_DEFAULT(startWordParam_, "") };
    inline LlmSmartCallRequest& setStartWordParam(string startWordParam) { DARABONBA_PTR_SET_VALUE(startWordParam_, startWordParam) };


    // tenantCode Field Functions 
    bool hasTenantCode() const { return this->tenantCode_ != nullptr;};
    void deleteTenantCode() { this->tenantCode_ = nullptr;};
    inline string getTenantCode() const { DARABONBA_PTR_GET_DEFAULT(tenantCode_, "") };
    inline LlmSmartCallRequest& setTenantCode(string tenantCode) { DARABONBA_PTR_SET_VALUE(tenantCode_, tenantCode) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> bizType_ {};
    shared_ptr<string> callerNumber_ {};
    shared_ptr<string> productCode_ {};
    shared_ptr<string> promptParam_ {};
    shared_ptr<string> scenesCode_ {};
    shared_ptr<int32_t> skillType_ {};
    shared_ptr<string> startWordParam_ {};
    shared_ptr<string> tenantCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
