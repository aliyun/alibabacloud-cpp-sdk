// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDITINGPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDITINGPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateEditingProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEditingProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessConfig, businessConfig_);
      DARABONBA_PTR_TO_JSON(ClipsParam, clipsParam_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MaterialMaps, materialMaps_);
      DARABONBA_PTR_TO_JSON(ProjectType, projectType_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(Timeline, timeline_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEditingProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessConfig, businessConfig_);
      DARABONBA_PTR_FROM_JSON(ClipsParam, clipsParam_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MaterialMaps, materialMaps_);
      DARABONBA_PTR_FROM_JSON(ProjectType, projectType_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(Timeline, timeline_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateEditingProjectRequest() = default ;
    CreateEditingProjectRequest(const CreateEditingProjectRequest &) = default ;
    CreateEditingProjectRequest(CreateEditingProjectRequest &&) = default ;
    CreateEditingProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEditingProjectRequest() = default ;
    CreateEditingProjectRequest& operator=(const CreateEditingProjectRequest &) = default ;
    CreateEditingProjectRequest& operator=(CreateEditingProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessConfig_ == nullptr
        && this->clipsParam_ == nullptr && this->coverURL_ == nullptr && this->description_ == nullptr && this->materialMaps_ == nullptr && this->projectType_ == nullptr
        && this->templateId_ == nullptr && this->templateType_ == nullptr && this->timeline_ == nullptr && this->title_ == nullptr; };
    // businessConfig Field Functions 
    bool hasBusinessConfig() const { return this->businessConfig_ != nullptr;};
    void deleteBusinessConfig() { this->businessConfig_ = nullptr;};
    inline string getBusinessConfig() const { DARABONBA_PTR_GET_DEFAULT(businessConfig_, "") };
    inline CreateEditingProjectRequest& setBusinessConfig(string businessConfig) { DARABONBA_PTR_SET_VALUE(businessConfig_, businessConfig) };


    // clipsParam Field Functions 
    bool hasClipsParam() const { return this->clipsParam_ != nullptr;};
    void deleteClipsParam() { this->clipsParam_ = nullptr;};
    inline string getClipsParam() const { DARABONBA_PTR_GET_DEFAULT(clipsParam_, "") };
    inline CreateEditingProjectRequest& setClipsParam(string clipsParam) { DARABONBA_PTR_SET_VALUE(clipsParam_, clipsParam) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline CreateEditingProjectRequest& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEditingProjectRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // materialMaps Field Functions 
    bool hasMaterialMaps() const { return this->materialMaps_ != nullptr;};
    void deleteMaterialMaps() { this->materialMaps_ = nullptr;};
    inline string getMaterialMaps() const { DARABONBA_PTR_GET_DEFAULT(materialMaps_, "") };
    inline CreateEditingProjectRequest& setMaterialMaps(string materialMaps) { DARABONBA_PTR_SET_VALUE(materialMaps_, materialMaps) };


    // projectType Field Functions 
    bool hasProjectType() const { return this->projectType_ != nullptr;};
    void deleteProjectType() { this->projectType_ = nullptr;};
    inline string getProjectType() const { DARABONBA_PTR_GET_DEFAULT(projectType_, "") };
    inline CreateEditingProjectRequest& setProjectType(string projectType) { DARABONBA_PTR_SET_VALUE(projectType_, projectType) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateEditingProjectRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline CreateEditingProjectRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // timeline Field Functions 
    bool hasTimeline() const { return this->timeline_ != nullptr;};
    void deleteTimeline() { this->timeline_ = nullptr;};
    inline string getTimeline() const { DARABONBA_PTR_GET_DEFAULT(timeline_, "") };
    inline CreateEditingProjectRequest& setTimeline(string timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateEditingProjectRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The business configuration of the project. This parameter can be ignored for general editing projects.
    // 
    // For a live stream editing project, observe the following rules: OutputMediaConfig.StorageLocation is required. OutputMediaConfig.Path is optional. If you do not specify this option, the live streaming clips are stored in the root directory by default.
    // 
    // Valid values of OutputMediaTarget include vod-media and oss-object. If you do not specify OutputMediaTarget, the default value oss-object is used.
    // 
    // If you set OutputMediaTarget to vod-media, the setting of OutputMediaConfig.Path does not take effect.
    shared_ptr<string> businessConfig_ {};
    // The material parameter corresponding to the template, in the JSON format. If TemplateId is specified, ClipsParam must also be specified. For more information<props="china">, see [Create and use a regular template](https://help.aliyun.com/document_detail/328557.html) and [Create and use an advanced template](https://help.aliyun.com/document_detail/291418.html).
    shared_ptr<string> clipsParam_ {};
    // The thumbnail URL of the online editing project.
    shared_ptr<string> coverURL_ {};
    // The description of the online editing project.
    shared_ptr<string> description_ {};
    // The material associated with the project. Separate multiple material IDs with commas (,). Each type supports up to 10 material IDs.
    shared_ptr<string> materialMaps_ {};
    // The type of the editing project. Valid values: EditingProject and LiveEditingProject. A value of EditingProject indicates a regular editing project, and a value of LiveEditingProject indicates a live stream editing project.
    shared_ptr<string> projectType_ {};
    // The template ID. This parameter is used to quickly build a timeline with ease. Note: Only one of Timeline and TemplateId can be specified. If TemplateId is specified, ClipsParam must also be specified.
    shared_ptr<string> templateId_ {};
    // The template type. This parameter is required if you create a template-based online editing project. Default value: Timeline. Valid values:
    // 
    // *   Timeline: a regular template.
    // *   VETemplate: an advanced template.
    shared_ptr<string> templateType_ {};
    shared_ptr<string> timeline_ {};
    // The title of the online editing project.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
