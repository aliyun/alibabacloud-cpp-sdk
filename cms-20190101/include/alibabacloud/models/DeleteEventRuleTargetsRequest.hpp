// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEVENTRULETARGETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEVENTRULETARGETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteEventRuleTargetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEventRuleTargetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEventRuleTargetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    DeleteEventRuleTargetsRequest() = default ;
    DeleteEventRuleTargetsRequest(const DeleteEventRuleTargetsRequest &) = default ;
    DeleteEventRuleTargetsRequest(DeleteEventRuleTargetsRequest &&) = default ;
    DeleteEventRuleTargetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEventRuleTargetsRequest() = default ;
    DeleteEventRuleTargetsRequest& operator=(const DeleteEventRuleTargetsRequest &) = default ;
    DeleteEventRuleTargetsRequest& operator=(DeleteEventRuleTargetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr
        && return this->regionId_ == nullptr && return this->ruleName_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<string> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<string>) };
    inline vector<string> ids() { DARABONBA_PTR_GET(ids_, vector<string>) };
    inline DeleteEventRuleTargetsRequest& setIds(const vector<string> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline DeleteEventRuleTargetsRequest& setIds(vector<string> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteEventRuleTargetsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DeleteEventRuleTargetsRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The IDs of event-triggered alert rules.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> ids_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the event-triggered alert rule.
    // 
    // For information about how to obtain the name of an event-triggered alert rule, see [DescribeEventRuleList](https://help.aliyun.com/document_detail/114996.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
