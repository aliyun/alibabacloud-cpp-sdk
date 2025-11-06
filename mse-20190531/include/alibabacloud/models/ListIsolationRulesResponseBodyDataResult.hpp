// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTISOLATIONRULESRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTISOLATIONRULESRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListIsolationRulesResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIsolationRulesResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(FallbackObject, fallbackObject_);
      DARABONBA_PTR_TO_JSON(LimitApp, limitApp_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, ListIsolationRulesResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(FallbackObject, fallbackObject_);
      DARABONBA_PTR_FROM_JSON(LimitApp, limitApp_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    ListIsolationRulesResponseBodyDataResult() = default ;
    ListIsolationRulesResponseBodyDataResult(const ListIsolationRulesResponseBodyDataResult &) = default ;
    ListIsolationRulesResponseBodyDataResult(ListIsolationRulesResponseBodyDataResult &&) = default ;
    ListIsolationRulesResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIsolationRulesResponseBodyDataResult() = default ;
    ListIsolationRulesResponseBodyDataResult& operator=(const ListIsolationRulesResponseBodyDataResult &) = default ;
    ListIsolationRulesResponseBodyDataResult& operator=(ListIsolationRulesResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->enable_ == nullptr && return this->fallbackObject_ == nullptr && return this->limitApp_ == nullptr && return this->namespace_ == nullptr
        && return this->regionId_ == nullptr && return this->resource_ == nullptr && return this->ruleId_ == nullptr && return this->threshold_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListIsolationRulesResponseBodyDataResult& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListIsolationRulesResponseBodyDataResult& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ListIsolationRulesResponseBodyDataResult& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // fallbackObject Field Functions 
    bool hasFallbackObject() const { return this->fallbackObject_ != nullptr;};
    void deleteFallbackObject() { this->fallbackObject_ = nullptr;};
    inline string fallbackObject() const { DARABONBA_PTR_GET_DEFAULT(fallbackObject_, "") };
    inline ListIsolationRulesResponseBodyDataResult& setFallbackObject(string fallbackObject) { DARABONBA_PTR_SET_VALUE(fallbackObject_, fallbackObject) };


    // limitApp Field Functions 
    bool hasLimitApp() const { return this->limitApp_ != nullptr;};
    void deleteLimitApp() { this->limitApp_ = nullptr;};
    inline string limitApp() const { DARABONBA_PTR_GET_DEFAULT(limitApp_, "") };
    inline ListIsolationRulesResponseBodyDataResult& setLimitApp(string limitApp) { DARABONBA_PTR_SET_VALUE(limitApp_, limitApp) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListIsolationRulesResponseBodyDataResult& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIsolationRulesResponseBodyDataResult& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline ListIsolationRulesResponseBodyDataResult& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ListIsolationRulesResponseBodyDataResult& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline int32_t threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
    inline ListIsolationRulesResponseBodyDataResult& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> fallbackObject_ = nullptr;
    std::shared_ptr<string> limitApp_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resource_ = nullptr;
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    std::shared_ptr<int32_t> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
