// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETHTTPDDOSATTACKRULESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETHTTPDDOSATTACKRULESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class SetHttpDDoSAttackRuleStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetHttpDDoSAttackRuleStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SetHttpDDoSAttackRuleStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    SetHttpDDoSAttackRuleStatusRequest() = default ;
    SetHttpDDoSAttackRuleStatusRequest(const SetHttpDDoSAttackRuleStatusRequest &) = default ;
    SetHttpDDoSAttackRuleStatusRequest(SetHttpDDoSAttackRuleStatusRequest &&) = default ;
    SetHttpDDoSAttackRuleStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetHttpDDoSAttackRuleStatusRequest() = default ;
    SetHttpDDoSAttackRuleStatusRequest& operator=(const SetHttpDDoSAttackRuleStatusRequest &) = default ;
    SetHttpDDoSAttackRuleStatusRequest& operator=(SetHttpDDoSAttackRuleStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleIds_ == nullptr
        && this->siteId_ == nullptr && this->status_ == nullptr; };
    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline string getRuleIds() const { DARABONBA_PTR_GET_DEFAULT(ruleIds_, "") };
    inline SetHttpDDoSAttackRuleStatusRequest& setRuleIds(string ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline SetHttpDDoSAttackRuleStatusRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SetHttpDDoSAttackRuleStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // List of rule IDs to be operated on, separated by English commas (,).
    // > You can call the [DescribeHttpDDoSAttackRules](~~DescribeHttpDDoSAttackRules~~) interface to get this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> ruleIds_ {};
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // Rule status
    // 
    // - **on**: Enable.
    // - **off**: Disable.
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
