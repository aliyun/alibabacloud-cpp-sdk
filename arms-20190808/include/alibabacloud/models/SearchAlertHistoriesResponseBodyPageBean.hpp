// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTHISTORIESRESPONSEBODYPAGEBEAN_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTHISTORIESRESPONSEBODYPAGEBEAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchAlertHistoriesResponseBodyPageBeanAlarmHistories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchAlertHistoriesResponseBodyPageBean : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertHistoriesResponseBodyPageBean& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmHistories, alarmHistories_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertHistoriesResponseBodyPageBean& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmHistories, alarmHistories_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchAlertHistoriesResponseBodyPageBean() = default ;
    SearchAlertHistoriesResponseBodyPageBean(const SearchAlertHistoriesResponseBodyPageBean &) = default ;
    SearchAlertHistoriesResponseBodyPageBean(SearchAlertHistoriesResponseBodyPageBean &&) = default ;
    SearchAlertHistoriesResponseBodyPageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertHistoriesResponseBodyPageBean() = default ;
    SearchAlertHistoriesResponseBodyPageBean& operator=(const SearchAlertHistoriesResponseBodyPageBean &) = default ;
    SearchAlertHistoriesResponseBodyPageBean& operator=(SearchAlertHistoriesResponseBodyPageBean &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmHistories_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // alarmHistories Field Functions 
    bool hasAlarmHistories() const { return this->alarmHistories_ != nullptr;};
    void deleteAlarmHistories() { this->alarmHistories_ = nullptr;};
    inline const vector<Models::SearchAlertHistoriesResponseBodyPageBeanAlarmHistories> & alarmHistories() const { DARABONBA_PTR_GET_CONST(alarmHistories_, vector<Models::SearchAlertHistoriesResponseBodyPageBeanAlarmHistories>) };
    inline vector<Models::SearchAlertHistoriesResponseBodyPageBeanAlarmHistories> alarmHistories() { DARABONBA_PTR_GET(alarmHistories_, vector<Models::SearchAlertHistoriesResponseBodyPageBeanAlarmHistories>) };
    inline SearchAlertHistoriesResponseBodyPageBean& setAlarmHistories(const vector<Models::SearchAlertHistoriesResponseBodyPageBeanAlarmHistories> & alarmHistories) { DARABONBA_PTR_SET_VALUE(alarmHistories_, alarmHistories) };
    inline SearchAlertHistoriesResponseBodyPageBean& setAlarmHistories(vector<Models::SearchAlertHistoriesResponseBodyPageBeanAlarmHistories> && alarmHistories) { DARABONBA_PTR_SET_RVALUE(alarmHistories_, alarmHistories) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchAlertHistoriesResponseBodyPageBean& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchAlertHistoriesResponseBodyPageBean& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline SearchAlertHistoriesResponseBodyPageBean& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about alert records.
    std::shared_ptr<vector<Models::SearchAlertHistoriesResponseBodyPageBeanAlarmHistories>> alarmHistories_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
