// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRESOLVERENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDRESOLVERENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class AddResolverEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddResolverEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddResolverEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddResolverEndpointResponseBody() = default ;
    AddResolverEndpointResponseBody(const AddResolverEndpointResponseBody &) = default ;
    AddResolverEndpointResponseBody(AddResolverEndpointResponseBody &&) = default ;
    AddResolverEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddResolverEndpointResponseBody() = default ;
    AddResolverEndpointResponseBody& operator=(const AddResolverEndpointResponseBody &) = default ;
    AddResolverEndpointResponseBody& operator=(AddResolverEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpointId_ == nullptr
        && this->requestId_ == nullptr; };
    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline AddResolverEndpointResponseBody& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddResolverEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The endpoint ID.
    shared_ptr<string> endpointId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
