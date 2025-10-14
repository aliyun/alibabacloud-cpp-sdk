// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFTEMPLATERULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFTEMPLATERULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafTemplateRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafTemplateRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(QueryArgs, queryArgsShrink_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafTemplateRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(QueryArgs, queryArgsShrink_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    ListWafTemplateRulesShrinkRequest() = default ;
    ListWafTemplateRulesShrinkRequest(const ListWafTemplateRulesShrinkRequest &) = default ;
    ListWafTemplateRulesShrinkRequest(ListWafTemplateRulesShrinkRequest &&) = default ;
    ListWafTemplateRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafTemplateRulesShrinkRequest() = default ;
    ListWafTemplateRulesShrinkRequest& operator=(const ListWafTemplateRulesShrinkRequest &) = default ;
    ListWafTemplateRulesShrinkRequest& operator=(ListWafTemplateRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->phase_ == nullptr && return this->queryArgsShrink_ == nullptr && return this->siteId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListWafTemplateRulesShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ListWafTemplateRulesShrinkRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // queryArgsShrink Field Functions 
    bool hasQueryArgsShrink() const { return this->queryArgsShrink_ != nullptr;};
    void deleteQueryArgsShrink() { this->queryArgsShrink_ = nullptr;};
    inline string queryArgsShrink() const { DARABONBA_PTR_GET_DEFAULT(queryArgsShrink_, "") };
    inline ListWafTemplateRulesShrinkRequest& setQueryArgsShrink(string queryArgsShrink) { DARABONBA_PTR_SET_VALUE(queryArgsShrink_, queryArgsShrink) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListWafTemplateRulesShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    // WAF operation phase, used to filter template rules for a specific phase.
    std::shared_ptr<string> phase_ = nullptr;
    // Query parameters, used to filter template rules based on conditions such as rule type.
    std::shared_ptr<string> queryArgsShrink_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) API.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
