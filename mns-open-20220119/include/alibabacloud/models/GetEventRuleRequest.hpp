// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class GetEventRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    GetEventRuleRequest() = default ;
    GetEventRuleRequest(const GetEventRuleRequest &) = default ;
    GetEventRuleRequest(GetEventRuleRequest &&) = default ;
    GetEventRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventRuleRequest() = default ;
    GetEventRuleRequest& operator=(const GetEventRuleRequest &) = default ;
    GetEventRuleRequest& operator=(GetEventRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->productName_ != nullptr
        && this->ruleName_ != nullptr; };
    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline GetEventRuleRequest& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetEventRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> productName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
