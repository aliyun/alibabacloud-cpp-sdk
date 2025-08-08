// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHOTLINENUMBERRESPONSEBODYDATAHOTLINENUMLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYHOTLINENUMBERRESPONSEBODYDATAHOTLINENUMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryHotlineNumberResponseBodyDataHotlineNumList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHotlineNumberResponseBodyDataHotlineNumList& obj) { 
      DARABONBA_PTR_TO_JSON(CalloutAllDepartment, calloutAllDepartment_);
      DARABONBA_PTR_TO_JSON(CalloutRangeList, calloutRangeList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EvaluationStatus, evaluationStatus_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(HotlineNumber, hotlineNumber_);
      DARABONBA_PTR_TO_JSON(InBoundEnabled, inBoundEnabled_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(OutboundEnabled, outboundEnabled_);
      DARABONBA_PTR_TO_JSON(Sp, sp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHotlineNumberResponseBodyDataHotlineNumList& obj) { 
      DARABONBA_PTR_FROM_JSON(CalloutAllDepartment, calloutAllDepartment_);
      DARABONBA_PTR_FROM_JSON(CalloutRangeList, calloutRangeList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EvaluationStatus, evaluationStatus_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(HotlineNumber, hotlineNumber_);
      DARABONBA_PTR_FROM_JSON(InBoundEnabled, inBoundEnabled_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(OutboundEnabled, outboundEnabled_);
      DARABONBA_PTR_FROM_JSON(Sp, sp_);
    };
    QueryHotlineNumberResponseBodyDataHotlineNumList() = default ;
    QueryHotlineNumberResponseBodyDataHotlineNumList(const QueryHotlineNumberResponseBodyDataHotlineNumList &) = default ;
    QueryHotlineNumberResponseBodyDataHotlineNumList(QueryHotlineNumberResponseBodyDataHotlineNumList &&) = default ;
    QueryHotlineNumberResponseBodyDataHotlineNumList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHotlineNumberResponseBodyDataHotlineNumList() = default ;
    QueryHotlineNumberResponseBodyDataHotlineNumList& operator=(const QueryHotlineNumberResponseBodyDataHotlineNumList &) = default ;
    QueryHotlineNumberResponseBodyDataHotlineNumList& operator=(QueryHotlineNumberResponseBodyDataHotlineNumList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->calloutAllDepartment_ != nullptr
        && this->calloutRangeList_ != nullptr && this->description_ != nullptr && this->evaluationStatus_ != nullptr && this->flowId_ != nullptr && this->flowName_ != nullptr
        && this->hotlineNumber_ != nullptr && this->inBoundEnabled_ != nullptr && this->location_ != nullptr && this->outboundEnabled_ != nullptr && this->sp_ != nullptr; };
    // calloutAllDepartment Field Functions 
    bool hasCalloutAllDepartment() const { return this->calloutAllDepartment_ != nullptr;};
    void deleteCalloutAllDepartment() { this->calloutAllDepartment_ = nullptr;};
    inline bool calloutAllDepartment() const { DARABONBA_PTR_GET_DEFAULT(calloutAllDepartment_, false) };
    inline QueryHotlineNumberResponseBodyDataHotlineNumList& setCalloutAllDepartment(bool calloutAllDepartment) { DARABONBA_PTR_SET_VALUE(calloutAllDepartment_, calloutAllDepartment) };


    // calloutRangeList Field Functions 
    bool hasCalloutRangeList() const { return this->calloutRangeList_ != nullptr;};
    void deleteCalloutRangeList() { this->calloutRangeList_ = nullptr;};
    inline const vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList> & calloutRangeList() const { DARABONBA_PTR_GET_CONST(calloutRangeList_, vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList>) };
    inline vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList> calloutRangeList() { DARABONBA_PTR_GET(calloutRangeList_, vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList>) };
    inline QueryHotlineNumberResponseBodyDataHotlineNumList& setCalloutRangeList(const vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList> & calloutRangeList) { DARABONBA_PTR_SET_VALUE(calloutRangeList_, calloutRangeList) };
    inline QueryHotlineNumberResponseBodyDataHotlineNumList& setCalloutRangeList(vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList> && calloutRangeList) { DARABONBA_PTR_SET_RVALUE(calloutRangeList_, calloutRangeList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryHotlineNumberResponseBodyDataHotlineNumList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // evaluationStatus Field Functions 
    bool hasEvaluationStatus() const { return this->evaluationStatus_ != nullptr;};
    void deleteEvaluationStatus() { this->evaluationStatus_ = nullptr;};
    inline int32_t evaluationStatus() const { DARABONBA_PTR_GET_DEFAULT(evaluationStatus_, 0) };
    inline QueryHotlineNumberResponseBodyDataHotlineNumList& setEvaluationStatus(int32_t evaluationStatus) { DARABONBA_PTR_SET_VALUE(evaluationStatus_, evaluationStatus) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline int64_t flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, 0L) };
    inline QueryHotlineNumberResponseBodyDataHotlineNumList& setFlowId(int64_t flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline QueryHotlineNumberResponseBodyDataHotlineNumList& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // hotlineNumber Field Functions 
    bool hasHotlineNumber() const { return this->hotlineNumber_ != nullptr;};
    void deleteHotlineNumber() { this->hotlineNumber_ = nullptr;};
    inline string hotlineNumber() const { DARABONBA_PTR_GET_DEFAULT(hotlineNumber_, "") };
    inline QueryHotlineNumberResponseBodyDataHotlineNumList& setHotlineNumber(string hotlineNumber) { DARABONBA_PTR_SET_VALUE(hotlineNumber_, hotlineNumber) };


    // inBoundEnabled Field Functions 
    bool hasInBoundEnabled() const { return this->inBoundEnabled_ != nullptr;};
    void deleteInBoundEnabled() { this->inBoundEnabled_ = nullptr;};
    inline bool inBoundEnabled() const { DARABONBA_PTR_GET_DEFAULT(inBoundEnabled_, false) };
    inline QueryHotlineNumberResponseBodyDataHotlineNumList& setInBoundEnabled(bool inBoundEnabled) { DARABONBA_PTR_SET_VALUE(inBoundEnabled_, inBoundEnabled) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline QueryHotlineNumberResponseBodyDataHotlineNumList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // outboundEnabled Field Functions 
    bool hasOutboundEnabled() const { return this->outboundEnabled_ != nullptr;};
    void deleteOutboundEnabled() { this->outboundEnabled_ = nullptr;};
    inline bool outboundEnabled() const { DARABONBA_PTR_GET_DEFAULT(outboundEnabled_, false) };
    inline QueryHotlineNumberResponseBodyDataHotlineNumList& setOutboundEnabled(bool outboundEnabled) { DARABONBA_PTR_SET_VALUE(outboundEnabled_, outboundEnabled) };


    // sp Field Functions 
    bool hasSp() const { return this->sp_ != nullptr;};
    void deleteSp() { this->sp_ = nullptr;};
    inline string sp() const { DARABONBA_PTR_GET_DEFAULT(sp_, "") };
    inline QueryHotlineNumberResponseBodyDataHotlineNumList& setSp(string sp) { DARABONBA_PTR_SET_VALUE(sp_, sp) };


  protected:
    std::shared_ptr<bool> calloutAllDepartment_ = nullptr;
    std::shared_ptr<vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList>> calloutRangeList_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> evaluationStatus_ = nullptr;
    std::shared_ptr<int64_t> flowId_ = nullptr;
    std::shared_ptr<string> flowName_ = nullptr;
    std::shared_ptr<string> hotlineNumber_ = nullptr;
    std::shared_ptr<bool> inBoundEnabled_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<bool> outboundEnabled_ = nullptr;
    std::shared_ptr<string> sp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
