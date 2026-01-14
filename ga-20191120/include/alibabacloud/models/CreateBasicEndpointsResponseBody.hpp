// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBASICENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEBASICENDPOINTSRESPONSEBODY_HPP_
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
  class CreateBasicEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBasicEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBasicEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateBasicEndpointsResponseBody() = default ;
    CreateBasicEndpointsResponseBody(const CreateBasicEndpointsResponseBody &) = default ;
    CreateBasicEndpointsResponseBody(CreateBasicEndpointsResponseBody &&) = default ;
    CreateBasicEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBasicEndpointsResponseBody() = default ;
    CreateBasicEndpointsResponseBody& operator=(const CreateBasicEndpointsResponseBody &) = default ;
    CreateBasicEndpointsResponseBody& operator=(CreateBasicEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Endpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
        DARABONBA_PTR_TO_JSON(EndpointAddress, endpointAddress_);
        DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_TO_JSON(EndpointSubAddress, endpointSubAddress_);
        DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(EndpointAddress, endpointAddress_);
        DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_FROM_JSON(EndpointSubAddress, endpointSubAddress_);
        DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      };
      Endpoints() = default ;
      Endpoints(const Endpoints &) = default ;
      Endpoints(Endpoints &&) = default ;
      Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Endpoints() = default ;
      Endpoints& operator=(const Endpoints &) = default ;
      Endpoints& operator=(Endpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endpointAddress_ == nullptr
        && this->endpointId_ == nullptr && this->endpointSubAddress_ == nullptr && this->endpointType_ == nullptr; };
      // endpointAddress Field Functions 
      bool hasEndpointAddress() const { return this->endpointAddress_ != nullptr;};
      void deleteEndpointAddress() { this->endpointAddress_ = nullptr;};
      inline string getEndpointAddress() const { DARABONBA_PTR_GET_DEFAULT(endpointAddress_, "") };
      inline Endpoints& setEndpointAddress(string endpointAddress) { DARABONBA_PTR_SET_VALUE(endpointAddress_, endpointAddress) };


      // endpointId Field Functions 
      bool hasEndpointId() const { return this->endpointId_ != nullptr;};
      void deleteEndpointId() { this->endpointId_ = nullptr;};
      inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
      inline Endpoints& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


      // endpointSubAddress Field Functions 
      bool hasEndpointSubAddress() const { return this->endpointSubAddress_ != nullptr;};
      void deleteEndpointSubAddress() { this->endpointSubAddress_ = nullptr;};
      inline string getEndpointSubAddress() const { DARABONBA_PTR_GET_DEFAULT(endpointSubAddress_, "") };
      inline Endpoints& setEndpointSubAddress(string endpointSubAddress) { DARABONBA_PTR_SET_VALUE(endpointSubAddress_, endpointSubAddress) };


      // endpointType Field Functions 
      bool hasEndpointType() const { return this->endpointType_ != nullptr;};
      void deleteEndpointType() { this->endpointType_ = nullptr;};
      inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
      inline Endpoints& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    protected:
      // The address of the endpoint.
      shared_ptr<string> endpointAddress_ {};
      // The ID of the endpoint.
      shared_ptr<string> endpointId_ {};
      // The secondary address of the endpoint.
      // 
      // This parameter is returned if the endpoint type is **ECS**, **ENI**, or **NLB**.
      // 
      // *   If the endpoint type is **ECS**, **EndpointSubAddress** returns the primary or secondary private IP address of the primary ENI.
      // *   If the endpoint type is **ENI**, **EndpointSubAddress** returns the primary or secondary private IP address of the secondary ENI.
      // *   If the endpoint type is **NLB**, **EndpointSubAddress** returns the primary private IP address of the NLB backend server.
      shared_ptr<string> endpointSubAddress_ {};
      // The type of the endpoint. Valid values:
      // 
      // *   **ENI:** ENI.
      // *   **SLB:** CLB instance.
      // *   **ECS:** ECS instance.
      // *   **NLB:** NLB instance.
      shared_ptr<string> endpointType_ {};
    };

    virtual bool empty() const override { return this->endpointGroupId_ == nullptr
        && this->endpoints_ == nullptr && this->requestId_ == nullptr; };
    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline CreateBasicEndpointsResponseBody& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<CreateBasicEndpointsResponseBody::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<CreateBasicEndpointsResponseBody::Endpoints>) };
    inline vector<CreateBasicEndpointsResponseBody::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<CreateBasicEndpointsResponseBody::Endpoints>) };
    inline CreateBasicEndpointsResponseBody& setEndpoints(const vector<CreateBasicEndpointsResponseBody::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline CreateBasicEndpointsResponseBody& setEndpoints(vector<CreateBasicEndpointsResponseBody::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateBasicEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the endpoint group.
    shared_ptr<string> endpointGroupId_ {};
    // The endpoints in the endpoint group.
    shared_ptr<vector<CreateBasicEndpointsResponseBody::Endpoints>> endpoints_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
