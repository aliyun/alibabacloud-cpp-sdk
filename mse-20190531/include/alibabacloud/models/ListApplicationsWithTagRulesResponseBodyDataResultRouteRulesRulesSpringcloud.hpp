// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSWITHTAGRULESRESPONSEBODYDATARESULTROUTERULESRULESSPRINGCLOUD_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSWITHTAGRULESRESPONSEBODYDATARESULTROUTERULESRULESSPRINGCLOUD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloudRestItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(paths, paths_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(restItems, restItems_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(triggerPolicy, triggerPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(paths, paths_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(restItems, restItems_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(triggerPolicy, triggerPolicy_);
    };
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud() = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud(const ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud &) = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud(ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud &&) = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud() = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud& operator=(const ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud &) = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud& operator=(ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->condition_ != nullptr && this->enable_ != nullptr && this->path_ != nullptr && this->paths_ != nullptr && this->priority_ != nullptr
        && this->restItems_ != nullptr && this->tags_ != nullptr && this->triggerPolicy_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<string> & paths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
    inline vector<string> paths() { DARABONBA_PTR_GET(paths_, vector<string>) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // restItems Field Functions 
    bool hasRestItems() const { return this->restItems_ != nullptr;};
    void deleteRestItems() { this->restItems_ = nullptr;};
    inline const vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloudRestItems> & restItems() const { DARABONBA_PTR_GET_CONST(restItems_, vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloudRestItems>) };
    inline vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloudRestItems> restItems() { DARABONBA_PTR_GET(restItems_, vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloudRestItems>) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud& setRestItems(const vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloudRestItems> & restItems) { DARABONBA_PTR_SET_VALUE(restItems_, restItems) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud& setRestItems(vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloudRestItems> && restItems) { DARABONBA_PTR_SET_RVALUE(restItems_, restItems) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // triggerPolicy Field Functions 
    bool hasTriggerPolicy() const { return this->triggerPolicy_ != nullptr;};
    void deleteTriggerPolicy() { this->triggerPolicy_ = nullptr;};
    inline string triggerPolicy() const { DARABONBA_PTR_GET_DEFAULT(triggerPolicy_, "") };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud& setTriggerPolicy(string triggerPolicy) { DARABONBA_PTR_SET_VALUE(triggerPolicy_, triggerPolicy) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> condition_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<vector<string>> paths_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloudRestItems>> restItems_ = nullptr;
    std::shared_ptr<vector<string>> tags_ = nullptr;
    std::shared_ptr<string> triggerPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
