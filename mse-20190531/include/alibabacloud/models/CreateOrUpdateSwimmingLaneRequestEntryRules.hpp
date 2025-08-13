// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEREQUESTENTRYRULES_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEREQUESTENTRYRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateOrUpdateSwimmingLaneRequestEntryRulesRestItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateOrUpdateSwimmingLaneRequestEntryRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSwimmingLaneRequestEntryRules& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RestItems, restItems_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSwimmingLaneRequestEntryRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RestItems, restItems_);
    };
    CreateOrUpdateSwimmingLaneRequestEntryRules() = default ;
    CreateOrUpdateSwimmingLaneRequestEntryRules(const CreateOrUpdateSwimmingLaneRequestEntryRules &) = default ;
    CreateOrUpdateSwimmingLaneRequestEntryRules(CreateOrUpdateSwimmingLaneRequestEntryRules &&) = default ;
    CreateOrUpdateSwimmingLaneRequestEntryRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSwimmingLaneRequestEntryRules() = default ;
    CreateOrUpdateSwimmingLaneRequestEntryRules& operator=(const CreateOrUpdateSwimmingLaneRequestEntryRules &) = default ;
    CreateOrUpdateSwimmingLaneRequestEntryRules& operator=(CreateOrUpdateSwimmingLaneRequestEntryRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->condition_ != nullptr
        && this->paths_ != nullptr && this->priority_ != nullptr && this->restItems_ != nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline CreateOrUpdateSwimmingLaneRequestEntryRules& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<string> & paths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
    inline vector<string> paths() { DARABONBA_PTR_GET(paths_, vector<string>) };
    inline CreateOrUpdateSwimmingLaneRequestEntryRules& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline CreateOrUpdateSwimmingLaneRequestEntryRules& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateOrUpdateSwimmingLaneRequestEntryRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // restItems Field Functions 
    bool hasRestItems() const { return this->restItems_ != nullptr;};
    void deleteRestItems() { this->restItems_ = nullptr;};
    inline const vector<Models::CreateOrUpdateSwimmingLaneRequestEntryRulesRestItems> & restItems() const { DARABONBA_PTR_GET_CONST(restItems_, vector<Models::CreateOrUpdateSwimmingLaneRequestEntryRulesRestItems>) };
    inline vector<Models::CreateOrUpdateSwimmingLaneRequestEntryRulesRestItems> restItems() { DARABONBA_PTR_GET(restItems_, vector<Models::CreateOrUpdateSwimmingLaneRequestEntryRulesRestItems>) };
    inline CreateOrUpdateSwimmingLaneRequestEntryRules& setRestItems(const vector<Models::CreateOrUpdateSwimmingLaneRequestEntryRulesRestItems> & restItems) { DARABONBA_PTR_SET_VALUE(restItems_, restItems) };
    inline CreateOrUpdateSwimmingLaneRequestEntryRules& setRestItems(vector<Models::CreateOrUpdateSwimmingLaneRequestEntryRulesRestItems> && restItems) { DARABONBA_PTR_SET_RVALUE(restItems_, restItems) };


  protected:
    std::shared_ptr<string> condition_ = nullptr;
    std::shared_ptr<vector<string>> paths_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<vector<Models::CreateOrUpdateSwimmingLaneRequestEntryRulesRestItems>> restItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
