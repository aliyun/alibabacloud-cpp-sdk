// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANERESPONSEBODYDATAENTRYRULES_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANERESPONSEBODYDATAENTRYRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateOrUpdateSwimmingLaneResponseBodyDataEntryRulesRestItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules& obj) { 
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(paths, paths_);
      DARABONBA_PTR_TO_JSON(restItems, restItems_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules& obj) { 
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(paths, paths_);
      DARABONBA_PTR_FROM_JSON(restItems, restItems_);
    };
    CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules() = default ;
    CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules(const CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules &) = default ;
    CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules(CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules &&) = default ;
    CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules() = default ;
    CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules& operator=(const CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules &) = default ;
    CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules& operator=(CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->condition_ != nullptr
        && this->path_ != nullptr && this->paths_ != nullptr && this->restItems_ != nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<string> & paths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
    inline vector<string> paths() { DARABONBA_PTR_GET(paths_, vector<string>) };
    inline CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // restItems Field Functions 
    bool hasRestItems() const { return this->restItems_ != nullptr;};
    void deleteRestItems() { this->restItems_ = nullptr;};
    inline const vector<Models::CreateOrUpdateSwimmingLaneResponseBodyDataEntryRulesRestItems> & restItems() const { DARABONBA_PTR_GET_CONST(restItems_, vector<Models::CreateOrUpdateSwimmingLaneResponseBodyDataEntryRulesRestItems>) };
    inline vector<Models::CreateOrUpdateSwimmingLaneResponseBodyDataEntryRulesRestItems> restItems() { DARABONBA_PTR_GET(restItems_, vector<Models::CreateOrUpdateSwimmingLaneResponseBodyDataEntryRulesRestItems>) };
    inline CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules& setRestItems(const vector<Models::CreateOrUpdateSwimmingLaneResponseBodyDataEntryRulesRestItems> & restItems) { DARABONBA_PTR_SET_VALUE(restItems_, restItems) };
    inline CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules& setRestItems(vector<Models::CreateOrUpdateSwimmingLaneResponseBodyDataEntryRulesRestItems> && restItems) { DARABONBA_PTR_SET_RVALUE(restItems_, restItems) };


  protected:
    std::shared_ptr<string> condition_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<vector<string>> paths_ = nullptr;
    std::shared_ptr<vector<Models::CreateOrUpdateSwimmingLaneResponseBodyDataEntryRulesRestItems>> restItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
