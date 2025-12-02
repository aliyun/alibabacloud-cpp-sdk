// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTASSETSRESPONSEBODYCOMPONENTASSETS_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTASSETSRESPONSEBODYCOMPONENTASSETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListComponentAssetsResponseBodyComponentAssetsComponentAssetValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class ListComponentAssetsResponseBodyComponentAssets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentAssetsResponseBodyComponentAssets& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentAssetName, componentAssetName_);
      DARABONBA_PTR_TO_JSON(ComponentAssetUuid, componentAssetUuid_);
      DARABONBA_PTR_TO_JSON(ComponentAssetValues, componentAssetValues_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentAssetsResponseBodyComponentAssets& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentAssetName, componentAssetName_);
      DARABONBA_PTR_FROM_JSON(ComponentAssetUuid, componentAssetUuid_);
      DARABONBA_PTR_FROM_JSON(ComponentAssetValues, componentAssetValues_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListComponentAssetsResponseBodyComponentAssets() = default ;
    ListComponentAssetsResponseBodyComponentAssets(const ListComponentAssetsResponseBodyComponentAssets &) = default ;
    ListComponentAssetsResponseBodyComponentAssets(ListComponentAssetsResponseBodyComponentAssets &&) = default ;
    ListComponentAssetsResponseBodyComponentAssets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentAssetsResponseBodyComponentAssets() = default ;
    ListComponentAssetsResponseBodyComponentAssets& operator=(const ListComponentAssetsResponseBodyComponentAssets &) = default ;
    ListComponentAssetsResponseBodyComponentAssets& operator=(ListComponentAssetsResponseBodyComponentAssets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentAssetName_ == nullptr
        && return this->componentAssetUuid_ == nullptr && return this->componentAssetValues_ == nullptr && return this->componentName_ == nullptr && return this->createTime_ == nullptr && return this->updateTime_ == nullptr; };
    // componentAssetName Field Functions 
    bool hasComponentAssetName() const { return this->componentAssetName_ != nullptr;};
    void deleteComponentAssetName() { this->componentAssetName_ = nullptr;};
    inline string componentAssetName() const { DARABONBA_PTR_GET_DEFAULT(componentAssetName_, "") };
    inline ListComponentAssetsResponseBodyComponentAssets& setComponentAssetName(string componentAssetName) { DARABONBA_PTR_SET_VALUE(componentAssetName_, componentAssetName) };


    // componentAssetUuid Field Functions 
    bool hasComponentAssetUuid() const { return this->componentAssetUuid_ != nullptr;};
    void deleteComponentAssetUuid() { this->componentAssetUuid_ = nullptr;};
    inline string componentAssetUuid() const { DARABONBA_PTR_GET_DEFAULT(componentAssetUuid_, "") };
    inline ListComponentAssetsResponseBodyComponentAssets& setComponentAssetUuid(string componentAssetUuid) { DARABONBA_PTR_SET_VALUE(componentAssetUuid_, componentAssetUuid) };


    // componentAssetValues Field Functions 
    bool hasComponentAssetValues() const { return this->componentAssetValues_ != nullptr;};
    void deleteComponentAssetValues() { this->componentAssetValues_ = nullptr;};
    inline const vector<Models::ListComponentAssetsResponseBodyComponentAssetsComponentAssetValues> & componentAssetValues() const { DARABONBA_PTR_GET_CONST(componentAssetValues_, vector<Models::ListComponentAssetsResponseBodyComponentAssetsComponentAssetValues>) };
    inline vector<Models::ListComponentAssetsResponseBodyComponentAssetsComponentAssetValues> componentAssetValues() { DARABONBA_PTR_GET(componentAssetValues_, vector<Models::ListComponentAssetsResponseBodyComponentAssetsComponentAssetValues>) };
    inline ListComponentAssetsResponseBodyComponentAssets& setComponentAssetValues(const vector<Models::ListComponentAssetsResponseBodyComponentAssetsComponentAssetValues> & componentAssetValues) { DARABONBA_PTR_SET_VALUE(componentAssetValues_, componentAssetValues) };
    inline ListComponentAssetsResponseBodyComponentAssets& setComponentAssetValues(vector<Models::ListComponentAssetsResponseBodyComponentAssetsComponentAssetValues> && componentAssetValues) { DARABONBA_PTR_SET_RVALUE(componentAssetValues_, componentAssetValues) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline ListComponentAssetsResponseBodyComponentAssets& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListComponentAssetsResponseBodyComponentAssets& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListComponentAssetsResponseBodyComponentAssets& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Asset name.
    std::shared_ptr<string> componentAssetName_ = nullptr;
    // Asset UUID.
    std::shared_ptr<string> componentAssetUuid_ = nullptr;
    // Configuration information of the asset.
    std::shared_ptr<vector<Models::ListComponentAssetsResponseBodyComponentAssetsComponentAssetValues>> componentAssetValues_ = nullptr;
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
