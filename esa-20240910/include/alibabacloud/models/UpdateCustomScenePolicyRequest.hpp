// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMSCENEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMSCENEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateCustomScenePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomScenePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Objects, objects_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(SiteIds, siteIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomScenePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Objects, objects_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(SiteIds, siteIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    UpdateCustomScenePolicyRequest() = default ;
    UpdateCustomScenePolicyRequest(const UpdateCustomScenePolicyRequest &) = default ;
    UpdateCustomScenePolicyRequest(UpdateCustomScenePolicyRequest &&) = default ;
    UpdateCustomScenePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomScenePolicyRequest() = default ;
    UpdateCustomScenePolicyRequest& operator=(const UpdateCustomScenePolicyRequest &) = default ;
    UpdateCustomScenePolicyRequest& operator=(UpdateCustomScenePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->name_ == nullptr && this->objects_ == nullptr && this->policyId_ == nullptr && this->siteIds_ == nullptr && this->startTime_ == nullptr
        && this->template_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateCustomScenePolicyRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateCustomScenePolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // objects Field Functions 
    bool hasObjects() const { return this->objects_ != nullptr;};
    void deleteObjects() { this->objects_ = nullptr;};
    inline string getObjects() const { DARABONBA_PTR_GET_DEFAULT(objects_, "") };
    inline UpdateCustomScenePolicyRequest& setObjects(string objects) { DARABONBA_PTR_SET_VALUE(objects_, objects) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline UpdateCustomScenePolicyRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // siteIds Field Functions 
    bool hasSiteIds() const { return this->siteIds_ != nullptr;};
    void deleteSiteIds() { this->siteIds_ = nullptr;};
    inline string getSiteIds() const { DARABONBA_PTR_GET_DEFAULT(siteIds_, "") };
    inline UpdateCustomScenePolicyRequest& setSiteIds(string siteIds) { DARABONBA_PTR_SET_VALUE(siteIds_, siteIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateCustomScenePolicyRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline UpdateCustomScenePolicyRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


  protected:
    // The end time of the policy.
    // 
    // The time must be in UTC and in the ISO 8601 format: yyyy-MM-ddTHH:mm:ssZ.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The name of the policy.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The site IDs to associate with the policy. Use a comma (,) to separate multiple IDs.
    // 
    // > This parameter is deprecated. We recommend using the `SiteIds` parameter instead. If the `SiteIds` parameter is specified, the `Objects` parameter is ignored. You must specify a value for either the `Objects` or `SiteIds` parameter.
    shared_ptr<string> objects_ {};
    // To obtain the policy ID, call the [DescribeCustomScenePolicies](https://help.aliyun.com/document_detail/2850508.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> policyId_ {};
    // The site IDs to associate with the policy. Use a comma (,) to separate multiple IDs.
    shared_ptr<string> siteIds_ {};
    // The start time of the policy.
    // 
    // The time must be in UTC and in the ISO 8601 format: yyyy-MM-ddTHH:mm:ssZ.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The name of the template. Valid value:
    // 
    // - **promotion**: major promotion
    // 
    // This parameter is required.
    shared_ptr<string> template_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
