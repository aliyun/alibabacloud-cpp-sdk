// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSWIMLANELISTRESPONSEBODYSWIMLANELIST_HPP_
#define ALIBABACLOUD_MODELS_GETSWIMLANELISTRESPONSEBODYSWIMLANELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetSwimLaneListResponseBodySwimLaneList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSwimLaneListResponseBodySwimLaneList& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IngressRule, ingressRule_);
      DARABONBA_PTR_TO_JSON(IngressService, ingressService_);
      DARABONBA_PTR_TO_JSON(LabelSelectorKey, labelSelectorKey_);
      DARABONBA_PTR_TO_JSON(LabelSelectorValue, labelSelectorValue_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ServiceList, serviceList_);
      DARABONBA_PTR_TO_JSON(ValidationMessage, validationMessage_);
      DARABONBA_PTR_TO_JSON(WeightedIngressDestinatin, weightedIngressDestinatin_);
    };
    friend void from_json(const Darabonba::Json& j, GetSwimLaneListResponseBodySwimLaneList& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IngressRule, ingressRule_);
      DARABONBA_PTR_FROM_JSON(IngressService, ingressService_);
      DARABONBA_PTR_FROM_JSON(LabelSelectorKey, labelSelectorKey_);
      DARABONBA_PTR_FROM_JSON(LabelSelectorValue, labelSelectorValue_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ServiceList, serviceList_);
      DARABONBA_PTR_FROM_JSON(ValidationMessage, validationMessage_);
      DARABONBA_PTR_FROM_JSON(WeightedIngressDestinatin, weightedIngressDestinatin_);
    };
    GetSwimLaneListResponseBodySwimLaneList() = default ;
    GetSwimLaneListResponseBodySwimLaneList(const GetSwimLaneListResponseBodySwimLaneList &) = default ;
    GetSwimLaneListResponseBodySwimLaneList(GetSwimLaneListResponseBodySwimLaneList &&) = default ;
    GetSwimLaneListResponseBodySwimLaneList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSwimLaneListResponseBodySwimLaneList() = default ;
    GetSwimLaneListResponseBodySwimLaneList& operator=(const GetSwimLaneListResponseBodySwimLaneList &) = default ;
    GetSwimLaneListResponseBodySwimLaneList& operator=(GetSwimLaneListResponseBodySwimLaneList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && return this->ingressRule_ == nullptr && return this->ingressService_ == nullptr && return this->labelSelectorKey_ == nullptr && return this->labelSelectorValue_ == nullptr && return this->name_ == nullptr
        && return this->serviceList_ == nullptr && return this->validationMessage_ == nullptr && return this->weightedIngressDestinatin_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetSwimLaneListResponseBodySwimLaneList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ingressRule Field Functions 
    bool hasIngressRule() const { return this->ingressRule_ != nullptr;};
    void deleteIngressRule() { this->ingressRule_ = nullptr;};
    inline string ingressRule() const { DARABONBA_PTR_GET_DEFAULT(ingressRule_, "") };
    inline GetSwimLaneListResponseBodySwimLaneList& setIngressRule(string ingressRule) { DARABONBA_PTR_SET_VALUE(ingressRule_, ingressRule) };


    // ingressService Field Functions 
    bool hasIngressService() const { return this->ingressService_ != nullptr;};
    void deleteIngressService() { this->ingressService_ = nullptr;};
    inline string ingressService() const { DARABONBA_PTR_GET_DEFAULT(ingressService_, "") };
    inline GetSwimLaneListResponseBodySwimLaneList& setIngressService(string ingressService) { DARABONBA_PTR_SET_VALUE(ingressService_, ingressService) };


    // labelSelectorKey Field Functions 
    bool hasLabelSelectorKey() const { return this->labelSelectorKey_ != nullptr;};
    void deleteLabelSelectorKey() { this->labelSelectorKey_ = nullptr;};
    inline string labelSelectorKey() const { DARABONBA_PTR_GET_DEFAULT(labelSelectorKey_, "") };
    inline GetSwimLaneListResponseBodySwimLaneList& setLabelSelectorKey(string labelSelectorKey) { DARABONBA_PTR_SET_VALUE(labelSelectorKey_, labelSelectorKey) };


    // labelSelectorValue Field Functions 
    bool hasLabelSelectorValue() const { return this->labelSelectorValue_ != nullptr;};
    void deleteLabelSelectorValue() { this->labelSelectorValue_ = nullptr;};
    inline string labelSelectorValue() const { DARABONBA_PTR_GET_DEFAULT(labelSelectorValue_, "") };
    inline GetSwimLaneListResponseBodySwimLaneList& setLabelSelectorValue(string labelSelectorValue) { DARABONBA_PTR_SET_VALUE(labelSelectorValue_, labelSelectorValue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSwimLaneListResponseBodySwimLaneList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // serviceList Field Functions 
    bool hasServiceList() const { return this->serviceList_ != nullptr;};
    void deleteServiceList() { this->serviceList_ = nullptr;};
    inline string serviceList() const { DARABONBA_PTR_GET_DEFAULT(serviceList_, "") };
    inline GetSwimLaneListResponseBodySwimLaneList& setServiceList(string serviceList) { DARABONBA_PTR_SET_VALUE(serviceList_, serviceList) };


    // validationMessage Field Functions 
    bool hasValidationMessage() const { return this->validationMessage_ != nullptr;};
    void deleteValidationMessage() { this->validationMessage_ = nullptr;};
    inline string validationMessage() const { DARABONBA_PTR_GET_DEFAULT(validationMessage_, "") };
    inline GetSwimLaneListResponseBodySwimLaneList& setValidationMessage(string validationMessage) { DARABONBA_PTR_SET_VALUE(validationMessage_, validationMessage) };


    // weightedIngressDestinatin Field Functions 
    bool hasWeightedIngressDestinatin() const { return this->weightedIngressDestinatin_ != nullptr;};
    void deleteWeightedIngressDestinatin() { this->weightedIngressDestinatin_ = nullptr;};
    inline string weightedIngressDestinatin() const { DARABONBA_PTR_GET_DEFAULT(weightedIngressDestinatin_, "") };
    inline GetSwimLaneListResponseBodySwimLaneList& setWeightedIngressDestinatin(string weightedIngressDestinatin) { DARABONBA_PTR_SET_VALUE(weightedIngressDestinatin_, weightedIngressDestinatin) };


  protected:
    // The name of a lane group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The request routing rules.
    std::shared_ptr<string> ingressRule_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> ingressService_ = nullptr;
    // The label key of the associated service workload. The value is fixed as `ASM_TRAFFIC_TAG`.
    std::shared_ptr<string> labelSelectorKey_ = nullptr;
    // The label value of the associated service workload. The value is fixed as `ASM_TRAFFIC_TAG`.
    std::shared_ptr<string> labelSelectorValue_ = nullptr;
    // The name of the lane.
    std::shared_ptr<string> name_ = nullptr;
    // Services associated with the lane.
    std::shared_ptr<string> serviceList_ = nullptr;
    // The verification messages of the lane group. If the service does not exist in the lane group, the verification message is displayed in the verification messages of the lane group.
    std::shared_ptr<string> validationMessage_ = nullptr;
    // This parameter is returned only when the IngressRoutingStrategy parameter is set to weighted. This parameter indicates the domain name of Services in each lane and the request routing weight. The value of this parameter is a serialized JSON string.
    std::shared_ptr<string> weightedIngressDestinatin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
