// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERCEPTIONSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINTERCEPTIONSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInterceptionSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterceptionSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InterceptionSummary, interceptionSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterceptionSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InterceptionSummary, interceptionSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInterceptionSummaryResponseBody() = default ;
    GetInterceptionSummaryResponseBody(const GetInterceptionSummaryResponseBody &) = default ;
    GetInterceptionSummaryResponseBody(GetInterceptionSummaryResponseBody &&) = default ;
    GetInterceptionSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterceptionSummaryResponseBody() = default ;
    GetInterceptionSummaryResponseBody& operator=(const GetInterceptionSummaryResponseBody &) = default ;
    GetInterceptionSummaryResponseBody& operator=(GetInterceptionSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InterceptionSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InterceptionSummary& obj) { 
        DARABONBA_PTR_TO_JSON(CloseClusterCount, closeClusterCount_);
        DARABONBA_PTR_TO_JSON(CloseRuleCount, closeRuleCount_);
        DARABONBA_PTR_TO_JSON(ClusterCount, clusterCount_);
        DARABONBA_PTR_TO_JSON(InterceptionCountInDays, interceptionCountInDays_);
        DARABONBA_PTR_TO_JSON(OpenClusterCount, openClusterCount_);
        DARABONBA_PTR_TO_JSON(OpenRuleCount, openRuleCount_);
        DARABONBA_PTR_TO_JSON(RiskCount180Day, riskCount180Day_);
        DARABONBA_PTR_TO_JSON(RiskCount30Day, riskCount30Day_);
        DARABONBA_PTR_TO_JSON(RiskCountToday, riskCountToday_);
        DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
      };
      friend void from_json(const Darabonba::Json& j, InterceptionSummary& obj) { 
        DARABONBA_PTR_FROM_JSON(CloseClusterCount, closeClusterCount_);
        DARABONBA_PTR_FROM_JSON(CloseRuleCount, closeRuleCount_);
        DARABONBA_PTR_FROM_JSON(ClusterCount, clusterCount_);
        DARABONBA_PTR_FROM_JSON(InterceptionCountInDays, interceptionCountInDays_);
        DARABONBA_PTR_FROM_JSON(OpenClusterCount, openClusterCount_);
        DARABONBA_PTR_FROM_JSON(OpenRuleCount, openRuleCount_);
        DARABONBA_PTR_FROM_JSON(RiskCount180Day, riskCount180Day_);
        DARABONBA_PTR_FROM_JSON(RiskCount30Day, riskCount30Day_);
        DARABONBA_PTR_FROM_JSON(RiskCountToday, riskCountToday_);
        DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
      };
      InterceptionSummary() = default ;
      InterceptionSummary(const InterceptionSummary &) = default ;
      InterceptionSummary(InterceptionSummary &&) = default ;
      InterceptionSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InterceptionSummary() = default ;
      InterceptionSummary& operator=(const InterceptionSummary &) = default ;
      InterceptionSummary& operator=(InterceptionSummary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->closeClusterCount_ == nullptr
        && this->closeRuleCount_ == nullptr && this->clusterCount_ == nullptr && this->interceptionCountInDays_ == nullptr && this->openClusterCount_ == nullptr && this->openRuleCount_ == nullptr
        && this->riskCount180Day_ == nullptr && this->riskCount30Day_ == nullptr && this->riskCountToday_ == nullptr && this->ruleCount_ == nullptr; };
      // closeClusterCount Field Functions 
      bool hasCloseClusterCount() const { return this->closeClusterCount_ != nullptr;};
      void deleteCloseClusterCount() { this->closeClusterCount_ = nullptr;};
      inline int32_t getCloseClusterCount() const { DARABONBA_PTR_GET_DEFAULT(closeClusterCount_, 0) };
      inline InterceptionSummary& setCloseClusterCount(int32_t closeClusterCount) { DARABONBA_PTR_SET_VALUE(closeClusterCount_, closeClusterCount) };


      // closeRuleCount Field Functions 
      bool hasCloseRuleCount() const { return this->closeRuleCount_ != nullptr;};
      void deleteCloseRuleCount() { this->closeRuleCount_ = nullptr;};
      inline int32_t getCloseRuleCount() const { DARABONBA_PTR_GET_DEFAULT(closeRuleCount_, 0) };
      inline InterceptionSummary& setCloseRuleCount(int32_t closeRuleCount) { DARABONBA_PTR_SET_VALUE(closeRuleCount_, closeRuleCount) };


      // clusterCount Field Functions 
      bool hasClusterCount() const { return this->clusterCount_ != nullptr;};
      void deleteClusterCount() { this->clusterCount_ = nullptr;};
      inline int32_t getClusterCount() const { DARABONBA_PTR_GET_DEFAULT(clusterCount_, 0) };
      inline InterceptionSummary& setClusterCount(int32_t clusterCount) { DARABONBA_PTR_SET_VALUE(clusterCount_, clusterCount) };


      // interceptionCountInDays Field Functions 
      bool hasInterceptionCountInDays() const { return this->interceptionCountInDays_ != nullptr;};
      void deleteInterceptionCountInDays() { this->interceptionCountInDays_ = nullptr;};
      inline int32_t getInterceptionCountInDays() const { DARABONBA_PTR_GET_DEFAULT(interceptionCountInDays_, 0) };
      inline InterceptionSummary& setInterceptionCountInDays(int32_t interceptionCountInDays) { DARABONBA_PTR_SET_VALUE(interceptionCountInDays_, interceptionCountInDays) };


      // openClusterCount Field Functions 
      bool hasOpenClusterCount() const { return this->openClusterCount_ != nullptr;};
      void deleteOpenClusterCount() { this->openClusterCount_ = nullptr;};
      inline int32_t getOpenClusterCount() const { DARABONBA_PTR_GET_DEFAULT(openClusterCount_, 0) };
      inline InterceptionSummary& setOpenClusterCount(int32_t openClusterCount) { DARABONBA_PTR_SET_VALUE(openClusterCount_, openClusterCount) };


      // openRuleCount Field Functions 
      bool hasOpenRuleCount() const { return this->openRuleCount_ != nullptr;};
      void deleteOpenRuleCount() { this->openRuleCount_ = nullptr;};
      inline int32_t getOpenRuleCount() const { DARABONBA_PTR_GET_DEFAULT(openRuleCount_, 0) };
      inline InterceptionSummary& setOpenRuleCount(int32_t openRuleCount) { DARABONBA_PTR_SET_VALUE(openRuleCount_, openRuleCount) };


      // riskCount180Day Field Functions 
      bool hasRiskCount180Day() const { return this->riskCount180Day_ != nullptr;};
      void deleteRiskCount180Day() { this->riskCount180Day_ = nullptr;};
      inline int64_t getRiskCount180Day() const { DARABONBA_PTR_GET_DEFAULT(riskCount180Day_, 0L) };
      inline InterceptionSummary& setRiskCount180Day(int64_t riskCount180Day) { DARABONBA_PTR_SET_VALUE(riskCount180Day_, riskCount180Day) };


      // riskCount30Day Field Functions 
      bool hasRiskCount30Day() const { return this->riskCount30Day_ != nullptr;};
      void deleteRiskCount30Day() { this->riskCount30Day_ = nullptr;};
      inline int64_t getRiskCount30Day() const { DARABONBA_PTR_GET_DEFAULT(riskCount30Day_, 0L) };
      inline InterceptionSummary& setRiskCount30Day(int64_t riskCount30Day) { DARABONBA_PTR_SET_VALUE(riskCount30Day_, riskCount30Day) };


      // riskCountToday Field Functions 
      bool hasRiskCountToday() const { return this->riskCountToday_ != nullptr;};
      void deleteRiskCountToday() { this->riskCountToday_ = nullptr;};
      inline int64_t getRiskCountToday() const { DARABONBA_PTR_GET_DEFAULT(riskCountToday_, 0L) };
      inline InterceptionSummary& setRiskCountToday(int64_t riskCountToday) { DARABONBA_PTR_SET_VALUE(riskCountToday_, riskCountToday) };


      // ruleCount Field Functions 
      bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
      void deleteRuleCount() { this->ruleCount_ = nullptr;};
      inline int32_t getRuleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
      inline InterceptionSummary& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


    protected:
      // The number of clusters that are not protected.
      shared_ptr<int32_t> closeClusterCount_ {};
      // The number of disabled cluster defense rules.
      shared_ptr<int32_t> closeRuleCount_ {};
      // The total number of clusters.
      shared_ptr<int32_t> clusterCount_ {};
      // The total number of interception records for the specified cluster.
      shared_ptr<int32_t> interceptionCountInDays_ {};
      // The number of clusters that are protected.
      shared_ptr<int32_t> openClusterCount_ {};
      // The number of enabled cluster defense rules.
      shared_ptr<int32_t> openRuleCount_ {};
      // The number of security risks that are detected in the last 180 days.
      shared_ptr<int64_t> riskCount180Day_ {};
      // The number of security risks that are detected in the last 30 days.
      shared_ptr<int64_t> riskCount30Day_ {};
      // The number of security risks that are detected in the last 24 hours.
      shared_ptr<int64_t> riskCountToday_ {};
      // The total number of cluster defense rules.
      shared_ptr<int32_t> ruleCount_ {};
    };

    virtual bool empty() const override { return this->interceptionSummary_ == nullptr
        && this->requestId_ == nullptr; };
    // interceptionSummary Field Functions 
    bool hasInterceptionSummary() const { return this->interceptionSummary_ != nullptr;};
    void deleteInterceptionSummary() { this->interceptionSummary_ = nullptr;};
    inline const GetInterceptionSummaryResponseBody::InterceptionSummary & getInterceptionSummary() const { DARABONBA_PTR_GET_CONST(interceptionSummary_, GetInterceptionSummaryResponseBody::InterceptionSummary) };
    inline GetInterceptionSummaryResponseBody::InterceptionSummary getInterceptionSummary() { DARABONBA_PTR_GET(interceptionSummary_, GetInterceptionSummaryResponseBody::InterceptionSummary) };
    inline GetInterceptionSummaryResponseBody& setInterceptionSummary(const GetInterceptionSummaryResponseBody::InterceptionSummary & interceptionSummary) { DARABONBA_PTR_SET_VALUE(interceptionSummary_, interceptionSummary) };
    inline GetInterceptionSummaryResponseBody& setInterceptionSummary(GetInterceptionSummaryResponseBody::InterceptionSummary && interceptionSummary) { DARABONBA_PTR_SET_RVALUE(interceptionSummary_, interceptionSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInterceptionSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics.
    shared_ptr<GetInterceptionSummaryResponseBody::InterceptionSummary> interceptionSummary_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
