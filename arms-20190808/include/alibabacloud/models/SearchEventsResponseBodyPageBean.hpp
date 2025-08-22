// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHEVENTSRESPONSEBODYPAGEBEAN_HPP_
#define ALIBABACLOUD_MODELS_SEARCHEVENTSRESPONSEBODYPAGEBEAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchEventsResponseBodyPageBeanEvent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchEventsResponseBodyPageBean : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchEventsResponseBodyPageBean& obj) { 
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchEventsResponseBodyPageBean& obj) { 
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchEventsResponseBodyPageBean() = default ;
    SearchEventsResponseBodyPageBean(const SearchEventsResponseBodyPageBean &) = default ;
    SearchEventsResponseBodyPageBean(SearchEventsResponseBodyPageBean &&) = default ;
    SearchEventsResponseBodyPageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchEventsResponseBodyPageBean() = default ;
    SearchEventsResponseBodyPageBean& operator=(const SearchEventsResponseBodyPageBean &) = default ;
    SearchEventsResponseBodyPageBean& operator=(SearchEventsResponseBodyPageBean &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->event_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline const vector<Models::SearchEventsResponseBodyPageBeanEvent> & event() const { DARABONBA_PTR_GET_CONST(event_, vector<Models::SearchEventsResponseBodyPageBeanEvent>) };
    inline vector<Models::SearchEventsResponseBodyPageBeanEvent> event() { DARABONBA_PTR_GET(event_, vector<Models::SearchEventsResponseBodyPageBeanEvent>) };
    inline SearchEventsResponseBodyPageBean& setEvent(const vector<Models::SearchEventsResponseBodyPageBeanEvent> & event) { DARABONBA_PTR_SET_VALUE(event_, event) };
    inline SearchEventsResponseBodyPageBean& setEvent(vector<Models::SearchEventsResponseBodyPageBeanEvent> && event) { DARABONBA_PTR_SET_RVALUE(event_, event) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchEventsResponseBodyPageBean& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchEventsResponseBodyPageBean& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline SearchEventsResponseBodyPageBean& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the alert events.
    std::shared_ptr<vector<Models::SearchEventsResponseBodyPageBeanEvent>> event_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
