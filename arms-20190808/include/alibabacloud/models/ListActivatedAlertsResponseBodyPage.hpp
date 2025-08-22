// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIVATEDALERTSRESPONSEBODYPAGE_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIVATEDALERTSRESPONSEBODYPAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListActivatedAlertsResponseBodyPageAlerts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListActivatedAlertsResponseBodyPage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActivatedAlertsResponseBodyPage& obj) { 
      DARABONBA_PTR_TO_JSON(Alerts, alerts_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListActivatedAlertsResponseBodyPage& obj) { 
      DARABONBA_PTR_FROM_JSON(Alerts, alerts_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListActivatedAlertsResponseBodyPage() = default ;
    ListActivatedAlertsResponseBodyPage(const ListActivatedAlertsResponseBodyPage &) = default ;
    ListActivatedAlertsResponseBodyPage(ListActivatedAlertsResponseBodyPage &&) = default ;
    ListActivatedAlertsResponseBodyPage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActivatedAlertsResponseBodyPage() = default ;
    ListActivatedAlertsResponseBodyPage& operator=(const ListActivatedAlertsResponseBodyPage &) = default ;
    ListActivatedAlertsResponseBodyPage& operator=(ListActivatedAlertsResponseBodyPage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alerts_ != nullptr
        && this->page_ != nullptr && this->pageSize_ != nullptr && this->total_ != nullptr; };
    // alerts Field Functions 
    bool hasAlerts() const { return this->alerts_ != nullptr;};
    void deleteAlerts() { this->alerts_ = nullptr;};
    inline const vector<Models::ListActivatedAlertsResponseBodyPageAlerts> & alerts() const { DARABONBA_PTR_GET_CONST(alerts_, vector<Models::ListActivatedAlertsResponseBodyPageAlerts>) };
    inline vector<Models::ListActivatedAlertsResponseBodyPageAlerts> alerts() { DARABONBA_PTR_GET(alerts_, vector<Models::ListActivatedAlertsResponseBodyPageAlerts>) };
    inline ListActivatedAlertsResponseBodyPage& setAlerts(const vector<Models::ListActivatedAlertsResponseBodyPageAlerts> & alerts) { DARABONBA_PTR_SET_VALUE(alerts_, alerts) };
    inline ListActivatedAlertsResponseBodyPage& setAlerts(vector<Models::ListActivatedAlertsResponseBodyPageAlerts> && alerts) { DARABONBA_PTR_SET_RVALUE(alerts_, alerts) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListActivatedAlertsResponseBodyPage& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListActivatedAlertsResponseBodyPage& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListActivatedAlertsResponseBodyPage& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The alerts that have been triggered.
    std::shared_ptr<vector<Models::ListActivatedAlertsResponseBodyPageAlerts>> alerts_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
