// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEAPPLICATIONTOORGANIZATIONALUNITSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEAPPLICATIONTOORGANIZATIONALUNITSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class AuthorizeApplicationToOrganizationalUnitsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeApplicationToOrganizationalUnitsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeApplicationToOrganizationalUnitsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AuthorizeApplicationToOrganizationalUnitsResponseBody() = default ;
    AuthorizeApplicationToOrganizationalUnitsResponseBody(const AuthorizeApplicationToOrganizationalUnitsResponseBody &) = default ;
    AuthorizeApplicationToOrganizationalUnitsResponseBody(AuthorizeApplicationToOrganizationalUnitsResponseBody &&) = default ;
    AuthorizeApplicationToOrganizationalUnitsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeApplicationToOrganizationalUnitsResponseBody() = default ;
    AuthorizeApplicationToOrganizationalUnitsResponseBody& operator=(const AuthorizeApplicationToOrganizationalUnitsResponseBody &) = default ;
    AuthorizeApplicationToOrganizationalUnitsResponseBody& operator=(AuthorizeApplicationToOrganizationalUnitsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AuthorizeApplicationToOrganizationalUnitsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
