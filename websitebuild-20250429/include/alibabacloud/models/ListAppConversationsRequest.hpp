// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPCONVERSATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPCONVERSATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppConversationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppConversationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BotId, botId_);
      DARABONBA_PTR_TO_JSON(EndModifyTime, endModifyTime_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StartModifyTime, startModifyTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppConversationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BotId, botId_);
      DARABONBA_PTR_FROM_JSON(EndModifyTime, endModifyTime_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StartModifyTime, startModifyTime_);
    };
    ListAppConversationsRequest() = default ;
    ListAppConversationsRequest(const ListAppConversationsRequest &) = default ;
    ListAppConversationsRequest(ListAppConversationsRequest &&) = default ;
    ListAppConversationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppConversationsRequest() = default ;
    ListAppConversationsRequest& operator=(const ListAppConversationsRequest &) = default ;
    ListAppConversationsRequest& operator=(ListAppConversationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->botId_ == nullptr
        && this->endModifyTime_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->siteId_ == nullptr && this->startModifyTime_ == nullptr; };
    // botId Field Functions 
    bool hasBotId() const { return this->botId_ != nullptr;};
    void deleteBotId() { this->botId_ = nullptr;};
    inline string getBotId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
    inline ListAppConversationsRequest& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


    // endModifyTime Field Functions 
    bool hasEndModifyTime() const { return this->endModifyTime_ != nullptr;};
    void deleteEndModifyTime() { this->endModifyTime_ = nullptr;};
    inline string getEndModifyTime() const { DARABONBA_PTR_GET_DEFAULT(endModifyTime_, "") };
    inline ListAppConversationsRequest& setEndModifyTime(string endModifyTime) { DARABONBA_PTR_SET_VALUE(endModifyTime_, endModifyTime) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAppConversationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAppConversationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListAppConversationsRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppConversationsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline string getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
    inline ListAppConversationsRequest& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // startModifyTime Field Functions 
    bool hasStartModifyTime() const { return this->startModifyTime_ != nullptr;};
    void deleteStartModifyTime() { this->startModifyTime_ = nullptr;};
    inline string getStartModifyTime() const { DARABONBA_PTR_GET_DEFAULT(startModifyTime_, "") };
    inline ListAppConversationsRequest& setStartModifyTime(string startModifyTime) { DARABONBA_PTR_SET_VALUE(startModifyTime_, startModifyTime) };


  protected:
    shared_ptr<string> botId_ {};
    shared_ptr<string> endModifyTime_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> siteId_ {};
    shared_ptr<string> startModifyTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
