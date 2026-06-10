// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPPUBLISHHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPPUBLISHHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppPublishHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppPublishHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(DeployChannel, deployChannel_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PublishEnv, publishEnv_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Subchannel, subchannel_);
      DARABONBA_PTR_TO_JSON(WebsiteDomain, websiteDomain_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppPublishHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(DeployChannel, deployChannel_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PublishEnv, publishEnv_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Subchannel, subchannel_);
      DARABONBA_PTR_FROM_JSON(WebsiteDomain, websiteDomain_);
    };
    ListAppPublishHistoryRequest() = default ;
    ListAppPublishHistoryRequest(const ListAppPublishHistoryRequest &) = default ;
    ListAppPublishHistoryRequest(ListAppPublishHistoryRequest &&) = default ;
    ListAppPublishHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppPublishHistoryRequest() = default ;
    ListAppPublishHistoryRequest& operator=(const ListAppPublishHistoryRequest &) = default ;
    ListAppPublishHistoryRequest& operator=(ListAppPublishHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->deployChannel_ == nullptr && this->keyword_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNum_ == nullptr
        && this->pageSize_ == nullptr && this->publishEnv_ == nullptr && this->sort_ == nullptr && this->status_ == nullptr && this->subchannel_ == nullptr
        && this->websiteDomain_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ListAppPublishHistoryRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // deployChannel Field Functions 
    bool hasDeployChannel() const { return this->deployChannel_ != nullptr;};
    void deleteDeployChannel() { this->deployChannel_ = nullptr;};
    inline string getDeployChannel() const { DARABONBA_PTR_GET_DEFAULT(deployChannel_, "") };
    inline ListAppPublishHistoryRequest& setDeployChannel(string deployChannel) { DARABONBA_PTR_SET_VALUE(deployChannel_, deployChannel) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListAppPublishHistoryRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAppPublishHistoryRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAppPublishHistoryRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListAppPublishHistoryRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppPublishHistoryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // publishEnv Field Functions 
    bool hasPublishEnv() const { return this->publishEnv_ != nullptr;};
    void deletePublishEnv() { this->publishEnv_ = nullptr;};
    inline string getPublishEnv() const { DARABONBA_PTR_GET_DEFAULT(publishEnv_, "") };
    inline ListAppPublishHistoryRequest& setPublishEnv(string publishEnv) { DARABONBA_PTR_SET_VALUE(publishEnv_, publishEnv) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListAppPublishHistoryRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAppPublishHistoryRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subchannel Field Functions 
    bool hasSubchannel() const { return this->subchannel_ != nullptr;};
    void deleteSubchannel() { this->subchannel_ = nullptr;};
    inline string getSubchannel() const { DARABONBA_PTR_GET_DEFAULT(subchannel_, "") };
    inline ListAppPublishHistoryRequest& setSubchannel(string subchannel) { DARABONBA_PTR_SET_VALUE(subchannel_, subchannel) };


    // websiteDomain Field Functions 
    bool hasWebsiteDomain() const { return this->websiteDomain_ != nullptr;};
    void deleteWebsiteDomain() { this->websiteDomain_ = nullptr;};
    inline string getWebsiteDomain() const { DARABONBA_PTR_GET_DEFAULT(websiteDomain_, "") };
    inline ListAppPublishHistoryRequest& setWebsiteDomain(string websiteDomain) { DARABONBA_PTR_SET_VALUE(websiteDomain_, websiteDomain) };


  protected:
    // Business ID
    shared_ptr<string> bizId_ {};
    shared_ptr<string> deployChannel_ {};
    // Search keyword
    shared_ptr<string> keyword_ {};
    // Number of results per query.  
    // 
    // Value range: 10 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // Token indicating the start of the next query. Empty if there is no next query.
    shared_ptr<string> nextToken_ {};
    // Page number
    shared_ptr<int32_t> pageNum_ {};
    // Page size
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> publishEnv_ {};
    // Sorting method
    shared_ptr<string> sort_ {};
    // Publish status
    shared_ptr<string> status_ {};
    shared_ptr<string> subchannel_ {};
    // Website domain name
    shared_ptr<string> websiteDomain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
