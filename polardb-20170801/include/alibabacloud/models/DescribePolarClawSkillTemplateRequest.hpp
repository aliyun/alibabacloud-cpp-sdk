// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawSkillTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawSkillTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SkillTemplateId, skillTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawSkillTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SkillTemplateId, skillTemplateId_);
    };
    DescribePolarClawSkillTemplateRequest() = default ;
    DescribePolarClawSkillTemplateRequest(const DescribePolarClawSkillTemplateRequest &) = default ;
    DescribePolarClawSkillTemplateRequest(DescribePolarClawSkillTemplateRequest &&) = default ;
    DescribePolarClawSkillTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawSkillTemplateRequest() = default ;
    DescribePolarClawSkillTemplateRequest& operator=(const DescribePolarClawSkillTemplateRequest &) = default ;
    DescribePolarClawSkillTemplateRequest& operator=(DescribePolarClawSkillTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationType_ == nullptr && this->regionId_ == nullptr && this->skillTemplateId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawSkillTemplateRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline DescribePolarClawSkillTemplateRequest& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePolarClawSkillTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // skillTemplateId Field Functions 
    bool hasSkillTemplateId() const { return this->skillTemplateId_ != nullptr;};
    void deleteSkillTemplateId() { this->skillTemplateId_ = nullptr;};
    inline string getSkillTemplateId() const { DARABONBA_PTR_GET_DEFAULT(skillTemplateId_, "") };
    inline DescribePolarClawSkillTemplateRequest& setSkillTemplateId(string skillTemplateId) { DARABONBA_PTR_SET_VALUE(skillTemplateId_, skillTemplateId) };


  protected:
    // The application ID. This parameter is required when you call this operation. If this parameter is not specified, InvalidApplicationId.Malformed is returned.
    shared_ptr<string> applicationId_ {};
    // The application type.
    // 
    // > If you are calling this operation for the first time, you do not need to specify this parameter.
    shared_ptr<string> applicationType_ {};
    // The region ID.
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query available regions.
    shared_ptr<string> regionId_ {};
    // The skill template ID.
    // 
    // This parameter is required.
    shared_ptr<string> skillTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
