// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEDULETASKSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEDULETASKSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScheduleTasksResponseBodyDataTimerInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeScheduleTasksResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScheduleTasksResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TimerInfos, timerInfos_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScheduleTasksResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TimerInfos, timerInfos_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeScheduleTasksResponseBodyData() = default ;
    DescribeScheduleTasksResponseBodyData(const DescribeScheduleTasksResponseBodyData &) = default ;
    DescribeScheduleTasksResponseBodyData(DescribeScheduleTasksResponseBodyData &&) = default ;
    DescribeScheduleTasksResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScheduleTasksResponseBodyData() = default ;
    DescribeScheduleTasksResponseBodyData& operator=(const DescribeScheduleTasksResponseBodyData &) = default ;
    DescribeScheduleTasksResponseBodyData& operator=(DescribeScheduleTasksResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->timerInfos_ == nullptr && return this->totalRecordCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScheduleTasksResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScheduleTasksResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // timerInfos Field Functions 
    bool hasTimerInfos() const { return this->timerInfos_ != nullptr;};
    void deleteTimerInfos() { this->timerInfos_ = nullptr;};
    inline const vector<Models::DescribeScheduleTasksResponseBodyDataTimerInfos> & timerInfos() const { DARABONBA_PTR_GET_CONST(timerInfos_, vector<Models::DescribeScheduleTasksResponseBodyDataTimerInfos>) };
    inline vector<Models::DescribeScheduleTasksResponseBodyDataTimerInfos> timerInfos() { DARABONBA_PTR_GET(timerInfos_, vector<Models::DescribeScheduleTasksResponseBodyDataTimerInfos>) };
    inline DescribeScheduleTasksResponseBodyData& setTimerInfos(const vector<Models::DescribeScheduleTasksResponseBodyDataTimerInfos> & timerInfos) { DARABONBA_PTR_SET_VALUE(timerInfos_, timerInfos) };
    inline DescribeScheduleTasksResponseBodyData& setTimerInfos(vector<Models::DescribeScheduleTasksResponseBodyDataTimerInfos> && timerInfos) { DARABONBA_PTR_SET_RVALUE(timerInfos_, timerInfos) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeScheduleTasksResponseBodyData& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The page number of the page returned.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The details of the scheduled tasks.
    std::shared_ptr<vector<Models::DescribeScheduleTasksResponseBodyDataTimerInfos>> timerInfos_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
