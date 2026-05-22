// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETKEYLESSSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETKEYLESSSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class SetKeylessServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetKeylessServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaCertificate, caCertificate_);
      DARABONBA_PTR_TO_JSON(ClientCertificate, clientCertificate_);
      DARABONBA_PTR_TO_JSON(ClientPrivateKey, clientPrivateKey_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Verify, verify_);
    };
    friend void from_json(const Darabonba::Json& j, SetKeylessServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaCertificate, caCertificate_);
      DARABONBA_PTR_FROM_JSON(ClientCertificate, clientCertificate_);
      DARABONBA_PTR_FROM_JSON(ClientPrivateKey, clientPrivateKey_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Verify, verify_);
    };
    SetKeylessServerRequest() = default ;
    SetKeylessServerRequest(const SetKeylessServerRequest &) = default ;
    SetKeylessServerRequest(SetKeylessServerRequest &&) = default ;
    SetKeylessServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetKeylessServerRequest() = default ;
    SetKeylessServerRequest& operator=(const SetKeylessServerRequest &) = default ;
    SetKeylessServerRequest& operator=(SetKeylessServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caCertificate_ == nullptr
        && this->clientCertificate_ == nullptr && this->clientPrivateKey_ == nullptr && this->host_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->port_ == nullptr && this->siteId_ == nullptr && this->verify_ == nullptr; };
    // caCertificate Field Functions 
    bool hasCaCertificate() const { return this->caCertificate_ != nullptr;};
    void deleteCaCertificate() { this->caCertificate_ = nullptr;};
    inline string getCaCertificate() const { DARABONBA_PTR_GET_DEFAULT(caCertificate_, "") };
    inline SetKeylessServerRequest& setCaCertificate(string caCertificate) { DARABONBA_PTR_SET_VALUE(caCertificate_, caCertificate) };


    // clientCertificate Field Functions 
    bool hasClientCertificate() const { return this->clientCertificate_ != nullptr;};
    void deleteClientCertificate() { this->clientCertificate_ = nullptr;};
    inline string getClientCertificate() const { DARABONBA_PTR_GET_DEFAULT(clientCertificate_, "") };
    inline SetKeylessServerRequest& setClientCertificate(string clientCertificate) { DARABONBA_PTR_SET_VALUE(clientCertificate_, clientCertificate) };


    // clientPrivateKey Field Functions 
    bool hasClientPrivateKey() const { return this->clientPrivateKey_ != nullptr;};
    void deleteClientPrivateKey() { this->clientPrivateKey_ = nullptr;};
    inline string getClientPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(clientPrivateKey_, "") };
    inline SetKeylessServerRequest& setClientPrivateKey(string clientPrivateKey) { DARABONBA_PTR_SET_VALUE(clientPrivateKey_, clientPrivateKey) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline SetKeylessServerRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SetKeylessServerRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SetKeylessServerRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int64_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
    inline SetKeylessServerRequest& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline SetKeylessServerRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // verify Field Functions 
    bool hasVerify() const { return this->verify_ != nullptr;};
    void deleteVerify() { this->verify_ = nullptr;};
    inline bool getVerify() const { DARABONBA_PTR_GET_DEFAULT(verify_, false) };
    inline SetKeylessServerRequest& setVerify(bool verify) { DARABONBA_PTR_SET_VALUE(verify_, verify) };


  protected:
    shared_ptr<string> caCertificate_ {};
    shared_ptr<string> clientCertificate_ {};
    shared_ptr<string> clientPrivateKey_ {};
    // This parameter is required.
    shared_ptr<string> host_ {};
    shared_ptr<string> id_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<int64_t> port_ {};
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    shared_ptr<bool> verify_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
