// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlarmsResponseBodyAlarmList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeAlarmsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmList, alarmList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmList, alarmList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAlarmsResponseBody() = default ;
    DescribeAlarmsResponseBody(const DescribeAlarmsResponseBody &) = default ;
    DescribeAlarmsResponseBody(DescribeAlarmsResponseBody &&) = default ;
    DescribeAlarmsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmsResponseBody() = default ;
    DescribeAlarmsResponseBody& operator=(const DescribeAlarmsResponseBody &) = default ;
    DescribeAlarmsResponseBody& operator=(DescribeAlarmsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmList_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // alarmList Field Functions 
    bool hasAlarmList() const { return this->alarmList_ != nullptr;};
    void deleteAlarmList() { this->alarmList_ = nullptr;};
    inline const vector<DescribeAlarmsResponseBodyAlarmList> & alarmList() const { DARABONBA_PTR_GET_CONST(alarmList_, vector<DescribeAlarmsResponseBodyAlarmList>) };
    inline vector<DescribeAlarmsResponseBodyAlarmList> alarmList() { DARABONBA_PTR_GET(alarmList_, vector<DescribeAlarmsResponseBodyAlarmList>) };
    inline DescribeAlarmsResponseBody& setAlarmList(const vector<DescribeAlarmsResponseBodyAlarmList> & alarmList) { DARABONBA_PTR_SET_VALUE(alarmList_, alarmList) };
    inline DescribeAlarmsResponseBody& setAlarmList(vector<DescribeAlarmsResponseBodyAlarmList> && alarmList) { DARABONBA_PTR_SET_RVALUE(alarmList_, alarmList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAlarmsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAlarmsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlarmsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAlarmsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The event-triggered tasks.
    std::shared_ptr<vector<DescribeAlarmsResponseBodyAlarmList>> alarmList_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of event-triggered tasks.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
