// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEXPORTDOMAINEXPIRESNATCHSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYEXPORTDOMAINEXPIRESNATCHSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryExportDomainExpireSnatchsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryExportDomainExpireSnatchsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentId, currentId_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSourcesShrink_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, QueryExportDomainExpireSnatchsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentId, currentId_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSourcesShrink_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    QueryExportDomainExpireSnatchsShrinkRequest() = default ;
    QueryExportDomainExpireSnatchsShrinkRequest(const QueryExportDomainExpireSnatchsShrinkRequest &) = default ;
    QueryExportDomainExpireSnatchsShrinkRequest(QueryExportDomainExpireSnatchsShrinkRequest &&) = default ;
    QueryExportDomainExpireSnatchsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryExportDomainExpireSnatchsShrinkRequest() = default ;
    QueryExportDomainExpireSnatchsShrinkRequest& operator=(const QueryExportDomainExpireSnatchsShrinkRequest &) = default ;
    QueryExportDomainExpireSnatchsShrinkRequest& operator=(QueryExportDomainExpireSnatchsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentId_ == nullptr
        && this->dataSourcesShrink_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr; };
    // currentId Field Functions 
    bool hasCurrentId() const { return this->currentId_ != nullptr;};
    void deleteCurrentId() { this->currentId_ = nullptr;};
    inline int64_t getCurrentId() const { DARABONBA_PTR_GET_DEFAULT(currentId_, 0L) };
    inline QueryExportDomainExpireSnatchsShrinkRequest& setCurrentId(int64_t currentId) { DARABONBA_PTR_SET_VALUE(currentId_, currentId) };


    // dataSourcesShrink Field Functions 
    bool hasDataSourcesShrink() const { return this->dataSourcesShrink_ != nullptr;};
    void deleteDataSourcesShrink() { this->dataSourcesShrink_ = nullptr;};
    inline string getDataSourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(dataSourcesShrink_, "") };
    inline QueryExportDomainExpireSnatchsShrinkRequest& setDataSourcesShrink(string dataSourcesShrink) { DARABONBA_PTR_SET_VALUE(dataSourcesShrink_, dataSourcesShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryExportDomainExpireSnatchsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryExportDomainExpireSnatchsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryExportDomainExpireSnatchsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> currentId_ {};
    shared_ptr<string> dataSourcesShrink_ {};
    shared_ptr<int32_t> maxResults_ {};
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
