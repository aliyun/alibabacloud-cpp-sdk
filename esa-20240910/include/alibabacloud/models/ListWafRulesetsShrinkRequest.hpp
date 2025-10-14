// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFRULESETSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFRULESETSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafRulesetsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafRulesetsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(QueryArgs, queryArgsShrink_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafRulesetsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(QueryArgs, queryArgsShrink_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    ListWafRulesetsShrinkRequest() = default ;
    ListWafRulesetsShrinkRequest(const ListWafRulesetsShrinkRequest &) = default ;
    ListWafRulesetsShrinkRequest(ListWafRulesetsShrinkRequest &&) = default ;
    ListWafRulesetsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafRulesetsShrinkRequest() = default ;
    ListWafRulesetsShrinkRequest& operator=(const ListWafRulesetsShrinkRequest &) = default ;
    ListWafRulesetsShrinkRequest& operator=(ListWafRulesetsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->phase_ == nullptr && return this->queryArgsShrink_ == nullptr && return this->siteId_ == nullptr && return this->siteVersion_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWafRulesetsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWafRulesetsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ListWafRulesetsShrinkRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // queryArgsShrink Field Functions 
    bool hasQueryArgsShrink() const { return this->queryArgsShrink_ != nullptr;};
    void deleteQueryArgsShrink() { this->queryArgsShrink_ = nullptr;};
    inline string queryArgsShrink() const { DARABONBA_PTR_GET_DEFAULT(queryArgsShrink_, "") };
    inline ListWafRulesetsShrinkRequest& setQueryArgsShrink(string queryArgsShrink) { DARABONBA_PTR_SET_VALUE(queryArgsShrink_, queryArgsShrink) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListWafRulesetsShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline ListWafRulesetsShrinkRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // Page number, specifying the current page number for paginated queries.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Page size, specifying the number of records per page for paginated queries.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // WAF operation phase, specifying the rule set phase to query.
    std::shared_ptr<string> phase_ = nullptr;
    // Query parameters, passed in JSON format, containing various filtering conditions.
    std::shared_ptr<string> queryArgsShrink_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // Site version.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
