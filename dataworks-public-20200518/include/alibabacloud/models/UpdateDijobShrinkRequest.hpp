// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateDIJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDIJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(JobSettings, jobSettingsShrink_);
      DARABONBA_PTR_TO_JSON(ResourceSettings, resourceSettingsShrink_);
      DARABONBA_PTR_TO_JSON(TableMappings, tableMappingsShrink_);
      DARABONBA_PTR_TO_JSON(TransformationRules, transformationRulesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDIJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(JobSettings, jobSettingsShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceSettings, resourceSettingsShrink_);
      DARABONBA_PTR_FROM_JSON(TableMappings, tableMappingsShrink_);
      DARABONBA_PTR_FROM_JSON(TransformationRules, transformationRulesShrink_);
    };
    UpdateDIJobShrinkRequest() = default ;
    UpdateDIJobShrinkRequest(const UpdateDIJobShrinkRequest &) = default ;
    UpdateDIJobShrinkRequest(UpdateDIJobShrinkRequest &&) = default ;
    UpdateDIJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDIJobShrinkRequest() = default ;
    UpdateDIJobShrinkRequest& operator=(const UpdateDIJobShrinkRequest &) = default ;
    UpdateDIJobShrinkRequest& operator=(UpdateDIJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIJobId_ != nullptr
        && this->description_ != nullptr && this->jobSettingsShrink_ != nullptr && this->resourceSettingsShrink_ != nullptr && this->tableMappingsShrink_ != nullptr && this->transformationRulesShrink_ != nullptr; };
    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline UpdateDIJobShrinkRequest& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDIJobShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // jobSettingsShrink Field Functions 
    bool hasJobSettingsShrink() const { return this->jobSettingsShrink_ != nullptr;};
    void deleteJobSettingsShrink() { this->jobSettingsShrink_ = nullptr;};
    inline string jobSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(jobSettingsShrink_, "") };
    inline UpdateDIJobShrinkRequest& setJobSettingsShrink(string jobSettingsShrink) { DARABONBA_PTR_SET_VALUE(jobSettingsShrink_, jobSettingsShrink) };


    // resourceSettingsShrink Field Functions 
    bool hasResourceSettingsShrink() const { return this->resourceSettingsShrink_ != nullptr;};
    void deleteResourceSettingsShrink() { this->resourceSettingsShrink_ = nullptr;};
    inline string resourceSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceSettingsShrink_, "") };
    inline UpdateDIJobShrinkRequest& setResourceSettingsShrink(string resourceSettingsShrink) { DARABONBA_PTR_SET_VALUE(resourceSettingsShrink_, resourceSettingsShrink) };


    // tableMappingsShrink Field Functions 
    bool hasTableMappingsShrink() const { return this->tableMappingsShrink_ != nullptr;};
    void deleteTableMappingsShrink() { this->tableMappingsShrink_ = nullptr;};
    inline string tableMappingsShrink() const { DARABONBA_PTR_GET_DEFAULT(tableMappingsShrink_, "") };
    inline UpdateDIJobShrinkRequest& setTableMappingsShrink(string tableMappingsShrink) { DARABONBA_PTR_SET_VALUE(tableMappingsShrink_, tableMappingsShrink) };


    // transformationRulesShrink Field Functions 
    bool hasTransformationRulesShrink() const { return this->transformationRulesShrink_ != nullptr;};
    void deleteTransformationRulesShrink() { this->transformationRulesShrink_ = nullptr;};
    inline string transformationRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(transformationRulesShrink_, "") };
    inline UpdateDIJobShrinkRequest& setTransformationRulesShrink(string transformationRulesShrink) { DARABONBA_PTR_SET_VALUE(transformationRulesShrink_, transformationRulesShrink) };


  protected:
    // The ID of the synchronization task.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    // The description of the synchronization task.
    std::shared_ptr<string> description_ = nullptr;
    // The settings for the dimension of the synchronization task. The settings include processing policies for DDL messages, policies for data type mappings between source fields and destination fields, and runtime parameters of the synchronization task.
    std::shared_ptr<string> jobSettingsShrink_ = nullptr;
    // The resource settings.
    std::shared_ptr<string> resourceSettingsShrink_ = nullptr;
    // The list of mappings between rules used to select synchronization objects in the source and transformation rules applied to the selected synchronization objects. Each entry in the list displays a mapping between a rule used to select synchronization objects and a transformation rule applied to the selected synchronization objects.
    std::shared_ptr<string> tableMappingsShrink_ = nullptr;
    // The list of transformation rules that you want to apply to the synchronization objects selected from the source. Each entry in the list defines a transformation rule.
    std::shared_ptr<string> transformationRulesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
