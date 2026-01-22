// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTWEBHOOKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTWEBHOOKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertWebhooksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertWebhooksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(webhookIds, webhookIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertWebhooksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(webhookIds, webhookIds_);
    };
    ListAlertWebhooksRequest() = default ;
    ListAlertWebhooksRequest(const ListAlertWebhooksRequest &) = default ;
    ListAlertWebhooksRequest(ListAlertWebhooksRequest &&) = default ;
    ListAlertWebhooksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertWebhooksRequest() = default ;
    ListAlertWebhooksRequest& operator=(const ListAlertWebhooksRequest &) = default ;
    ListAlertWebhooksRequest& operator=(ListAlertWebhooksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->webhookIds_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAlertWebhooksRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListAlertWebhooksRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAlertWebhooksRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // webhookIds Field Functions 
    bool hasWebhookIds() const { return this->webhookIds_ != nullptr;};
    void deleteWebhookIds() { this->webhookIds_ = nullptr;};
    inline const vector<string> & getWebhookIds() const { DARABONBA_PTR_GET_CONST(webhookIds_, vector<string>) };
    inline vector<string> getWebhookIds() { DARABONBA_PTR_GET(webhookIds_, vector<string>) };
    inline ListAlertWebhooksRequest& setWebhookIds(const vector<string> & webhookIds) { DARABONBA_PTR_SET_VALUE(webhookIds_, webhookIds) };
    inline ListAlertWebhooksRequest& setWebhookIds(vector<string> && webhookIds) { DARABONBA_PTR_SET_RVALUE(webhookIds_, webhookIds) };


  protected:
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<vector<string>> webhookIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
