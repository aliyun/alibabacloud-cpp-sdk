// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMROUTINGENDPOINTGROUPDESTINATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMROUTINGENDPOINTGROUPDESTINATIONSRESPONSEBODY_HPP_
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
  class CreateCustomRoutingEndpointGroupDestinationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomRoutingEndpointGroupDestinationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationIds, destinationIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomRoutingEndpointGroupDestinationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationIds, destinationIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCustomRoutingEndpointGroupDestinationsResponseBody() = default ;
    CreateCustomRoutingEndpointGroupDestinationsResponseBody(const CreateCustomRoutingEndpointGroupDestinationsResponseBody &) = default ;
    CreateCustomRoutingEndpointGroupDestinationsResponseBody(CreateCustomRoutingEndpointGroupDestinationsResponseBody &&) = default ;
    CreateCustomRoutingEndpointGroupDestinationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomRoutingEndpointGroupDestinationsResponseBody() = default ;
    CreateCustomRoutingEndpointGroupDestinationsResponseBody& operator=(const CreateCustomRoutingEndpointGroupDestinationsResponseBody &) = default ;
    CreateCustomRoutingEndpointGroupDestinationsResponseBody& operator=(CreateCustomRoutingEndpointGroupDestinationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationIds_ == nullptr
        && this->requestId_ == nullptr; };
    // destinationIds Field Functions 
    bool hasDestinationIds() const { return this->destinationIds_ != nullptr;};
    void deleteDestinationIds() { this->destinationIds_ = nullptr;};
    inline const vector<string> & getDestinationIds() const { DARABONBA_PTR_GET_CONST(destinationIds_, vector<string>) };
    inline vector<string> getDestinationIds() { DARABONBA_PTR_GET(destinationIds_, vector<string>) };
    inline CreateCustomRoutingEndpointGroupDestinationsResponseBody& setDestinationIds(const vector<string> & destinationIds) { DARABONBA_PTR_SET_VALUE(destinationIds_, destinationIds) };
    inline CreateCustomRoutingEndpointGroupDestinationsResponseBody& setDestinationIds(vector<string> && destinationIds) { DARABONBA_PTR_SET_RVALUE(destinationIds_, destinationIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCustomRoutingEndpointGroupDestinationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the endpoint group mappings.
    shared_ptr<vector<string>> destinationIds_ {};
    // The IDs of the endpoint group mappings.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
