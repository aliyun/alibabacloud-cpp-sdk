// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATAMASKINGRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATAMASKINGRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class DeleteDataMaskingRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataMaskingRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(SubRuleList, subRuleListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataMaskingRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(SubRuleList, subRuleListShrink_);
    };
    DeleteDataMaskingRuleShrinkRequest() = default ;
    DeleteDataMaskingRuleShrinkRequest(const DeleteDataMaskingRuleShrinkRequest &) = default ;
    DeleteDataMaskingRuleShrinkRequest(DeleteDataMaskingRuleShrinkRequest &&) = default ;
    DeleteDataMaskingRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataMaskingRuleShrinkRequest() = default ;
    DeleteDataMaskingRuleShrinkRequest& operator=(const DeleteDataMaskingRuleShrinkRequest &) = default ;
    DeleteDataMaskingRuleShrinkRequest& operator=(DeleteDataMaskingRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->engineType_ == nullptr
        && this->instanceId_ == nullptr && this->lang_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr && this->subRuleListShrink_ == nullptr; };
    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline DeleteDataMaskingRuleShrinkRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteDataMaskingRuleShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteDataMaskingRuleShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DeleteDataMaskingRuleShrinkRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline DeleteDataMaskingRuleShrinkRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // subRuleListShrink Field Functions 
    bool hasSubRuleListShrink() const { return this->subRuleListShrink_ != nullptr;};
    void deleteSubRuleListShrink() { this->subRuleListShrink_ = nullptr;};
    inline string getSubRuleListShrink() const { DARABONBA_PTR_GET_DEFAULT(subRuleListShrink_, "") };
    inline DeleteDataMaskingRuleShrinkRequest& setSubRuleListShrink(string subRuleListShrink) { DARABONBA_PTR_SET_VALUE(subRuleListShrink_, subRuleListShrink) };


  protected:
    shared_ptr<string> engineType_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> productCode_ {};
    shared_ptr<int64_t> productId_ {};
    shared_ptr<string> subRuleListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
