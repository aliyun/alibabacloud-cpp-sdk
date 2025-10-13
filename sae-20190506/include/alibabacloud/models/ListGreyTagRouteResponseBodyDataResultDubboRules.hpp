// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGREYTAGROUTERESPONSEBODYDATARESULTDUBBORULES_HPP_
#define ALIBABACLOUD_MODELS_LISTGREYTAGROUTERESPONSEBODYDATARESULTDUBBORULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGreyTagRouteResponseBodyDataResultDubboRulesItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListGreyTagRouteResponseBodyDataResultDubboRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGreyTagRouteResponseBodyDataResultDubboRules& obj) { 
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(group, group_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(methodName, methodName_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListGreyTagRouteResponseBodyDataResultDubboRules& obj) { 
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(group, group_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(methodName, methodName_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListGreyTagRouteResponseBodyDataResultDubboRules() = default ;
    ListGreyTagRouteResponseBodyDataResultDubboRules(const ListGreyTagRouteResponseBodyDataResultDubboRules &) = default ;
    ListGreyTagRouteResponseBodyDataResultDubboRules(ListGreyTagRouteResponseBodyDataResultDubboRules &&) = default ;
    ListGreyTagRouteResponseBodyDataResultDubboRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGreyTagRouteResponseBodyDataResultDubboRules() = default ;
    ListGreyTagRouteResponseBodyDataResultDubboRules& operator=(const ListGreyTagRouteResponseBodyDataResultDubboRules &) = default ;
    ListGreyTagRouteResponseBodyDataResultDubboRules& operator=(ListGreyTagRouteResponseBodyDataResultDubboRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && return this->group_ == nullptr && return this->items_ == nullptr && return this->methodName_ == nullptr && return this->serviceName_ == nullptr && return this->version_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline ListGreyTagRouteResponseBodyDataResultDubboRules& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListGreyTagRouteResponseBodyDataResultDubboRules& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::ListGreyTagRouteResponseBodyDataResultDubboRulesItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::ListGreyTagRouteResponseBodyDataResultDubboRulesItems>) };
    inline vector<Models::ListGreyTagRouteResponseBodyDataResultDubboRulesItems> items() { DARABONBA_PTR_GET(items_, vector<Models::ListGreyTagRouteResponseBodyDataResultDubboRulesItems>) };
    inline ListGreyTagRouteResponseBodyDataResultDubboRules& setItems(const vector<Models::ListGreyTagRouteResponseBodyDataResultDubboRulesItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListGreyTagRouteResponseBodyDataResultDubboRules& setItems(vector<Models::ListGreyTagRouteResponseBodyDataResultDubboRulesItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // methodName Field Functions 
    bool hasMethodName() const { return this->methodName_ != nullptr;};
    void deleteMethodName() { this->methodName_ = nullptr;};
    inline string methodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
    inline ListGreyTagRouteResponseBodyDataResultDubboRules& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListGreyTagRouteResponseBodyDataResultDubboRules& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListGreyTagRouteResponseBodyDataResultDubboRules& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The relationship between the conditions in the canary release rule. Valid values:
    // 
    // - **AND**: The conditions are in the logical AND relation. All conditions must be met at the same time.
    // - **OR**: The conditions are in the logical OR relation. At least one of the conditions must be met.
    std::shared_ptr<string> condition_ = nullptr;
    // The group of the Dubbo service that corresponds to the canary release rule.
    std::shared_ptr<string> group_ = nullptr;
    // The conditions.
    std::shared_ptr<vector<Models::ListGreyTagRouteResponseBodyDataResultDubboRulesItems>> items_ = nullptr;
    // The method name of the Dubbo service.
    std::shared_ptr<string> methodName_ = nullptr;
    // The name of the Dubbo service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The version of the Dubbo service.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
