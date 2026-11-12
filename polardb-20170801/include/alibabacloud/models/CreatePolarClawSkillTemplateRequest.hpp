// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLARCLAWSKILLTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLARCLAWSKILLTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreatePolarClawSkillTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolarClawSkillTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SkillTemplateDesc, skillTemplateDesc_);
      DARABONBA_PTR_TO_JSON(SkillTemplateName, skillTemplateName_);
      DARABONBA_PTR_TO_JSON(SkillTemplateParam, skillTemplateParam_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolarClawSkillTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SkillTemplateDesc, skillTemplateDesc_);
      DARABONBA_PTR_FROM_JSON(SkillTemplateName, skillTemplateName_);
      DARABONBA_PTR_FROM_JSON(SkillTemplateParam, skillTemplateParam_);
    };
    CreatePolarClawSkillTemplateRequest() = default ;
    CreatePolarClawSkillTemplateRequest(const CreatePolarClawSkillTemplateRequest &) = default ;
    CreatePolarClawSkillTemplateRequest(CreatePolarClawSkillTemplateRequest &&) = default ;
    CreatePolarClawSkillTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolarClawSkillTemplateRequest() = default ;
    CreatePolarClawSkillTemplateRequest& operator=(const CreatePolarClawSkillTemplateRequest &) = default ;
    CreatePolarClawSkillTemplateRequest& operator=(CreatePolarClawSkillTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationType_ == nullptr && this->regionId_ == nullptr && this->skillTemplateDesc_ == nullptr && this->skillTemplateName_ == nullptr && this->skillTemplateParam_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline CreatePolarClawSkillTemplateRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline CreatePolarClawSkillTemplateRequest& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePolarClawSkillTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // skillTemplateDesc Field Functions 
    bool hasSkillTemplateDesc() const { return this->skillTemplateDesc_ != nullptr;};
    void deleteSkillTemplateDesc() { this->skillTemplateDesc_ = nullptr;};
    inline string getSkillTemplateDesc() const { DARABONBA_PTR_GET_DEFAULT(skillTemplateDesc_, "") };
    inline CreatePolarClawSkillTemplateRequest& setSkillTemplateDesc(string skillTemplateDesc) { DARABONBA_PTR_SET_VALUE(skillTemplateDesc_, skillTemplateDesc) };


    // skillTemplateName Field Functions 
    bool hasSkillTemplateName() const { return this->skillTemplateName_ != nullptr;};
    void deleteSkillTemplateName() { this->skillTemplateName_ = nullptr;};
    inline string getSkillTemplateName() const { DARABONBA_PTR_GET_DEFAULT(skillTemplateName_, "") };
    inline CreatePolarClawSkillTemplateRequest& setSkillTemplateName(string skillTemplateName) { DARABONBA_PTR_SET_VALUE(skillTemplateName_, skillTemplateName) };


    // skillTemplateParam Field Functions 
    bool hasSkillTemplateParam() const { return this->skillTemplateParam_ != nullptr;};
    void deleteSkillTemplateParam() { this->skillTemplateParam_ = nullptr;};
    inline string getSkillTemplateParam() const { DARABONBA_PTR_GET_DEFAULT(skillTemplateParam_, "") };
    inline CreatePolarClawSkillTemplateRequest& setSkillTemplateParam(string skillTemplateParam) { DARABONBA_PTR_SET_VALUE(skillTemplateParam_, skillTemplateParam) };


  protected:
    // The application ID. This parameter is required. If this parameter is not provided, an InvalidApplicationId.Malformed (HTTP 400) error is returned.
    shared_ptr<string> applicationId_ {};
    // The application type.
    // 
    // > If you are calling this operation for the first time, you do not need to specify this parameter.
    shared_ptr<string> applicationType_ {};
    // The region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to view all available regions for the current account, including region IDs.
    shared_ptr<string> regionId_ {};
    // The description of the skill template.
    shared_ptr<string> skillTemplateDesc_ {};
    // The name of the skill template.
    // 
    // This parameter is required.
    shared_ptr<string> skillTemplateName_ {};
    // The skill template parameters. Specify a standard JSON object string with the skill identifier as the key, such as {"skill1":{"skillName":"polarclawhub","version":"0.0.0"}}. JSON arrays or single-quote formats are not accepted.
    // 
    // This parameter is required.
    shared_ptr<string> skillTemplateParam_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
