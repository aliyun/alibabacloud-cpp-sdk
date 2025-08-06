// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINGSCOPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINGSCOPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationProvisioningScopeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationProvisioningScopeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationProvisioningScope, applicationProvisioningScope_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationProvisioningScopeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationProvisioningScope, applicationProvisioningScope_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationProvisioningScopeResponseBody() = default ;
    GetApplicationProvisioningScopeResponseBody(const GetApplicationProvisioningScopeResponseBody &) = default ;
    GetApplicationProvisioningScopeResponseBody(GetApplicationProvisioningScopeResponseBody &&) = default ;
    GetApplicationProvisioningScopeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationProvisioningScopeResponseBody() = default ;
    GetApplicationProvisioningScopeResponseBody& operator=(const GetApplicationProvisioningScopeResponseBody &) = default ;
    GetApplicationProvisioningScopeResponseBody& operator=(GetApplicationProvisioningScopeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationProvisioningScope_ != nullptr
        && this->requestId_ != nullptr; };
    // applicationProvisioningScope Field Functions 
    bool hasApplicationProvisioningScope() const { return this->applicationProvisioningScope_ != nullptr;};
    void deleteApplicationProvisioningScope() { this->applicationProvisioningScope_ = nullptr;};
    inline const GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope & applicationProvisioningScope() const { DARABONBA_PTR_GET_CONST(applicationProvisioningScope_, GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope) };
    inline GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope applicationProvisioningScope() { DARABONBA_PTR_GET(applicationProvisioningScope_, GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope) };
    inline GetApplicationProvisioningScopeResponseBody& setApplicationProvisioningScope(const GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope & applicationProvisioningScope) { DARABONBA_PTR_SET_VALUE(applicationProvisioningScope_, applicationProvisioningScope) };
    inline GetApplicationProvisioningScopeResponseBody& setApplicationProvisioningScope(GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope && applicationProvisioningScope) { DARABONBA_PTR_SET_RVALUE(applicationProvisioningScope_, applicationProvisioningScope) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationProvisioningScopeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The scope of account synchronization.
    std::shared_ptr<GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope> applicationProvisioningScope_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
