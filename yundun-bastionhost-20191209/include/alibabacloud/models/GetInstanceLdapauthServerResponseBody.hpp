// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELDAPAUTHSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELDAPAUTHSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceLDAPAuthServerResponseBodyLDAP.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetInstanceLDAPAuthServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceLDAPAuthServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LDAP, LDAP_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceLDAPAuthServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LDAP, LDAP_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceLDAPAuthServerResponseBody() = default ;
    GetInstanceLDAPAuthServerResponseBody(const GetInstanceLDAPAuthServerResponseBody &) = default ;
    GetInstanceLDAPAuthServerResponseBody(GetInstanceLDAPAuthServerResponseBody &&) = default ;
    GetInstanceLDAPAuthServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceLDAPAuthServerResponseBody() = default ;
    GetInstanceLDAPAuthServerResponseBody& operator=(const GetInstanceLDAPAuthServerResponseBody &) = default ;
    GetInstanceLDAPAuthServerResponseBody& operator=(GetInstanceLDAPAuthServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->LDAP_ != nullptr
        && this->requestId_ != nullptr; };
    // LDAP Field Functions 
    bool hasLDAP() const { return this->LDAP_ != nullptr;};
    void deleteLDAP() { this->LDAP_ = nullptr;};
    inline const GetInstanceLDAPAuthServerResponseBodyLDAP & LDAP() const { DARABONBA_PTR_GET_CONST(LDAP_, GetInstanceLDAPAuthServerResponseBodyLDAP) };
    inline GetInstanceLDAPAuthServerResponseBodyLDAP LDAP() { DARABONBA_PTR_GET(LDAP_, GetInstanceLDAPAuthServerResponseBodyLDAP) };
    inline GetInstanceLDAPAuthServerResponseBody& setLDAP(const GetInstanceLDAPAuthServerResponseBodyLDAP & LDAP) { DARABONBA_PTR_SET_VALUE(LDAP_, LDAP) };
    inline GetInstanceLDAPAuthServerResponseBody& setLDAP(GetInstanceLDAPAuthServerResponseBodyLDAP && LDAP) { DARABONBA_PTR_SET_RVALUE(LDAP_, LDAP) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceLDAPAuthServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The settings of LDAP authentication.
    std::shared_ptr<GetInstanceLDAPAuthServerResponseBodyLDAP> LDAP_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
