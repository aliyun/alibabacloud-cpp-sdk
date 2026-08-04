// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSAASSERVICEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKSAASSERVICEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CheckSaasServiceVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckSaasServiceVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CanUpgrade, canUpgrade_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckSaasServiceVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CanUpgrade, canUpgrade_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
    };
    CheckSaasServiceVersionResponseBody() = default ;
    CheckSaasServiceVersionResponseBody(const CheckSaasServiceVersionResponseBody &) = default ;
    CheckSaasServiceVersionResponseBody(CheckSaasServiceVersionResponseBody &&) = default ;
    CheckSaasServiceVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckSaasServiceVersionResponseBody() = default ;
    CheckSaasServiceVersionResponseBody& operator=(const CheckSaasServiceVersionResponseBody &) = default ;
    CheckSaasServiceVersionResponseBody& operator=(CheckSaasServiceVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canUpgrade_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->serviceId_ == nullptr; };
    // canUpgrade Field Functions 
    bool hasCanUpgrade() const { return this->canUpgrade_ != nullptr;};
    void deleteCanUpgrade() { this->canUpgrade_ = nullptr;};
    inline bool getCanUpgrade() const { DARABONBA_PTR_GET_DEFAULT(canUpgrade_, false) };
    inline CheckSaasServiceVersionResponseBody& setCanUpgrade(bool canUpgrade) { DARABONBA_PTR_SET_VALUE(canUpgrade_, canUpgrade) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CheckSaasServiceVersionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckSaasServiceVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CheckSaasServiceVersionResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    // Indicates whether the service can be upgraded.
    shared_ptr<bool> canUpgrade_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The service ID.
    shared_ptr<string> serviceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
