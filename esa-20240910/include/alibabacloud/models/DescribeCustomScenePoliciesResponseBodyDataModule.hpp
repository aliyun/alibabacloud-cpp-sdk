// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMSCENEPOLICIESRESPONSEBODYDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMSCENEPOLICIESRESPONSEBODYDATAMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeCustomScenePoliciesResponseBodyDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomScenePoliciesResponseBodyDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Objects, objects_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(SiteIds, siteIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomScenePoliciesResponseBodyDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Objects, objects_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(SiteIds, siteIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    DescribeCustomScenePoliciesResponseBodyDataModule() = default ;
    DescribeCustomScenePoliciesResponseBodyDataModule(const DescribeCustomScenePoliciesResponseBodyDataModule &) = default ;
    DescribeCustomScenePoliciesResponseBodyDataModule(DescribeCustomScenePoliciesResponseBodyDataModule &&) = default ;
    DescribeCustomScenePoliciesResponseBodyDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomScenePoliciesResponseBodyDataModule() = default ;
    DescribeCustomScenePoliciesResponseBodyDataModule& operator=(const DescribeCustomScenePoliciesResponseBodyDataModule &) = default ;
    DescribeCustomScenePoliciesResponseBodyDataModule& operator=(DescribeCustomScenePoliciesResponseBodyDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->name_ == nullptr && return this->objects_ == nullptr && return this->policyId_ == nullptr && return this->siteIds_ == nullptr && return this->startTime_ == nullptr
        && return this->status_ == nullptr && return this->template_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeCustomScenePoliciesResponseBodyDataModule& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCustomScenePoliciesResponseBodyDataModule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // objects Field Functions 
    bool hasObjects() const { return this->objects_ != nullptr;};
    void deleteObjects() { this->objects_ = nullptr;};
    inline const vector<string> & objects() const { DARABONBA_PTR_GET_CONST(objects_, vector<string>) };
    inline vector<string> objects() { DARABONBA_PTR_GET(objects_, vector<string>) };
    inline DescribeCustomScenePoliciesResponseBodyDataModule& setObjects(const vector<string> & objects) { DARABONBA_PTR_SET_VALUE(objects_, objects) };
    inline DescribeCustomScenePoliciesResponseBodyDataModule& setObjects(vector<string> && objects) { DARABONBA_PTR_SET_RVALUE(objects_, objects) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline DescribeCustomScenePoliciesResponseBodyDataModule& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // siteIds Field Functions 
    bool hasSiteIds() const { return this->siteIds_ != nullptr;};
    void deleteSiteIds() { this->siteIds_ = nullptr;};
    inline string siteIds() const { DARABONBA_PTR_GET_DEFAULT(siteIds_, "") };
    inline DescribeCustomScenePoliciesResponseBodyDataModule& setSiteIds(string siteIds) { DARABONBA_PTR_SET_VALUE(siteIds_, siteIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeCustomScenePoliciesResponseBodyDataModule& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCustomScenePoliciesResponseBodyDataModule& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline DescribeCustomScenePoliciesResponseBodyDataModule& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


  protected:
    // The time when the policy expires.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The name of the scenario-specific policy.
    std::shared_ptr<string> name_ = nullptr;
    // The IDs of websites that are associated with the policy.
    std::shared_ptr<vector<string>> objects_ = nullptr;
    // The policy ID.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    std::shared_ptr<string> siteIds_ = nullptr;
    // The time when the policy takes effect.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the policy. Valid values:
    // 
    // *   **Disabled**
    // *   **Pending**
    // *   **Running**
    // *   **Expired**
    std::shared_ptr<string> status_ = nullptr;
    // The name of the policy template. Valid value:
    // 
    // *   **promotion**: major events.
    std::shared_ptr<string> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
