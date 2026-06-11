// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGSELECTOR_HPP_
#define ALIBABACLOUD_MODELS_TAGSELECTOR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TagCondition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class TagSelector : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagSelector& obj) { 
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(expression, expression_);
      DARABONBA_PTR_TO_JSON(relation, relation_);
    };
    friend void from_json(const Darabonba::Json& j, TagSelector& obj) { 
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(expression, expression_);
      DARABONBA_PTR_FROM_JSON(relation, relation_);
    };
    TagSelector() = default ;
    TagSelector(const TagSelector &) = default ;
    TagSelector(TagSelector &&) = default ;
    TagSelector(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagSelector() = default ;
    TagSelector& operator=(const TagSelector &) = default ;
    TagSelector& operator=(TagSelector &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && this->expression_ == nullptr && this->relation_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<TagCondition> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<TagCondition>) };
    inline vector<TagCondition> getConditions() { DARABONBA_PTR_GET(conditions_, vector<TagCondition>) };
    inline TagSelector& setConditions(const vector<TagCondition> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline TagSelector& setConditions(vector<TagCondition> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline TagSelector& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline TagSelector& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


  protected:
    shared_ptr<vector<TagCondition>> conditions_ {};
    shared_ptr<string> expression_ {};
    shared_ptr<string> relation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
