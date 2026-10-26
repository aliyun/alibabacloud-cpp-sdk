// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHPROJECTSFROMREVIEWRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHPROJECTSFROMREVIEWRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DetachProjectsFromReviewRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachProjectsFromReviewRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReviewRuleId, reviewRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachProjectsFromReviewRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReviewRuleId, reviewRuleId_);
    };
    DetachProjectsFromReviewRuleRequest() = default ;
    DetachProjectsFromReviewRuleRequest(const DetachProjectsFromReviewRuleRequest &) = default ;
    DetachProjectsFromReviewRuleRequest(DetachProjectsFromReviewRuleRequest &&) = default ;
    DetachProjectsFromReviewRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachProjectsFromReviewRuleRequest() = default ;
    DetachProjectsFromReviewRuleRequest& operator=(const DetachProjectsFromReviewRuleRequest &) = default ;
    DetachProjectsFromReviewRuleRequest& operator=(DetachProjectsFromReviewRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->projectIds_ == nullptr && this->regionId_ == nullptr && this->reviewRuleId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DetachProjectsFromReviewRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectIds Field Functions 
    bool hasProjectIds() const { return this->projectIds_ != nullptr;};
    void deleteProjectIds() { this->projectIds_ = nullptr;};
    inline string getProjectIds() const { DARABONBA_PTR_GET_DEFAULT(projectIds_, "") };
    inline DetachProjectsFromReviewRuleRequest& setProjectIds(string projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachProjectsFromReviewRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reviewRuleId Field Functions 
    bool hasReviewRuleId() const { return this->reviewRuleId_ != nullptr;};
    void deleteReviewRuleId() { this->reviewRuleId_ = nullptr;};
    inline int64_t getReviewRuleId() const { DARABONBA_PTR_GET_DEFAULT(reviewRuleId_, 0L) };
    inline DetachProjectsFromReviewRuleRequest& setReviewRuleId(int64_t reviewRuleId) { DARABONBA_PTR_SET_VALUE(reviewRuleId_, reviewRuleId) };


  protected:
    // The instance ID of the bastion host.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The array of project IDs to remove from the audit policy.
    // > You can call the GetReviewRule operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> projectIds_ {};
    // The region ID of the bastion host.
    // > For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The audit policy ID.
    // > You can call the ListReviewRules operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> reviewRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
