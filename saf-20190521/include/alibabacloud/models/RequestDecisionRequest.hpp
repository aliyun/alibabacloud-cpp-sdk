// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REQUESTDECISIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REQUESTDECISIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Saf20190521
{
namespace Models
{
  class RequestDecisionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RequestDecisionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
    };
    friend void from_json(const Darabonba::Json& j, RequestDecisionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
    };
    RequestDecisionRequest() = default ;
    RequestDecisionRequest(const RequestDecisionRequest &) = default ;
    RequestDecisionRequest(RequestDecisionRequest &&) = default ;
    RequestDecisionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RequestDecisionRequest() = default ;
    RequestDecisionRequest& operator=(const RequestDecisionRequest &) = default ;
    RequestDecisionRequest& operator=(RequestDecisionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventCode_ == nullptr
        && this->serviceParameters_ == nullptr; };
    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline RequestDecisionRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string getServiceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline RequestDecisionRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


  protected:
    // The event code.
    shared_ptr<string> eventCode_ {};
    // The service input parameters. The value is a complete JSON string.
    shared_ptr<string> serviceParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Saf20190521
#endif
