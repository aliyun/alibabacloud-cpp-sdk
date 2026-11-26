// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetSecurityInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEmail, securityEmail_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEmail, securityEmail_);
    };
    GetSecurityInfoResponseBody() = default ;
    GetSecurityInfoResponseBody(const GetSecurityInfoResponseBody &) = default ;
    GetSecurityInfoResponseBody(GetSecurityInfoResponseBody &&) = default ;
    GetSecurityInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityInfoResponseBody() = default ;
    GetSecurityInfoResponseBody& operator=(const GetSecurityInfoResponseBody &) = default ;
    GetSecurityInfoResponseBody& operator=(GetSecurityInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityEmail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityEmail& obj) { 
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityEmail& obj) { 
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      SecurityEmail() = default ;
      SecurityEmail(const SecurityEmail &) = default ;
      SecurityEmail(SecurityEmail &&) = default ;
      SecurityEmail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityEmail() = default ;
      SecurityEmail& operator=(const SecurityEmail &) = default ;
      SecurityEmail& operator=(SecurityEmail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->email_ == nullptr
        && this->status_ == nullptr; };
      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline SecurityEmail& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SecurityEmail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The security email address of the user.
      shared_ptr<string> email_ {};
      // The verification status of the security email address. Valid values:
      // 
      // - active: Verified.
      // - pending: Pending verification.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->securityEmail_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecurityInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEmail Field Functions 
    bool hasSecurityEmail() const { return this->securityEmail_ != nullptr;};
    void deleteSecurityEmail() { this->securityEmail_ = nullptr;};
    inline const GetSecurityInfoResponseBody::SecurityEmail & getSecurityEmail() const { DARABONBA_PTR_GET_CONST(securityEmail_, GetSecurityInfoResponseBody::SecurityEmail) };
    inline GetSecurityInfoResponseBody::SecurityEmail getSecurityEmail() { DARABONBA_PTR_GET(securityEmail_, GetSecurityInfoResponseBody::SecurityEmail) };
    inline GetSecurityInfoResponseBody& setSecurityEmail(const GetSecurityInfoResponseBody::SecurityEmail & securityEmail) { DARABONBA_PTR_SET_VALUE(securityEmail_, securityEmail) };
    inline GetSecurityInfoResponseBody& setSecurityEmail(GetSecurityInfoResponseBody::SecurityEmail && securityEmail) { DARABONBA_PTR_SET_RVALUE(securityEmail_, securityEmail) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The security email information of the user.
    // 
    // > If the user has not configured a security email address, this field is not returned.
    shared_ptr<GetSecurityInfoResponseBody::SecurityEmail> securityEmail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
