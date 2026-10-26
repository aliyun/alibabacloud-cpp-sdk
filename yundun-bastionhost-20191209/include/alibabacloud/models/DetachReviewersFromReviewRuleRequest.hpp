// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHREVIEWERSFROMREVIEWRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHREVIEWERSFROMREVIEWRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DetachReviewersFromReviewRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachReviewersFromReviewRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PrincipalIds, principalIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReviewRuleId, reviewRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachReviewersFromReviewRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PrincipalIds, principalIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReviewRuleId, reviewRuleId_);
    };
    DetachReviewersFromReviewRuleRequest() = default ;
    DetachReviewersFromReviewRuleRequest(const DetachReviewersFromReviewRuleRequest &) = default ;
    DetachReviewersFromReviewRuleRequest(DetachReviewersFromReviewRuleRequest &&) = default ;
    DetachReviewersFromReviewRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachReviewersFromReviewRuleRequest() = default ;
    DetachReviewersFromReviewRuleRequest& operator=(const DetachReviewersFromReviewRuleRequest &) = default ;
    DetachReviewersFromReviewRuleRequest& operator=(DetachReviewersFromReviewRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->principalIds_ == nullptr && this->regionId_ == nullptr && this->reviewRuleId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DetachReviewersFromReviewRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // principalIds Field Functions 
    bool hasPrincipalIds() const { return this->principalIds_ != nullptr;};
    void deletePrincipalIds() { this->principalIds_ = nullptr;};
    inline string getPrincipalIds() const { DARABONBA_PTR_GET_DEFAULT(principalIds_, "") };
    inline DetachReviewersFromReviewRuleRequest& setPrincipalIds(string principalIds) { DARABONBA_PTR_SET_VALUE(principalIds_, principalIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachReviewersFromReviewRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reviewRuleId Field Functions 
    bool hasReviewRuleId() const { return this->reviewRuleId_ != nullptr;};
    void deleteReviewRuleId() { this->reviewRuleId_ = nullptr;};
    inline int64_t getReviewRuleId() const { DARABONBA_PTR_GET_DEFAULT(reviewRuleId_, 0L) };
    inline DetachReviewersFromReviewRuleRequest& setReviewRuleId(int64_t reviewRuleId) { DARABONBA_PTR_SET_VALUE(reviewRuleId_, reviewRuleId) };


  protected:
    // The instance ID of the bastion host.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The IDs of the auditors to remove.
    // > You can call the GetReviewRule operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> principalIds_ {};
    // The region ID of the bastion host.
    // > For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the audit policy.
    // > You can invoke the ListReviewRules operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> reviewRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
