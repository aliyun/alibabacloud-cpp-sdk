// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRISKLEVELDISTRIBUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRISKLEVELDISTRIBUTIONRESPONSEBODY_HPP_
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
  class GetRiskLevelDistributionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRiskLevelDistributionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeList, timeList_);
    };
    friend void from_json(const Darabonba::Json& j, GetRiskLevelDistributionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeList, timeList_);
    };
    GetRiskLevelDistributionResponseBody() = default ;
    GetRiskLevelDistributionResponseBody(const GetRiskLevelDistributionResponseBody &) = default ;
    GetRiskLevelDistributionResponseBody(GetRiskLevelDistributionResponseBody &&) = default ;
    GetRiskLevelDistributionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRiskLevelDistributionResponseBody() = default ;
    GetRiskLevelDistributionResponseBody& operator=(const GetRiskLevelDistributionResponseBody &) = default ;
    GetRiskLevelDistributionResponseBody& operator=(GetRiskLevelDistributionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeList& obj) { 
        DARABONBA_PTR_TO_JSON(BeginDate, beginDate_);
        DARABONBA_PTR_TO_JSON(EndDate, endDate_);
        DARABONBA_PTR_TO_JSON(HighRiskCount, highRiskCount_);
        DARABONBA_PTR_TO_JSON(LowRiskCount, lowRiskCount_);
        DARABONBA_PTR_TO_JSON(MiddleRiskCount, middleRiskCount_);
        DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
      };
      friend void from_json(const Darabonba::Json& j, TimeList& obj) { 
        DARABONBA_PTR_FROM_JSON(BeginDate, beginDate_);
        DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
        DARABONBA_PTR_FROM_JSON(HighRiskCount, highRiskCount_);
        DARABONBA_PTR_FROM_JSON(LowRiskCount, lowRiskCount_);
        DARABONBA_PTR_FROM_JSON(MiddleRiskCount, middleRiskCount_);
        DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
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
        && this->endDate_ == nullptr && this->highRiskCount_ == nullptr && this->lowRiskCount_ == nullptr && this->middleRiskCount_ == nullptr && this->riskCount_ == nullptr; };
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


      // highRiskCount Field Functions 
      bool hasHighRiskCount() const { return this->highRiskCount_ != nullptr;};
      void deleteHighRiskCount() { this->highRiskCount_ = nullptr;};
      inline int64_t getHighRiskCount() const { DARABONBA_PTR_GET_DEFAULT(highRiskCount_, 0L) };
      inline TimeList& setHighRiskCount(int64_t highRiskCount) { DARABONBA_PTR_SET_VALUE(highRiskCount_, highRiskCount) };


      // lowRiskCount Field Functions 
      bool hasLowRiskCount() const { return this->lowRiskCount_ != nullptr;};
      void deleteLowRiskCount() { this->lowRiskCount_ = nullptr;};
      inline int64_t getLowRiskCount() const { DARABONBA_PTR_GET_DEFAULT(lowRiskCount_, 0L) };
      inline TimeList& setLowRiskCount(int64_t lowRiskCount) { DARABONBA_PTR_SET_VALUE(lowRiskCount_, lowRiskCount) };


      // middleRiskCount Field Functions 
      bool hasMiddleRiskCount() const { return this->middleRiskCount_ != nullptr;};
      void deleteMiddleRiskCount() { this->middleRiskCount_ = nullptr;};
      inline int64_t getMiddleRiskCount() const { DARABONBA_PTR_GET_DEFAULT(middleRiskCount_, 0L) };
      inline TimeList& setMiddleRiskCount(int64_t middleRiskCount) { DARABONBA_PTR_SET_VALUE(middleRiskCount_, middleRiskCount) };


      // riskCount Field Functions 
      bool hasRiskCount() const { return this->riskCount_ != nullptr;};
      void deleteRiskCount() { this->riskCount_ = nullptr;};
      inline int64_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
      inline TimeList& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


    protected:
      shared_ptr<string> beginDate_ {};
      shared_ptr<string> endDate_ {};
      shared_ptr<int64_t> highRiskCount_ {};
      shared_ptr<int64_t> lowRiskCount_ {};
      shared_ptr<int64_t> middleRiskCount_ {};
      shared_ptr<int64_t> riskCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->timeList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRiskLevelDistributionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeList Field Functions 
    bool hasTimeList() const { return this->timeList_ != nullptr;};
    void deleteTimeList() { this->timeList_ = nullptr;};
    inline const vector<GetRiskLevelDistributionResponseBody::TimeList> & getTimeList() const { DARABONBA_PTR_GET_CONST(timeList_, vector<GetRiskLevelDistributionResponseBody::TimeList>) };
    inline vector<GetRiskLevelDistributionResponseBody::TimeList> getTimeList() { DARABONBA_PTR_GET(timeList_, vector<GetRiskLevelDistributionResponseBody::TimeList>) };
    inline GetRiskLevelDistributionResponseBody& setTimeList(const vector<GetRiskLevelDistributionResponseBody::TimeList> & timeList) { DARABONBA_PTR_SET_VALUE(timeList_, timeList) };
    inline GetRiskLevelDistributionResponseBody& setTimeList(vector<GetRiskLevelDistributionResponseBody::TimeList> && timeList) { DARABONBA_PTR_SET_RVALUE(timeList_, timeList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetRiskLevelDistributionResponseBody::TimeList>> timeList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
