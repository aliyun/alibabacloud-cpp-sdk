// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGREYTAGROUTERESPONSEBODYDATASCRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGREYTAGROUTERESPONSEBODYDATASCRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGreyTagRouteResponseBodyDataScRulesItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeGreyTagRouteResponseBodyDataScRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGreyTagRouteResponseBodyDataScRules& obj) { 
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(path, path_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGreyTagRouteResponseBodyDataScRules& obj) { 
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(path, path_);
    };
    DescribeGreyTagRouteResponseBodyDataScRules() = default ;
    DescribeGreyTagRouteResponseBodyDataScRules(const DescribeGreyTagRouteResponseBodyDataScRules &) = default ;
    DescribeGreyTagRouteResponseBodyDataScRules(DescribeGreyTagRouteResponseBodyDataScRules &&) = default ;
    DescribeGreyTagRouteResponseBodyDataScRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGreyTagRouteResponseBodyDataScRules() = default ;
    DescribeGreyTagRouteResponseBodyDataScRules& operator=(const DescribeGreyTagRouteResponseBodyDataScRules &) = default ;
    DescribeGreyTagRouteResponseBodyDataScRules& operator=(DescribeGreyTagRouteResponseBodyDataScRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->condition_ != nullptr
        && this->items_ != nullptr && this->path_ != nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline DescribeGreyTagRouteResponseBodyDataScRules& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::DescribeGreyTagRouteResponseBodyDataScRulesItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::DescribeGreyTagRouteResponseBodyDataScRulesItems>) };
    inline vector<Models::DescribeGreyTagRouteResponseBodyDataScRulesItems> items() { DARABONBA_PTR_GET(items_, vector<Models::DescribeGreyTagRouteResponseBodyDataScRulesItems>) };
    inline DescribeGreyTagRouteResponseBodyDataScRules& setItems(const vector<Models::DescribeGreyTagRouteResponseBodyDataScRulesItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeGreyTagRouteResponseBodyDataScRules& setItems(vector<Models::DescribeGreyTagRouteResponseBodyDataScRulesItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeGreyTagRouteResponseBodyDataScRules& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The relationship between the conditions in the canary release rule. Valid values:
    // 
    // *   **AND**: The conditions are in the logical AND relation. All conditions must be met at the same time.
    // *   **OR**: The conditions are in the logical OR relation. At least one of the conditions must be met.
    std::shared_ptr<string> condition_ = nullptr;
    // The conditions.
    std::shared_ptr<vector<Models::DescribeGreyTagRouteResponseBodyDataScRulesItems>> items_ = nullptr;
    // The path of the canary release rule of the Spring Cloud application.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
