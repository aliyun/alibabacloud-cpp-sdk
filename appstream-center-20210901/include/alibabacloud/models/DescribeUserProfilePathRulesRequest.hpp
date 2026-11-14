// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERPROFILEPATHRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERPROFILEPATHRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DescribeUserProfilePathRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserProfilePathRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupSetId, appInstanceGroupSetId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserProfilePathRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupSetId, appInstanceGroupSetId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    DescribeUserProfilePathRulesRequest() = default ;
    DescribeUserProfilePathRulesRequest(const DescribeUserProfilePathRulesRequest &) = default ;
    DescribeUserProfilePathRulesRequest(DescribeUserProfilePathRulesRequest &&) = default ;
    DescribeUserProfilePathRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserProfilePathRulesRequest() = default ;
    DescribeUserProfilePathRulesRequest& operator=(const DescribeUserProfilePathRulesRequest &) = default ;
    DescribeUserProfilePathRulesRequest& operator=(DescribeUserProfilePathRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceGroupSetId_ == nullptr && this->regionId_ == nullptr && this->ruleType_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline DescribeUserProfilePathRulesRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceGroupSetId Field Functions 
    bool hasAppInstanceGroupSetId() const { return this->appInstanceGroupSetId_ != nullptr;};
    void deleteAppInstanceGroupSetId() { this->appInstanceGroupSetId_ = nullptr;};
    inline string getAppInstanceGroupSetId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupSetId_, "") };
    inline DescribeUserProfilePathRulesRequest& setAppInstanceGroupSetId(string appInstanceGroupSetId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupSetId_, appInstanceGroupSetId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeUserProfilePathRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline DescribeUserProfilePathRulesRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The ID of the app instance group. Specify either this parameter or AppInstanceGroupSetId when querying app instance group rules. This parameter can be omitted when querying system default rules.
    shared_ptr<string> appInstanceGroupId_ {};
    // The ID of the app instance group set. Specify either this parameter or AppInstanceGroupId when querying app instance group set rules. This parameter can be omitted when querying system default rules.
    shared_ptr<string> appInstanceGroupSetId_ {};
    // The region ID of the request. When querying or setting the rules for a specified app instance group, use the region where the target app instance group is located.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The path rule type. Valid values:
    // - Default: Queries the system default rules. Both target IDs can be omitted.
    // - AppInstanceGroup: Queries the rules of an app instance group or an app instance group set.
    // 
    // This parameter is required.
    shared_ptr<string> ruleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
