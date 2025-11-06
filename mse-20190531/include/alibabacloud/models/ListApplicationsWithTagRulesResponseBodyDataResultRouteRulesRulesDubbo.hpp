// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSWITHTAGRULESRESPONSEBODYDATARESULTROUTERULESRULESDUBBO_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSWITHTAGRULESRESPONSEBODYDATARESULTROUTERULESRULESDUBBO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubboArgumentItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(argumentItems, argumentItems_);
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(group, group_);
      DARABONBA_PTR_TO_JSON(methodName, methodName_);
      DARABONBA_PTR_TO_JSON(paramTypes, paramTypes_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(triggerPolicy, triggerPolicy_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(argumentItems, argumentItems_);
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(group, group_);
      DARABONBA_PTR_FROM_JSON(methodName, methodName_);
      DARABONBA_PTR_FROM_JSON(paramTypes, paramTypes_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(triggerPolicy, triggerPolicy_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo() = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo(const ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo &) = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo(ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo &&) = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo() = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo& operator=(const ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo &) = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo& operator=(ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->argumentItems_ == nullptr && return this->condition_ == nullptr && return this->group_ == nullptr && return this->methodName_ == nullptr && return this->paramTypes_ == nullptr
        && return this->serviceName_ == nullptr && return this->tags_ == nullptr && return this->triggerPolicy_ == nullptr && return this->version_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // argumentItems Field Functions 
    bool hasArgumentItems() const { return this->argumentItems_ != nullptr;};
    void deleteArgumentItems() { this->argumentItems_ = nullptr;};
    inline const vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubboArgumentItems> & argumentItems() const { DARABONBA_PTR_GET_CONST(argumentItems_, vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubboArgumentItems>) };
    inline vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubboArgumentItems> argumentItems() { DARABONBA_PTR_GET(argumentItems_, vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubboArgumentItems>) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo& setArgumentItems(const vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubboArgumentItems> & argumentItems) { DARABONBA_PTR_SET_VALUE(argumentItems_, argumentItems) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo& setArgumentItems(vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubboArgumentItems> && argumentItems) { DARABONBA_PTR_SET_RVALUE(argumentItems_, argumentItems) };


    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // methodName Field Functions 
    bool hasMethodName() const { return this->methodName_ != nullptr;};
    void deleteMethodName() { this->methodName_ = nullptr;};
    inline string methodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


    // paramTypes Field Functions 
    bool hasParamTypes() const { return this->paramTypes_ != nullptr;};
    void deleteParamTypes() { this->paramTypes_ = nullptr;};
    inline const vector<string> & paramTypes() const { DARABONBA_PTR_GET_CONST(paramTypes_, vector<string>) };
    inline vector<string> paramTypes() { DARABONBA_PTR_GET(paramTypes_, vector<string>) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo& setParamTypes(const vector<string> & paramTypes) { DARABONBA_PTR_SET_VALUE(paramTypes_, paramTypes) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo& setParamTypes(vector<string> && paramTypes) { DARABONBA_PTR_SET_RVALUE(paramTypes_, paramTypes) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // triggerPolicy Field Functions 
    bool hasTriggerPolicy() const { return this->triggerPolicy_ != nullptr;};
    void deleteTriggerPolicy() { this->triggerPolicy_ = nullptr;};
    inline string triggerPolicy() const { DARABONBA_PTR_GET_DEFAULT(triggerPolicy_, "") };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo& setTriggerPolicy(string triggerPolicy) { DARABONBA_PTR_SET_VALUE(triggerPolicy_, triggerPolicy) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubboArgumentItems>> argumentItems_ = nullptr;
    std::shared_ptr<string> condition_ = nullptr;
    std::shared_ptr<string> group_ = nullptr;
    std::shared_ptr<string> methodName_ = nullptr;
    std::shared_ptr<vector<string>> paramTypes_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
    std::shared_ptr<vector<string>> tags_ = nullptr;
    std::shared_ptr<string> triggerPolicy_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
