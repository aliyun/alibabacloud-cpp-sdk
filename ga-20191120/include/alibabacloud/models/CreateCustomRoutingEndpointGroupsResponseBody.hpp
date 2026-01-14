// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMROUTINGENDPOINTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMROUTINGENDPOINTGROUPSRESPONSEBODY_HPP_
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
  class CreateCustomRoutingEndpointGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomRoutingEndpointGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointGroupIds, endpointGroupIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomRoutingEndpointGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointGroupIds, endpointGroupIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCustomRoutingEndpointGroupsResponseBody() = default ;
    CreateCustomRoutingEndpointGroupsResponseBody(const CreateCustomRoutingEndpointGroupsResponseBody &) = default ;
    CreateCustomRoutingEndpointGroupsResponseBody(CreateCustomRoutingEndpointGroupsResponseBody &&) = default ;
    CreateCustomRoutingEndpointGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomRoutingEndpointGroupsResponseBody() = default ;
    CreateCustomRoutingEndpointGroupsResponseBody& operator=(const CreateCustomRoutingEndpointGroupsResponseBody &) = default ;
    CreateCustomRoutingEndpointGroupsResponseBody& operator=(CreateCustomRoutingEndpointGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpointGroupIds_ == nullptr
        && this->requestId_ == nullptr; };
    // endpointGroupIds Field Functions 
    bool hasEndpointGroupIds() const { return this->endpointGroupIds_ != nullptr;};
    void deleteEndpointGroupIds() { this->endpointGroupIds_ = nullptr;};
    inline const vector<string> & getEndpointGroupIds() const { DARABONBA_PTR_GET_CONST(endpointGroupIds_, vector<string>) };
    inline vector<string> getEndpointGroupIds() { DARABONBA_PTR_GET(endpointGroupIds_, vector<string>) };
    inline CreateCustomRoutingEndpointGroupsResponseBody& setEndpointGroupIds(const vector<string> & endpointGroupIds) { DARABONBA_PTR_SET_VALUE(endpointGroupIds_, endpointGroupIds) };
    inline CreateCustomRoutingEndpointGroupsResponseBody& setEndpointGroupIds(vector<string> && endpointGroupIds) { DARABONBA_PTR_SET_RVALUE(endpointGroupIds_, endpointGroupIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCustomRoutingEndpointGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the endpoint groups.
    shared_ptr<vector<string>> endpointGroupIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
