// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIAPPOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIAPPOVERVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetAiAppOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiAppOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppTotal, appTotal_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(RiskEventLevelDistribution, riskEventLevelDistribution_);
      DARABONBA_PTR_TO_JSON(RiskEventResolvedTotal, riskEventResolvedTotal_);
      DARABONBA_PTR_TO_JSON(RiskEventTotal, riskEventTotal_);
      DARABONBA_PTR_TO_JSON(RiskEventUnhandledTotal, riskEventUnhandledTotal_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiAppOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppTotal, appTotal_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(RiskEventLevelDistribution, riskEventLevelDistribution_);
      DARABONBA_PTR_FROM_JSON(RiskEventResolvedTotal, riskEventResolvedTotal_);
      DARABONBA_PTR_FROM_JSON(RiskEventTotal, riskEventTotal_);
      DARABONBA_PTR_FROM_JSON(RiskEventUnhandledTotal, riskEventUnhandledTotal_);
    };
    GetAiAppOverviewResponseBody() = default ;
    GetAiAppOverviewResponseBody(const GetAiAppOverviewResponseBody &) = default ;
    GetAiAppOverviewResponseBody(GetAiAppOverviewResponseBody &&) = default ;
    GetAiAppOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiAppOverviewResponseBody() = default ;
    GetAiAppOverviewResponseBody& operator=(const GetAiAppOverviewResponseBody &) = default ;
    GetAiAppOverviewResponseBody& operator=(GetAiAppOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appTotal_ == nullptr
        && this->requestId_ == nullptr && this->riskEventLevelDistribution_ == nullptr && this->riskEventResolvedTotal_ == nullptr && this->riskEventTotal_ == nullptr && this->riskEventUnhandledTotal_ == nullptr; };
    // appTotal Field Functions 
    bool hasAppTotal() const { return this->appTotal_ != nullptr;};
    void deleteAppTotal() { this->appTotal_ = nullptr;};
    inline int64_t getAppTotal() const { DARABONBA_PTR_GET_DEFAULT(appTotal_, 0L) };
    inline GetAiAppOverviewResponseBody& setAppTotal(int64_t appTotal) { DARABONBA_PTR_SET_VALUE(appTotal_, appTotal) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAiAppOverviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskEventLevelDistribution Field Functions 
    bool hasRiskEventLevelDistribution() const { return this->riskEventLevelDistribution_ != nullptr;};
    void deleteRiskEventLevelDistribution() { this->riskEventLevelDistribution_ = nullptr;};
    inline     const Darabonba::Json & getRiskEventLevelDistribution() const { DARABONBA_GET(riskEventLevelDistribution_) };
    Darabonba::Json & getRiskEventLevelDistribution() { DARABONBA_GET(riskEventLevelDistribution_) };
    inline GetAiAppOverviewResponseBody& setRiskEventLevelDistribution(const Darabonba::Json & riskEventLevelDistribution) { DARABONBA_SET_VALUE(riskEventLevelDistribution_, riskEventLevelDistribution) };
    inline GetAiAppOverviewResponseBody& setRiskEventLevelDistribution(Darabonba::Json && riskEventLevelDistribution) { DARABONBA_SET_RVALUE(riskEventLevelDistribution_, riskEventLevelDistribution) };


    // riskEventResolvedTotal Field Functions 
    bool hasRiskEventResolvedTotal() const { return this->riskEventResolvedTotal_ != nullptr;};
    void deleteRiskEventResolvedTotal() { this->riskEventResolvedTotal_ = nullptr;};
    inline int64_t getRiskEventResolvedTotal() const { DARABONBA_PTR_GET_DEFAULT(riskEventResolvedTotal_, 0L) };
    inline GetAiAppOverviewResponseBody& setRiskEventResolvedTotal(int64_t riskEventResolvedTotal) { DARABONBA_PTR_SET_VALUE(riskEventResolvedTotal_, riskEventResolvedTotal) };


    // riskEventTotal Field Functions 
    bool hasRiskEventTotal() const { return this->riskEventTotal_ != nullptr;};
    void deleteRiskEventTotal() { this->riskEventTotal_ = nullptr;};
    inline int64_t getRiskEventTotal() const { DARABONBA_PTR_GET_DEFAULT(riskEventTotal_, 0L) };
    inline GetAiAppOverviewResponseBody& setRiskEventTotal(int64_t riskEventTotal) { DARABONBA_PTR_SET_VALUE(riskEventTotal_, riskEventTotal) };


    // riskEventUnhandledTotal Field Functions 
    bool hasRiskEventUnhandledTotal() const { return this->riskEventUnhandledTotal_ != nullptr;};
    void deleteRiskEventUnhandledTotal() { this->riskEventUnhandledTotal_ = nullptr;};
    inline int64_t getRiskEventUnhandledTotal() const { DARABONBA_PTR_GET_DEFAULT(riskEventUnhandledTotal_, 0L) };
    inline GetAiAppOverviewResponseBody& setRiskEventUnhandledTotal(int64_t riskEventUnhandledTotal) { DARABONBA_PTR_SET_VALUE(riskEventUnhandledTotal_, riskEventUnhandledTotal) };


  protected:
    // The total number of agents.
    shared_ptr<int64_t> appTotal_ {};
    // The ID assigned by the backend to uniquely identify a request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The distribution of risk events by level.
    Darabonba::Json riskEventLevelDistribution_ {};
    // The total number of resolved risk events.
    shared_ptr<int64_t> riskEventResolvedTotal_ {};
    // The total number of risk events.
    shared_ptr<int64_t> riskEventTotal_ {};
    // The total number of unhandled risk events.
    shared_ptr<int64_t> riskEventUnhandledTotal_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
