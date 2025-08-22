// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBHOOKCONTACTSRESPONSEBODYPAGEBEAN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBHOOKCONTACTSRESPONSEBODYPAGEBEAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebhookContactsResponseBodyPageBeanWebhookContacts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeWebhookContactsResponseBodyPageBean : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebhookContactsResponseBodyPageBean& obj) { 
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(WebhookContacts, webhookContacts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebhookContactsResponseBodyPageBean& obj) { 
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(WebhookContacts, webhookContacts_);
    };
    DescribeWebhookContactsResponseBodyPageBean() = default ;
    DescribeWebhookContactsResponseBodyPageBean(const DescribeWebhookContactsResponseBodyPageBean &) = default ;
    DescribeWebhookContactsResponseBodyPageBean(DescribeWebhookContactsResponseBodyPageBean &&) = default ;
    DescribeWebhookContactsResponseBodyPageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebhookContactsResponseBodyPageBean() = default ;
    DescribeWebhookContactsResponseBodyPageBean& operator=(const DescribeWebhookContactsResponseBodyPageBean &) = default ;
    DescribeWebhookContactsResponseBodyPageBean& operator=(DescribeWebhookContactsResponseBodyPageBean &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->page_ != nullptr
        && this->size_ != nullptr && this->total_ != nullptr && this->webhookContacts_ != nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline DescribeWebhookContactsResponseBodyPageBean& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeWebhookContactsResponseBodyPageBean& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeWebhookContactsResponseBodyPageBean& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // webhookContacts Field Functions 
    bool hasWebhookContacts() const { return this->webhookContacts_ != nullptr;};
    void deleteWebhookContacts() { this->webhookContacts_ = nullptr;};
    inline const vector<Models::DescribeWebhookContactsResponseBodyPageBeanWebhookContacts> & webhookContacts() const { DARABONBA_PTR_GET_CONST(webhookContacts_, vector<Models::DescribeWebhookContactsResponseBodyPageBeanWebhookContacts>) };
    inline vector<Models::DescribeWebhookContactsResponseBodyPageBeanWebhookContacts> webhookContacts() { DARABONBA_PTR_GET(webhookContacts_, vector<Models::DescribeWebhookContactsResponseBodyPageBeanWebhookContacts>) };
    inline DescribeWebhookContactsResponseBodyPageBean& setWebhookContacts(const vector<Models::DescribeWebhookContactsResponseBodyPageBeanWebhookContacts> & webhookContacts) { DARABONBA_PTR_SET_VALUE(webhookContacts_, webhookContacts) };
    inline DescribeWebhookContactsResponseBodyPageBean& setWebhookContacts(vector<Models::DescribeWebhookContactsResponseBodyPageBeanWebhookContacts> && webhookContacts) { DARABONBA_PTR_SET_RVALUE(webhookContacts_, webhookContacts) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int64_t> page_ = nullptr;
    // The number of alert contacts displayed on each page.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The total number of alert contacts.
    std::shared_ptr<int64_t> total_ = nullptr;
    // The list of webhook alert contacts.
    std::shared_ptr<vector<Models::DescribeWebhookContactsResponseBodyPageBeanWebhookContacts>> webhookContacts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
