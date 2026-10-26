// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHPROJECTSTOREVIEWRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHPROJECTSTOREVIEWRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachProjectsToReviewRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachProjectsToReviewRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReviewRuleId, reviewRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachProjectsToReviewRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReviewRuleId, reviewRuleId_);
    };
    AttachProjectsToReviewRuleRequest() = default ;
    AttachProjectsToReviewRuleRequest(const AttachProjectsToReviewRuleRequest &) = default ;
    AttachProjectsToReviewRuleRequest(AttachProjectsToReviewRuleRequest &&) = default ;
    AttachProjectsToReviewRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachProjectsToReviewRuleRequest() = default ;
    AttachProjectsToReviewRuleRequest& operator=(const AttachProjectsToReviewRuleRequest &) = default ;
    AttachProjectsToReviewRuleRequest& operator=(AttachProjectsToReviewRuleRequest &&) = default ;
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
    inline AttachProjectsToReviewRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectIds Field Functions 
    bool hasProjectIds() const { return this->projectIds_ != nullptr;};
    void deleteProjectIds() { this->projectIds_ = nullptr;};
    inline string getProjectIds() const { DARABONBA_PTR_GET_DEFAULT(projectIds_, "") };
    inline AttachProjectsToReviewRuleRequest& setProjectIds(string projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachProjectsToReviewRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reviewRuleId Field Functions 
    bool hasReviewRuleId() const { return this->reviewRuleId_ != nullptr;};
    void deleteReviewRuleId() { this->reviewRuleId_ = nullptr;};
    inline int64_t getReviewRuleId() const { DARABONBA_PTR_GET_DEFAULT(reviewRuleId_, 0L) };
    inline AttachProjectsToReviewRuleRequest& setReviewRuleId(int64_t reviewRuleId) { DARABONBA_PTR_SET_VALUE(reviewRuleId_, reviewRuleId) };


  protected:
    // The instance ID of the Bastionhost instance.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The IDs of the projects to associate.
    // > You can call the ListProjects operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> projectIds_ {};
    // The region ID of the Bastionhost instance.
    // > For the mappings between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the audit policy.
    // > You can invoke the ListReviewRules operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> reviewRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
