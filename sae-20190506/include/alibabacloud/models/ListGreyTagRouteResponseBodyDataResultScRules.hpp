// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGREYTAGROUTERESPONSEBODYDATARESULTSCRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTGREYTAGROUTERESPONSEBODYDATARESULTSCRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGreyTagRouteResponseBodyDataResultScRulesItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListGreyTagRouteResponseBodyDataResultScRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGreyTagRouteResponseBodyDataResultScRules& obj) { 
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(path, path_);
    };
    friend void from_json(const Darabonba::Json& j, ListGreyTagRouteResponseBodyDataResultScRules& obj) { 
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(path, path_);
    };
    ListGreyTagRouteResponseBodyDataResultScRules() = default ;
    ListGreyTagRouteResponseBodyDataResultScRules(const ListGreyTagRouteResponseBodyDataResultScRules &) = default ;
    ListGreyTagRouteResponseBodyDataResultScRules(ListGreyTagRouteResponseBodyDataResultScRules &&) = default ;
    ListGreyTagRouteResponseBodyDataResultScRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGreyTagRouteResponseBodyDataResultScRules() = default ;
    ListGreyTagRouteResponseBodyDataResultScRules& operator=(const ListGreyTagRouteResponseBodyDataResultScRules &) = default ;
    ListGreyTagRouteResponseBodyDataResultScRules& operator=(ListGreyTagRouteResponseBodyDataResultScRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && return this->items_ == nullptr && return this->path_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline ListGreyTagRouteResponseBodyDataResultScRules& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::ListGreyTagRouteResponseBodyDataResultScRulesItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::ListGreyTagRouteResponseBodyDataResultScRulesItems>) };
    inline vector<Models::ListGreyTagRouteResponseBodyDataResultScRulesItems> items() { DARABONBA_PTR_GET(items_, vector<Models::ListGreyTagRouteResponseBodyDataResultScRulesItems>) };
    inline ListGreyTagRouteResponseBodyDataResultScRules& setItems(const vector<Models::ListGreyTagRouteResponseBodyDataResultScRulesItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListGreyTagRouteResponseBodyDataResultScRules& setItems(vector<Models::ListGreyTagRouteResponseBodyDataResultScRulesItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListGreyTagRouteResponseBodyDataResultScRules& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The relationship between the conditions in the canary release rule. Valid values:
    // 
    // *   **AND**: The conditions are in the logical AND relation. All conditions must be met at the same time.
    // *   **OR**: The conditions are in the logical OR relation. At least one of the conditions must be met.
    std::shared_ptr<string> condition_ = nullptr;
    // The conditions.
    std::shared_ptr<vector<Models::ListGreyTagRouteResponseBodyDataResultScRulesItems>> items_ = nullptr;
    // The path of the canary release rule of the Spring Cloud application.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
