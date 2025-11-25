// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVADEECSTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVADEECSTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInvadeEcsTrendResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInvadeEcsTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvadeEcsTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(InvadeEcsCount, invadeEcsCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvadeEcsTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(InvadeEcsCount, invadeEcsCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeInvadeEcsTrendResponseBody() = default ;
    DescribeInvadeEcsTrendResponseBody(const DescribeInvadeEcsTrendResponseBody &) = default ;
    DescribeInvadeEcsTrendResponseBody(DescribeInvadeEcsTrendResponseBody &&) = default ;
    DescribeInvadeEcsTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvadeEcsTrendResponseBody() = default ;
    DescribeInvadeEcsTrendResponseBody& operator=(const DescribeInvadeEcsTrendResponseBody &) = default ;
    DescribeInvadeEcsTrendResponseBody& operator=(DescribeInvadeEcsTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataList_ == nullptr
        && return this->endTime_ == nullptr && return this->interval_ == nullptr && return this->invadeEcsCount_ == nullptr && return this->requestId_ == nullptr && return this->startTime_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeInvadeEcsTrendResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeInvadeEcsTrendResponseBodyDataList>) };
    inline vector<DescribeInvadeEcsTrendResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeInvadeEcsTrendResponseBodyDataList>) };
    inline DescribeInvadeEcsTrendResponseBody& setDataList(const vector<DescribeInvadeEcsTrendResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeInvadeEcsTrendResponseBody& setDataList(vector<DescribeInvadeEcsTrendResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeInvadeEcsTrendResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeInvadeEcsTrendResponseBody& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // invadeEcsCount Field Functions 
    bool hasInvadeEcsCount() const { return this->invadeEcsCount_ != nullptr;};
    void deleteInvadeEcsCount() { this->invadeEcsCount_ = nullptr;};
    inline int32_t invadeEcsCount() const { DARABONBA_PTR_GET_DEFAULT(invadeEcsCount_, 0) };
    inline DescribeInvadeEcsTrendResponseBody& setInvadeEcsCount(int32_t invadeEcsCount) { DARABONBA_PTR_SET_VALUE(invadeEcsCount_, invadeEcsCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInvadeEcsTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeInvadeEcsTrendResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<vector<DescribeInvadeEcsTrendResponseBodyDataList>> dataList_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<int32_t> invadeEcsCount_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
