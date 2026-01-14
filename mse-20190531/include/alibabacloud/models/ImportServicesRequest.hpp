// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTSERVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTSERVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ServiceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceList& obj) { 
        DARABONBA_PTR_TO_JSON(DnsServerList, dnsServerList_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(Ips, ips_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(SaeAppId, saeAppId_);
        DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
        DARABONBA_PTR_TO_JSON(ServiceProtocol, serviceProtocol_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceList& obj) { 
        DARABONBA_PTR_FROM_JSON(DnsServerList, dnsServerList_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(Ips, ips_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(SaeAppId, saeAppId_);
        DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
        DARABONBA_PTR_FROM_JSON(ServiceProtocol, serviceProtocol_);
      };
      ServiceList() = default ;
      ServiceList(const ServiceList &) = default ;
      ServiceList(ServiceList &&) = default ;
      ServiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceList() = default ;
      ServiceList& operator=(const ServiceList &) = default ;
      ServiceList& operator=(ServiceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dnsServerList_ == nullptr
        && this->groupName_ == nullptr && this->ips_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->saeAppId_ == nullptr
        && this->servicePort_ == nullptr && this->serviceProtocol_ == nullptr; };
      // dnsServerList Field Functions 
      bool hasDnsServerList() const { return this->dnsServerList_ != nullptr;};
      void deleteDnsServerList() { this->dnsServerList_ = nullptr;};
      inline const vector<string> & getDnsServerList() const { DARABONBA_PTR_GET_CONST(dnsServerList_, vector<string>) };
      inline vector<string> getDnsServerList() { DARABONBA_PTR_GET(dnsServerList_, vector<string>) };
      inline ServiceList& setDnsServerList(const vector<string> & dnsServerList) { DARABONBA_PTR_SET_VALUE(dnsServerList_, dnsServerList) };
      inline ServiceList& setDnsServerList(vector<string> && dnsServerList) { DARABONBA_PTR_SET_RVALUE(dnsServerList_, dnsServerList) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline ServiceList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // ips Field Functions 
      bool hasIps() const { return this->ips_ != nullptr;};
      void deleteIps() { this->ips_ = nullptr;};
      inline const vector<string> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
      inline vector<string> getIps() { DARABONBA_PTR_GET(ips_, vector<string>) };
      inline ServiceList& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
      inline ServiceList& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ServiceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline ServiceList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // saeAppId Field Functions 
      bool hasSaeAppId() const { return this->saeAppId_ != nullptr;};
      void deleteSaeAppId() { this->saeAppId_ = nullptr;};
      inline string getSaeAppId() const { DARABONBA_PTR_GET_DEFAULT(saeAppId_, "") };
      inline ServiceList& setSaeAppId(string saeAppId) { DARABONBA_PTR_SET_VALUE(saeAppId_, saeAppId) };


      // servicePort Field Functions 
      bool hasServicePort() const { return this->servicePort_ != nullptr;};
      void deleteServicePort() { this->servicePort_ = nullptr;};
      inline int64_t getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0L) };
      inline ServiceList& setServicePort(int64_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


      // serviceProtocol Field Functions 
      bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
      void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
      inline string getServiceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
      inline ServiceList& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


    protected:
      shared_ptr<vector<string>> dnsServerList_ {};
      // The group.
      shared_ptr<string> groupName_ {};
      // The IP addresses of the service.
      shared_ptr<vector<string>> ips_ {};
      // The name of the service.
      shared_ptr<string> name_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      shared_ptr<string> saeAppId_ {};
      // The port of the service.
      shared_ptr<int64_t> servicePort_ {};
      // The protocol of the service.
      shared_ptr<string> serviceProtocol_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->fcAlias_ == nullptr && this->fcServiceName_ == nullptr && this->fcVersion_ == nullptr && this->gatewayUniqueId_ == nullptr && this->serviceList_ == nullptr
        && this->sourceId_ == nullptr && this->sourceType_ == nullptr && this->tlsSetting_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ImportServicesRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // fcAlias Field Functions 
    bool hasFcAlias() const { return this->fcAlias_ != nullptr;};
    void deleteFcAlias() { this->fcAlias_ = nullptr;};
    inline string getFcAlias() const { DARABONBA_PTR_GET_DEFAULT(fcAlias_, "") };
    inline ImportServicesRequest& setFcAlias(string fcAlias) { DARABONBA_PTR_SET_VALUE(fcAlias_, fcAlias) };


    // fcServiceName Field Functions 
    bool hasFcServiceName() const { return this->fcServiceName_ != nullptr;};
    void deleteFcServiceName() { this->fcServiceName_ = nullptr;};
    inline string getFcServiceName() const { DARABONBA_PTR_GET_DEFAULT(fcServiceName_, "") };
    inline ImportServicesRequest& setFcServiceName(string fcServiceName) { DARABONBA_PTR_SET_VALUE(fcServiceName_, fcServiceName) };


    // fcVersion Field Functions 
    bool hasFcVersion() const { return this->fcVersion_ != nullptr;};
    void deleteFcVersion() { this->fcVersion_ = nullptr;};
    inline string getFcVersion() const { DARABONBA_PTR_GET_DEFAULT(fcVersion_, "") };
    inline ImportServicesRequest& setFcVersion(string fcVersion) { DARABONBA_PTR_SET_VALUE(fcVersion_, fcVersion) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline ImportServicesRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // serviceList Field Functions 
    bool hasServiceList() const { return this->serviceList_ != nullptr;};
    void deleteServiceList() { this->serviceList_ = nullptr;};
    inline const vector<ImportServicesRequest::ServiceList> & getServiceList() const { DARABONBA_PTR_GET_CONST(serviceList_, vector<ImportServicesRequest::ServiceList>) };
    inline vector<ImportServicesRequest::ServiceList> getServiceList() { DARABONBA_PTR_GET(serviceList_, vector<ImportServicesRequest::ServiceList>) };
    inline ImportServicesRequest& setServiceList(const vector<ImportServicesRequest::ServiceList> & serviceList) { DARABONBA_PTR_SET_VALUE(serviceList_, serviceList) };
    inline ImportServicesRequest& setServiceList(vector<ImportServicesRequest::ServiceList> && serviceList) { DARABONBA_PTR_SET_RVALUE(serviceList_, serviceList) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline ImportServicesRequest& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ImportServicesRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // tlsSetting Field Functions 
    bool hasTlsSetting() const { return this->tlsSetting_ != nullptr;};
    void deleteTlsSetting() { this->tlsSetting_ = nullptr;};
    inline string getTlsSetting() const { DARABONBA_PTR_GET_DEFAULT(tlsSetting_, "") };
    inline ImportServicesRequest& setTlsSetting(string tlsSetting) { DARABONBA_PTR_SET_VALUE(tlsSetting_, tlsSetting) };


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
    shared_ptr<vector<ImportServicesRequest::ServiceList>> serviceList_ {};
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
