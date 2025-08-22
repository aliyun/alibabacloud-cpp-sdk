// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTSRESPONSEBODYPAGEBEAN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTSRESPONSEBODYPAGEBEAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeContactsResponseBodyPageBeanAlertContacts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeContactsResponseBodyPageBean : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactsResponseBodyPageBean& obj) { 
      DARABONBA_PTR_TO_JSON(AlertContacts, alertContacts_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactsResponseBodyPageBean& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertContacts, alertContacts_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeContactsResponseBodyPageBean() = default ;
    DescribeContactsResponseBodyPageBean(const DescribeContactsResponseBodyPageBean &) = default ;
    DescribeContactsResponseBodyPageBean(DescribeContactsResponseBodyPageBean &&) = default ;
    DescribeContactsResponseBodyPageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactsResponseBodyPageBean() = default ;
    DescribeContactsResponseBodyPageBean& operator=(const DescribeContactsResponseBodyPageBean &) = default ;
    DescribeContactsResponseBodyPageBean& operator=(DescribeContactsResponseBodyPageBean &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertContacts_ != nullptr
        && this->page_ != nullptr && this->size_ != nullptr && this->total_ != nullptr; };
    // alertContacts Field Functions 
    bool hasAlertContacts() const { return this->alertContacts_ != nullptr;};
    void deleteAlertContacts() { this->alertContacts_ = nullptr;};
    inline const vector<Models::DescribeContactsResponseBodyPageBeanAlertContacts> & alertContacts() const { DARABONBA_PTR_GET_CONST(alertContacts_, vector<Models::DescribeContactsResponseBodyPageBeanAlertContacts>) };
    inline vector<Models::DescribeContactsResponseBodyPageBeanAlertContacts> alertContacts() { DARABONBA_PTR_GET(alertContacts_, vector<Models::DescribeContactsResponseBodyPageBeanAlertContacts>) };
    inline DescribeContactsResponseBodyPageBean& setAlertContacts(const vector<Models::DescribeContactsResponseBodyPageBeanAlertContacts> & alertContacts) { DARABONBA_PTR_SET_VALUE(alertContacts_, alertContacts) };
    inline DescribeContactsResponseBodyPageBean& setAlertContacts(vector<Models::DescribeContactsResponseBodyPageBeanAlertContacts> && alertContacts) { DARABONBA_PTR_SET_RVALUE(alertContacts_, alertContacts) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline DescribeContactsResponseBodyPageBean& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeContactsResponseBodyPageBean& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeContactsResponseBodyPageBean& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The alert contacts.
    std::shared_ptr<vector<Models::DescribeContactsResponseBodyPageBeanAlertContacts>> alertContacts_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int64_t> page_ = nullptr;
    // The number of alert contacts returned per page.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The total number of alert contacts.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
