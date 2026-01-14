// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMROUTINGENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMROUTINGENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DeleteCustomRoutingEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomRoutingEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomRoutingEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteCustomRoutingEndpointsResponseBody() = default ;
    DeleteCustomRoutingEndpointsResponseBody(const DeleteCustomRoutingEndpointsResponseBody &) = default ;
    DeleteCustomRoutingEndpointsResponseBody(DeleteCustomRoutingEndpointsResponseBody &&) = default ;
    DeleteCustomRoutingEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomRoutingEndpointsResponseBody() = default ;
    DeleteCustomRoutingEndpointsResponseBody& operator=(const DeleteCustomRoutingEndpointsResponseBody &) = default ;
    DeleteCustomRoutingEndpointsResponseBody& operator=(DeleteCustomRoutingEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteCustomRoutingEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
