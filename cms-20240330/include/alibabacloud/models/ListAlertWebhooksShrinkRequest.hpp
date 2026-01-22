// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTWEBHOOKSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTWEBHOOKSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertWebhooksShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertWebhooksShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(webhookIds, webhookIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertWebhooksShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(webhookIds, webhookIdsShrink_);
    };
    ListAlertWebhooksShrinkRequest() = default ;
    ListAlertWebhooksShrinkRequest(const ListAlertWebhooksShrinkRequest &) = default ;
    ListAlertWebhooksShrinkRequest(ListAlertWebhooksShrinkRequest &&) = default ;
    ListAlertWebhooksShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertWebhooksShrinkRequest() = default ;
    ListAlertWebhooksShrinkRequest& operator=(const ListAlertWebhooksShrinkRequest &) = default ;
    ListAlertWebhooksShrinkRequest& operator=(ListAlertWebhooksShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->webhookIdsShrink_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAlertWebhooksShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListAlertWebhooksShrinkRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAlertWebhooksShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // webhookIdsShrink Field Functions 
    bool hasWebhookIdsShrink() const { return this->webhookIdsShrink_ != nullptr;};
    void deleteWebhookIdsShrink() { this->webhookIdsShrink_ = nullptr;};
    inline string getWebhookIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(webhookIdsShrink_, "") };
    inline ListAlertWebhooksShrinkRequest& setWebhookIdsShrink(string webhookIdsShrink) { DARABONBA_PTR_SET_VALUE(webhookIdsShrink_, webhookIdsShrink) };


  protected:
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> webhookIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
