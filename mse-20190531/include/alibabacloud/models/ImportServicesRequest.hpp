// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTSERVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTSERVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImportServicesRequestServiceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ImportServicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportServicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(FcAlias, fcAlias_);
      DARABONBA_PTR_TO_JSON(FcServiceName, fcServiceName_);
      DARABONBA_PTR_TO_JSON(FcVersion, fcVersion_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(ServiceList, serviceList_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(TlsSetting, tlsSetting_);
    };
    friend void from_json(const Darabonba::Json& j, ImportServicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(FcAlias, fcAlias_);
      DARABONBA_PTR_FROM_JSON(FcServiceName, fcServiceName_);
      DARABONBA_PTR_FROM_JSON(FcVersion, fcVersion_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(ServiceList, serviceList_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(TlsSetting, tlsSetting_);
    };
    ImportServicesRequest() = default ;
    ImportServicesRequest(const ImportServicesRequest &) = default ;
    ImportServicesRequest(ImportServicesRequest &&) = default ;
    ImportServicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportServicesRequest() = default ;
    ImportServicesRequest& operator=(const ImportServicesRequest &) = default ;
    ImportServicesRequest& operator=(ImportServicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->fcAlias_ == nullptr && return this->fcServiceName_ == nullptr && return this->fcVersion_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->serviceList_ == nullptr
        && return this->sourceId_ == nullptr && return this->sourceType_ == nullptr && return this->tlsSetting_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ImportServicesRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // fcAlias Field Functions 
    bool hasFcAlias() const { return this->fcAlias_ != nullptr;};
    void deleteFcAlias() { this->fcAlias_ = nullptr;};
    inline string fcAlias() const { DARABONBA_PTR_GET_DEFAULT(fcAlias_, "") };
    inline ImportServicesRequest& setFcAlias(string fcAlias) { DARABONBA_PTR_SET_VALUE(fcAlias_, fcAlias) };


    // fcServiceName Field Functions 
    bool hasFcServiceName() const { return this->fcServiceName_ != nullptr;};
    void deleteFcServiceName() { this->fcServiceName_ = nullptr;};
    inline string fcServiceName() const { DARABONBA_PTR_GET_DEFAULT(fcServiceName_, "") };
    inline ImportServicesRequest& setFcServiceName(string fcServiceName) { DARABONBA_PTR_SET_VALUE(fcServiceName_, fcServiceName) };


    // fcVersion Field Functions 
    bool hasFcVersion() const { return this->fcVersion_ != nullptr;};
    void deleteFcVersion() { this->fcVersion_ = nullptr;};
    inline string fcVersion() const { DARABONBA_PTR_GET_DEFAULT(fcVersion_, "") };
    inline ImportServicesRequest& setFcVersion(string fcVersion) { DARABONBA_PTR_SET_VALUE(fcVersion_, fcVersion) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline ImportServicesRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // serviceList Field Functions 
    bool hasServiceList() const { return this->serviceList_ != nullptr;};
    void deleteServiceList() { this->serviceList_ = nullptr;};
    inline const vector<ImportServicesRequestServiceList> & serviceList() const { DARABONBA_PTR_GET_CONST(serviceList_, vector<ImportServicesRequestServiceList>) };
    inline vector<ImportServicesRequestServiceList> serviceList() { DARABONBA_PTR_GET(serviceList_, vector<ImportServicesRequestServiceList>) };
    inline ImportServicesRequest& setServiceList(const vector<ImportServicesRequestServiceList> & serviceList) { DARABONBA_PTR_SET_VALUE(serviceList_, serviceList) };
    inline ImportServicesRequest& setServiceList(vector<ImportServicesRequestServiceList> && serviceList) { DARABONBA_PTR_SET_RVALUE(serviceList_, serviceList) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline ImportServicesRequest& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ImportServicesRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // tlsSetting Field Functions 
    bool hasTlsSetting() const { return this->tlsSetting_ != nullptr;};
    void deleteTlsSetting() { this->tlsSetting_ = nullptr;};
    inline string tlsSetting() const { DARABONBA_PTR_GET_DEFAULT(tlsSetting_, "") };
    inline ImportServicesRequest& setTlsSetting(string tlsSetting) { DARABONBA_PTR_SET_VALUE(tlsSetting_, tlsSetting) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    std::shared_ptr<string> fcAlias_ = nullptr;
    std::shared_ptr<string> fcServiceName_ = nullptr;
    std::shared_ptr<string> fcVersion_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The information about services.
    std::shared_ptr<vector<ImportServicesRequestServiceList>> serviceList_ = nullptr;
    std::shared_ptr<int64_t> sourceId_ = nullptr;
    // The service source. Valid values:
    // 
    // *   MSE: MSE Nacos instance
    // *   K8s: ACK cluster
    // *   VIP: fixed address
    // *   DNS: DNS domain
    std::shared_ptr<string> sourceType_ = nullptr;
    // The Transport Layer Security (TLS) settings. Valid values:
    // 
    // *   mode: TLS mode
    // *   certId: certificate ID
    // *   caCertId: CA certificate ID
    // *   caCertContent: CA certificate public key
    // *   sni: service name identification
    std::shared_ptr<string> tlsSetting_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
