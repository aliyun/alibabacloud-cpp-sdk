// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONGRANTSCOPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONGRANTSCOPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationGrantScopeResponseBodyApplicationGrantScope.hpp>
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
    virtual bool empty() const override { this->applicationGrantScope_ != nullptr
        && this->requestId_ != nullptr; };
    // applicationGrantScope Field Functions 
    bool hasApplicationGrantScope() const { return this->applicationGrantScope_ != nullptr;};
    void deleteApplicationGrantScope() { this->applicationGrantScope_ = nullptr;};
    inline const GetApplicationGrantScopeResponseBodyApplicationGrantScope & applicationGrantScope() const { DARABONBA_PTR_GET_CONST(applicationGrantScope_, GetApplicationGrantScopeResponseBodyApplicationGrantScope) };
    inline GetApplicationGrantScopeResponseBodyApplicationGrantScope applicationGrantScope() { DARABONBA_PTR_GET(applicationGrantScope_, GetApplicationGrantScopeResponseBodyApplicationGrantScope) };
    inline GetApplicationGrantScopeResponseBody& setApplicationGrantScope(const GetApplicationGrantScopeResponseBodyApplicationGrantScope & applicationGrantScope) { DARABONBA_PTR_SET_VALUE(applicationGrantScope_, applicationGrantScope) };
    inline GetApplicationGrantScopeResponseBody& setApplicationGrantScope(GetApplicationGrantScopeResponseBodyApplicationGrantScope && applicationGrantScope) { DARABONBA_PTR_SET_RVALUE(applicationGrantScope_, applicationGrantScope) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationGrantScopeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The permissions of the Developer API feature.
    std::shared_ptr<GetApplicationGrantScopeResponseBodyApplicationGrantScope> applicationGrantScope_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
