// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLICATIONENDPOINTADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLICATIONENDPOINTADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyApplicationEndpointAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApplicationEndpointAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApplicationEndpointAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyApplicationEndpointAddressResponseBody() = default ;
    ModifyApplicationEndpointAddressResponseBody(const ModifyApplicationEndpointAddressResponseBody &) = default ;
    ModifyApplicationEndpointAddressResponseBody(ModifyApplicationEndpointAddressResponseBody &&) = default ;
    ModifyApplicationEndpointAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApplicationEndpointAddressResponseBody() = default ;
    ModifyApplicationEndpointAddressResponseBody& operator=(const ModifyApplicationEndpointAddressResponseBody &) = default ;
    ModifyApplicationEndpointAddressResponseBody& operator=(ModifyApplicationEndpointAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->endpointId_ == nullptr && this->requestId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ModifyApplicationEndpointAddressResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline ModifyApplicationEndpointAddressResponseBody& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyApplicationEndpointAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The endpoint ID.
    shared_ptr<string> endpointId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
