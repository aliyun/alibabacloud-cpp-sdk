// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNPROTECTEDVULNTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNPROTECTEDVULNTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUnprotectedVulnTrendResponseBodyDataList.hpp>
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
    virtual bool empty() const override { return this->curProtectedCnt_ == nullptr
        && return this->curUnprotectedCnt_ == nullptr && return this->dataList_ == nullptr && return this->endTime_ == nullptr && return this->interval_ == nullptr && return this->requestId_ == nullptr
        && return this->startTime_ == nullptr; };
    // curProtectedCnt Field Functions 
    bool hasCurProtectedCnt() const { return this->curProtectedCnt_ != nullptr;};
    void deleteCurProtectedCnt() { this->curProtectedCnt_ = nullptr;};
    inline int32_t curProtectedCnt() const { DARABONBA_PTR_GET_DEFAULT(curProtectedCnt_, 0) };
    inline DescribeUnprotectedVulnTrendResponseBody& setCurProtectedCnt(int32_t curProtectedCnt) { DARABONBA_PTR_SET_VALUE(curProtectedCnt_, curProtectedCnt) };


    // curUnprotectedCnt Field Functions 
    bool hasCurUnprotectedCnt() const { return this->curUnprotectedCnt_ != nullptr;};
    void deleteCurUnprotectedCnt() { this->curUnprotectedCnt_ = nullptr;};
    inline int32_t curUnprotectedCnt() const { DARABONBA_PTR_GET_DEFAULT(curUnprotectedCnt_, 0) };
    inline DescribeUnprotectedVulnTrendResponseBody& setCurUnprotectedCnt(int32_t curUnprotectedCnt) { DARABONBA_PTR_SET_VALUE(curUnprotectedCnt_, curUnprotectedCnt) };


    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeUnprotectedVulnTrendResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeUnprotectedVulnTrendResponseBodyDataList>) };
    inline vector<DescribeUnprotectedVulnTrendResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeUnprotectedVulnTrendResponseBodyDataList>) };
    inline DescribeUnprotectedVulnTrendResponseBody& setDataList(const vector<DescribeUnprotectedVulnTrendResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeUnprotectedVulnTrendResponseBody& setDataList(vector<DescribeUnprotectedVulnTrendResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeUnprotectedVulnTrendResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeUnprotectedVulnTrendResponseBody& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUnprotectedVulnTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeUnprotectedVulnTrendResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<int32_t> curProtectedCnt_ = nullptr;
    std::shared_ptr<int32_t> curUnprotectedCnt_ = nullptr;
    std::shared_ptr<vector<DescribeUnprotectedVulnTrendResponseBodyDataList>> dataList_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
