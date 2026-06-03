// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSESSIONDISTRIBUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSESSIONDISTRIBUTIONRESPONSEBODY_HPP_
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
  class GetSessionDistributionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSessionDistributionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeList, timeList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSessionDistributionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeList, timeList_);
    };
    GetSessionDistributionResponseBody() = default ;
    GetSessionDistributionResponseBody(const GetSessionDistributionResponseBody &) = default ;
    GetSessionDistributionResponseBody(GetSessionDistributionResponseBody &&) = default ;
    GetSessionDistributionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSessionDistributionResponseBody() = default ;
    GetSessionDistributionResponseBody& operator=(const GetSessionDistributionResponseBody &) = default ;
    GetSessionDistributionResponseBody& operator=(GetSessionDistributionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeList& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveSessionCount, activeSessionCount_);
        DARABONBA_PTR_TO_JSON(BeginDate, beginDate_);
        DARABONBA_PTR_TO_JSON(EndDate, endDate_);
        DARABONBA_PTR_TO_JSON(ErrorSessionCount, errorSessionCount_);
        DARABONBA_PTR_TO_JSON(LoginSessionCount, loginSessionCount_);
      };
      friend void from_json(const Darabonba::Json& j, TimeList& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveSessionCount, activeSessionCount_);
        DARABONBA_PTR_FROM_JSON(BeginDate, beginDate_);
        DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
        DARABONBA_PTR_FROM_JSON(ErrorSessionCount, errorSessionCount_);
        DARABONBA_PTR_FROM_JSON(LoginSessionCount, loginSessionCount_);
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
      virtual bool empty() const override { return this->activeSessionCount_ == nullptr
        && this->beginDate_ == nullptr && this->endDate_ == nullptr && this->errorSessionCount_ == nullptr && this->loginSessionCount_ == nullptr; };
      // activeSessionCount Field Functions 
      bool hasActiveSessionCount() const { return this->activeSessionCount_ != nullptr;};
      void deleteActiveSessionCount() { this->activeSessionCount_ = nullptr;};
      inline int64_t getActiveSessionCount() const { DARABONBA_PTR_GET_DEFAULT(activeSessionCount_, 0L) };
      inline TimeList& setActiveSessionCount(int64_t activeSessionCount) { DARABONBA_PTR_SET_VALUE(activeSessionCount_, activeSessionCount) };


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


      // errorSessionCount Field Functions 
      bool hasErrorSessionCount() const { return this->errorSessionCount_ != nullptr;};
      void deleteErrorSessionCount() { this->errorSessionCount_ = nullptr;};
      inline int64_t getErrorSessionCount() const { DARABONBA_PTR_GET_DEFAULT(errorSessionCount_, 0L) };
      inline TimeList& setErrorSessionCount(int64_t errorSessionCount) { DARABONBA_PTR_SET_VALUE(errorSessionCount_, errorSessionCount) };


      // loginSessionCount Field Functions 
      bool hasLoginSessionCount() const { return this->loginSessionCount_ != nullptr;};
      void deleteLoginSessionCount() { this->loginSessionCount_ = nullptr;};
      inline int64_t getLoginSessionCount() const { DARABONBA_PTR_GET_DEFAULT(loginSessionCount_, 0L) };
      inline TimeList& setLoginSessionCount(int64_t loginSessionCount) { DARABONBA_PTR_SET_VALUE(loginSessionCount_, loginSessionCount) };


    protected:
      shared_ptr<int64_t> activeSessionCount_ {};
      shared_ptr<string> beginDate_ {};
      shared_ptr<string> endDate_ {};
      shared_ptr<int64_t> errorSessionCount_ {};
      shared_ptr<int64_t> loginSessionCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->timeList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSessionDistributionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeList Field Functions 
    bool hasTimeList() const { return this->timeList_ != nullptr;};
    void deleteTimeList() { this->timeList_ = nullptr;};
    inline const vector<GetSessionDistributionResponseBody::TimeList> & getTimeList() const { DARABONBA_PTR_GET_CONST(timeList_, vector<GetSessionDistributionResponseBody::TimeList>) };
    inline vector<GetSessionDistributionResponseBody::TimeList> getTimeList() { DARABONBA_PTR_GET(timeList_, vector<GetSessionDistributionResponseBody::TimeList>) };
    inline GetSessionDistributionResponseBody& setTimeList(const vector<GetSessionDistributionResponseBody::TimeList> & timeList) { DARABONBA_PTR_SET_VALUE(timeList_, timeList) };
    inline GetSessionDistributionResponseBody& setTimeList(vector<GetSessionDistributionResponseBody::TimeList> && timeList) { DARABONBA_PTR_SET_RVALUE(timeList_, timeList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetSessionDistributionResponseBody::TimeList>> timeList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
