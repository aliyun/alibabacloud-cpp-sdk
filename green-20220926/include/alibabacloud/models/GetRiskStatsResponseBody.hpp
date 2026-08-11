// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRISKSTATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRISKSTATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetRiskStatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRiskStatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskStats, riskStats_);
    };
    friend void from_json(const Darabonba::Json& j, GetRiskStatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskStats, riskStats_);
    };
    GetRiskStatsResponseBody() = default ;
    GetRiskStatsResponseBody(const GetRiskStatsResponseBody &) = default ;
    GetRiskStatsResponseBody(GetRiskStatsResponseBody &&) = default ;
    GetRiskStatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRiskStatsResponseBody() = default ;
    GetRiskStatsResponseBody& operator=(const GetRiskStatsResponseBody &) = default ;
    GetRiskStatsResponseBody& operator=(GetRiskStatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskStats : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskStats& obj) { 
        DARABONBA_PTR_TO_JSON(RequestCount, requestCount_);
        DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, RiskStats& obj) { 
        DARABONBA_PTR_FROM_JSON(RequestCount, requestCount_);
        DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      RiskStats() = default ;
      RiskStats(const RiskStats &) = default ;
      RiskStats(RiskStats &&) = default ;
      RiskStats(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskStats() = default ;
      RiskStats& operator=(const RiskStats &) = default ;
      RiskStats& operator=(RiskStats &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->requestCount_ == nullptr
        && this->riskCount_ == nullptr && this->type_ == nullptr; };
      // requestCount Field Functions 
      bool hasRequestCount() const { return this->requestCount_ != nullptr;};
      void deleteRequestCount() { this->requestCount_ = nullptr;};
      inline int64_t getRequestCount() const { DARABONBA_PTR_GET_DEFAULT(requestCount_, 0L) };
      inline RiskStats& setRequestCount(int64_t requestCount) { DARABONBA_PTR_SET_VALUE(requestCount_, requestCount) };


      // riskCount Field Functions 
      bool hasRiskCount() const { return this->riskCount_ != nullptr;};
      void deleteRiskCount() { this->riskCount_ = nullptr;};
      inline int64_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
      inline RiskStats& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RiskStats& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The total number of requests.
      shared_ptr<int64_t> requestCount_ {};
      // The number of detected risks.
      shared_ptr<int64_t> riskCount_ {};
      // The type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->riskStats_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRiskStatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskStats Field Functions 
    bool hasRiskStats() const { return this->riskStats_ != nullptr;};
    void deleteRiskStats() { this->riskStats_ = nullptr;};
    inline const vector<GetRiskStatsResponseBody::RiskStats> & getRiskStats() const { DARABONBA_PTR_GET_CONST(riskStats_, vector<GetRiskStatsResponseBody::RiskStats>) };
    inline vector<GetRiskStatsResponseBody::RiskStats> getRiskStats() { DARABONBA_PTR_GET(riskStats_, vector<GetRiskStatsResponseBody::RiskStats>) };
    inline GetRiskStatsResponseBody& setRiskStats(const vector<GetRiskStatsResponseBody::RiskStats> & riskStats) { DARABONBA_PTR_SET_VALUE(riskStats_, riskStats) };
    inline GetRiskStatsResponseBody& setRiskStats(vector<GetRiskStatsResponseBody::RiskStats> && riskStats) { DARABONBA_PTR_SET_RVALUE(riskStats_, riskStats) };


  protected:
    // The ID assigned by the backend to uniquely identify a request. This ID can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The list of risk posture statistics.
    shared_ptr<vector<GetRiskStatsResponseBody::RiskStats>> riskStats_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
