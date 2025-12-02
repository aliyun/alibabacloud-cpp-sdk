// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListComponentsResponseBodyComponentsComponentActions.hpp>
#include <alibabacloud/models/ListComponentsResponseBodyComponentsComponentAssetConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class ListComponentsResponseBodyComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentsResponseBodyComponents& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentActions, componentActions_);
      DARABONBA_PTR_TO_JSON(ComponentAlias, componentAlias_);
      DARABONBA_PTR_TO_JSON(ComponentAssetConfigs, componentAssetConfigs_);
      DARABONBA_PTR_TO_JSON(ComponentDescription, componentDescription_);
      DARABONBA_PTR_TO_JSON(ComponentExtension, componentExtension_);
      DARABONBA_PTR_TO_JSON(ComponentLogo, componentLogo_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentsResponseBodyComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentActions, componentActions_);
      DARABONBA_PTR_FROM_JSON(ComponentAlias, componentAlias_);
      DARABONBA_PTR_FROM_JSON(ComponentAssetConfigs, componentAssetConfigs_);
      DARABONBA_PTR_FROM_JSON(ComponentDescription, componentDescription_);
      DARABONBA_PTR_FROM_JSON(ComponentExtension, componentExtension_);
      DARABONBA_PTR_FROM_JSON(ComponentLogo, componentLogo_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListComponentsResponseBodyComponents() = default ;
    ListComponentsResponseBodyComponents(const ListComponentsResponseBodyComponents &) = default ;
    ListComponentsResponseBodyComponents(ListComponentsResponseBodyComponents &&) = default ;
    ListComponentsResponseBodyComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentsResponseBodyComponents() = default ;
    ListComponentsResponseBodyComponents& operator=(const ListComponentsResponseBodyComponents &) = default ;
    ListComponentsResponseBodyComponents& operator=(ListComponentsResponseBodyComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentActions_ == nullptr
        && return this->componentAlias_ == nullptr && return this->componentAssetConfigs_ == nullptr && return this->componentDescription_ == nullptr && return this->componentExtension_ == nullptr && return this->componentLogo_ == nullptr
        && return this->componentName_ == nullptr && return this->createTime_ == nullptr && return this->updateTime_ == nullptr; };
    // componentActions Field Functions 
    bool hasComponentActions() const { return this->componentActions_ != nullptr;};
    void deleteComponentActions() { this->componentActions_ = nullptr;};
    inline const vector<Models::ListComponentsResponseBodyComponentsComponentActions> & componentActions() const { DARABONBA_PTR_GET_CONST(componentActions_, vector<Models::ListComponentsResponseBodyComponentsComponentActions>) };
    inline vector<Models::ListComponentsResponseBodyComponentsComponentActions> componentActions() { DARABONBA_PTR_GET(componentActions_, vector<Models::ListComponentsResponseBodyComponentsComponentActions>) };
    inline ListComponentsResponseBodyComponents& setComponentActions(const vector<Models::ListComponentsResponseBodyComponentsComponentActions> & componentActions) { DARABONBA_PTR_SET_VALUE(componentActions_, componentActions) };
    inline ListComponentsResponseBodyComponents& setComponentActions(vector<Models::ListComponentsResponseBodyComponentsComponentActions> && componentActions) { DARABONBA_PTR_SET_RVALUE(componentActions_, componentActions) };


    // componentAlias Field Functions 
    bool hasComponentAlias() const { return this->componentAlias_ != nullptr;};
    void deleteComponentAlias() { this->componentAlias_ = nullptr;};
    inline string componentAlias() const { DARABONBA_PTR_GET_DEFAULT(componentAlias_, "") };
    inline ListComponentsResponseBodyComponents& setComponentAlias(string componentAlias) { DARABONBA_PTR_SET_VALUE(componentAlias_, componentAlias) };


    // componentAssetConfigs Field Functions 
    bool hasComponentAssetConfigs() const { return this->componentAssetConfigs_ != nullptr;};
    void deleteComponentAssetConfigs() { this->componentAssetConfigs_ = nullptr;};
    inline const vector<Models::ListComponentsResponseBodyComponentsComponentAssetConfigs> & componentAssetConfigs() const { DARABONBA_PTR_GET_CONST(componentAssetConfigs_, vector<Models::ListComponentsResponseBodyComponentsComponentAssetConfigs>) };
    inline vector<Models::ListComponentsResponseBodyComponentsComponentAssetConfigs> componentAssetConfigs() { DARABONBA_PTR_GET(componentAssetConfigs_, vector<Models::ListComponentsResponseBodyComponentsComponentAssetConfigs>) };
    inline ListComponentsResponseBodyComponents& setComponentAssetConfigs(const vector<Models::ListComponentsResponseBodyComponentsComponentAssetConfigs> & componentAssetConfigs) { DARABONBA_PTR_SET_VALUE(componentAssetConfigs_, componentAssetConfigs) };
    inline ListComponentsResponseBodyComponents& setComponentAssetConfigs(vector<Models::ListComponentsResponseBodyComponentsComponentAssetConfigs> && componentAssetConfigs) { DARABONBA_PTR_SET_RVALUE(componentAssetConfigs_, componentAssetConfigs) };


    // componentDescription Field Functions 
    bool hasComponentDescription() const { return this->componentDescription_ != nullptr;};
    void deleteComponentDescription() { this->componentDescription_ = nullptr;};
    inline string componentDescription() const { DARABONBA_PTR_GET_DEFAULT(componentDescription_, "") };
    inline ListComponentsResponseBodyComponents& setComponentDescription(string componentDescription) { DARABONBA_PTR_SET_VALUE(componentDescription_, componentDescription) };


    // componentExtension Field Functions 
    bool hasComponentExtension() const { return this->componentExtension_ != nullptr;};
    void deleteComponentExtension() { this->componentExtension_ = nullptr;};
    inline string componentExtension() const { DARABONBA_PTR_GET_DEFAULT(componentExtension_, "") };
    inline ListComponentsResponseBodyComponents& setComponentExtension(string componentExtension) { DARABONBA_PTR_SET_VALUE(componentExtension_, componentExtension) };


    // componentLogo Field Functions 
    bool hasComponentLogo() const { return this->componentLogo_ != nullptr;};
    void deleteComponentLogo() { this->componentLogo_ = nullptr;};
    inline string componentLogo() const { DARABONBA_PTR_GET_DEFAULT(componentLogo_, "") };
    inline ListComponentsResponseBodyComponents& setComponentLogo(string componentLogo) { DARABONBA_PTR_SET_VALUE(componentLogo_, componentLogo) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline ListComponentsResponseBodyComponents& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListComponentsResponseBodyComponents& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListComponentsResponseBodyComponents& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // List of component actions.
    std::shared_ptr<vector<Models::ListComponentsResponseBodyComponentsComponentActions>> componentActions_ = nullptr;
    // The alias of the component.
    std::shared_ptr<string> componentAlias_ = nullptr;
    // List of asset field configurations.
    std::shared_ptr<vector<Models::ListComponentsResponseBodyComponentsComponentAssetConfigs>> componentAssetConfigs_ = nullptr;
    // The description of the component.
    std::shared_ptr<string> componentDescription_ = nullptr;
    // Extended information of the component.
    std::shared_ptr<string> componentExtension_ = nullptr;
    // The icon URL of the component.
    std::shared_ptr<string> componentLogo_ = nullptr;
    // The name of the component.
    std::shared_ptr<string> componentName_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Update time.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
