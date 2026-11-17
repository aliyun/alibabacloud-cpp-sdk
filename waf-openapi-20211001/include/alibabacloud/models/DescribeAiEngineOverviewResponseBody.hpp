// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIENGINEOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIENGINEOVERVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeAiEngineOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAiEngineOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AnalyzedRequestCount, analyzedRequestCount_);
      DARABONBA_PTR_TO_JSON(EventCount, eventCount_);
      DARABONBA_PTR_TO_JSON(HandleStatusCounts, handleStatusCounts_);
      DARABONBA_PTR_TO_JSON(ProtectedGroupCount, protectedGroupCount_);
      DARABONBA_PTR_TO_JSON(ProtectedResourceCount, protectedResourceCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskCounts, riskCounts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAiEngineOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalyzedRequestCount, analyzedRequestCount_);
      DARABONBA_PTR_FROM_JSON(EventCount, eventCount_);
      DARABONBA_PTR_FROM_JSON(HandleStatusCounts, handleStatusCounts_);
      DARABONBA_PTR_FROM_JSON(ProtectedGroupCount, protectedGroupCount_);
      DARABONBA_PTR_FROM_JSON(ProtectedResourceCount, protectedResourceCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskCounts, riskCounts_);
    };
    DescribeAiEngineOverviewResponseBody() = default ;
    DescribeAiEngineOverviewResponseBody(const DescribeAiEngineOverviewResponseBody &) = default ;
    DescribeAiEngineOverviewResponseBody(DescribeAiEngineOverviewResponseBody &&) = default ;
    DescribeAiEngineOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAiEngineOverviewResponseBody() = default ;
    DescribeAiEngineOverviewResponseBody& operator=(const DescribeAiEngineOverviewResponseBody &) = default ;
    DescribeAiEngineOverviewResponseBody& operator=(DescribeAiEngineOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskCounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskCounts& obj) { 
        DARABONBA_PTR_TO_JSON(Critical, critical_);
        DARABONBA_PTR_TO_JSON(High, high_);
        DARABONBA_PTR_TO_JSON(Low, low_);
        DARABONBA_PTR_TO_JSON(Medium, medium_);
      };
      friend void from_json(const Darabonba::Json& j, RiskCounts& obj) { 
        DARABONBA_PTR_FROM_JSON(Critical, critical_);
        DARABONBA_PTR_FROM_JSON(High, high_);
        DARABONBA_PTR_FROM_JSON(Low, low_);
        DARABONBA_PTR_FROM_JSON(Medium, medium_);
      };
      RiskCounts() = default ;
      RiskCounts(const RiskCounts &) = default ;
      RiskCounts(RiskCounts &&) = default ;
      RiskCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskCounts() = default ;
      RiskCounts& operator=(const RiskCounts &) = default ;
      RiskCounts& operator=(RiskCounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->critical_ == nullptr
        && this->high_ == nullptr && this->low_ == nullptr && this->medium_ == nullptr; };
      // critical Field Functions 
      bool hasCritical() const { return this->critical_ != nullptr;};
      void deleteCritical() { this->critical_ = nullptr;};
      inline int64_t getCritical() const { DARABONBA_PTR_GET_DEFAULT(critical_, 0L) };
      inline RiskCounts& setCritical(int64_t critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };


      // high Field Functions 
      bool hasHigh() const { return this->high_ != nullptr;};
      void deleteHigh() { this->high_ = nullptr;};
      inline int64_t getHigh() const { DARABONBA_PTR_GET_DEFAULT(high_, 0L) };
      inline RiskCounts& setHigh(int64_t high) { DARABONBA_PTR_SET_VALUE(high_, high) };


      // low Field Functions 
      bool hasLow() const { return this->low_ != nullptr;};
      void deleteLow() { this->low_ = nullptr;};
      inline int64_t getLow() const { DARABONBA_PTR_GET_DEFAULT(low_, 0L) };
      inline RiskCounts& setLow(int64_t low) { DARABONBA_PTR_SET_VALUE(low_, low) };


      // medium Field Functions 
      bool hasMedium() const { return this->medium_ != nullptr;};
      void deleteMedium() { this->medium_ = nullptr;};
      inline int64_t getMedium() const { DARABONBA_PTR_GET_DEFAULT(medium_, 0L) };
      inline RiskCounts& setMedium(int64_t medium) { DARABONBA_PTR_SET_VALUE(medium_, medium) };


    protected:
      // The number of critical events.
      shared_ptr<int64_t> critical_ {};
      // The number of high-risk events.
      shared_ptr<int64_t> high_ {};
      // The number of low-risk events.
      shared_ptr<int64_t> low_ {};
      // The number of medium-risk events.
      shared_ptr<int64_t> medium_ {};
    };

    class HandleStatusCounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HandleStatusCounts& obj) { 
        DARABONBA_PTR_TO_JSON(Handled, handled_);
        DARABONBA_PTR_TO_JSON(Handling, handling_);
        DARABONBA_PTR_TO_JSON(Unhandled, unhandled_);
      };
      friend void from_json(const Darabonba::Json& j, HandleStatusCounts& obj) { 
        DARABONBA_PTR_FROM_JSON(Handled, handled_);
        DARABONBA_PTR_FROM_JSON(Handling, handling_);
        DARABONBA_PTR_FROM_JSON(Unhandled, unhandled_);
      };
      HandleStatusCounts() = default ;
      HandleStatusCounts(const HandleStatusCounts &) = default ;
      HandleStatusCounts(HandleStatusCounts &&) = default ;
      HandleStatusCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HandleStatusCounts() = default ;
      HandleStatusCounts& operator=(const HandleStatusCounts &) = default ;
      HandleStatusCounts& operator=(HandleStatusCounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->handled_ == nullptr
        && this->handling_ == nullptr && this->unhandled_ == nullptr; };
      // handled Field Functions 
      bool hasHandled() const { return this->handled_ != nullptr;};
      void deleteHandled() { this->handled_ = nullptr;};
      inline int64_t getHandled() const { DARABONBA_PTR_GET_DEFAULT(handled_, 0L) };
      inline HandleStatusCounts& setHandled(int64_t handled) { DARABONBA_PTR_SET_VALUE(handled_, handled) };


      // handling Field Functions 
      bool hasHandling() const { return this->handling_ != nullptr;};
      void deleteHandling() { this->handling_ = nullptr;};
      inline int64_t getHandling() const { DARABONBA_PTR_GET_DEFAULT(handling_, 0L) };
      inline HandleStatusCounts& setHandling(int64_t handling) { DARABONBA_PTR_SET_VALUE(handling_, handling) };


      // unhandled Field Functions 
      bool hasUnhandled() const { return this->unhandled_ != nullptr;};
      void deleteUnhandled() { this->unhandled_ = nullptr;};
      inline int64_t getUnhandled() const { DARABONBA_PTR_GET_DEFAULT(unhandled_, 0L) };
      inline HandleStatusCounts& setUnhandled(int64_t unhandled) { DARABONBA_PTR_SET_VALUE(unhandled_, unhandled) };


    protected:
      // The number of handled events.
      shared_ptr<int64_t> handled_ {};
      // The number of events being handled.
      shared_ptr<int64_t> handling_ {};
      // The number of unhandled events.
      shared_ptr<int64_t> unhandled_ {};
    };

    virtual bool empty() const override { return this->analyzedRequestCount_ == nullptr
        && this->eventCount_ == nullptr && this->handleStatusCounts_ == nullptr && this->protectedGroupCount_ == nullptr && this->protectedResourceCount_ == nullptr && this->requestId_ == nullptr
        && this->riskCounts_ == nullptr; };
    // analyzedRequestCount Field Functions 
    bool hasAnalyzedRequestCount() const { return this->analyzedRequestCount_ != nullptr;};
    void deleteAnalyzedRequestCount() { this->analyzedRequestCount_ = nullptr;};
    inline int64_t getAnalyzedRequestCount() const { DARABONBA_PTR_GET_DEFAULT(analyzedRequestCount_, 0L) };
    inline DescribeAiEngineOverviewResponseBody& setAnalyzedRequestCount(int64_t analyzedRequestCount) { DARABONBA_PTR_SET_VALUE(analyzedRequestCount_, analyzedRequestCount) };


    // eventCount Field Functions 
    bool hasEventCount() const { return this->eventCount_ != nullptr;};
    void deleteEventCount() { this->eventCount_ = nullptr;};
    inline int64_t getEventCount() const { DARABONBA_PTR_GET_DEFAULT(eventCount_, 0L) };
    inline DescribeAiEngineOverviewResponseBody& setEventCount(int64_t eventCount) { DARABONBA_PTR_SET_VALUE(eventCount_, eventCount) };


    // handleStatusCounts Field Functions 
    bool hasHandleStatusCounts() const { return this->handleStatusCounts_ != nullptr;};
    void deleteHandleStatusCounts() { this->handleStatusCounts_ = nullptr;};
    inline const DescribeAiEngineOverviewResponseBody::HandleStatusCounts & getHandleStatusCounts() const { DARABONBA_PTR_GET_CONST(handleStatusCounts_, DescribeAiEngineOverviewResponseBody::HandleStatusCounts) };
    inline DescribeAiEngineOverviewResponseBody::HandleStatusCounts getHandleStatusCounts() { DARABONBA_PTR_GET(handleStatusCounts_, DescribeAiEngineOverviewResponseBody::HandleStatusCounts) };
    inline DescribeAiEngineOverviewResponseBody& setHandleStatusCounts(const DescribeAiEngineOverviewResponseBody::HandleStatusCounts & handleStatusCounts) { DARABONBA_PTR_SET_VALUE(handleStatusCounts_, handleStatusCounts) };
    inline DescribeAiEngineOverviewResponseBody& setHandleStatusCounts(DescribeAiEngineOverviewResponseBody::HandleStatusCounts && handleStatusCounts) { DARABONBA_PTR_SET_RVALUE(handleStatusCounts_, handleStatusCounts) };


    // protectedGroupCount Field Functions 
    bool hasProtectedGroupCount() const { return this->protectedGroupCount_ != nullptr;};
    void deleteProtectedGroupCount() { this->protectedGroupCount_ = nullptr;};
    inline int32_t getProtectedGroupCount() const { DARABONBA_PTR_GET_DEFAULT(protectedGroupCount_, 0) };
    inline DescribeAiEngineOverviewResponseBody& setProtectedGroupCount(int32_t protectedGroupCount) { DARABONBA_PTR_SET_VALUE(protectedGroupCount_, protectedGroupCount) };


    // protectedResourceCount Field Functions 
    bool hasProtectedResourceCount() const { return this->protectedResourceCount_ != nullptr;};
    void deleteProtectedResourceCount() { this->protectedResourceCount_ = nullptr;};
    inline int32_t getProtectedResourceCount() const { DARABONBA_PTR_GET_DEFAULT(protectedResourceCount_, 0) };
    inline DescribeAiEngineOverviewResponseBody& setProtectedResourceCount(int32_t protectedResourceCount) { DARABONBA_PTR_SET_VALUE(protectedResourceCount_, protectedResourceCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAiEngineOverviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskCounts Field Functions 
    bool hasRiskCounts() const { return this->riskCounts_ != nullptr;};
    void deleteRiskCounts() { this->riskCounts_ = nullptr;};
    inline const DescribeAiEngineOverviewResponseBody::RiskCounts & getRiskCounts() const { DARABONBA_PTR_GET_CONST(riskCounts_, DescribeAiEngineOverviewResponseBody::RiskCounts) };
    inline DescribeAiEngineOverviewResponseBody::RiskCounts getRiskCounts() { DARABONBA_PTR_GET(riskCounts_, DescribeAiEngineOverviewResponseBody::RiskCounts) };
    inline DescribeAiEngineOverviewResponseBody& setRiskCounts(const DescribeAiEngineOverviewResponseBody::RiskCounts & riskCounts) { DARABONBA_PTR_SET_VALUE(riskCounts_, riskCounts) };
    inline DescribeAiEngineOverviewResponseBody& setRiskCounts(DescribeAiEngineOverviewResponseBody::RiskCounts && riskCounts) { DARABONBA_PTR_SET_RVALUE(riskCounts_, riskCounts) };


  protected:
    // The number of analyzed requests.
    shared_ptr<int64_t> analyzedRequestCount_ {};
    // The number of events within the specified time range.
    shared_ptr<int64_t> eventCount_ {};
    // The number of events within the specified time range, categorized by handling status.
    shared_ptr<DescribeAiEngineOverviewResponseBody::HandleStatusCounts> handleStatusCounts_ {};
    // The number of protection groups for which AI Engine is enabled.
    shared_ptr<int32_t> protectedGroupCount_ {};
    // The number of protected objects for which AI Engine is enabled. This count does not include protected objects that belong to a protection group.
    shared_ptr<int32_t> protectedResourceCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of events within the specified time range, categorized by risk level.
    shared_ptr<DescribeAiEngineOverviewResponseBody::RiskCounts> riskCounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
