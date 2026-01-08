// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNPROTECTEDVULNTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNPROTECTEDVULNTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeUnprotectedVulnTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUnprotectedVulnTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurProtectedCnt, curProtectedCnt_);
      DARABONBA_PTR_TO_JSON(CurUnprotectedCnt, curUnprotectedCnt_);
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUnprotectedVulnTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurProtectedCnt, curProtectedCnt_);
      DARABONBA_PTR_FROM_JSON(CurUnprotectedCnt, curUnprotectedCnt_);
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeUnprotectedVulnTrendResponseBody() = default ;
    DescribeUnprotectedVulnTrendResponseBody(const DescribeUnprotectedVulnTrendResponseBody &) = default ;
    DescribeUnprotectedVulnTrendResponseBody(DescribeUnprotectedVulnTrendResponseBody &&) = default ;
    DescribeUnprotectedVulnTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUnprotectedVulnTrendResponseBody() = default ;
    DescribeUnprotectedVulnTrendResponseBody& operator=(const DescribeUnprotectedVulnTrendResponseBody &) = default ;
    DescribeUnprotectedVulnTrendResponseBody& operator=(DescribeUnprotectedVulnTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(ProtectedVulnCnt, protectedVulnCnt_);
        DARABONBA_PTR_TO_JSON(Time, time_);
        DARABONBA_PTR_TO_JSON(UnprotectedVulnCnt, unprotectedVulnCnt_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(ProtectedVulnCnt, protectedVulnCnt_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
        DARABONBA_PTR_FROM_JSON(UnprotectedVulnCnt, unprotectedVulnCnt_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->protectedVulnCnt_ == nullptr
        && this->time_ == nullptr && this->unprotectedVulnCnt_ == nullptr; };
      // protectedVulnCnt Field Functions 
      bool hasProtectedVulnCnt() const { return this->protectedVulnCnt_ != nullptr;};
      void deleteProtectedVulnCnt() { this->protectedVulnCnt_ = nullptr;};
      inline int32_t getProtectedVulnCnt() const { DARABONBA_PTR_GET_DEFAULT(protectedVulnCnt_, 0) };
      inline DataList& setProtectedVulnCnt(int32_t protectedVulnCnt) { DARABONBA_PTR_SET_VALUE(protectedVulnCnt_, protectedVulnCnt) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline DataList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // unprotectedVulnCnt Field Functions 
      bool hasUnprotectedVulnCnt() const { return this->unprotectedVulnCnt_ != nullptr;};
      void deleteUnprotectedVulnCnt() { this->unprotectedVulnCnt_ = nullptr;};
      inline int32_t getUnprotectedVulnCnt() const { DARABONBA_PTR_GET_DEFAULT(unprotectedVulnCnt_, 0) };
      inline DataList& setUnprotectedVulnCnt(int32_t unprotectedVulnCnt) { DARABONBA_PTR_SET_VALUE(unprotectedVulnCnt_, unprotectedVulnCnt) };


    protected:
      shared_ptr<int32_t> protectedVulnCnt_ {};
      shared_ptr<int64_t> time_ {};
      shared_ptr<int32_t> unprotectedVulnCnt_ {};
    };

    virtual bool empty() const override { return this->curProtectedCnt_ == nullptr
        && this->curUnprotectedCnt_ == nullptr && this->dataList_ == nullptr && this->endTime_ == nullptr && this->interval_ == nullptr && this->requestId_ == nullptr
        && this->startTime_ == nullptr; };
    // curProtectedCnt Field Functions 
    bool hasCurProtectedCnt() const { return this->curProtectedCnt_ != nullptr;};
    void deleteCurProtectedCnt() { this->curProtectedCnt_ = nullptr;};
    inline int32_t getCurProtectedCnt() const { DARABONBA_PTR_GET_DEFAULT(curProtectedCnt_, 0) };
    inline DescribeUnprotectedVulnTrendResponseBody& setCurProtectedCnt(int32_t curProtectedCnt) { DARABONBA_PTR_SET_VALUE(curProtectedCnt_, curProtectedCnt) };


    // curUnprotectedCnt Field Functions 
    bool hasCurUnprotectedCnt() const { return this->curUnprotectedCnt_ != nullptr;};
    void deleteCurUnprotectedCnt() { this->curUnprotectedCnt_ = nullptr;};
    inline int32_t getCurUnprotectedCnt() const { DARABONBA_PTR_GET_DEFAULT(curUnprotectedCnt_, 0) };
    inline DescribeUnprotectedVulnTrendResponseBody& setCurUnprotectedCnt(int32_t curUnprotectedCnt) { DARABONBA_PTR_SET_VALUE(curUnprotectedCnt_, curUnprotectedCnt) };


    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeUnprotectedVulnTrendResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeUnprotectedVulnTrendResponseBody::DataList>) };
    inline vector<DescribeUnprotectedVulnTrendResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeUnprotectedVulnTrendResponseBody::DataList>) };
    inline DescribeUnprotectedVulnTrendResponseBody& setDataList(const vector<DescribeUnprotectedVulnTrendResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeUnprotectedVulnTrendResponseBody& setDataList(vector<DescribeUnprotectedVulnTrendResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeUnprotectedVulnTrendResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeUnprotectedVulnTrendResponseBody& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUnprotectedVulnTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeUnprotectedVulnTrendResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<int32_t> curProtectedCnt_ {};
    shared_ptr<int32_t> curUnprotectedCnt_ {};
    shared_ptr<vector<DescribeUnprotectedVulnTrendResponseBody::DataList>> dataList_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<int32_t> interval_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
