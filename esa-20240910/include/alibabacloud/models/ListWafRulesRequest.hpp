// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(QueryArgs, queryArgs_);
      DARABONBA_PTR_TO_JSON(RulesetId, rulesetId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(QueryArgs, queryArgs_);
      DARABONBA_PTR_FROM_JSON(RulesetId, rulesetId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    ListWafRulesRequest() = default ;
    ListWafRulesRequest(const ListWafRulesRequest &) = default ;
    ListWafRulesRequest(ListWafRulesRequest &&) = default ;
    ListWafRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafRulesRequest() = default ;
    ListWafRulesRequest& operator=(const ListWafRulesRequest &) = default ;
    ListWafRulesRequest& operator=(ListWafRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryArgs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryArgs& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigValueLike, configValueLike_);
        DARABONBA_PTR_TO_JSON(Desc, desc_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdNameLike, idNameLike_);
        DARABONBA_PTR_TO_JSON(NameLike, nameLike_);
        DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, QueryArgs& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigValueLike, configValueLike_);
        DARABONBA_PTR_FROM_JSON(Desc, desc_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdNameLike, idNameLike_);
        DARABONBA_PTR_FROM_JSON(NameLike, nameLike_);
        DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->configValueLike_ == nullptr
        && this->desc_ == nullptr && this->id_ == nullptr && this->idNameLike_ == nullptr && this->nameLike_ == nullptr && this->orderBy_ == nullptr
        && this->status_ == nullptr; };
      // configValueLike Field Functions 
      bool hasConfigValueLike() const { return this->configValueLike_ != nullptr;};
      void deleteConfigValueLike() { this->configValueLike_ = nullptr;};
      inline string getConfigValueLike() const { DARABONBA_PTR_GET_DEFAULT(configValueLike_, "") };
      inline QueryArgs& setConfigValueLike(string configValueLike) { DARABONBA_PTR_SET_VALUE(configValueLike_, configValueLike) };


      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline bool getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, false) };
      inline QueryArgs& setDesc(bool desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline QueryArgs& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // idNameLike Field Functions 
      bool hasIdNameLike() const { return this->idNameLike_ != nullptr;};
      void deleteIdNameLike() { this->idNameLike_ = nullptr;};
      inline string getIdNameLike() const { DARABONBA_PTR_GET_DEFAULT(idNameLike_, "") };
      inline QueryArgs& setIdNameLike(string idNameLike) { DARABONBA_PTR_SET_VALUE(idNameLike_, idNameLike) };


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


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline QueryArgs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Fuzzy search for values in IP access control.
      shared_ptr<string> configValueLike_ {};
      // Whether to reverse the sorting result.
      shared_ptr<bool> desc_ {};
      // Exact query for WAF rule ID.
      shared_ptr<int64_t> id_ {};
      // Fuzzy query for WAF rule ID or name.
      shared_ptr<string> idNameLike_ {};
      // Fuzzy query for WAF rule name.
      shared_ptr<string> nameLike_ {};
      // Sort the returned list by the specified column.
      shared_ptr<string> orderBy_ {};
      // Exact query for WAF rule status.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->phase_ == nullptr && this->queryArgs_ == nullptr && this->rulesetId_ == nullptr && this->siteId_ == nullptr
        && this->siteVersion_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWafRulesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWafRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ListWafRulesRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // queryArgs Field Functions 
    bool hasQueryArgs() const { return this->queryArgs_ != nullptr;};
    void deleteQueryArgs() { this->queryArgs_ = nullptr;};
    inline const ListWafRulesRequest::QueryArgs & getQueryArgs() const { DARABONBA_PTR_GET_CONST(queryArgs_, ListWafRulesRequest::QueryArgs) };
    inline ListWafRulesRequest::QueryArgs getQueryArgs() { DARABONBA_PTR_GET(queryArgs_, ListWafRulesRequest::QueryArgs) };
    inline ListWafRulesRequest& setQueryArgs(const ListWafRulesRequest::QueryArgs & queryArgs) { DARABONBA_PTR_SET_VALUE(queryArgs_, queryArgs) };
    inline ListWafRulesRequest& setQueryArgs(ListWafRulesRequest::QueryArgs && queryArgs) { DARABONBA_PTR_SET_RVALUE(queryArgs_, queryArgs) };


    // rulesetId Field Functions 
    bool hasRulesetId() const { return this->rulesetId_ != nullptr;};
    void deleteRulesetId() { this->rulesetId_ = nullptr;};
    inline int64_t getRulesetId() const { DARABONBA_PTR_GET_DEFAULT(rulesetId_, 0L) };
    inline ListWafRulesRequest& setRulesetId(int64_t rulesetId) { DARABONBA_PTR_SET_VALUE(rulesetId_, rulesetId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListWafRulesRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline ListWafRulesRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // Query page number, used for pagination.
    shared_ptr<int32_t> pageNumber_ {};
    // Query page size, used for pagination.
    shared_ptr<int32_t> pageSize_ {};
    // WAF rule type. Values:
    // 
    // - http_anti_scan: Scan protection
    // - http_bot: Bots
    // 
    // This parameter is required.
    shared_ptr<string> phase_ {};
    // Query filter conditions.
    shared_ptr<ListWafRulesRequest::QueryArgs> queryArgs_ {};
    shared_ptr<int64_t> rulesetId_ {};
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // Site version.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
