// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDHOTLINENUMBERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDHOTLINENUMBERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class AddHotlineNumberShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddHotlineNumberShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableInbound, enableInbound_);
      DARABONBA_PTR_TO_JSON(EnableInboundEvaluation, enableInboundEvaluation_);
      DARABONBA_PTR_TO_JSON(EnableOutbound, enableOutbound_);
      DARABONBA_PTR_TO_JSON(EnableOutboundEvaluation, enableOutboundEvaluation_);
      DARABONBA_PTR_TO_JSON(EvaluationLevel, evaluationLevel_);
      DARABONBA_PTR_TO_JSON(HotlineNumber, hotlineNumber_);
      DARABONBA_PTR_TO_JSON(InboundFlowId, inboundFlowId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OutboundAllDepart, outboundAllDepart_);
      DARABONBA_PTR_TO_JSON(OutboundRangeList, outboundRangeListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddHotlineNumberShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableInbound, enableInbound_);
      DARABONBA_PTR_FROM_JSON(EnableInboundEvaluation, enableInboundEvaluation_);
      DARABONBA_PTR_FROM_JSON(EnableOutbound, enableOutbound_);
      DARABONBA_PTR_FROM_JSON(EnableOutboundEvaluation, enableOutboundEvaluation_);
      DARABONBA_PTR_FROM_JSON(EvaluationLevel, evaluationLevel_);
      DARABONBA_PTR_FROM_JSON(HotlineNumber, hotlineNumber_);
      DARABONBA_PTR_FROM_JSON(InboundFlowId, inboundFlowId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OutboundAllDepart, outboundAllDepart_);
      DARABONBA_PTR_FROM_JSON(OutboundRangeList, outboundRangeListShrink_);
    };
    AddHotlineNumberShrinkRequest() = default ;
    AddHotlineNumberShrinkRequest(const AddHotlineNumberShrinkRequest &) = default ;
    AddHotlineNumberShrinkRequest(AddHotlineNumberShrinkRequest &&) = default ;
    AddHotlineNumberShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddHotlineNumberShrinkRequest() = default ;
    AddHotlineNumberShrinkRequest& operator=(const AddHotlineNumberShrinkRequest &) = default ;
    AddHotlineNumberShrinkRequest& operator=(AddHotlineNumberShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->enableInbound_ == nullptr && this->enableInboundEvaluation_ == nullptr && this->enableOutbound_ == nullptr && this->enableOutboundEvaluation_ == nullptr && this->evaluationLevel_ == nullptr
        && this->hotlineNumber_ == nullptr && this->inboundFlowId_ == nullptr && this->instanceId_ == nullptr && this->outboundAllDepart_ == nullptr && this->outboundRangeListShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddHotlineNumberShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableInbound Field Functions 
    bool hasEnableInbound() const { return this->enableInbound_ != nullptr;};
    void deleteEnableInbound() { this->enableInbound_ = nullptr;};
    inline bool getEnableInbound() const { DARABONBA_PTR_GET_DEFAULT(enableInbound_, false) };
    inline AddHotlineNumberShrinkRequest& setEnableInbound(bool enableInbound) { DARABONBA_PTR_SET_VALUE(enableInbound_, enableInbound) };


    // enableInboundEvaluation Field Functions 
    bool hasEnableInboundEvaluation() const { return this->enableInboundEvaluation_ != nullptr;};
    void deleteEnableInboundEvaluation() { this->enableInboundEvaluation_ = nullptr;};
    inline bool getEnableInboundEvaluation() const { DARABONBA_PTR_GET_DEFAULT(enableInboundEvaluation_, false) };
    inline AddHotlineNumberShrinkRequest& setEnableInboundEvaluation(bool enableInboundEvaluation) { DARABONBA_PTR_SET_VALUE(enableInboundEvaluation_, enableInboundEvaluation) };


    // enableOutbound Field Functions 
    bool hasEnableOutbound() const { return this->enableOutbound_ != nullptr;};
    void deleteEnableOutbound() { this->enableOutbound_ = nullptr;};
    inline bool getEnableOutbound() const { DARABONBA_PTR_GET_DEFAULT(enableOutbound_, false) };
    inline AddHotlineNumberShrinkRequest& setEnableOutbound(bool enableOutbound) { DARABONBA_PTR_SET_VALUE(enableOutbound_, enableOutbound) };


    // enableOutboundEvaluation Field Functions 
    bool hasEnableOutboundEvaluation() const { return this->enableOutboundEvaluation_ != nullptr;};
    void deleteEnableOutboundEvaluation() { this->enableOutboundEvaluation_ = nullptr;};
    inline bool getEnableOutboundEvaluation() const { DARABONBA_PTR_GET_DEFAULT(enableOutboundEvaluation_, false) };
    inline AddHotlineNumberShrinkRequest& setEnableOutboundEvaluation(bool enableOutboundEvaluation) { DARABONBA_PTR_SET_VALUE(enableOutboundEvaluation_, enableOutboundEvaluation) };


    // evaluationLevel Field Functions 
    bool hasEvaluationLevel() const { return this->evaluationLevel_ != nullptr;};
    void deleteEvaluationLevel() { this->evaluationLevel_ = nullptr;};
    inline int32_t getEvaluationLevel() const { DARABONBA_PTR_GET_DEFAULT(evaluationLevel_, 0) };
    inline AddHotlineNumberShrinkRequest& setEvaluationLevel(int32_t evaluationLevel) { DARABONBA_PTR_SET_VALUE(evaluationLevel_, evaluationLevel) };


    // hotlineNumber Field Functions 
    bool hasHotlineNumber() const { return this->hotlineNumber_ != nullptr;};
    void deleteHotlineNumber() { this->hotlineNumber_ = nullptr;};
    inline string getHotlineNumber() const { DARABONBA_PTR_GET_DEFAULT(hotlineNumber_, "") };
    inline AddHotlineNumberShrinkRequest& setHotlineNumber(string hotlineNumber) { DARABONBA_PTR_SET_VALUE(hotlineNumber_, hotlineNumber) };


    // inboundFlowId Field Functions 
    bool hasInboundFlowId() const { return this->inboundFlowId_ != nullptr;};
    void deleteInboundFlowId() { this->inboundFlowId_ = nullptr;};
    inline int64_t getInboundFlowId() const { DARABONBA_PTR_GET_DEFAULT(inboundFlowId_, 0L) };
    inline AddHotlineNumberShrinkRequest& setInboundFlowId(int64_t inboundFlowId) { DARABONBA_PTR_SET_VALUE(inboundFlowId_, inboundFlowId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddHotlineNumberShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // outboundAllDepart Field Functions 
    bool hasOutboundAllDepart() const { return this->outboundAllDepart_ != nullptr;};
    void deleteOutboundAllDepart() { this->outboundAllDepart_ = nullptr;};
    inline bool getOutboundAllDepart() const { DARABONBA_PTR_GET_DEFAULT(outboundAllDepart_, false) };
    inline AddHotlineNumberShrinkRequest& setOutboundAllDepart(bool outboundAllDepart) { DARABONBA_PTR_SET_VALUE(outboundAllDepart_, outboundAllDepart) };


    // outboundRangeListShrink Field Functions 
    bool hasOutboundRangeListShrink() const { return this->outboundRangeListShrink_ != nullptr;};
    void deleteOutboundRangeListShrink() { this->outboundRangeListShrink_ = nullptr;};
    inline string getOutboundRangeListShrink() const { DARABONBA_PTR_GET_DEFAULT(outboundRangeListShrink_, "") };
    inline AddHotlineNumberShrinkRequest& setOutboundRangeListShrink(string outboundRangeListShrink) { DARABONBA_PTR_SET_VALUE(outboundRangeListShrink_, outboundRangeListShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<bool> enableInbound_ {};
    // This parameter is required.
    shared_ptr<bool> enableInboundEvaluation_ {};
    // This parameter is required.
    shared_ptr<bool> enableOutbound_ {};
    // This parameter is required.
    shared_ptr<bool> enableOutboundEvaluation_ {};
    shared_ptr<int32_t> evaluationLevel_ {};
    // This parameter is required.
    shared_ptr<string> hotlineNumber_ {};
    shared_ptr<int64_t> inboundFlowId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<bool> outboundAllDepart_ {};
    shared_ptr<string> outboundRangeListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
