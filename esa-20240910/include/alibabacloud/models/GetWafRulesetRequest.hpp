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
        && return this->phase_ == nullptr && return this->siteId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetWafRulesetRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline GetWafRulesetRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetWafRulesetRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The ID of the WAF ruleset, which can be obtained by calling the ListWafRulesets interface.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The WAF operation phase, specifying the phase of the ruleset to query.
    std::shared_ptr<string> phase_ = nullptr;
    // The site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
