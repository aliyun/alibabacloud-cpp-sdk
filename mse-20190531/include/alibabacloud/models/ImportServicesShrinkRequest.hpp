// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTSERVICESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTSERVICESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ImportServicesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportServicesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(FcAlias, fcAlias_);
      DARABONBA_PTR_TO_JSON(FcServiceName, fcServiceName_);
      DARABONBA_PTR_TO_JSON(FcVersion, fcVersion_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(ServiceList, serviceListShrink_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(TlsSetting, tlsSetting_);
    };
    friend void from_json(const Darabonba::Json& j, ImportServicesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(FcAlias, fcAlias_);
      DARABONBA_PTR_FROM_JSON(FcServiceName, fcServiceName_);
      DARABONBA_PTR_FROM_JSON(FcVersion, fcVersion_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(ServiceList, serviceListShrink_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(TlsSetting, tlsSetting_);
    };
    ImportServicesShrinkRequest() = default ;
    ImportServicesShrinkRequest(const ImportServicesShrinkRequest &) = default ;
    ImportServicesShrinkRequest(ImportServicesShrinkRequest &&) = default ;
    ImportServicesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportServicesShrinkRequest() = default ;
    ImportServicesShrinkRequest& operator=(const ImportServicesShrinkRequest &) = default ;
    ImportServicesShrinkRequest& operator=(ImportServicesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->fcAlias_ == nullptr && this->fcServiceName_ == nullptr && this->fcVersion_ == nullptr && this->gatewayUniqueId_ == nullptr && this->serviceListShrink_ == nullptr
        && this->sourceId_ == nullptr && this->sourceType_ == nullptr && this->tlsSetting_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ImportServicesShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // fcAlias Field Functions 
    bool hasFcAlias() const { return this->fcAlias_ != nullptr;};
    void deleteFcAlias() { this->fcAlias_ = nullptr;};
    inline string getFcAlias() const { DARABONBA_PTR_GET_DEFAULT(fcAlias_, "") };
    inline ImportServicesShrinkRequest& setFcAlias(string fcAlias) { DARABONBA_PTR_SET_VALUE(fcAlias_, fcAlias) };


    // fcServiceName Field Functions 
    bool hasFcServiceName() const { return this->fcServiceName_ != nullptr;};
    void deleteFcServiceName() { this->fcServiceName_ = nullptr;};
    inline string getFcServiceName() const { DARABONBA_PTR_GET_DEFAULT(fcServiceName_, "") };
    inline ImportServicesShrinkRequest& setFcServiceName(string fcServiceName) { DARABONBA_PTR_SET_VALUE(fcServiceName_, fcServiceName) };


    // fcVersion Field Functions 
    bool hasFcVersion() const { return this->fcVersion_ != nullptr;};
    void deleteFcVersion() { this->fcVersion_ = nullptr;};
    inline string getFcVersion() const { DARABONBA_PTR_GET_DEFAULT(fcVersion_, "") };
    inline ImportServicesShrinkRequest& setFcVersion(string fcVersion) { DARABONBA_PTR_SET_VALUE(fcVersion_, fcVersion) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline ImportServicesShrinkRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // serviceListShrink Field Functions 
    bool hasServiceListShrink() const { return this->serviceListShrink_ != nullptr;};
    void deleteServiceListShrink() { this->serviceListShrink_ = nullptr;};
    inline string getServiceListShrink() const { DARABONBA_PTR_GET_DEFAULT(serviceListShrink_, "") };
    inline ImportServicesShrinkRequest& setServiceListShrink(string serviceListShrink) { DARABONBA_PTR_SET_VALUE(serviceListShrink_, serviceListShrink) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline ImportServicesShrinkRequest& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ImportServicesShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // tlsSetting Field Functions 
    bool hasTlsSetting() const { return this->tlsSetting_ != nullptr;};
    void deleteTlsSetting() { this->tlsSetting_ = nullptr;};
    inline string getTlsSetting() const { DARABONBA_PTR_GET_DEFAULT(tlsSetting_, "") };
    inline ImportServicesShrinkRequest& setTlsSetting(string tlsSetting) { DARABONBA_PTR_SET_VALUE(tlsSetting_, tlsSetting) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    shared_ptr<string> fcAlias_ {};
    shared_ptr<string> fcServiceName_ {};
    shared_ptr<string> fcVersion_ {};
    // The unique ID of the gateway.
    shared_ptr<string> gatewayUniqueId_ {};
    // The information about services.
    shared_ptr<string> serviceListShrink_ {};
    shared_ptr<int64_t> sourceId_ {};
    // The service source. Valid values:
    // 
    // *   MSE: MSE Nacos instance
    // *   K8s: ACK cluster
    // *   VIP: fixed address
    // *   DNS: DNS domain
    shared_ptr<string> sourceType_ {};
    // The Transport Layer Security (TLS) settings. Valid values:
    // 
    // *   mode: TLS mode
    // *   certId: certificate ID
    // *   caCertId: CA certificate ID
    // *   caCertContent: CA certificate public key
    // *   sni: service name identification
    shared_ptr<string> tlsSetting_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
