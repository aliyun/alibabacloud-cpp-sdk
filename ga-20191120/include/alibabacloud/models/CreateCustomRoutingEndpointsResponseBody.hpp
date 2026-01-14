// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMROUTINGENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMROUTINGENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class CreateCustomRoutingEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomRoutingEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointIds, endpointIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomRoutingEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointIds, endpointIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCustomRoutingEndpointsResponseBody() = default ;
    CreateCustomRoutingEndpointsResponseBody(const CreateCustomRoutingEndpointsResponseBody &) = default ;
    CreateCustomRoutingEndpointsResponseBody(CreateCustomRoutingEndpointsResponseBody &&) = default ;
    CreateCustomRoutingEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomRoutingEndpointsResponseBody() = default ;
    CreateCustomRoutingEndpointsResponseBody& operator=(const CreateCustomRoutingEndpointsResponseBody &) = default ;
    CreateCustomRoutingEndpointsResponseBody& operator=(CreateCustomRoutingEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpointIds_ == nullptr
        && this->requestId_ == nullptr; };
    // endpointIds Field Functions 
    bool hasEndpointIds() const { return this->endpointIds_ != nullptr;};
    void deleteEndpointIds() { this->endpointIds_ = nullptr;};
    inline const vector<string> & getEndpointIds() const { DARABONBA_PTR_GET_CONST(endpointIds_, vector<string>) };
    inline vector<string> getEndpointIds() { DARABONBA_PTR_GET(endpointIds_, vector<string>) };
    inline CreateCustomRoutingEndpointsResponseBody& setEndpointIds(const vector<string> & endpointIds) { DARABONBA_PTR_SET_VALUE(endpointIds_, endpointIds) };
    inline CreateCustomRoutingEndpointsResponseBody& setEndpointIds(vector<string> && endpointIds) { DARABONBA_PTR_SET_RVALUE(endpointIds_, endpointIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCustomRoutingEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the endpoints.
    shared_ptr<vector<string>> endpointIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
