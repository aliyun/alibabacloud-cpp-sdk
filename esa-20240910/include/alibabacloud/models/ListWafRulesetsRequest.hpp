// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFRULESETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFRULESETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafRulesetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafRulesetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(QueryArgs, queryArgs_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafRulesetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(QueryArgs, queryArgs_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    ListWafRulesetsRequest() = default ;
    ListWafRulesetsRequest(const ListWafRulesetsRequest &) = default ;
    ListWafRulesetsRequest(ListWafRulesetsRequest &&) = default ;
    ListWafRulesetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafRulesetsRequest() = default ;
    ListWafRulesetsRequest& operator=(const ListWafRulesetsRequest &) = default ;
    ListWafRulesetsRequest& operator=(ListWafRulesetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryArgs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryArgs& obj) { 
        DARABONBA_PTR_TO_JSON(AnyLike, anyLike_);
        DARABONBA_PTR_TO_JSON(Desc, desc_);
        DARABONBA_PTR_TO_JSON(NameLike, nameLike_);
        DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      };
      friend void from_json(const Darabonba::Json& j, QueryArgs& obj) { 
        DARABONBA_PTR_FROM_JSON(AnyLike, anyLike_);
        DARABONBA_PTR_FROM_JSON(Desc, desc_);
        DARABONBA_PTR_FROM_JSON(NameLike, nameLike_);
        DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      };
      QueryArgs() = default ;
      QueryArgs(const QueryArgs &) = default ;
      QueryArgs(QueryArgs &&) = default ;
      QueryArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryArgs() = default ;
      QueryArgs& operator=(const QueryArgs &) = default ;
      QueryArgs& operator=(QueryArgs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->anyLike_ == nullptr
        && this->desc_ == nullptr && this->nameLike_ == nullptr && this->orderBy_ == nullptr; };
      // anyLike Field Functions 
      bool hasAnyLike() const { return this->anyLike_ != nullptr;};
      void deleteAnyLike() { this->anyLike_ = nullptr;};
      inline string getAnyLike() const { DARABONBA_PTR_GET_DEFAULT(anyLike_, "") };
      inline QueryArgs& setAnyLike(string anyLike) { DARABONBA_PTR_SET_VALUE(anyLike_, anyLike) };


      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline bool getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, false) };
      inline QueryArgs& setDesc(bool desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // nameLike Field Functions 
      bool hasNameLike() const { return this->nameLike_ != nullptr;};
      void deleteNameLike() { this->nameLike_ = nullptr;};
      inline string getNameLike() const { DARABONBA_PTR_GET_DEFAULT(nameLike_, "") };
      inline QueryArgs& setNameLike(string nameLike) { DARABONBA_PTR_SET_VALUE(nameLike_, nameLike) };


      // orderBy Field Functions 
      bool hasOrderBy() const { return this->orderBy_ != nullptr;};
      void deleteOrderBy() { this->orderBy_ = nullptr;};
      inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
      inline QueryArgs& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    protected:
      // Fuzzy search for rule set ID, rule set name, rule ID, and rule name.
      shared_ptr<string> anyLike_ {};
      // Whether to sort in descending order.
      shared_ptr<bool> desc_ {};
      // Fuzzy search for rule set name.
      shared_ptr<string> nameLike_ {};
      // Specify the column to sort by.
      shared_ptr<string> orderBy_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->phase_ == nullptr && this->queryArgs_ == nullptr && this->siteId_ == nullptr && this->siteVersion_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWafRulesetsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWafRulesetsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ListWafRulesetsRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // queryArgs Field Functions 
    bool hasQueryArgs() const { return this->queryArgs_ != nullptr;};
    void deleteQueryArgs() { this->queryArgs_ = nullptr;};
    inline const ListWafRulesetsRequest::QueryArgs & getQueryArgs() const { DARABONBA_PTR_GET_CONST(queryArgs_, ListWafRulesetsRequest::QueryArgs) };
    inline ListWafRulesetsRequest::QueryArgs getQueryArgs() { DARABONBA_PTR_GET(queryArgs_, ListWafRulesetsRequest::QueryArgs) };
    inline ListWafRulesetsRequest& setQueryArgs(const ListWafRulesetsRequest::QueryArgs & queryArgs) { DARABONBA_PTR_SET_VALUE(queryArgs_, queryArgs) };
    inline ListWafRulesetsRequest& setQueryArgs(ListWafRulesetsRequest::QueryArgs && queryArgs) { DARABONBA_PTR_SET_RVALUE(queryArgs_, queryArgs) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListWafRulesetsRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline ListWafRulesetsRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // Page number, specifying the current page number for paginated queries.
    shared_ptr<int32_t> pageNumber_ {};
    // Page size, specifying the number of records per page for paginated queries.
    shared_ptr<int32_t> pageSize_ {};
    // WAF operation phase, specifying the rule set phase to query.
    shared_ptr<string> phase_ {};
    // Query parameters, passed in JSON format, containing various filtering conditions.
    shared_ptr<ListWafRulesetsRequest::QueryArgs> queryArgs_ {};
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    shared_ptr<int64_t> siteId_ {};
    // Site version.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
