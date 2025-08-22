// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTADDONSRESPONSEBODYDATAADDONS_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTADDONSRESPONSEBODYDATAADDONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEnvironmentAddonsResponseBodyDataAddonsDashboards.hpp>
#include <alibabacloud/models/ListEnvironmentAddonsResponseBodyDataAddonsEnvironments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentAddonsResponseBodyDataAddons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentAddonsResponseBodyDataAddons& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(Dashboards, dashboards_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Environments, environments_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(LatestReleaseCreateTime, latestReleaseCreateTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Once, once_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentAddonsResponseBodyDataAddons& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(Dashboards, dashboards_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Environments, environments_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(LatestReleaseCreateTime, latestReleaseCreateTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Once, once_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    ListEnvironmentAddonsResponseBodyDataAddons() = default ;
    ListEnvironmentAddonsResponseBodyDataAddons(const ListEnvironmentAddonsResponseBodyDataAddons &) = default ;
    ListEnvironmentAddonsResponseBodyDataAddons(ListEnvironmentAddonsResponseBodyDataAddons &&) = default ;
    ListEnvironmentAddonsResponseBodyDataAddons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentAddonsResponseBodyDataAddons() = default ;
    ListEnvironmentAddonsResponseBodyDataAddons& operator=(const ListEnvironmentAddonsResponseBodyDataAddons &) = default ;
    ListEnvironmentAddonsResponseBodyDataAddons& operator=(ListEnvironmentAddonsResponseBodyDataAddons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->categories_ != nullptr && this->dashboards_ != nullptr && this->description_ != nullptr && this->environments_ != nullptr && this->icon_ != nullptr
        && this->keywords_ != nullptr && this->language_ != nullptr && this->latestReleaseCreateTime_ != nullptr && this->name_ != nullptr && this->once_ != nullptr
        && this->scene_ != nullptr && this->version_ != nullptr && this->weight_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddons& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<string> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
    inline vector<string> categories() { DARABONBA_PTR_GET(categories_, vector<string>) };
    inline ListEnvironmentAddonsResponseBodyDataAddons& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline ListEnvironmentAddonsResponseBodyDataAddons& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // dashboards Field Functions 
    bool hasDashboards() const { return this->dashboards_ != nullptr;};
    void deleteDashboards() { this->dashboards_ = nullptr;};
    inline const vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsDashboards> & dashboards() const { DARABONBA_PTR_GET_CONST(dashboards_, vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsDashboards>) };
    inline vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsDashboards> dashboards() { DARABONBA_PTR_GET(dashboards_, vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsDashboards>) };
    inline ListEnvironmentAddonsResponseBodyDataAddons& setDashboards(const vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsDashboards> & dashboards) { DARABONBA_PTR_SET_VALUE(dashboards_, dashboards) };
    inline ListEnvironmentAddonsResponseBodyDataAddons& setDashboards(vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsDashboards> && dashboards) { DARABONBA_PTR_SET_RVALUE(dashboards_, dashboards) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddons& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environments Field Functions 
    bool hasEnvironments() const { return this->environments_ != nullptr;};
    void deleteEnvironments() { this->environments_ = nullptr;};
    inline const vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironments> & environments() const { DARABONBA_PTR_GET_CONST(environments_, vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironments>) };
    inline vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironments> environments() { DARABONBA_PTR_GET(environments_, vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironments>) };
    inline ListEnvironmentAddonsResponseBodyDataAddons& setEnvironments(const vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironments> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
    inline ListEnvironmentAddonsResponseBodyDataAddons& setEnvironments(vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironments> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddons& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline const vector<string> & keywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
    inline vector<string> keywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
    inline ListEnvironmentAddonsResponseBodyDataAddons& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
    inline ListEnvironmentAddonsResponseBodyDataAddons& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddons& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // latestReleaseCreateTime Field Functions 
    bool hasLatestReleaseCreateTime() const { return this->latestReleaseCreateTime_ != nullptr;};
    void deleteLatestReleaseCreateTime() { this->latestReleaseCreateTime_ = nullptr;};
    inline string latestReleaseCreateTime() const { DARABONBA_PTR_GET_DEFAULT(latestReleaseCreateTime_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddons& setLatestReleaseCreateTime(string latestReleaseCreateTime) { DARABONBA_PTR_SET_VALUE(latestReleaseCreateTime_, latestReleaseCreateTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // once Field Functions 
    bool hasOnce() const { return this->once_ != nullptr;};
    void deleteOnce() { this->once_ = nullptr;};
    inline bool once() const { DARABONBA_PTR_GET_DEFAULT(once_, false) };
    inline ListEnvironmentAddonsResponseBodyDataAddons& setOnce(bool once) { DARABONBA_PTR_SET_VALUE(once_, once) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddons& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddons& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline string weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddons& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The alias of the add-on.
    std::shared_ptr<string> alias_ = nullptr;
    // The tags of the add-on.
    std::shared_ptr<vector<string>> categories_ = nullptr;
    // The dashboards.
    std::shared_ptr<vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsDashboards>> dashboards_ = nullptr;
    // The description of the add-on.
    std::shared_ptr<string> description_ = nullptr;
    // The supported environments.
    std::shared_ptr<vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironments>> environments_ = nullptr;
    // The URL of the icon.
    std::shared_ptr<string> icon_ = nullptr;
    // The collection of keywords.
    std::shared_ptr<vector<string>> keywords_ = nullptr;
    // The language.
    std::shared_ptr<string> language_ = nullptr;
    // The time when the instance was last created.
    std::shared_ptr<string> latestReleaseCreateTime_ = nullptr;
    // The name of the add-on.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether the add-on can be installed only once.
    std::shared_ptr<bool> once_ = nullptr;
    // The scenario.
    std::shared_ptr<string> scene_ = nullptr;
    // The version of the agent.
    std::shared_ptr<string> version_ = nullptr;
    // The weight.
    std::shared_ptr<string> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
