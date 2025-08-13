// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RULESVALUERULESSPRINGCLOUD_HPP_
#define ALIBABACLOUD_MODELS_RULESVALUERULESSPRINGCLOUD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RulesValueRulesSpringcloudRestItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class RulesValueRulesSpringcloud : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RulesValueRulesSpringcloud& obj) { 
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(restItems, restItems_);
      DARABONBA_PTR_TO_JSON(triggerPolicy, triggerPolicy_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(paths, paths_);
      DARABONBA_PTR_TO_JSON(path, path_);
    };
    friend void from_json(const Darabonba::Json& j, RulesValueRulesSpringcloud& obj) { 
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(restItems, restItems_);
      DARABONBA_PTR_FROM_JSON(triggerPolicy, triggerPolicy_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(paths, paths_);
      DARABONBA_PTR_FROM_JSON(path, path_);
    };
    RulesValueRulesSpringcloud() = default ;
    RulesValueRulesSpringcloud(const RulesValueRulesSpringcloud &) = default ;
    RulesValueRulesSpringcloud(RulesValueRulesSpringcloud &&) = default ;
    RulesValueRulesSpringcloud(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RulesValueRulesSpringcloud() = default ;
    RulesValueRulesSpringcloud& operator=(const RulesValueRulesSpringcloud &) = default ;
    RulesValueRulesSpringcloud& operator=(RulesValueRulesSpringcloud &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->condition_ != nullptr
        && this->restItems_ != nullptr && this->triggerPolicy_ != nullptr && this->enable_ != nullptr && this->appId_ != nullptr && this->priority_ != nullptr
        && this->tags_ != nullptr && this->paths_ != nullptr && this->path_ != nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline RulesValueRulesSpringcloud& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // restItems Field Functions 
    bool hasRestItems() const { return this->restItems_ != nullptr;};
    void deleteRestItems() { this->restItems_ = nullptr;};
    inline const vector<Models::RulesValueRulesSpringcloudRestItems> & restItems() const { DARABONBA_PTR_GET_CONST(restItems_, vector<Models::RulesValueRulesSpringcloudRestItems>) };
    inline vector<Models::RulesValueRulesSpringcloudRestItems> restItems() { DARABONBA_PTR_GET(restItems_, vector<Models::RulesValueRulesSpringcloudRestItems>) };
    inline RulesValueRulesSpringcloud& setRestItems(const vector<Models::RulesValueRulesSpringcloudRestItems> & restItems) { DARABONBA_PTR_SET_VALUE(restItems_, restItems) };
    inline RulesValueRulesSpringcloud& setRestItems(vector<Models::RulesValueRulesSpringcloudRestItems> && restItems) { DARABONBA_PTR_SET_RVALUE(restItems_, restItems) };


    // triggerPolicy Field Functions 
    bool hasTriggerPolicy() const { return this->triggerPolicy_ != nullptr;};
    void deleteTriggerPolicy() { this->triggerPolicy_ = nullptr;};
    inline string triggerPolicy() const { DARABONBA_PTR_GET_DEFAULT(triggerPolicy_, "") };
    inline RulesValueRulesSpringcloud& setTriggerPolicy(string triggerPolicy) { DARABONBA_PTR_SET_VALUE(triggerPolicy_, triggerPolicy) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline RulesValueRulesSpringcloud& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RulesValueRulesSpringcloud& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline RulesValueRulesSpringcloud& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline RulesValueRulesSpringcloud& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline RulesValueRulesSpringcloud& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<string> & paths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
    inline vector<string> paths() { DARABONBA_PTR_GET(paths_, vector<string>) };
    inline RulesValueRulesSpringcloud& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline RulesValueRulesSpringcloud& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline RulesValueRulesSpringcloud& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    std::shared_ptr<string> condition_ = nullptr;
    std::shared_ptr<vector<Models::RulesValueRulesSpringcloudRestItems>> restItems_ = nullptr;
    std::shared_ptr<string> triggerPolicy_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<vector<string>> tags_ = nullptr;
    std::shared_ptr<vector<string>> paths_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
