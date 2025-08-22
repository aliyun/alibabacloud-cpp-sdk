// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTEVENTSRESPONSEBODYPAGEBEAN_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTEVENTSRESPONSEBODYPAGEBEAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAlertEventsResponseBodyPageBeanEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListAlertEventsResponseBodyPageBean : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertEventsResponseBodyPageBean& obj) { 
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertEventsResponseBodyPageBean& obj) { 
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListAlertEventsResponseBodyPageBean() = default ;
    ListAlertEventsResponseBodyPageBean(const ListAlertEventsResponseBodyPageBean &) = default ;
    ListAlertEventsResponseBodyPageBean(ListAlertEventsResponseBodyPageBean &&) = default ;
    ListAlertEventsResponseBodyPageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertEventsResponseBodyPageBean() = default ;
    ListAlertEventsResponseBodyPageBean& operator=(const ListAlertEventsResponseBodyPageBean &) = default ;
    ListAlertEventsResponseBodyPageBean& operator=(ListAlertEventsResponseBodyPageBean &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->events_ != nullptr
        && this->page_ != nullptr && this->size_ != nullptr && this->total_ != nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<Models::ListAlertEventsResponseBodyPageBeanEvents> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<Models::ListAlertEventsResponseBodyPageBeanEvents>) };
    inline vector<Models::ListAlertEventsResponseBodyPageBeanEvents> events() { DARABONBA_PTR_GET(events_, vector<Models::ListAlertEventsResponseBodyPageBeanEvents>) };
    inline ListAlertEventsResponseBodyPageBean& setEvents(const vector<Models::ListAlertEventsResponseBodyPageBeanEvents> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline ListAlertEventsResponseBodyPageBean& setEvents(vector<Models::ListAlertEventsResponseBodyPageBeanEvents> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListAlertEventsResponseBodyPageBean& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListAlertEventsResponseBodyPageBean& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListAlertEventsResponseBodyPageBean& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The queried historical alert events.
    std::shared_ptr<vector<Models::ListAlertEventsResponseBodyPageBeanEvents>> events_ = nullptr;
    // The number of the page returned.
    std::shared_ptr<int64_t> page_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
