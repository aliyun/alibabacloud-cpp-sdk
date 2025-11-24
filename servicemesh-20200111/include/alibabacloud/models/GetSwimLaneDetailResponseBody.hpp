// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSWIMLANEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSWIMLANEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetSwimLaneDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSwimLaneDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IngressRule, ingressRule_);
      DARABONBA_PTR_TO_JSON(IngressService, ingressService_);
      DARABONBA_PTR_TO_JSON(LabelSelectorKey, labelSelectorKey_);
      DARABONBA_PTR_TO_JSON(LabelSelectorValue, labelSelectorValue_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServicesList, servicesList_);
      DARABONBA_PTR_TO_JSON(ValidationMessage, validationMessage_);
      DARABONBA_PTR_TO_JSON(WeightedIngressDestination, weightedIngressDestination_);
    };
    friend void from_json(const Darabonba::Json& j, GetSwimLaneDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IngressRule, ingressRule_);
      DARABONBA_PTR_FROM_JSON(IngressService, ingressService_);
      DARABONBA_PTR_FROM_JSON(LabelSelectorKey, labelSelectorKey_);
      DARABONBA_PTR_FROM_JSON(LabelSelectorValue, labelSelectorValue_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServicesList, servicesList_);
      DARABONBA_PTR_FROM_JSON(ValidationMessage, validationMessage_);
      DARABONBA_PTR_FROM_JSON(WeightedIngressDestination, weightedIngressDestination_);
    };
    GetSwimLaneDetailResponseBody() = default ;
    GetSwimLaneDetailResponseBody(const GetSwimLaneDetailResponseBody &) = default ;
    GetSwimLaneDetailResponseBody(GetSwimLaneDetailResponseBody &&) = default ;
    GetSwimLaneDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSwimLaneDetailResponseBody() = default ;
    GetSwimLaneDetailResponseBody& operator=(const GetSwimLaneDetailResponseBody &) = default ;
    GetSwimLaneDetailResponseBody& operator=(GetSwimLaneDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ingressRule_ == nullptr
        && return this->ingressService_ == nullptr && return this->labelSelectorKey_ == nullptr && return this->labelSelectorValue_ == nullptr && return this->requestId_ == nullptr && return this->servicesList_ == nullptr
        && return this->validationMessage_ == nullptr && return this->weightedIngressDestination_ == nullptr; };
    // ingressRule Field Functions 
    bool hasIngressRule() const { return this->ingressRule_ != nullptr;};
    void deleteIngressRule() { this->ingressRule_ = nullptr;};
    inline string ingressRule() const { DARABONBA_PTR_GET_DEFAULT(ingressRule_, "") };
    inline GetSwimLaneDetailResponseBody& setIngressRule(string ingressRule) { DARABONBA_PTR_SET_VALUE(ingressRule_, ingressRule) };


    // ingressService Field Functions 
    bool hasIngressService() const { return this->ingressService_ != nullptr;};
    void deleteIngressService() { this->ingressService_ = nullptr;};
    inline string ingressService() const { DARABONBA_PTR_GET_DEFAULT(ingressService_, "") };
    inline GetSwimLaneDetailResponseBody& setIngressService(string ingressService) { DARABONBA_PTR_SET_VALUE(ingressService_, ingressService) };


    // labelSelectorKey Field Functions 
    bool hasLabelSelectorKey() const { return this->labelSelectorKey_ != nullptr;};
    void deleteLabelSelectorKey() { this->labelSelectorKey_ = nullptr;};
    inline string labelSelectorKey() const { DARABONBA_PTR_GET_DEFAULT(labelSelectorKey_, "") };
    inline GetSwimLaneDetailResponseBody& setLabelSelectorKey(string labelSelectorKey) { DARABONBA_PTR_SET_VALUE(labelSelectorKey_, labelSelectorKey) };


    // labelSelectorValue Field Functions 
    bool hasLabelSelectorValue() const { return this->labelSelectorValue_ != nullptr;};
    void deleteLabelSelectorValue() { this->labelSelectorValue_ = nullptr;};
    inline string labelSelectorValue() const { DARABONBA_PTR_GET_DEFAULT(labelSelectorValue_, "") };
    inline GetSwimLaneDetailResponseBody& setLabelSelectorValue(string labelSelectorValue) { DARABONBA_PTR_SET_VALUE(labelSelectorValue_, labelSelectorValue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSwimLaneDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // servicesList Field Functions 
    bool hasServicesList() const { return this->servicesList_ != nullptr;};
    void deleteServicesList() { this->servicesList_ = nullptr;};
    inline string servicesList() const { DARABONBA_PTR_GET_DEFAULT(servicesList_, "") };
    inline GetSwimLaneDetailResponseBody& setServicesList(string servicesList) { DARABONBA_PTR_SET_VALUE(servicesList_, servicesList) };


    // validationMessage Field Functions 
    bool hasValidationMessage() const { return this->validationMessage_ != nullptr;};
    void deleteValidationMessage() { this->validationMessage_ = nullptr;};
    inline string validationMessage() const { DARABONBA_PTR_GET_DEFAULT(validationMessage_, "") };
    inline GetSwimLaneDetailResponseBody& setValidationMessage(string validationMessage) { DARABONBA_PTR_SET_VALUE(validationMessage_, validationMessage) };


    // weightedIngressDestination Field Functions 
    bool hasWeightedIngressDestination() const { return this->weightedIngressDestination_ != nullptr;};
    void deleteWeightedIngressDestination() { this->weightedIngressDestination_ = nullptr;};
    inline string weightedIngressDestination() const { DARABONBA_PTR_GET_DEFAULT(weightedIngressDestination_, "") };
    inline GetSwimLaneDetailResponseBody& setWeightedIngressDestination(string weightedIngressDestination) { DARABONBA_PTR_SET_VALUE(weightedIngressDestination_, weightedIngressDestination) };


  protected:
    // The traffic routing rule that routes traffic to the lane by using the ingress gateway. The traffic routing rule contains one or more custom routes.
    std::shared_ptr<string> ingressRule_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> ingressService_ = nullptr;
    // The label key of the associated service workload. The value is fixed as **ASM_TRAFFIC_TAG**.
    std::shared_ptr<string> labelSelectorKey_ = nullptr;
    // The value of ASM_TRAFFIC_TAG.
    std::shared_ptr<string> labelSelectorValue_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // A list of services associated with the lane.
    std::shared_ptr<string> servicesList_ = nullptr;
    // The status of the swimlane. If the configuration is successful and takes effect, a `null` is returned. Otherwise, an error message is returned.
    std::shared_ptr<string> validationMessage_ = nullptr;
    // This parameter is returned only when the IngressRoutingStrategy parameter is set to weighted. This parameter indicates the domain name of Services in each lane and the request routing weight. The value of this parameter is a serialized JSON string.
    std::shared_ptr<string> weightedIngressDestination_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
