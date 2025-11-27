// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONSRESPONSEBODYADDONS_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONSRESPONSEBODYADDONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAddonsResponseBodyAddonsDashboards.hpp>
#include <alibabacloud/models/ListAddonsResponseBodyAddonsEnvironments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAddonsResponseBodyAddons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonsResponseBodyAddons& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(categories, categories_);
      DARABONBA_PTR_TO_JSON(dashboards, dashboards_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(environments, environments_);
      DARABONBA_PTR_TO_JSON(icon, icon_);
      DARABONBA_PTR_TO_JSON(keywords, keywords_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(latestReleaseCreateTime, latestReleaseCreateTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(once, once_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonsResponseBodyAddons& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(categories, categories_);
      DARABONBA_PTR_FROM_JSON(dashboards, dashboards_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(environments, environments_);
      DARABONBA_PTR_FROM_JSON(icon, icon_);
      DARABONBA_PTR_FROM_JSON(keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(latestReleaseCreateTime, latestReleaseCreateTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(once, once_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    ListAddonsResponseBodyAddons() = default ;
    ListAddonsResponseBodyAddons(const ListAddonsResponseBodyAddons &) = default ;
    ListAddonsResponseBodyAddons(ListAddonsResponseBodyAddons &&) = default ;
    ListAddonsResponseBodyAddons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddonsResponseBodyAddons() = default ;
    ListAddonsResponseBodyAddons& operator=(const ListAddonsResponseBodyAddons &) = default ;
    ListAddonsResponseBodyAddons& operator=(ListAddonsResponseBodyAddons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->categories_ == nullptr && return this->dashboards_ == nullptr && return this->description_ == nullptr && return this->environments_ == nullptr && return this->icon_ == nullptr
        && return this->keywords_ == nullptr && return this->language_ == nullptr && return this->latestReleaseCreateTime_ == nullptr && return this->name_ == nullptr && return this->once_ == nullptr
        && return this->scene_ == nullptr && return this->version_ == nullptr && return this->weight_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline ListAddonsResponseBodyAddons& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<string> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
    inline vector<string> categories() { DARABONBA_PTR_GET(categories_, vector<string>) };
    inline ListAddonsResponseBodyAddons& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline ListAddonsResponseBodyAddons& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // dashboards Field Functions 
    bool hasDashboards() const { return this->dashboards_ != nullptr;};
    void deleteDashboards() { this->dashboards_ = nullptr;};
    inline const vector<Models::ListAddonsResponseBodyAddonsDashboards> & dashboards() const { DARABONBA_PTR_GET_CONST(dashboards_, vector<Models::ListAddonsResponseBodyAddonsDashboards>) };
    inline vector<Models::ListAddonsResponseBodyAddonsDashboards> dashboards() { DARABONBA_PTR_GET(dashboards_, vector<Models::ListAddonsResponseBodyAddonsDashboards>) };
    inline ListAddonsResponseBodyAddons& setDashboards(const vector<Models::ListAddonsResponseBodyAddonsDashboards> & dashboards) { DARABONBA_PTR_SET_VALUE(dashboards_, dashboards) };
    inline ListAddonsResponseBodyAddons& setDashboards(vector<Models::ListAddonsResponseBodyAddonsDashboards> && dashboards) { DARABONBA_PTR_SET_RVALUE(dashboards_, dashboards) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAddonsResponseBodyAddons& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environments Field Functions 
    bool hasEnvironments() const { return this->environments_ != nullptr;};
    void deleteEnvironments() { this->environments_ = nullptr;};
    inline const vector<Models::ListAddonsResponseBodyAddonsEnvironments> & environments() const { DARABONBA_PTR_GET_CONST(environments_, vector<Models::ListAddonsResponseBodyAddonsEnvironments>) };
    inline vector<Models::ListAddonsResponseBodyAddonsEnvironments> environments() { DARABONBA_PTR_GET(environments_, vector<Models::ListAddonsResponseBodyAddonsEnvironments>) };
    inline ListAddonsResponseBodyAddons& setEnvironments(const vector<Models::ListAddonsResponseBodyAddonsEnvironments> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
    inline ListAddonsResponseBodyAddons& setEnvironments(vector<Models::ListAddonsResponseBodyAddonsEnvironments> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline ListAddonsResponseBodyAddons& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline const vector<string> & keywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
    inline vector<string> keywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
    inline ListAddonsResponseBodyAddons& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
    inline ListAddonsResponseBodyAddons& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListAddonsResponseBodyAddons& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // latestReleaseCreateTime Field Functions 
    bool hasLatestReleaseCreateTime() const { return this->latestReleaseCreateTime_ != nullptr;};
    void deleteLatestReleaseCreateTime() { this->latestReleaseCreateTime_ = nullptr;};
    inline string latestReleaseCreateTime() const { DARABONBA_PTR_GET_DEFAULT(latestReleaseCreateTime_, "") };
    inline ListAddonsResponseBodyAddons& setLatestReleaseCreateTime(string latestReleaseCreateTime) { DARABONBA_PTR_SET_VALUE(latestReleaseCreateTime_, latestReleaseCreateTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAddonsResponseBodyAddons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // once Field Functions 
    bool hasOnce() const { return this->once_ != nullptr;};
    void deleteOnce() { this->once_ = nullptr;};
    inline bool once() const { DARABONBA_PTR_GET_DEFAULT(once_, false) };
    inline ListAddonsResponseBodyAddons& setOnce(bool once) { DARABONBA_PTR_SET_VALUE(once_, once) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline ListAddonsResponseBodyAddons& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListAddonsResponseBodyAddons& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline string weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
    inline ListAddonsResponseBodyAddons& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<string> alias_ = nullptr;
    std::shared_ptr<vector<string>> categories_ = nullptr;
    std::shared_ptr<vector<Models::ListAddonsResponseBodyAddonsDashboards>> dashboards_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<Models::ListAddonsResponseBodyAddonsEnvironments>> environments_ = nullptr;
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<vector<string>> keywords_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> latestReleaseCreateTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> once_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<string> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
