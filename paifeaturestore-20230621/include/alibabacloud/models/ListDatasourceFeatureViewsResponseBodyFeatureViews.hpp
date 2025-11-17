// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCEFEATUREVIEWSRESPONSEBODYFEATUREVIEWS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCEFEATUREVIEWSRESPONSEBODYFEATUREVIEWS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListDatasourceFeatureViewsResponseBodyFeatureViews : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasourceFeatureViewsResponseBodyFeatureViews& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(FeatureEntityName, featureEntityName_);
      DARABONBA_PTR_TO_JSON(FeatureViewId, featureViewId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(TTL, TTL_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UsageStatistics, usageStatistics_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasourceFeatureViewsResponseBodyFeatureViews& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(FeatureEntityName, featureEntityName_);
      DARABONBA_PTR_FROM_JSON(FeatureViewId, featureViewId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(TTL, TTL_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UsageStatistics, usageStatistics_);
    };
    ListDatasourceFeatureViewsResponseBodyFeatureViews() = default ;
    ListDatasourceFeatureViewsResponseBodyFeatureViews(const ListDatasourceFeatureViewsResponseBodyFeatureViews &) = default ;
    ListDatasourceFeatureViewsResponseBodyFeatureViews(ListDatasourceFeatureViewsResponseBodyFeatureViews &&) = default ;
    ListDatasourceFeatureViewsResponseBodyFeatureViews(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasourceFeatureViewsResponseBodyFeatureViews() = default ;
    ListDatasourceFeatureViewsResponseBodyFeatureViews& operator=(const ListDatasourceFeatureViewsResponseBodyFeatureViews &) = default ;
    ListDatasourceFeatureViewsResponseBodyFeatureViews& operator=(ListDatasourceFeatureViewsResponseBodyFeatureViews &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->featureEntityName_ == nullptr && return this->featureViewId_ == nullptr && return this->name_ == nullptr && return this->projectName_ == nullptr && return this->TTL_ == nullptr
        && return this->type_ == nullptr && return this->usageStatistics_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ListDatasourceFeatureViewsResponseBodyFeatureViews& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // featureEntityName Field Functions 
    bool hasFeatureEntityName() const { return this->featureEntityName_ != nullptr;};
    void deleteFeatureEntityName() { this->featureEntityName_ = nullptr;};
    inline string featureEntityName() const { DARABONBA_PTR_GET_DEFAULT(featureEntityName_, "") };
    inline ListDatasourceFeatureViewsResponseBodyFeatureViews& setFeatureEntityName(string featureEntityName) { DARABONBA_PTR_SET_VALUE(featureEntityName_, featureEntityName) };


    // featureViewId Field Functions 
    bool hasFeatureViewId() const { return this->featureViewId_ != nullptr;};
    void deleteFeatureViewId() { this->featureViewId_ = nullptr;};
    inline string featureViewId() const { DARABONBA_PTR_GET_DEFAULT(featureViewId_, "") };
    inline ListDatasourceFeatureViewsResponseBodyFeatureViews& setFeatureViewId(string featureViewId) { DARABONBA_PTR_SET_VALUE(featureViewId_, featureViewId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDatasourceFeatureViewsResponseBodyFeatureViews& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListDatasourceFeatureViewsResponseBodyFeatureViews& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // TTL Field Functions 
    bool hasTTL() const { return this->TTL_ != nullptr;};
    void deleteTTL() { this->TTL_ = nullptr;};
    inline int32_t TTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, 0) };
    inline ListDatasourceFeatureViewsResponseBodyFeatureViews& setTTL(int32_t TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDatasourceFeatureViewsResponseBodyFeatureViews& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // usageStatistics Field Functions 
    bool hasUsageStatistics() const { return this->usageStatistics_ != nullptr;};
    void deleteUsageStatistics() { this->usageStatistics_ = nullptr;};
    inline const Models::ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics & usageStatistics() const { DARABONBA_PTR_GET_CONST(usageStatistics_, Models::ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics) };
    inline Models::ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics usageStatistics() { DARABONBA_PTR_GET(usageStatistics_, Models::ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics) };
    inline ListDatasourceFeatureViewsResponseBodyFeatureViews& setUsageStatistics(const Models::ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics & usageStatistics) { DARABONBA_PTR_SET_VALUE(usageStatistics_, usageStatistics) };
    inline ListDatasourceFeatureViewsResponseBodyFeatureViews& setUsageStatistics(Models::ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics && usageStatistics) { DARABONBA_PTR_SET_RVALUE(usageStatistics_, usageStatistics) };


  protected:
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> featureEntityName_ = nullptr;
    std::shared_ptr<string> featureViewId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<int32_t> TTL_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<Models::ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics> usageStatistics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
