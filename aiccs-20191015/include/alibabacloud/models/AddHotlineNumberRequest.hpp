// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDHOTLINENUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDHOTLINENUMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddHotlineNumberRequestOutboundRangeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class AddHotlineNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddHotlineNumberRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(OutboundRangeList, outboundRangeList_);
    };
    friend void from_json(const Darabonba::Json& j, AddHotlineNumberRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(OutboundRangeList, outboundRangeList_);
    };
    AddHotlineNumberRequest() = default ;
    AddHotlineNumberRequest(const AddHotlineNumberRequest &) = default ;
    AddHotlineNumberRequest(AddHotlineNumberRequest &&) = default ;
    AddHotlineNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddHotlineNumberRequest() = default ;
    AddHotlineNumberRequest& operator=(const AddHotlineNumberRequest &) = default ;
    AddHotlineNumberRequest& operator=(AddHotlineNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->enableInbound_ != nullptr && this->enableInboundEvaluation_ != nullptr && this->enableOutbound_ != nullptr && this->enableOutboundEvaluation_ != nullptr && this->evaluationLevel_ != nullptr
        && this->hotlineNumber_ != nullptr && this->inboundFlowId_ != nullptr && this->instanceId_ != nullptr && this->outboundAllDepart_ != nullptr && this->outboundRangeList_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddHotlineNumberRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableInbound Field Functions 
    bool hasEnableInbound() const { return this->enableInbound_ != nullptr;};
    void deleteEnableInbound() { this->enableInbound_ = nullptr;};
    inline bool enableInbound() const { DARABONBA_PTR_GET_DEFAULT(enableInbound_, false) };
    inline AddHotlineNumberRequest& setEnableInbound(bool enableInbound) { DARABONBA_PTR_SET_VALUE(enableInbound_, enableInbound) };


    // enableInboundEvaluation Field Functions 
    bool hasEnableInboundEvaluation() const { return this->enableInboundEvaluation_ != nullptr;};
    void deleteEnableInboundEvaluation() { this->enableInboundEvaluation_ = nullptr;};
    inline bool enableInboundEvaluation() const { DARABONBA_PTR_GET_DEFAULT(enableInboundEvaluation_, false) };
    inline AddHotlineNumberRequest& setEnableInboundEvaluation(bool enableInboundEvaluation) { DARABONBA_PTR_SET_VALUE(enableInboundEvaluation_, enableInboundEvaluation) };


    // enableOutbound Field Functions 
    bool hasEnableOutbound() const { return this->enableOutbound_ != nullptr;};
    void deleteEnableOutbound() { this->enableOutbound_ = nullptr;};
    inline bool enableOutbound() const { DARABONBA_PTR_GET_DEFAULT(enableOutbound_, false) };
    inline AddHotlineNumberRequest& setEnableOutbound(bool enableOutbound) { DARABONBA_PTR_SET_VALUE(enableOutbound_, enableOutbound) };


    // enableOutboundEvaluation Field Functions 
    bool hasEnableOutboundEvaluation() const { return this->enableOutboundEvaluation_ != nullptr;};
    void deleteEnableOutboundEvaluation() { this->enableOutboundEvaluation_ = nullptr;};
    inline bool enableOutboundEvaluation() const { DARABONBA_PTR_GET_DEFAULT(enableOutboundEvaluation_, false) };
    inline AddHotlineNumberRequest& setEnableOutboundEvaluation(bool enableOutboundEvaluation) { DARABONBA_PTR_SET_VALUE(enableOutboundEvaluation_, enableOutboundEvaluation) };


    // evaluationLevel Field Functions 
    bool hasEvaluationLevel() const { return this->evaluationLevel_ != nullptr;};
    void deleteEvaluationLevel() { this->evaluationLevel_ = nullptr;};
    inline int32_t evaluationLevel() const { DARABONBA_PTR_GET_DEFAULT(evaluationLevel_, 0) };
    inline AddHotlineNumberRequest& setEvaluationLevel(int32_t evaluationLevel) { DARABONBA_PTR_SET_VALUE(evaluationLevel_, evaluationLevel) };


    // hotlineNumber Field Functions 
    bool hasHotlineNumber() const { return this->hotlineNumber_ != nullptr;};
    void deleteHotlineNumber() { this->hotlineNumber_ = nullptr;};
    inline string hotlineNumber() const { DARABONBA_PTR_GET_DEFAULT(hotlineNumber_, "") };
    inline AddHotlineNumberRequest& setHotlineNumber(string hotlineNumber) { DARABONBA_PTR_SET_VALUE(hotlineNumber_, hotlineNumber) };


    // inboundFlowId Field Functions 
    bool hasInboundFlowId() const { return this->inboundFlowId_ != nullptr;};
    void deleteInboundFlowId() { this->inboundFlowId_ = nullptr;};
    inline int64_t inboundFlowId() const { DARABONBA_PTR_GET_DEFAULT(inboundFlowId_, 0L) };
    inline AddHotlineNumberRequest& setInboundFlowId(int64_t inboundFlowId) { DARABONBA_PTR_SET_VALUE(inboundFlowId_, inboundFlowId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddHotlineNumberRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // outboundAllDepart Field Functions 
    bool hasOutboundAllDepart() const { return this->outboundAllDepart_ != nullptr;};
    void deleteOutboundAllDepart() { this->outboundAllDepart_ = nullptr;};
    inline bool outboundAllDepart() const { DARABONBA_PTR_GET_DEFAULT(outboundAllDepart_, false) };
    inline AddHotlineNumberRequest& setOutboundAllDepart(bool outboundAllDepart) { DARABONBA_PTR_SET_VALUE(outboundAllDepart_, outboundAllDepart) };


    // outboundRangeList Field Functions 
    bool hasOutboundRangeList() const { return this->outboundRangeList_ != nullptr;};
    void deleteOutboundRangeList() { this->outboundRangeList_ = nullptr;};
    inline const vector<AddHotlineNumberRequestOutboundRangeList> & outboundRangeList() const { DARABONBA_PTR_GET_CONST(outboundRangeList_, vector<AddHotlineNumberRequestOutboundRangeList>) };
    inline vector<AddHotlineNumberRequestOutboundRangeList> outboundRangeList() { DARABONBA_PTR_GET(outboundRangeList_, vector<AddHotlineNumberRequestOutboundRangeList>) };
    inline AddHotlineNumberRequest& setOutboundRangeList(const vector<AddHotlineNumberRequestOutboundRangeList> & outboundRangeList) { DARABONBA_PTR_SET_VALUE(outboundRangeList_, outboundRangeList) };
    inline AddHotlineNumberRequest& setOutboundRangeList(vector<AddHotlineNumberRequestOutboundRangeList> && outboundRangeList) { DARABONBA_PTR_SET_RVALUE(outboundRangeList_, outboundRangeList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> enableInbound_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> enableInboundEvaluation_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> enableOutbound_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> enableOutboundEvaluation_ = nullptr;
    std::shared_ptr<int32_t> evaluationLevel_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> hotlineNumber_ = nullptr;
    std::shared_ptr<int64_t> inboundFlowId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> outboundAllDepart_ = nullptr;
    std::shared_ptr<vector<AddHotlineNumberRequestOutboundRangeList>> outboundRangeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
