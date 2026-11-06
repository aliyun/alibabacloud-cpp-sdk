// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLASSESSMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLASSESSMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawSkillAssessmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawSkillAssessmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
      DARABONBA_PTR_TO_JSON(SkillVersion, skillVersion_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawSkillAssessmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
      DARABONBA_PTR_FROM_JSON(SkillVersion, skillVersion_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DescribePolarClawSkillAssessmentRequest() = default ;
    DescribePolarClawSkillAssessmentRequest(const DescribePolarClawSkillAssessmentRequest &) = default ;
    DescribePolarClawSkillAssessmentRequest(DescribePolarClawSkillAssessmentRequest &&) = default ;
    DescribePolarClawSkillAssessmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawSkillAssessmentRequest() = default ;
    DescribePolarClawSkillAssessmentRequest& operator=(const DescribePolarClawSkillAssessmentRequest &) = default ;
    DescribePolarClawSkillAssessmentRequest& operator=(DescribePolarClawSkillAssessmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->regionId_ == nullptr && this->skillName_ == nullptr && this->skillVersion_ == nullptr && this->source_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawSkillAssessmentRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePolarClawSkillAssessmentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline DescribePolarClawSkillAssessmentRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


    // skillVersion Field Functions 
    bool hasSkillVersion() const { return this->skillVersion_ != nullptr;};
    void deleteSkillVersion() { this->skillVersion_ = nullptr;};
    inline string getSkillVersion() const { DARABONBA_PTR_GET_DEFAULT(skillVersion_, "") };
    inline DescribePolarClawSkillAssessmentRequest& setSkillVersion(string skillVersion) { DARABONBA_PTR_SET_VALUE(skillVersion_, skillVersion) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribePolarClawSkillAssessmentRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The ID of the application.
    shared_ptr<string> applicationId_ {};
    // The region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query all available regions for the current account, including region IDs.
    shared_ptr<string> regionId_ {};
    // The name of the skill.
    shared_ptr<string> skillName_ {};
    // The version of the skill.
    shared_ptr<string> skillVersion_ {};
    // The source of the skill. Valid values: PUBLIC, SELF, and OTHER.
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
