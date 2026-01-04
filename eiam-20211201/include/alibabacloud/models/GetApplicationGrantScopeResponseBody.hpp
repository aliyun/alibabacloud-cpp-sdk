// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONGRANTSCOPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONGRANTSCOPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationGrantScopeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationGrantScopeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationGrantScope, applicationGrantScope_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationGrantScopeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationGrantScope, applicationGrantScope_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationGrantScopeResponseBody() = default ;
    GetApplicationGrantScopeResponseBody(const GetApplicationGrantScopeResponseBody &) = default ;
    GetApplicationGrantScopeResponseBody(GetApplicationGrantScopeResponseBody &&) = default ;
    GetApplicationGrantScopeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationGrantScopeResponseBody() = default ;
    GetApplicationGrantScopeResponseBody& operator=(const GetApplicationGrantScopeResponseBody &) = default ;
    GetApplicationGrantScopeResponseBody& operator=(GetApplicationGrantScopeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationGrantScope : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationGrantScope& obj) { 
        DARABONBA_PTR_TO_JSON(GrantScopes, grantScopes_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationGrantScope& obj) { 
        DARABONBA_PTR_FROM_JSON(GrantScopes, grantScopes_);
      };
      ApplicationGrantScope() = default ;
      ApplicationGrantScope(const ApplicationGrantScope &) = default ;
      ApplicationGrantScope(ApplicationGrantScope &&) = default ;
      ApplicationGrantScope(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationGrantScope() = default ;
      ApplicationGrantScope& operator=(const ApplicationGrantScope &) = default ;
      ApplicationGrantScope& operator=(ApplicationGrantScope &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->grantScopes_ == nullptr; };
      // grantScopes Field Functions 
      bool hasGrantScopes() const { return this->grantScopes_ != nullptr;};
      void deleteGrantScopes() { this->grantScopes_ = nullptr;};
      inline const vector<string> & getGrantScopes() const { DARABONBA_PTR_GET_CONST(grantScopes_, vector<string>) };
      inline vector<string> getGrantScopes() { DARABONBA_PTR_GET(grantScopes_, vector<string>) };
      inline ApplicationGrantScope& setGrantScopes(const vector<string> & grantScopes) { DARABONBA_PTR_SET_VALUE(grantScopes_, grantScopes) };
      inline ApplicationGrantScope& setGrantScopes(vector<string> && grantScopes) { DARABONBA_PTR_SET_RVALUE(grantScopes_, grantScopes) };


    protected:
      // The permissions of the Developer API feature.
      shared_ptr<vector<string>> grantScopes_ {};
    };

    virtual bool empty() const override { return this->applicationGrantScope_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationGrantScope Field Functions 
    bool hasApplicationGrantScope() const { return this->applicationGrantScope_ != nullptr;};
    void deleteApplicationGrantScope() { this->applicationGrantScope_ = nullptr;};
    inline const GetApplicationGrantScopeResponseBody::ApplicationGrantScope & getApplicationGrantScope() const { DARABONBA_PTR_GET_CONST(applicationGrantScope_, GetApplicationGrantScopeResponseBody::ApplicationGrantScope) };
    inline GetApplicationGrantScopeResponseBody::ApplicationGrantScope getApplicationGrantScope() { DARABONBA_PTR_GET(applicationGrantScope_, GetApplicationGrantScopeResponseBody::ApplicationGrantScope) };
    inline GetApplicationGrantScopeResponseBody& setApplicationGrantScope(const GetApplicationGrantScopeResponseBody::ApplicationGrantScope & applicationGrantScope) { DARABONBA_PTR_SET_VALUE(applicationGrantScope_, applicationGrantScope) };
    inline GetApplicationGrantScopeResponseBody& setApplicationGrantScope(GetApplicationGrantScopeResponseBody::ApplicationGrantScope && applicationGrantScope) { DARABONBA_PTR_SET_RVALUE(applicationGrantScope_, applicationGrantScope) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationGrantScopeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The permissions of the Developer API feature.
    shared_ptr<GetApplicationGrantScopeResponseBody::ApplicationGrantScope> applicationGrantScope_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
