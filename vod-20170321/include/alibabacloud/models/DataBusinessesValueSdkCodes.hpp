// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATABUSINESSESVALUESDKCODES_HPP_
#define ALIBABACLOUD_MODELS_DATABUSINESSESVALUESDKCODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataBusinessesValueSdkCodesIntegrate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DataBusinessesValueSdkCodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataBusinessesValueSdkCodes& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SellPrice, sellPrice_);
      DARABONBA_PTR_TO_JSON(IceOpen, iceOpen_);
      DARABONBA_PTR_TO_JSON(SupportPlatform, supportPlatform_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Authorized, authorized_);
      DARABONBA_PTR_TO_JSON(AuthorizedApp, authorizedApp_);
      DARABONBA_PTR_TO_JSON(DefaultFeature, defaultFeature_);
      DARABONBA_PTR_TO_JSON(Integrate, integrate_);
      DARABONBA_PTR_TO_JSON(Subscription, subscription_);
      DARABONBA_PTR_TO_JSON(ProductDesc, productDesc_);
      DARABONBA_PTR_TO_JSON(SubscriptionPkg, subscriptionPkg_);
      DARABONBA_PTR_TO_JSON(SubscriptionImp, subscriptionImp_);
    };
    friend void from_json(const Darabonba::Json& j, DataBusinessesValueSdkCodes& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SellPrice, sellPrice_);
      DARABONBA_PTR_FROM_JSON(IceOpen, iceOpen_);
      DARABONBA_PTR_FROM_JSON(SupportPlatform, supportPlatform_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Authorized, authorized_);
      DARABONBA_PTR_FROM_JSON(AuthorizedApp, authorizedApp_);
      DARABONBA_PTR_FROM_JSON(DefaultFeature, defaultFeature_);
      DARABONBA_PTR_FROM_JSON(Integrate, integrate_);
      DARABONBA_PTR_FROM_JSON(Subscription, subscription_);
      DARABONBA_PTR_FROM_JSON(ProductDesc, productDesc_);
      DARABONBA_PTR_FROM_JSON(SubscriptionPkg, subscriptionPkg_);
      DARABONBA_PTR_FROM_JSON(SubscriptionImp, subscriptionImp_);
    };
    DataBusinessesValueSdkCodes() = default ;
    DataBusinessesValueSdkCodes(const DataBusinessesValueSdkCodes &) = default ;
    DataBusinessesValueSdkCodes(DataBusinessesValueSdkCodes &&) = default ;
    DataBusinessesValueSdkCodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataBusinessesValueSdkCodes() = default ;
    DataBusinessesValueSdkCodes& operator=(const DataBusinessesValueSdkCodes &) = default ;
    DataBusinessesValueSdkCodes& operator=(DataBusinessesValueSdkCodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr && this->sellPrice_ != nullptr && this->iceOpen_ != nullptr && this->supportPlatform_ != nullptr && this->size_ != nullptr
        && this->authorized_ != nullptr && this->authorizedApp_ != nullptr && this->defaultFeature_ != nullptr && this->integrate_ != nullptr && this->subscription_ != nullptr
        && this->productDesc_ != nullptr && this->subscriptionPkg_ != nullptr && this->subscriptionImp_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DataBusinessesValueSdkCodes& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DataBusinessesValueSdkCodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sellPrice Field Functions 
    bool hasSellPrice() const { return this->sellPrice_ != nullptr;};
    void deleteSellPrice() { this->sellPrice_ = nullptr;};
    inline string sellPrice() const { DARABONBA_PTR_GET_DEFAULT(sellPrice_, "") };
    inline DataBusinessesValueSdkCodes& setSellPrice(string sellPrice) { DARABONBA_PTR_SET_VALUE(sellPrice_, sellPrice) };


    // iceOpen Field Functions 
    bool hasIceOpen() const { return this->iceOpen_ != nullptr;};
    void deleteIceOpen() { this->iceOpen_ = nullptr;};
    inline int32_t iceOpen() const { DARABONBA_PTR_GET_DEFAULT(iceOpen_, 0) };
    inline DataBusinessesValueSdkCodes& setIceOpen(int32_t iceOpen) { DARABONBA_PTR_SET_VALUE(iceOpen_, iceOpen) };


    // supportPlatform Field Functions 
    bool hasSupportPlatform() const { return this->supportPlatform_ != nullptr;};
    void deleteSupportPlatform() { this->supportPlatform_ = nullptr;};
    inline int32_t supportPlatform() const { DARABONBA_PTR_GET_DEFAULT(supportPlatform_, 0) };
    inline DataBusinessesValueSdkCodes& setSupportPlatform(int32_t supportPlatform) { DARABONBA_PTR_SET_VALUE(supportPlatform_, supportPlatform) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline DataBusinessesValueSdkCodes& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // authorized Field Functions 
    bool hasAuthorized() const { return this->authorized_ != nullptr;};
    void deleteAuthorized() { this->authorized_ = nullptr;};
    inline int32_t authorized() const { DARABONBA_PTR_GET_DEFAULT(authorized_, 0) };
    inline DataBusinessesValueSdkCodes& setAuthorized(int32_t authorized) { DARABONBA_PTR_SET_VALUE(authorized_, authorized) };


    // authorizedApp Field Functions 
    bool hasAuthorizedApp() const { return this->authorizedApp_ != nullptr;};
    void deleteAuthorizedApp() { this->authorizedApp_ = nullptr;};
    inline const vector<string> & authorizedApp() const { DARABONBA_PTR_GET_CONST(authorizedApp_, vector<string>) };
    inline vector<string> authorizedApp() { DARABONBA_PTR_GET(authorizedApp_, vector<string>) };
    inline DataBusinessesValueSdkCodes& setAuthorizedApp(const vector<string> & authorizedApp) { DARABONBA_PTR_SET_VALUE(authorizedApp_, authorizedApp) };
    inline DataBusinessesValueSdkCodes& setAuthorizedApp(vector<string> && authorizedApp) { DARABONBA_PTR_SET_RVALUE(authorizedApp_, authorizedApp) };


    // defaultFeature Field Functions 
    bool hasDefaultFeature() const { return this->defaultFeature_ != nullptr;};
    void deleteDefaultFeature() { this->defaultFeature_ = nullptr;};
    inline string defaultFeature() const { DARABONBA_PTR_GET_DEFAULT(defaultFeature_, "") };
    inline DataBusinessesValueSdkCodes& setDefaultFeature(string defaultFeature) { DARABONBA_PTR_SET_VALUE(defaultFeature_, defaultFeature) };


    // integrate Field Functions 
    bool hasIntegrate() const { return this->integrate_ != nullptr;};
    void deleteIntegrate() { this->integrate_ = nullptr;};
    inline const vector<Models::DataBusinessesValueSdkCodesIntegrate> & integrate() const { DARABONBA_PTR_GET_CONST(integrate_, vector<Models::DataBusinessesValueSdkCodesIntegrate>) };
    inline vector<Models::DataBusinessesValueSdkCodesIntegrate> integrate() { DARABONBA_PTR_GET(integrate_, vector<Models::DataBusinessesValueSdkCodesIntegrate>) };
    inline DataBusinessesValueSdkCodes& setIntegrate(const vector<Models::DataBusinessesValueSdkCodesIntegrate> & integrate) { DARABONBA_PTR_SET_VALUE(integrate_, integrate) };
    inline DataBusinessesValueSdkCodes& setIntegrate(vector<Models::DataBusinessesValueSdkCodesIntegrate> && integrate) { DARABONBA_PTR_SET_RVALUE(integrate_, integrate) };


    // subscription Field Functions 
    bool hasSubscription() const { return this->subscription_ != nullptr;};
    void deleteSubscription() { this->subscription_ = nullptr;};
    inline string subscription() const { DARABONBA_PTR_GET_DEFAULT(subscription_, "") };
    inline DataBusinessesValueSdkCodes& setSubscription(string subscription) { DARABONBA_PTR_SET_VALUE(subscription_, subscription) };


    // productDesc Field Functions 
    bool hasProductDesc() const { return this->productDesc_ != nullptr;};
    void deleteProductDesc() { this->productDesc_ = nullptr;};
    inline string productDesc() const { DARABONBA_PTR_GET_DEFAULT(productDesc_, "") };
    inline DataBusinessesValueSdkCodes& setProductDesc(string productDesc) { DARABONBA_PTR_SET_VALUE(productDesc_, productDesc) };


    // subscriptionPkg Field Functions 
    bool hasSubscriptionPkg() const { return this->subscriptionPkg_ != nullptr;};
    void deleteSubscriptionPkg() { this->subscriptionPkg_ = nullptr;};
    inline string subscriptionPkg() const { DARABONBA_PTR_GET_DEFAULT(subscriptionPkg_, "") };
    inline DataBusinessesValueSdkCodes& setSubscriptionPkg(string subscriptionPkg) { DARABONBA_PTR_SET_VALUE(subscriptionPkg_, subscriptionPkg) };


    // subscriptionImp Field Functions 
    bool hasSubscriptionImp() const { return this->subscriptionImp_ != nullptr;};
    void deleteSubscriptionImp() { this->subscriptionImp_ = nullptr;};
    inline string subscriptionImp() const { DARABONBA_PTR_GET_DEFAULT(subscriptionImp_, "") };
    inline DataBusinessesValueSdkCodes& setSubscriptionImp(string subscriptionImp) { DARABONBA_PTR_SET_VALUE(subscriptionImp_, subscriptionImp) };


  protected:
    std::shared_ptr<int32_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> sellPrice_ = nullptr;
    std::shared_ptr<int32_t> iceOpen_ = nullptr;
    std::shared_ptr<int32_t> supportPlatform_ = nullptr;
    std::shared_ptr<string> size_ = nullptr;
    std::shared_ptr<int32_t> authorized_ = nullptr;
    std::shared_ptr<vector<string>> authorizedApp_ = nullptr;
    std::shared_ptr<string> defaultFeature_ = nullptr;
    std::shared_ptr<vector<Models::DataBusinessesValueSdkCodesIntegrate>> integrate_ = nullptr;
    std::shared_ptr<string> subscription_ = nullptr;
    std::shared_ptr<string> productDesc_ = nullptr;
    std::shared_ptr<string> subscriptionPkg_ = nullptr;
    std::shared_ptr<string> subscriptionImp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
