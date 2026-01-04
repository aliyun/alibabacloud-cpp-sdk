// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPLICATIONGRANTSCOPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETAPPLICATIONGRANTSCOPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetApplicationGrantScopeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApplicationGrantScopeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetApplicationGrantScopeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetApplicationGrantScopeResponseBody() = default ;
    SetApplicationGrantScopeResponseBody(const SetApplicationGrantScopeResponseBody &) = default ;
    SetApplicationGrantScopeResponseBody(SetApplicationGrantScopeResponseBody &&) = default ;
    SetApplicationGrantScopeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApplicationGrantScopeResponseBody() = default ;
    SetApplicationGrantScopeResponseBody& operator=(const SetApplicationGrantScopeResponseBody &) = default ;
    SetApplicationGrantScopeResponseBody& operator=(SetApplicationGrantScopeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetApplicationGrantScopeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
