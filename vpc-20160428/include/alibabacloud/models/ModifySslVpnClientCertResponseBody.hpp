// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSSLVPNCLIENTCERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSSLVPNCLIENTCERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifySslVpnClientCertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySslVpnClientCertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SslVpnClientCertId, sslVpnClientCertId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySslVpnClientCertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SslVpnClientCertId, sslVpnClientCertId_);
    };
    ModifySslVpnClientCertResponseBody() = default ;
    ModifySslVpnClientCertResponseBody(const ModifySslVpnClientCertResponseBody &) = default ;
    ModifySslVpnClientCertResponseBody(ModifySslVpnClientCertResponseBody &&) = default ;
    ModifySslVpnClientCertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySslVpnClientCertResponseBody() = default ;
    ModifySslVpnClientCertResponseBody& operator=(const ModifySslVpnClientCertResponseBody &) = default ;
    ModifySslVpnClientCertResponseBody& operator=(ModifySslVpnClientCertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->requestId_ == nullptr && this->sslVpnClientCertId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifySslVpnClientCertResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifySslVpnClientCertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sslVpnClientCertId Field Functions 
    bool hasSslVpnClientCertId() const { return this->sslVpnClientCertId_ != nullptr;};
    void deleteSslVpnClientCertId() { this->sslVpnClientCertId_ = nullptr;};
    inline string getSslVpnClientCertId() const { DARABONBA_PTR_GET_DEFAULT(sslVpnClientCertId_, "") };
    inline ModifySslVpnClientCertResponseBody& setSslVpnClientCertId(string sslVpnClientCertId) { DARABONBA_PTR_SET_VALUE(sslVpnClientCertId_, sslVpnClientCertId) };


  protected:
    // The name of the SSL client certificate.
    shared_ptr<string> name_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the SSL client certificate.
    shared_ptr<string> sslVpnClientCertId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
