// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(ColorScheme, colorScheme_);
      DARABONBA_PTR_TO_JSON(Industry, industry_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(ColorScheme, colorScheme_);
      DARABONBA_PTR_FROM_JSON(Industry, industry_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListAppTemplatesRequest() = default ;
    ListAppTemplatesRequest(const ListAppTemplatesRequest &) = default ;
    ListAppTemplatesRequest(ListAppTemplatesRequest &&) = default ;
    ListAppTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppTemplatesRequest() = default ;
    ListAppTemplatesRequest& operator=(const ListAppTemplatesRequest &) = default ;
    ListAppTemplatesRequest& operator=(ListAppTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && this->colorScheme_ == nullptr && this->industry_ == nullptr && this->keyword_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->productVersion_ == nullptr && this->status_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline ListAppTemplatesRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // colorScheme Field Functions 
    bool hasColorScheme() const { return this->colorScheme_ != nullptr;};
    void deleteColorScheme() { this->colorScheme_ = nullptr;};
    inline string getColorScheme() const { DARABONBA_PTR_GET_DEFAULT(colorScheme_, "") };
    inline ListAppTemplatesRequest& setColorScheme(string colorScheme) { DARABONBA_PTR_SET_VALUE(colorScheme_, colorScheme) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline ListAppTemplatesRequest& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListAppTemplatesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAppTemplatesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAppTemplatesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListAppTemplatesRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppTemplatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productVersion Field Functions 
    bool hasProductVersion() const { return this->productVersion_ != nullptr;};
    void deleteProductVersion() { this->productVersion_ = nullptr;};
    inline string getProductVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
    inline ListAppTemplatesRequest& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAppTemplatesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Application Type
    shared_ptr<string> appType_ {};
    // Color scheme
    shared_ptr<string> colorScheme_ {};
    // industry categorization
    shared_ptr<string> industry_ {};
    // Search keyword
    shared_ptr<string> keyword_ {};
    // Number of results per query.  
    // 
    // Value range: 10–100. Default Value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // Token indicating the start of the next query. It is empty when there is no next query.
    shared_ptr<string> nextToken_ {};
    // Page number
    shared_ptr<int32_t> pageNum_ {};
    // Page size
    shared_ptr<int32_t> pageSize_ {};
    // Edition
    shared_ptr<string> productVersion_ {};
    // template Status
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
