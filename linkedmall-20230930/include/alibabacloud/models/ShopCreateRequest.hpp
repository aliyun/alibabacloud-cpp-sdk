// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHOPCREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SHOPCREATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ShopCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShopCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(afterSaleDingTalkId, afterSaleDingTalkId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(operatorDingTalkId, operatorDingTalkId_);
      DARABONBA_PTR_TO_JSON(preSaleDingTalkId, preSaleDingTalkId_);
      DARABONBA_PTR_TO_JSON(shopName, shopName_);
    };
    friend void from_json(const Darabonba::Json& j, ShopCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(afterSaleDingTalkId, afterSaleDingTalkId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(operatorDingTalkId, operatorDingTalkId_);
      DARABONBA_PTR_FROM_JSON(preSaleDingTalkId, preSaleDingTalkId_);
      DARABONBA_PTR_FROM_JSON(shopName, shopName_);
    };
    ShopCreateRequest() = default ;
    ShopCreateRequest(const ShopCreateRequest &) = default ;
    ShopCreateRequest(ShopCreateRequest &&) = default ;
    ShopCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShopCreateRequest() = default ;
    ShopCreateRequest& operator=(const ShopCreateRequest &) = default ;
    ShopCreateRequest& operator=(ShopCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->afterSaleDingTalkId_ == nullptr
        && this->description_ == nullptr && this->operatorDingTalkId_ == nullptr && this->preSaleDingTalkId_ == nullptr && this->shopName_ == nullptr; };
    // afterSaleDingTalkId Field Functions 
    bool hasAfterSaleDingTalkId() const { return this->afterSaleDingTalkId_ != nullptr;};
    void deleteAfterSaleDingTalkId() { this->afterSaleDingTalkId_ = nullptr;};
    inline string getAfterSaleDingTalkId() const { DARABONBA_PTR_GET_DEFAULT(afterSaleDingTalkId_, "") };
    inline ShopCreateRequest& setAfterSaleDingTalkId(string afterSaleDingTalkId) { DARABONBA_PTR_SET_VALUE(afterSaleDingTalkId_, afterSaleDingTalkId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ShopCreateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // operatorDingTalkId Field Functions 
    bool hasOperatorDingTalkId() const { return this->operatorDingTalkId_ != nullptr;};
    void deleteOperatorDingTalkId() { this->operatorDingTalkId_ = nullptr;};
    inline string getOperatorDingTalkId() const { DARABONBA_PTR_GET_DEFAULT(operatorDingTalkId_, "") };
    inline ShopCreateRequest& setOperatorDingTalkId(string operatorDingTalkId) { DARABONBA_PTR_SET_VALUE(operatorDingTalkId_, operatorDingTalkId) };


    // preSaleDingTalkId Field Functions 
    bool hasPreSaleDingTalkId() const { return this->preSaleDingTalkId_ != nullptr;};
    void deletePreSaleDingTalkId() { this->preSaleDingTalkId_ = nullptr;};
    inline string getPreSaleDingTalkId() const { DARABONBA_PTR_GET_DEFAULT(preSaleDingTalkId_, "") };
    inline ShopCreateRequest& setPreSaleDingTalkId(string preSaleDingTalkId) { DARABONBA_PTR_SET_VALUE(preSaleDingTalkId_, preSaleDingTalkId) };


    // shopName Field Functions 
    bool hasShopName() const { return this->shopName_ != nullptr;};
    void deleteShopName() { this->shopName_ = nullptr;};
    inline string getShopName() const { DARABONBA_PTR_GET_DEFAULT(shopName_, "") };
    inline ShopCreateRequest& setShopName(string shopName) { DARABONBA_PTR_SET_VALUE(shopName_, shopName) };


  protected:
    shared_ptr<string> afterSaleDingTalkId_ {};
    // This parameter is required.
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> operatorDingTalkId_ {};
    shared_ptr<string> preSaleDingTalkId_ {};
    // This parameter is required.
    shared_ptr<string> shopName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
