// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAFRULESETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWAFRULESETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWafRulesetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWafRulesetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWafRulesetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    GetWafRulesetRequest() = default ;
    GetWafRulesetRequest(const GetWafRulesetRequest &) = default ;
    GetWafRulesetRequest(GetWafRulesetRequest &&) = default ;
    GetWafRulesetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWafRulesetRequest() = default ;
    GetWafRulesetRequest& operator=(const GetWafRulesetRequest &) = default ;
    GetWafRulesetRequest& operator=(GetWafRulesetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->phase_ == nullptr && this->siteId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetWafRulesetRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline GetWafRulesetRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetWafRulesetRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The ID of the WAF ruleset. You can call the [ListWafRulesets](https://help.aliyun.com/document_detail/2878359.html) operation to obtain the ID.
    shared_ptr<int64_t> id_ {};
    // The WAF rule execution phase. Valid values:
    // - http_whitelist: whitelist rules
    // - http_custom: custom rules
    // - http_managed: managed rules
    // - http_anti_scan: scan protection rules
    // - http_ratelimit: rate limiting rules
    // - ip_access_rule: IP access rules
    // - http_bot: advanced mode bots
    // - http_security_level_rule: security rules
    shared_ptr<string> phase_ {};
    // The site ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the ID.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
