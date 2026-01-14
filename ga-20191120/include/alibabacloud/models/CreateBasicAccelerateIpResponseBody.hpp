// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBASICACCELERATEIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEBASICACCELERATEIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class CreateBasicAccelerateIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBasicAccelerateIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerateIpAddress, accelerateIpAddress_);
      DARABONBA_PTR_TO_JSON(AccelerateIpId, accelerateIpId_);
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(IpSetId, ipSetId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBasicAccelerateIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerateIpAddress, accelerateIpAddress_);
      DARABONBA_PTR_FROM_JSON(AccelerateIpId, accelerateIpId_);
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(IpSetId, ipSetId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    CreateBasicAccelerateIpResponseBody() = default ;
    CreateBasicAccelerateIpResponseBody(const CreateBasicAccelerateIpResponseBody &) = default ;
    CreateBasicAccelerateIpResponseBody(CreateBasicAccelerateIpResponseBody &&) = default ;
    CreateBasicAccelerateIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBasicAccelerateIpResponseBody() = default ;
    CreateBasicAccelerateIpResponseBody& operator=(const CreateBasicAccelerateIpResponseBody &) = default ;
    CreateBasicAccelerateIpResponseBody& operator=(CreateBasicAccelerateIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accelerateIpAddress_ == nullptr
        && this->accelerateIpId_ == nullptr && this->acceleratorId_ == nullptr && this->ipSetId_ == nullptr && this->requestId_ == nullptr && this->state_ == nullptr; };
    // accelerateIpAddress Field Functions 
    bool hasAccelerateIpAddress() const { return this->accelerateIpAddress_ != nullptr;};
    void deleteAccelerateIpAddress() { this->accelerateIpAddress_ = nullptr;};
    inline string getAccelerateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(accelerateIpAddress_, "") };
    inline CreateBasicAccelerateIpResponseBody& setAccelerateIpAddress(string accelerateIpAddress) { DARABONBA_PTR_SET_VALUE(accelerateIpAddress_, accelerateIpAddress) };


    // accelerateIpId Field Functions 
    bool hasAccelerateIpId() const { return this->accelerateIpId_ != nullptr;};
    void deleteAccelerateIpId() { this->accelerateIpId_ = nullptr;};
    inline string getAccelerateIpId() const { DARABONBA_PTR_GET_DEFAULT(accelerateIpId_, "") };
    inline CreateBasicAccelerateIpResponseBody& setAccelerateIpId(string accelerateIpId) { DARABONBA_PTR_SET_VALUE(accelerateIpId_, accelerateIpId) };


    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline CreateBasicAccelerateIpResponseBody& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // ipSetId Field Functions 
    bool hasIpSetId() const { return this->ipSetId_ != nullptr;};
    void deleteIpSetId() { this->ipSetId_ = nullptr;};
    inline string getIpSetId() const { DARABONBA_PTR_GET_DEFAULT(ipSetId_, "") };
    inline CreateBasicAccelerateIpResponseBody& setIpSetId(string ipSetId) { DARABONBA_PTR_SET_VALUE(ipSetId_, ipSetId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateBasicAccelerateIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateBasicAccelerateIpResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The accelerated IP address of the basic GA instance.
    // 
    // >  This parameter is unavailable.
    shared_ptr<string> accelerateIpAddress_ {};
    // The ID of the accelerated IP address.
    shared_ptr<string> accelerateIpId_ {};
    // The ID of the basic GA instance.
    shared_ptr<string> acceleratorId_ {};
    // The ID of the acceleration region.
    shared_ptr<string> ipSetId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the accelerated IP address. Valid values:
    // 
    // **init:** The accelerated IP address is being initialized.
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
