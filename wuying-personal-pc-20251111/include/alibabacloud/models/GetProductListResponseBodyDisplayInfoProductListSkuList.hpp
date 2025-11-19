// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTLISTRESPONSEBODYDISPLAYINFOPRODUCTLISTSKULIST_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTLISTRESPONSEBODYDISPLAYINFOPRODUCTLISTSKULIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class GetProductListResponseBodyDisplayInfoProductListSkuList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductListResponseBodyDisplayInfoProductListSkuList& obj) { 
      DARABONBA_PTR_TO_JSON(AppleSkuCode, appleSkuCode_);
      DARABONBA_PTR_TO_JSON(Attribute, attribute_);
      DARABONBA_PTR_TO_JSON(PurchaseMode, purchaseMode_);
      DARABONBA_PTR_TO_JSON(SkuCode, skuCode_);
      DARABONBA_PTR_TO_JSON(SkuDesc, skuDesc_);
      DARABONBA_PTR_TO_JSON(SkuName, skuName_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductListResponseBodyDisplayInfoProductListSkuList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppleSkuCode, appleSkuCode_);
      DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
      DARABONBA_PTR_FROM_JSON(PurchaseMode, purchaseMode_);
      DARABONBA_PTR_FROM_JSON(SkuCode, skuCode_);
      DARABONBA_PTR_FROM_JSON(SkuDesc, skuDesc_);
      DARABONBA_PTR_FROM_JSON(SkuName, skuName_);
    };
    GetProductListResponseBodyDisplayInfoProductListSkuList() = default ;
    GetProductListResponseBodyDisplayInfoProductListSkuList(const GetProductListResponseBodyDisplayInfoProductListSkuList &) = default ;
    GetProductListResponseBodyDisplayInfoProductListSkuList(GetProductListResponseBodyDisplayInfoProductListSkuList &&) = default ;
    GetProductListResponseBodyDisplayInfoProductListSkuList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductListResponseBodyDisplayInfoProductListSkuList() = default ;
    GetProductListResponseBodyDisplayInfoProductListSkuList& operator=(const GetProductListResponseBodyDisplayInfoProductListSkuList &) = default ;
    GetProductListResponseBodyDisplayInfoProductListSkuList& operator=(GetProductListResponseBodyDisplayInfoProductListSkuList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appleSkuCode_ == nullptr
        && return this->attribute_ == nullptr && return this->purchaseMode_ == nullptr && return this->skuCode_ == nullptr && return this->skuDesc_ == nullptr && return this->skuName_ == nullptr; };
    // appleSkuCode Field Functions 
    bool hasAppleSkuCode() const { return this->appleSkuCode_ != nullptr;};
    void deleteAppleSkuCode() { this->appleSkuCode_ = nullptr;};
    inline string appleSkuCode() const { DARABONBA_PTR_GET_DEFAULT(appleSkuCode_, "") };
    inline GetProductListResponseBodyDisplayInfoProductListSkuList& setAppleSkuCode(string appleSkuCode) { DARABONBA_PTR_SET_VALUE(appleSkuCode_, appleSkuCode) };


    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline string attribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
    inline GetProductListResponseBodyDisplayInfoProductListSkuList& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


    // purchaseMode Field Functions 
    bool hasPurchaseMode() const { return this->purchaseMode_ != nullptr;};
    void deletePurchaseMode() { this->purchaseMode_ = nullptr;};
    inline string purchaseMode() const { DARABONBA_PTR_GET_DEFAULT(purchaseMode_, "") };
    inline GetProductListResponseBodyDisplayInfoProductListSkuList& setPurchaseMode(string purchaseMode) { DARABONBA_PTR_SET_VALUE(purchaseMode_, purchaseMode) };


    // skuCode Field Functions 
    bool hasSkuCode() const { return this->skuCode_ != nullptr;};
    void deleteSkuCode() { this->skuCode_ = nullptr;};
    inline string skuCode() const { DARABONBA_PTR_GET_DEFAULT(skuCode_, "") };
    inline GetProductListResponseBodyDisplayInfoProductListSkuList& setSkuCode(string skuCode) { DARABONBA_PTR_SET_VALUE(skuCode_, skuCode) };


    // skuDesc Field Functions 
    bool hasSkuDesc() const { return this->skuDesc_ != nullptr;};
    void deleteSkuDesc() { this->skuDesc_ = nullptr;};
    inline string skuDesc() const { DARABONBA_PTR_GET_DEFAULT(skuDesc_, "") };
    inline GetProductListResponseBodyDisplayInfoProductListSkuList& setSkuDesc(string skuDesc) { DARABONBA_PTR_SET_VALUE(skuDesc_, skuDesc) };


    // skuName Field Functions 
    bool hasSkuName() const { return this->skuName_ != nullptr;};
    void deleteSkuName() { this->skuName_ = nullptr;};
    inline string skuName() const { DARABONBA_PTR_GET_DEFAULT(skuName_, "") };
    inline GetProductListResponseBodyDisplayInfoProductListSkuList& setSkuName(string skuName) { DARABONBA_PTR_SET_VALUE(skuName_, skuName) };


  protected:
    std::shared_ptr<string> appleSkuCode_ = nullptr;
    std::shared_ptr<string> attribute_ = nullptr;
    std::shared_ptr<string> purchaseMode_ = nullptr;
    std::shared_ptr<string> skuCode_ = nullptr;
    std::shared_ptr<string> skuDesc_ = nullptr;
    std::shared_ptr<string> skuName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
