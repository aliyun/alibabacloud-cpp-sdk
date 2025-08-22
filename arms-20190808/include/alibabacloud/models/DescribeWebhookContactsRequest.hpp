// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBHOOKCONTACTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBHOOKCONTACTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeWebhookContactsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebhookContactsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactIds, contactIds_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(WebhookName, webhookName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebhookContactsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactIds, contactIds_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(WebhookName, webhookName_);
    };
    DescribeWebhookContactsRequest() = default ;
    DescribeWebhookContactsRequest(const DescribeWebhookContactsRequest &) = default ;
    DescribeWebhookContactsRequest(DescribeWebhookContactsRequest &&) = default ;
    DescribeWebhookContactsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebhookContactsRequest() = default ;
    DescribeWebhookContactsRequest& operator=(const DescribeWebhookContactsRequest &) = default ;
    DescribeWebhookContactsRequest& operator=(DescribeWebhookContactsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactIds_ != nullptr
        && this->page_ != nullptr && this->size_ != nullptr && this->webhookName_ != nullptr; };
    // contactIds Field Functions 
    bool hasContactIds() const { return this->contactIds_ != nullptr;};
    void deleteContactIds() { this->contactIds_ = nullptr;};
    inline string contactIds() const { DARABONBA_PTR_GET_DEFAULT(contactIds_, "") };
    inline DescribeWebhookContactsRequest& setContactIds(string contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline DescribeWebhookContactsRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeWebhookContactsRequest& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // webhookName Field Functions 
    bool hasWebhookName() const { return this->webhookName_ != nullptr;};
    void deleteWebhookName() { this->webhookName_ = nullptr;};
    inline string webhookName() const { DARABONBA_PTR_GET_DEFAULT(webhookName_, "") };
    inline DescribeWebhookContactsRequest& setWebhookName(string webhookName) { DARABONBA_PTR_SET_VALUE(webhookName_, webhookName) };


  protected:
    // The ID of the alert contact.
    std::shared_ptr<string> contactIds_ = nullptr;
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> page_ = nullptr;
    // The number of alert contacts displayed on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The name of the webhook alert contact.
    std::shared_ptr<string> webhookName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
