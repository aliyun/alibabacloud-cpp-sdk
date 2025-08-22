// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODYPAGEBEAN_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODYPAGEBEAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAlertsResponseBodyPageBeanListAlerts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListAlertsResponseBodyPageBean : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertsResponseBodyPageBean& obj) { 
      DARABONBA_PTR_TO_JSON(ListAlerts, listAlerts_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertsResponseBodyPageBean& obj) { 
      DARABONBA_PTR_FROM_JSON(ListAlerts, listAlerts_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListAlertsResponseBodyPageBean() = default ;
    ListAlertsResponseBodyPageBean(const ListAlertsResponseBodyPageBean &) = default ;
    ListAlertsResponseBodyPageBean(ListAlertsResponseBodyPageBean &&) = default ;
    ListAlertsResponseBodyPageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertsResponseBodyPageBean() = default ;
    ListAlertsResponseBodyPageBean& operator=(const ListAlertsResponseBodyPageBean &) = default ;
    ListAlertsResponseBodyPageBean& operator=(ListAlertsResponseBodyPageBean &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listAlerts_ != nullptr
        && this->page_ != nullptr && this->size_ != nullptr && this->total_ != nullptr; };
    // listAlerts Field Functions 
    bool hasListAlerts() const { return this->listAlerts_ != nullptr;};
    void deleteListAlerts() { this->listAlerts_ = nullptr;};
    inline const vector<Models::ListAlertsResponseBodyPageBeanListAlerts> & listAlerts() const { DARABONBA_PTR_GET_CONST(listAlerts_, vector<Models::ListAlertsResponseBodyPageBeanListAlerts>) };
    inline vector<Models::ListAlertsResponseBodyPageBeanListAlerts> listAlerts() { DARABONBA_PTR_GET(listAlerts_, vector<Models::ListAlertsResponseBodyPageBeanListAlerts>) };
    inline ListAlertsResponseBodyPageBean& setListAlerts(const vector<Models::ListAlertsResponseBodyPageBeanListAlerts> & listAlerts) { DARABONBA_PTR_SET_VALUE(listAlerts_, listAlerts) };
    inline ListAlertsResponseBodyPageBean& setListAlerts(vector<Models::ListAlertsResponseBodyPageBeanListAlerts> && listAlerts) { DARABONBA_PTR_SET_RVALUE(listAlerts_, listAlerts) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListAlertsResponseBodyPageBean& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListAlertsResponseBodyPageBean& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListAlertsResponseBodyPageBean& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The queried alert notification history records.
    std::shared_ptr<vector<Models::ListAlertsResponseBodyPageBeanListAlerts>> listAlerts_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int64_t> page_ = nullptr;
    // The number of alerts returned per page.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The total number of queried alerts.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
