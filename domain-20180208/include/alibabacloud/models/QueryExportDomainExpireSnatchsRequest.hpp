// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEXPORTDOMAINEXPIRESNATCHSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYEXPORTDOMAINEXPIRESNATCHSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryExportDomainExpireSnatchsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryExportDomainExpireSnatchsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentId, currentId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, QueryExportDomainExpireSnatchsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentId, currentId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    QueryExportDomainExpireSnatchsRequest() = default ;
    QueryExportDomainExpireSnatchsRequest(const QueryExportDomainExpireSnatchsRequest &) = default ;
    QueryExportDomainExpireSnatchsRequest(QueryExportDomainExpireSnatchsRequest &&) = default ;
    QueryExportDomainExpireSnatchsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryExportDomainExpireSnatchsRequest() = default ;
    QueryExportDomainExpireSnatchsRequest& operator=(const QueryExportDomainExpireSnatchsRequest &) = default ;
    QueryExportDomainExpireSnatchsRequest& operator=(QueryExportDomainExpireSnatchsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentId_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->pageSize_ == nullptr; };
    // currentId Field Functions 
    bool hasCurrentId() const { return this->currentId_ != nullptr;};
    void deleteCurrentId() { this->currentId_ = nullptr;};
    inline int64_t currentId() const { DARABONBA_PTR_GET_DEFAULT(currentId_, 0L) };
    inline QueryExportDomainExpireSnatchsRequest& setCurrentId(int64_t currentId) { DARABONBA_PTR_SET_VALUE(currentId_, currentId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryExportDomainExpireSnatchsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryExportDomainExpireSnatchsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryExportDomainExpireSnatchsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> currentId_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nextToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
