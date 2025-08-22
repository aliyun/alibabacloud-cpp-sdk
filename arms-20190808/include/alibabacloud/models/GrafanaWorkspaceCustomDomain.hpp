// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACECUSTOMDOMAIN_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACECUSTOMDOMAIN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceCustomDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceCustomDomain& obj) { 
      DARABONBA_PTR_TO_JSON(cert, cert_);
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(grafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(privateZone, privateZone_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceCustomDomain& obj) { 
      DARABONBA_PTR_FROM_JSON(cert, cert_);
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(grafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(privateZone, privateZone_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(uri, uri_);
    };
    GrafanaWorkspaceCustomDomain() = default ;
    GrafanaWorkspaceCustomDomain(const GrafanaWorkspaceCustomDomain &) = default ;
    GrafanaWorkspaceCustomDomain(GrafanaWorkspaceCustomDomain &&) = default ;
    GrafanaWorkspaceCustomDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceCustomDomain() = default ;
    GrafanaWorkspaceCustomDomain& operator=(const GrafanaWorkspaceCustomDomain &) = default ;
    GrafanaWorkspaceCustomDomain& operator=(GrafanaWorkspaceCustomDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cert_ != nullptr
        && this->date_ != nullptr && this->domain_ != nullptr && this->grafanaWorkspaceId_ != nullptr && this->id_ != nullptr && this->key_ != nullptr
        && this->privateZone_ != nullptr && this->protocol_ != nullptr && this->status_ != nullptr && this->uri_ != nullptr; };
    // cert Field Functions 
    bool hasCert() const { return this->cert_ != nullptr;};
    void deleteCert() { this->cert_ = nullptr;};
    inline string cert() const { DARABONBA_PTR_GET_DEFAULT(cert_, "") };
    inline GrafanaWorkspaceCustomDomain& setCert(string cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline int64_t date() const { DARABONBA_PTR_GET_DEFAULT(date_, 0L) };
    inline GrafanaWorkspaceCustomDomain& setDate(int64_t date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GrafanaWorkspaceCustomDomain& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // grafanaWorkspaceId Field Functions 
    bool hasGrafanaWorkspaceId() const { return this->grafanaWorkspaceId_ != nullptr;};
    void deleteGrafanaWorkspaceId() { this->grafanaWorkspaceId_ = nullptr;};
    inline string grafanaWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceId_, "") };
    inline GrafanaWorkspaceCustomDomain& setGrafanaWorkspaceId(string grafanaWorkspaceId) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceId_, grafanaWorkspaceId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GrafanaWorkspaceCustomDomain& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GrafanaWorkspaceCustomDomain& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // privateZone Field Functions 
    bool hasPrivateZone() const { return this->privateZone_ != nullptr;};
    void deletePrivateZone() { this->privateZone_ = nullptr;};
    inline string privateZone() const { DARABONBA_PTR_GET_DEFAULT(privateZone_, "") };
    inline GrafanaWorkspaceCustomDomain& setPrivateZone(string privateZone) { DARABONBA_PTR_SET_VALUE(privateZone_, privateZone) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GrafanaWorkspaceCustomDomain& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GrafanaWorkspaceCustomDomain& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline GrafanaWorkspaceCustomDomain& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    std::shared_ptr<string> cert_ = nullptr;
    std::shared_ptr<int64_t> date_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> grafanaWorkspaceId_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> privateZone_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
