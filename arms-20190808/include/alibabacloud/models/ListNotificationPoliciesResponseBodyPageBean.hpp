// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNOTIFICATIONPOLICIESRESPONSEBODYPAGEBEAN_HPP_
#define ALIBABACLOUD_MODELS_LISTNOTIFICATIONPOLICIESRESPONSEBODYPAGEBEAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNotificationPoliciesResponseBodyPageBeanNotificationPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListNotificationPoliciesResponseBodyPageBean : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNotificationPoliciesResponseBodyPageBean& obj) { 
      DARABONBA_PTR_TO_JSON(NotificationPolicies, notificationPolicies_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListNotificationPoliciesResponseBodyPageBean& obj) { 
      DARABONBA_PTR_FROM_JSON(NotificationPolicies, notificationPolicies_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListNotificationPoliciesResponseBodyPageBean() = default ;
    ListNotificationPoliciesResponseBodyPageBean(const ListNotificationPoliciesResponseBodyPageBean &) = default ;
    ListNotificationPoliciesResponseBodyPageBean(ListNotificationPoliciesResponseBodyPageBean &&) = default ;
    ListNotificationPoliciesResponseBodyPageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNotificationPoliciesResponseBodyPageBean() = default ;
    ListNotificationPoliciesResponseBodyPageBean& operator=(const ListNotificationPoliciesResponseBodyPageBean &) = default ;
    ListNotificationPoliciesResponseBodyPageBean& operator=(ListNotificationPoliciesResponseBodyPageBean &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->notificationPolicies_ != nullptr
        && this->page_ != nullptr && this->size_ != nullptr && this->total_ != nullptr; };
    // notificationPolicies Field Functions 
    bool hasNotificationPolicies() const { return this->notificationPolicies_ != nullptr;};
    void deleteNotificationPolicies() { this->notificationPolicies_ = nullptr;};
    inline const vector<Models::ListNotificationPoliciesResponseBodyPageBeanNotificationPolicies> & notificationPolicies() const { DARABONBA_PTR_GET_CONST(notificationPolicies_, vector<Models::ListNotificationPoliciesResponseBodyPageBeanNotificationPolicies>) };
    inline vector<Models::ListNotificationPoliciesResponseBodyPageBeanNotificationPolicies> notificationPolicies() { DARABONBA_PTR_GET(notificationPolicies_, vector<Models::ListNotificationPoliciesResponseBodyPageBeanNotificationPolicies>) };
    inline ListNotificationPoliciesResponseBodyPageBean& setNotificationPolicies(const vector<Models::ListNotificationPoliciesResponseBodyPageBeanNotificationPolicies> & notificationPolicies) { DARABONBA_PTR_SET_VALUE(notificationPolicies_, notificationPolicies) };
    inline ListNotificationPoliciesResponseBodyPageBean& setNotificationPolicies(vector<Models::ListNotificationPoliciesResponseBodyPageBeanNotificationPolicies> && notificationPolicies) { DARABONBA_PTR_SET_RVALUE(notificationPolicies_, notificationPolicies) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListNotificationPoliciesResponseBodyPageBean& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListNotificationPoliciesResponseBodyPageBean& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListNotificationPoliciesResponseBodyPageBean& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The queried notification policies.
    std::shared_ptr<vector<Models::ListNotificationPoliciesResponseBodyPageBeanNotificationPolicies>> notificationPolicies_ = nullptr;
    // The number of the page returned.
    std::shared_ptr<int64_t> page_ = nullptr;
    // The number of entries that are returned on each page.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The number of notification policies that are returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
