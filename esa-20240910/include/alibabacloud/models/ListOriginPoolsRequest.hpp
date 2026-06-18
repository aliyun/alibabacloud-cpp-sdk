// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORIGINPOOLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTORIGINPOOLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListOriginPoolsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOriginPoolsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOriginPoolsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    ListOriginPoolsRequest() = default ;
    ListOriginPoolsRequest(const ListOriginPoolsRequest &) = default ;
    ListOriginPoolsRequest(ListOriginPoolsRequest &&) = default ;
    ListOriginPoolsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOriginPoolsRequest() = default ;
    ListOriginPoolsRequest& operator=(const ListOriginPoolsRequest &) = default ;
    ListOriginPoolsRequest& operator=(ListOriginPoolsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->matchType_ == nullptr
        && this->name_ == nullptr && this->orderBy_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->siteId_ == nullptr; };
    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline ListOriginPoolsRequest& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListOriginPoolsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListOriginPoolsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOriginPoolsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOriginPoolsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListOriginPoolsRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Specifies how to match the origin pool name. The default is `exact`. Valid values:
    // 
    // - `fuzzy`: Performs a fuzzy search.
    // 
    // - `exact`: Performs an exact match.
    shared_ptr<string> matchType_ {};
    // The name of the origin pool.
    shared_ptr<string> name_ {};
    // Specifies how the results are sorted. By default, results are sorted by ID in descending order. To sort by ID in ascending order, set this parameter to `id`. IDs increase with creation time.
    // 
    // - id: Sorts by ID in descending order.
    // 
    // - id: Sorts by ID in ascending order.
    shared_ptr<string> orderBy_ {};
    // The page number. The default value is 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. The value must be an integer from 1 to 500. If you specify a value greater than 500, the system uses 500.
    shared_ptr<int32_t> pageSize_ {};
    // The site ID. To get this ID, call the [ListSites](~~ListSites~~) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
