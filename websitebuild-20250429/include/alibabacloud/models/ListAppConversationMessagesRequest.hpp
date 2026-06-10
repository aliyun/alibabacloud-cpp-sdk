// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPCONVERSATIONMESSAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPCONVERSATIONMESSAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppConversationMessagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppConversationMessagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StartCreateTime, startCreateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppConversationMessagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StartCreateTime, startCreateTime_);
    };
    ListAppConversationMessagesRequest() = default ;
    ListAppConversationMessagesRequest(const ListAppConversationMessagesRequest &) = default ;
    ListAppConversationMessagesRequest(ListAppConversationMessagesRequest &&) = default ;
    ListAppConversationMessagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppConversationMessagesRequest() = default ;
    ListAppConversationMessagesRequest& operator=(const ListAppConversationMessagesRequest &) = default ;
    ListAppConversationMessagesRequest& operator=(ListAppConversationMessagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversationId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr && this->siteId_ == nullptr && this->startCreateTime_ == nullptr; };
    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline ListAppConversationMessagesRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAppConversationMessagesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAppConversationMessagesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppConversationMessagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline string getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
    inline ListAppConversationMessagesRequest& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // startCreateTime Field Functions 
    bool hasStartCreateTime() const { return this->startCreateTime_ != nullptr;};
    void deleteStartCreateTime() { this->startCreateTime_ = nullptr;};
    inline string getStartCreateTime() const { DARABONBA_PTR_GET_DEFAULT(startCreateTime_, "") };
    inline ListAppConversationMessagesRequest& setStartCreateTime(string startCreateTime) { DARABONBA_PTR_SET_VALUE(startCreateTime_, startCreateTime) };


  protected:
    // Session ID.
    shared_ptr<string> conversationId_ {};
    // Number of results per query.
    // 
    // Valid values: 10 to 100. Default Value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // Token indicating the start of the next query. This value is empty if there is no subsequent query.
    shared_ptr<string> nextToken_ {};
    // Number of entries per page (10–100).
    shared_ptr<int32_t> pageSize_ {};
    // Site ID.
    shared_ptr<string> siteId_ {};
    // Creation Time of the last entry on the previous page (in ISO 8601 format).
    shared_ptr<string> startCreateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
