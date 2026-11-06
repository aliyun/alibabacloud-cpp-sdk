// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOLARCLAWSKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOLARCLAWSKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyPolarClawSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPolarClawSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
      DARABONBA_PTR_TO_JSON(SkillVersion, skillVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPolarClawSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
      DARABONBA_PTR_FROM_JSON(SkillVersion, skillVersion_);
    };
    ModifyPolarClawSkillRequest() = default ;
    ModifyPolarClawSkillRequest(const ModifyPolarClawSkillRequest &) = default ;
    ModifyPolarClawSkillRequest(ModifyPolarClawSkillRequest &&) = default ;
    ModifyPolarClawSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPolarClawSkillRequest() = default ;
    ModifyPolarClawSkillRequest& operator=(const ModifyPolarClawSkillRequest &) = default ;
    ModifyPolarClawSkillRequest& operator=(ModifyPolarClawSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->modifyType_ == nullptr && this->path_ == nullptr && this->regionId_ == nullptr && this->skillName_ == nullptr && this->skillVersion_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ModifyPolarClawSkillRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string getModifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline ModifyPolarClawSkillRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ModifyPolarClawSkillRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyPolarClawSkillRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline ModifyPolarClawSkillRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


    // skillVersion Field Functions 
    bool hasSkillVersion() const { return this->skillVersion_ != nullptr;};
    void deleteSkillVersion() { this->skillVersion_ = nullptr;};
    inline string getSkillVersion() const { DARABONBA_PTR_GET_DEFAULT(skillVersion_, "") };
    inline ModifyPolarClawSkillRequest& setSkillVersion(string skillVersion) { DARABONBA_PTR_SET_VALUE(skillVersion_, skillVersion) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The modification type. Valid values: 
    // * **evaluate**: Evaluates the skill.
    // 
    // This parameter is required.
    shared_ptr<string> modifyType_ {};
    // The destination path.
    shared_ptr<string> path_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The skill name.
    // 
    // This parameter is required.
    shared_ptr<string> skillName_ {};
    // The skill version.
    shared_ptr<string> skillVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
