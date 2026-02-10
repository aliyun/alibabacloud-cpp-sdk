// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRULESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRULESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClusterRuleSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterRuleSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterRuleSummary, clusterRuleSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterRuleSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterRuleSummary, clusterRuleSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetClusterRuleSummaryResponseBody() = default ;
    GetClusterRuleSummaryResponseBody(const GetClusterRuleSummaryResponseBody &) = default ;
    GetClusterRuleSummaryResponseBody(GetClusterRuleSummaryResponseBody &&) = default ;
    GetClusterRuleSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterRuleSummaryResponseBody() = default ;
    GetClusterRuleSummaryResponseBody& operator=(const GetClusterRuleSummaryResponseBody &) = default ;
    GetClusterRuleSummaryResponseBody& operator=(GetClusterRuleSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterRuleSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterRuleSummary& obj) { 
        DARABONBA_PTR_TO_JSON(CloseRuleCount, closeRuleCount_);
        DARABONBA_PTR_TO_JSON(InterceptionCount7Day, interceptionCount7Day_);
        DARABONBA_PTR_TO_JSON(InterceptionSwitch, interceptionSwitch_);
        DARABONBA_PTR_TO_JSON(InterceptionType, interceptionType_);
        DARABONBA_PTR_TO_JSON(OpenRuleCount, openRuleCount_);
        DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
        DARABONBA_PTR_TO_JSON(SuggestRuleCount, suggestRuleCount_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterRuleSummary& obj) { 
        DARABONBA_PTR_FROM_JSON(CloseRuleCount, closeRuleCount_);
        DARABONBA_PTR_FROM_JSON(InterceptionCount7Day, interceptionCount7Day_);
        DARABONBA_PTR_FROM_JSON(InterceptionSwitch, interceptionSwitch_);
        DARABONBA_PTR_FROM_JSON(InterceptionType, interceptionType_);
        DARABONBA_PTR_FROM_JSON(OpenRuleCount, openRuleCount_);
        DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
        DARABONBA_PTR_FROM_JSON(SuggestRuleCount, suggestRuleCount_);
      };
      ClusterRuleSummary() = default ;
      ClusterRuleSummary(const ClusterRuleSummary &) = default ;
      ClusterRuleSummary(ClusterRuleSummary &&) = default ;
      ClusterRuleSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterRuleSummary() = default ;
      ClusterRuleSummary& operator=(const ClusterRuleSummary &) = default ;
      ClusterRuleSummary& operator=(ClusterRuleSummary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->closeRuleCount_ == nullptr
        && this->interceptionCount7Day_ == nullptr && this->interceptionSwitch_ == nullptr && this->interceptionType_ == nullptr && this->openRuleCount_ == nullptr && this->ruleCount_ == nullptr
        && this->suggestRuleCount_ == nullptr; };
      // closeRuleCount Field Functions 
      bool hasCloseRuleCount() const { return this->closeRuleCount_ != nullptr;};
      void deleteCloseRuleCount() { this->closeRuleCount_ = nullptr;};
      inline int32_t getCloseRuleCount() const { DARABONBA_PTR_GET_DEFAULT(closeRuleCount_, 0) };
      inline ClusterRuleSummary& setCloseRuleCount(int32_t closeRuleCount) { DARABONBA_PTR_SET_VALUE(closeRuleCount_, closeRuleCount) };


      // interceptionCount7Day Field Functions 
      bool hasInterceptionCount7Day() const { return this->interceptionCount7Day_ != nullptr;};
      void deleteInterceptionCount7Day() { this->interceptionCount7Day_ = nullptr;};
      inline int64_t getInterceptionCount7Day() const { DARABONBA_PTR_GET_DEFAULT(interceptionCount7Day_, 0L) };
      inline ClusterRuleSummary& setInterceptionCount7Day(int64_t interceptionCount7Day) { DARABONBA_PTR_SET_VALUE(interceptionCount7Day_, interceptionCount7Day) };


      // interceptionSwitch Field Functions 
      bool hasInterceptionSwitch() const { return this->interceptionSwitch_ != nullptr;};
      void deleteInterceptionSwitch() { this->interceptionSwitch_ = nullptr;};
      inline int32_t getInterceptionSwitch() const { DARABONBA_PTR_GET_DEFAULT(interceptionSwitch_, 0) };
      inline ClusterRuleSummary& setInterceptionSwitch(int32_t interceptionSwitch) { DARABONBA_PTR_SET_VALUE(interceptionSwitch_, interceptionSwitch) };


      // interceptionType Field Functions 
      bool hasInterceptionType() const { return this->interceptionType_ != nullptr;};
      void deleteInterceptionType() { this->interceptionType_ = nullptr;};
      inline int32_t getInterceptionType() const { DARABONBA_PTR_GET_DEFAULT(interceptionType_, 0) };
      inline ClusterRuleSummary& setInterceptionType(int32_t interceptionType) { DARABONBA_PTR_SET_VALUE(interceptionType_, interceptionType) };


      // openRuleCount Field Functions 
      bool hasOpenRuleCount() const { return this->openRuleCount_ != nullptr;};
      void deleteOpenRuleCount() { this->openRuleCount_ = nullptr;};
      inline int32_t getOpenRuleCount() const { DARABONBA_PTR_GET_DEFAULT(openRuleCount_, 0) };
      inline ClusterRuleSummary& setOpenRuleCount(int32_t openRuleCount) { DARABONBA_PTR_SET_VALUE(openRuleCount_, openRuleCount) };


      // ruleCount Field Functions 
      bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
      void deleteRuleCount() { this->ruleCount_ = nullptr;};
      inline int32_t getRuleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
      inline ClusterRuleSummary& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


      // suggestRuleCount Field Functions 
      bool hasSuggestRuleCount() const { return this->suggestRuleCount_ != nullptr;};
      void deleteSuggestRuleCount() { this->suggestRuleCount_ = nullptr;};
      inline int32_t getSuggestRuleCount() const { DARABONBA_PTR_GET_DEFAULT(suggestRuleCount_, 0) };
      inline ClusterRuleSummary& setSuggestRuleCount(int32_t suggestRuleCount) { DARABONBA_PTR_SET_VALUE(suggestRuleCount_, suggestRuleCount) };


    protected:
      // The number of disabled cluster defense rules.
      shared_ptr<int32_t> closeRuleCount_ {};
      // The number of alerts that are triggered by the cluster defense rules in the last seven days.
      shared_ptr<int64_t> interceptionCount7Day_ {};
      // The status of the container firewall feature. Valid values:
      // 
      // *   **0**: disabled
      // *   **1**: enabled
      shared_ptr<int32_t> interceptionSwitch_ {};
      // The interception mode.
      shared_ptr<int32_t> interceptionType_ {};
      // The number of enabled cluster defense rules.
      shared_ptr<int32_t> openRuleCount_ {};
      // The total number of configured cluster defense rules.
      shared_ptr<int32_t> ruleCount_ {};
      // The number of recommended cluster defense rules.
      shared_ptr<int32_t> suggestRuleCount_ {};
    };

    virtual bool empty() const override { return this->clusterRuleSummary_ == nullptr
        && this->requestId_ == nullptr; };
    // clusterRuleSummary Field Functions 
    bool hasClusterRuleSummary() const { return this->clusterRuleSummary_ != nullptr;};
    void deleteClusterRuleSummary() { this->clusterRuleSummary_ = nullptr;};
    inline const GetClusterRuleSummaryResponseBody::ClusterRuleSummary & getClusterRuleSummary() const { DARABONBA_PTR_GET_CONST(clusterRuleSummary_, GetClusterRuleSummaryResponseBody::ClusterRuleSummary) };
    inline GetClusterRuleSummaryResponseBody::ClusterRuleSummary getClusterRuleSummary() { DARABONBA_PTR_GET(clusterRuleSummary_, GetClusterRuleSummaryResponseBody::ClusterRuleSummary) };
    inline GetClusterRuleSummaryResponseBody& setClusterRuleSummary(const GetClusterRuleSummaryResponseBody::ClusterRuleSummary & clusterRuleSummary) { DARABONBA_PTR_SET_VALUE(clusterRuleSummary_, clusterRuleSummary) };
    inline GetClusterRuleSummaryResponseBody& setClusterRuleSummary(GetClusterRuleSummaryResponseBody::ClusterRuleSummary && clusterRuleSummary) { DARABONBA_PTR_SET_RVALUE(clusterRuleSummary_, clusterRuleSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterRuleSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The overall information about the cluster defense rules.
    shared_ptr<GetClusterRuleSummaryResponseBody::ClusterRuleSummary> clusterRuleSummary_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
