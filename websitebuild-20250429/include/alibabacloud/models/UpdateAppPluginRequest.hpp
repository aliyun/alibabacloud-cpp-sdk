// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPPLUGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPPLUGINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class UpdateAppPluginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppPluginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ConfigItems, configItems_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(Hooks, hooks_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(PluginName, pluginName_);
      DARABONBA_PTR_TO_JSON(PluginVersion, pluginVersion_);
      DARABONBA_PTR_TO_JSON(SkillHeader, skillHeader_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppPluginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ConfigItems, configItems_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(Hooks, hooks_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(PluginName, pluginName_);
      DARABONBA_PTR_FROM_JSON(PluginVersion, pluginVersion_);
      DARABONBA_PTR_FROM_JSON(SkillHeader, skillHeader_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
    };
    UpdateAppPluginRequest() = default ;
    UpdateAppPluginRequest(const UpdateAppPluginRequest &) = default ;
    UpdateAppPluginRequest(UpdateAppPluginRequest &&) = default ;
    UpdateAppPluginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppPluginRequest() = default ;
    UpdateAppPluginRequest& operator=(const UpdateAppPluginRequest &) = default ;
    UpdateAppPluginRequest& operator=(UpdateAppPluginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->configItems_ == nullptr && this->description_ == nullptr && this->extend_ == nullptr && this->hooks_ == nullptr && this->icon_ == nullptr
        && this->pluginId_ == nullptr && this->pluginName_ == nullptr && this->pluginVersion_ == nullptr && this->skillHeader_ == nullptr && this->tags_ == nullptr
        && this->visibility_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline UpdateAppPluginRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // configItems Field Functions 
    bool hasConfigItems() const { return this->configItems_ != nullptr;};
    void deleteConfigItems() { this->configItems_ = nullptr;};
    inline string getConfigItems() const { DARABONBA_PTR_GET_DEFAULT(configItems_, "") };
    inline UpdateAppPluginRequest& setConfigItems(string configItems) { DARABONBA_PTR_SET_VALUE(configItems_, configItems) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAppPluginRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline UpdateAppPluginRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // hooks Field Functions 
    bool hasHooks() const { return this->hooks_ != nullptr;};
    void deleteHooks() { this->hooks_ = nullptr;};
    inline string getHooks() const { DARABONBA_PTR_GET_DEFAULT(hooks_, "") };
    inline UpdateAppPluginRequest& setHooks(string hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline UpdateAppPluginRequest& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline UpdateAppPluginRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // pluginName Field Functions 
    bool hasPluginName() const { return this->pluginName_ != nullptr;};
    void deletePluginName() { this->pluginName_ = nullptr;};
    inline string getPluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
    inline UpdateAppPluginRequest& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


    // pluginVersion Field Functions 
    bool hasPluginVersion() const { return this->pluginVersion_ != nullptr;};
    void deletePluginVersion() { this->pluginVersion_ = nullptr;};
    inline string getPluginVersion() const { DARABONBA_PTR_GET_DEFAULT(pluginVersion_, "") };
    inline UpdateAppPluginRequest& setPluginVersion(string pluginVersion) { DARABONBA_PTR_SET_VALUE(pluginVersion_, pluginVersion) };


    // skillHeader Field Functions 
    bool hasSkillHeader() const { return this->skillHeader_ != nullptr;};
    void deleteSkillHeader() { this->skillHeader_ = nullptr;};
    inline string getSkillHeader() const { DARABONBA_PTR_GET_DEFAULT(skillHeader_, "") };
    inline UpdateAppPluginRequest& setSkillHeader(string skillHeader) { DARABONBA_PTR_SET_VALUE(skillHeader_, skillHeader) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline UpdateAppPluginRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline UpdateAppPluginRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // The category.
    shared_ptr<string> category_ {};
    // The configuration form in React JSON Schema format.
    shared_ptr<string> configItems_ {};
    // The application description.
    shared_ptr<string> description_ {};
    // Other extension information in JSON format for future parameter expansion.
    shared_ptr<string> extend_ {};
    // The hook definitions.
    shared_ptr<string> hooks_ {};
    // The plug-in description.
    shared_ptr<string> icon_ {};
    // The gateway plug-in ID.
    shared_ptr<string> pluginId_ {};
    // The plug-in name.
    shared_ptr<string> pluginName_ {};
    // The plug-in version.
    shared_ptr<string> pluginVersion_ {};
    // The skill header information for model selection.
    shared_ptr<string> skillHeader_ {};
    // The labels.
    shared_ptr<string> tags_ {};
    // The visibility.
    shared_ptr<string> visibility_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
