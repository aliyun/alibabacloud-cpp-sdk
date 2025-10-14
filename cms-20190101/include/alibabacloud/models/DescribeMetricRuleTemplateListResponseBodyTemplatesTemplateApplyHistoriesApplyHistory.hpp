// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETEMPLATELISTRESPONSEBODYTEMPLATESTEMPLATEAPPLYHISTORIESAPPLYHISTORY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETEMPLATELISTRESPONSEBODYTEMPLATESTEMPLATEAPPLYHISTORIESAPPLYHISTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyTime, applyTime_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyTime, applyTime_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory() = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory(const DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory &) = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory(DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory &&) = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory() = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory& operator=(const DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory &) = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory& operator=(DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applyTime_ == nullptr
        && return this->groupId_ == nullptr && return this->groupName_ == nullptr; };
    // applyTime Field Functions 
    bool hasApplyTime() const { return this->applyTime_ != nullptr;};
    void deleteApplyTime() { this->applyTime_ = nullptr;};
    inline int64_t applyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, 0L) };
    inline DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory& setApplyTime(int64_t applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeMetricRuleTemplateListResponseBodyTemplatesTemplateApplyHistoriesApplyHistory& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The timestamp when the alert template was applied to the application group.
    // 
    // Unit: milliseconds.
    std::shared_ptr<int64_t> applyTime_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The name of the application group.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
