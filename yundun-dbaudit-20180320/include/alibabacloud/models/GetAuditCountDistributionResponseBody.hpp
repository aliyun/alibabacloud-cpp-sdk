// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDITCOUNTDISTRIBUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUDITCOUNTDISTRIBUTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
namespace Models
{
  class GetAuditCountDistributionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuditCountDistributionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeList, timeList_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuditCountDistributionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeList, timeList_);
    };
    GetAuditCountDistributionResponseBody() = default ;
    GetAuditCountDistributionResponseBody(const GetAuditCountDistributionResponseBody &) = default ;
    GetAuditCountDistributionResponseBody(GetAuditCountDistributionResponseBody &&) = default ;
    GetAuditCountDistributionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuditCountDistributionResponseBody() = default ;
    GetAuditCountDistributionResponseBody& operator=(const GetAuditCountDistributionResponseBody &) = default ;
    GetAuditCountDistributionResponseBody& operator=(GetAuditCountDistributionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeList& obj) { 
        DARABONBA_PTR_TO_JSON(BeginDate, beginDate_);
        DARABONBA_PTR_TO_JSON(EndDate, endDate_);
        DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
        DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_TO_JSON(SqlCount, sqlCount_);
      };
      friend void from_json(const Darabonba::Json& j, TimeList& obj) { 
        DARABONBA_PTR_FROM_JSON(BeginDate, beginDate_);
        DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
        DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
        DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_FROM_JSON(SqlCount, sqlCount_);
      };
      TimeList() = default ;
      TimeList(const TimeList &) = default ;
      TimeList(TimeList &&) = default ;
      TimeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimeList() = default ;
      TimeList& operator=(const TimeList &) = default ;
      TimeList& operator=(TimeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->beginDate_ == nullptr
        && this->endDate_ == nullptr && this->riskCount_ == nullptr && this->sessionCount_ == nullptr && this->sqlCount_ == nullptr; };
      // beginDate Field Functions 
      bool hasBeginDate() const { return this->beginDate_ != nullptr;};
      void deleteBeginDate() { this->beginDate_ = nullptr;};
      inline string getBeginDate() const { DARABONBA_PTR_GET_DEFAULT(beginDate_, "") };
      inline TimeList& setBeginDate(string beginDate) { DARABONBA_PTR_SET_VALUE(beginDate_, beginDate) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline TimeList& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // riskCount Field Functions 
      bool hasRiskCount() const { return this->riskCount_ != nullptr;};
      void deleteRiskCount() { this->riskCount_ = nullptr;};
      inline int64_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
      inline TimeList& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


      // sessionCount Field Functions 
      bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
      void deleteSessionCount() { this->sessionCount_ = nullptr;};
      inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
      inline TimeList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


      // sqlCount Field Functions 
      bool hasSqlCount() const { return this->sqlCount_ != nullptr;};
      void deleteSqlCount() { this->sqlCount_ = nullptr;};
      inline int64_t getSqlCount() const { DARABONBA_PTR_GET_DEFAULT(sqlCount_, 0L) };
      inline TimeList& setSqlCount(int64_t sqlCount) { DARABONBA_PTR_SET_VALUE(sqlCount_, sqlCount) };


    protected:
      shared_ptr<string> beginDate_ {};
      shared_ptr<string> endDate_ {};
      shared_ptr<int64_t> riskCount_ {};
      shared_ptr<int64_t> sessionCount_ {};
      shared_ptr<int64_t> sqlCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->timeList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuditCountDistributionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeList Field Functions 
    bool hasTimeList() const { return this->timeList_ != nullptr;};
    void deleteTimeList() { this->timeList_ = nullptr;};
    inline const vector<GetAuditCountDistributionResponseBody::TimeList> & getTimeList() const { DARABONBA_PTR_GET_CONST(timeList_, vector<GetAuditCountDistributionResponseBody::TimeList>) };
    inline vector<GetAuditCountDistributionResponseBody::TimeList> getTimeList() { DARABONBA_PTR_GET(timeList_, vector<GetAuditCountDistributionResponseBody::TimeList>) };
    inline GetAuditCountDistributionResponseBody& setTimeList(const vector<GetAuditCountDistributionResponseBody::TimeList> & timeList) { DARABONBA_PTR_SET_VALUE(timeList_, timeList) };
    inline GetAuditCountDistributionResponseBody& setTimeList(vector<GetAuditCountDistributionResponseBody::TimeList> && timeList) { DARABONBA_PTR_SET_RVALUE(timeList_, timeList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetAuditCountDistributionResponseBody::TimeList>> timeList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
