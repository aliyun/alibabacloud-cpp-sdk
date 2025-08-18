// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFTEMPLATERULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFTEMPLATERULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListWafTemplateRulesRequestQueryArgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafTemplateRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafTemplateRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(QueryArgs, queryArgs_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafTemplateRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(QueryArgs, queryArgs_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    ListWafTemplateRulesRequest() = default ;
    ListWafTemplateRulesRequest(const ListWafTemplateRulesRequest &) = default ;
    ListWafTemplateRulesRequest(ListWafTemplateRulesRequest &&) = default ;
    ListWafTemplateRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafTemplateRulesRequest() = default ;
    ListWafTemplateRulesRequest& operator=(const ListWafTemplateRulesRequest &) = default ;
    ListWafTemplateRulesRequest& operator=(ListWafTemplateRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->phase_ != nullptr
        && this->queryArgs_ != nullptr && this->siteId_ != nullptr; };
    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ListWafTemplateRulesRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // queryArgs Field Functions 
    bool hasQueryArgs() const { return this->queryArgs_ != nullptr;};
    void deleteQueryArgs() { this->queryArgs_ = nullptr;};
    inline const ListWafTemplateRulesRequestQueryArgs & queryArgs() const { DARABONBA_PTR_GET_CONST(queryArgs_, ListWafTemplateRulesRequestQueryArgs) };
    inline ListWafTemplateRulesRequestQueryArgs queryArgs() { DARABONBA_PTR_GET(queryArgs_, ListWafTemplateRulesRequestQueryArgs) };
    inline ListWafTemplateRulesRequest& setQueryArgs(const ListWafTemplateRulesRequestQueryArgs & queryArgs) { DARABONBA_PTR_SET_VALUE(queryArgs_, queryArgs) };
    inline ListWafTemplateRulesRequest& setQueryArgs(ListWafTemplateRulesRequestQueryArgs && queryArgs) { DARABONBA_PTR_SET_RVALUE(queryArgs_, queryArgs) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListWafTemplateRulesRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // WAF operation phase, used to filter template rules for a specific phase.
    std::shared_ptr<string> phase_ = nullptr;
    // Query parameters, used to filter template rules based on conditions such as rule type.
    std::shared_ptr<ListWafTemplateRulesRequestQueryArgs> queryArgs_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) API.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
