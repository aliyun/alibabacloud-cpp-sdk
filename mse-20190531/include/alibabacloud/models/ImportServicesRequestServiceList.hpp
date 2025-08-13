// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTSERVICESREQUESTSERVICELIST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTSERVICESREQUESTSERVICELIST_HPP_
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
  class ImportServicesRequestServiceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportServicesRequestServiceList& obj) { 
      DARABONBA_PTR_TO_JSON(DnsServerList, dnsServerList_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(SaeAppId, saeAppId_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(ServiceProtocol, serviceProtocol_);
    };
    friend void from_json(const Darabonba::Json& j, ImportServicesRequestServiceList& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsServerList, dnsServerList_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(SaeAppId, saeAppId_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(ServiceProtocol, serviceProtocol_);
    };
    ImportServicesRequestServiceList() = default ;
    ImportServicesRequestServiceList(const ImportServicesRequestServiceList &) = default ;
    ImportServicesRequestServiceList(ImportServicesRequestServiceList &&) = default ;
    ImportServicesRequestServiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportServicesRequestServiceList() = default ;
    ImportServicesRequestServiceList& operator=(const ImportServicesRequestServiceList &) = default ;
    ImportServicesRequestServiceList& operator=(ImportServicesRequestServiceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dnsServerList_ != nullptr
        && this->groupName_ != nullptr && this->ips_ != nullptr && this->name_ != nullptr && this->namespace_ != nullptr && this->saeAppId_ != nullptr
        && this->servicePort_ != nullptr && this->serviceProtocol_ != nullptr; };
    // dnsServerList Field Functions 
    bool hasDnsServerList() const { return this->dnsServerList_ != nullptr;};
    void deleteDnsServerList() { this->dnsServerList_ = nullptr;};
    inline const vector<string> & dnsServerList() const { DARABONBA_PTR_GET_CONST(dnsServerList_, vector<string>) };
    inline vector<string> dnsServerList() { DARABONBA_PTR_GET(dnsServerList_, vector<string>) };
    inline ImportServicesRequestServiceList& setDnsServerList(const vector<string> & dnsServerList) { DARABONBA_PTR_SET_VALUE(dnsServerList_, dnsServerList) };
    inline ImportServicesRequestServiceList& setDnsServerList(vector<string> && dnsServerList) { DARABONBA_PTR_SET_RVALUE(dnsServerList_, dnsServerList) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ImportServicesRequestServiceList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<string> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
    inline vector<string> ips() { DARABONBA_PTR_GET(ips_, vector<string>) };
    inline ImportServicesRequestServiceList& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline ImportServicesRequestServiceList& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ImportServicesRequestServiceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ImportServicesRequestServiceList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // saeAppId Field Functions 
    bool hasSaeAppId() const { return this->saeAppId_ != nullptr;};
    void deleteSaeAppId() { this->saeAppId_ = nullptr;};
    inline string saeAppId() const { DARABONBA_PTR_GET_DEFAULT(saeAppId_, "") };
    inline ImportServicesRequestServiceList& setSaeAppId(string saeAppId) { DARABONBA_PTR_SET_VALUE(saeAppId_, saeAppId) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline int64_t servicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0L) };
    inline ImportServicesRequestServiceList& setServicePort(int64_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // serviceProtocol Field Functions 
    bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
    void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
    inline string serviceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
    inline ImportServicesRequestServiceList& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


  protected:
    std::shared_ptr<vector<string>> dnsServerList_ = nullptr;
    // The group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The IP addresses of the service.
    std::shared_ptr<vector<string>> ips_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> saeAppId_ = nullptr;
    // The port of the service.
    std::shared_ptr<int64_t> servicePort_ = nullptr;
    // The protocol of the service.
    std::shared_ptr<string> serviceProtocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
