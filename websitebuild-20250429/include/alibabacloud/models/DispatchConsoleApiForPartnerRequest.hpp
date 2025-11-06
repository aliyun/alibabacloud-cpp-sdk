// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISPATCHCONSOLEAPIFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISPATCHCONSOLEAPIFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class DispatchConsoleAPIForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DispatchConsoleAPIForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LiveToken, liveToken_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(SiteHost, siteHost_);
    };
    friend void from_json(const Darabonba::Json& j, DispatchConsoleAPIForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveToken, liveToken_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(SiteHost, siteHost_);
    };
    DispatchConsoleAPIForPartnerRequest() = default ;
    DispatchConsoleAPIForPartnerRequest(const DispatchConsoleAPIForPartnerRequest &) = default ;
    DispatchConsoleAPIForPartnerRequest(DispatchConsoleAPIForPartnerRequest &&) = default ;
    DispatchConsoleAPIForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DispatchConsoleAPIForPartnerRequest() = default ;
    DispatchConsoleAPIForPartnerRequest& operator=(const DispatchConsoleAPIForPartnerRequest &) = default ;
    DispatchConsoleAPIForPartnerRequest& operator=(DispatchConsoleAPIForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveToken_ == nullptr
        && return this->operation_ == nullptr && return this->params_ == nullptr && return this->product_ == nullptr && return this->siteHost_ == nullptr; };
    // liveToken Field Functions 
    bool hasLiveToken() const { return this->liveToken_ != nullptr;};
    void deleteLiveToken() { this->liveToken_ = nullptr;};
    inline string liveToken() const { DARABONBA_PTR_GET_DEFAULT(liveToken_, "") };
    inline DispatchConsoleAPIForPartnerRequest& setLiveToken(string liveToken) { DARABONBA_PTR_SET_VALUE(liveToken_, liveToken) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline DispatchConsoleAPIForPartnerRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline DispatchConsoleAPIForPartnerRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DispatchConsoleAPIForPartnerRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // siteHost Field Functions 
    bool hasSiteHost() const { return this->siteHost_ != nullptr;};
    void deleteSiteHost() { this->siteHost_ = nullptr;};
    inline string siteHost() const { DARABONBA_PTR_GET_DEFAULT(siteHost_, "") };
    inline DispatchConsoleAPIForPartnerRequest& setSiteHost(string siteHost) { DARABONBA_PTR_SET_VALUE(siteHost_, siteHost) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> liveToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operation_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<string> siteHost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
