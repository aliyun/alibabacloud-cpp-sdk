// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEREVIEWRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEREVIEWRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DeleteReviewRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteReviewRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReviewRuleIds, reviewRuleIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteReviewRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReviewRuleIds, reviewRuleIds_);
    };
    DeleteReviewRulesRequest() = default ;
    DeleteReviewRulesRequest(const DeleteReviewRulesRequest &) = default ;
    DeleteReviewRulesRequest(DeleteReviewRulesRequest &&) = default ;
    DeleteReviewRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteReviewRulesRequest() = default ;
    DeleteReviewRulesRequest& operator=(const DeleteReviewRulesRequest &) = default ;
    DeleteReviewRulesRequest& operator=(DeleteReviewRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->reviewRuleIds_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteReviewRulesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteReviewRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reviewRuleIds Field Functions 
    bool hasReviewRuleIds() const { return this->reviewRuleIds_ != nullptr;};
    void deleteReviewRuleIds() { this->reviewRuleIds_ = nullptr;};
    inline string getReviewRuleIds() const { DARABONBA_PTR_GET_DEFAULT(reviewRuleIds_, "") };
    inline DeleteReviewRulesRequest& setReviewRuleIds(string reviewRuleIds) { DARABONBA_PTR_SET_VALUE(reviewRuleIds_, reviewRuleIds) };


  protected:
    // The instance ID of the Bastionhost instance.
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the Bastionhost instance. 
    // > For the mappings between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The array of audit policy IDs to delete.
    // > You can call the ListReviewRules operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> reviewRuleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
