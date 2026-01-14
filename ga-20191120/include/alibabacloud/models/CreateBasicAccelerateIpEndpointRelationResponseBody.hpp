// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBASICACCELERATEIPENDPOINTRELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEBASICACCELERATEIPENDPOINTRELATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class CreateBasicAccelerateIpEndpointRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBasicAccelerateIpEndpointRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerateIpId, accelerateIpId_);
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBasicAccelerateIpEndpointRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerateIpId, accelerateIpId_);
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    CreateBasicAccelerateIpEndpointRelationResponseBody() = default ;
    CreateBasicAccelerateIpEndpointRelationResponseBody(const CreateBasicAccelerateIpEndpointRelationResponseBody &) = default ;
    CreateBasicAccelerateIpEndpointRelationResponseBody(CreateBasicAccelerateIpEndpointRelationResponseBody &&) = default ;
    CreateBasicAccelerateIpEndpointRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBasicAccelerateIpEndpointRelationResponseBody() = default ;
    CreateBasicAccelerateIpEndpointRelationResponseBody& operator=(const CreateBasicAccelerateIpEndpointRelationResponseBody &) = default ;
    CreateBasicAccelerateIpEndpointRelationResponseBody& operator=(CreateBasicAccelerateIpEndpointRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accelerateIpId_ == nullptr
        && this->acceleratorId_ == nullptr && this->endpointId_ == nullptr && this->requestId_ == nullptr && this->state_ == nullptr; };
    // accelerateIpId Field Functions 
    bool hasAccelerateIpId() const { return this->accelerateIpId_ != nullptr;};
    void deleteAccelerateIpId() { this->accelerateIpId_ = nullptr;};
    inline string getAccelerateIpId() const { DARABONBA_PTR_GET_DEFAULT(accelerateIpId_, "") };
    inline CreateBasicAccelerateIpEndpointRelationResponseBody& setAccelerateIpId(string accelerateIpId) { DARABONBA_PTR_SET_VALUE(accelerateIpId_, accelerateIpId) };


    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline CreateBasicAccelerateIpEndpointRelationResponseBody& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline CreateBasicAccelerateIpEndpointRelationResponseBody& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateBasicAccelerateIpEndpointRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateBasicAccelerateIpEndpointRelationResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The ID of the accelerated IP address of the basic GA instance.
    shared_ptr<string> accelerateIpId_ {};
    // The ID of the basic GA instance.
    shared_ptr<string> acceleratorId_ {};
    // The ID of the endpoint that is associated with the basic GA instance.
    shared_ptr<string> endpointId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the mapping between the accelerated IP address and the endpoint.
    // 
    // >  This parameter is not in use.
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
