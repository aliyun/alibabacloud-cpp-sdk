// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGREYTAGROUTERESPONSEBODYDATARESULTDUBBORULESITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTGREYTAGROUTERESPONSEBODYDATARESULTDUBBORULESITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListGreyTagRouteResponseBodyDataResultDubboRulesItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGreyTagRouteResponseBodyDataResultDubboRulesItems& obj) { 
      DARABONBA_PTR_TO_JSON(cond, cond_);
      DARABONBA_PTR_TO_JSON(expr, expr_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListGreyTagRouteResponseBodyDataResultDubboRulesItems& obj) { 
      DARABONBA_PTR_FROM_JSON(cond, cond_);
      DARABONBA_PTR_FROM_JSON(expr, expr_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ListGreyTagRouteResponseBodyDataResultDubboRulesItems() = default ;
    ListGreyTagRouteResponseBodyDataResultDubboRulesItems(const ListGreyTagRouteResponseBodyDataResultDubboRulesItems &) = default ;
    ListGreyTagRouteResponseBodyDataResultDubboRulesItems(ListGreyTagRouteResponseBodyDataResultDubboRulesItems &&) = default ;
    ListGreyTagRouteResponseBodyDataResultDubboRulesItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGreyTagRouteResponseBodyDataResultDubboRulesItems() = default ;
    ListGreyTagRouteResponseBodyDataResultDubboRulesItems& operator=(const ListGreyTagRouteResponseBodyDataResultDubboRulesItems &) = default ;
    ListGreyTagRouteResponseBodyDataResultDubboRulesItems& operator=(ListGreyTagRouteResponseBodyDataResultDubboRulesItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cond_ == nullptr
        && return this->expr_ == nullptr && return this->index_ == nullptr && return this->name_ == nullptr && return this->operator_ == nullptr && return this->type_ == nullptr
        && return this->value_ == nullptr; };
    // cond Field Functions 
    bool hasCond() const { return this->cond_ != nullptr;};
    void deleteCond() { this->cond_ = nullptr;};
    inline string cond() const { DARABONBA_PTR_GET_DEFAULT(cond_, "") };
    inline ListGreyTagRouteResponseBodyDataResultDubboRulesItems& setCond(string cond) { DARABONBA_PTR_SET_VALUE(cond_, cond) };


    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string expr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline ListGreyTagRouteResponseBodyDataResultDubboRulesItems& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline ListGreyTagRouteResponseBodyDataResultDubboRulesItems& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGreyTagRouteResponseBodyDataResultDubboRulesItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ListGreyTagRouteResponseBodyDataResultDubboRulesItems& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListGreyTagRouteResponseBodyDataResultDubboRulesItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListGreyTagRouteResponseBodyDataResultDubboRulesItems& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The comparison operator. Valid values: **>**, **<**, **>=**, **<=**, **==**, and **! =**.
    std::shared_ptr<string> cond_ = nullptr;
    // The expression that is used to obtain the value of the parameter. The syntax of the expression must follow the standard of the SpEL. Valid values:
    // 
    // - **Empty**: obtains the value of the parameter.
    // - **.name**: obtains the name property of the parameter. This expression works the same way as args0.getName().
    // - **.isEnabled()**: obtains the enabled property of the parameter. This expression works the same way as args0.isEnabled().
    // - **[0]**: indicates that the value of the parameter is an array and obtains the first value of the array. This expression works the same way as args0[0]. This expression does not start with a period (.).
    // - **.get(0)**: indicates that the value of the parameter is a list and obtains the first value of the list. This expression works the same way as args0.get(0).
    // - **.get("key")**: indicates that the value of the parameter is a map and obtains the value of the key in the map. This expression works the same way as args0.get("key").  >  For more information about the expressions that are used to obtain parameter values, see  [Spring Expression Language (SpEL)](https://docs.spring.io/spring-integration/docs/current/reference/html/spel.html).
    std::shared_ptr<string> expr_ = nullptr;
    // The index of the parameter. The value 0 indicates the first parameter.
    std::shared_ptr<int32_t> index_ = nullptr;
    // This parameter is not returned for Dubbo services.
    std::shared_ptr<string> name_ = nullptr;
    // The operator. Valid values:
    // 
    // - **rawvalue**: direct comparison.
    // - **list**: whitelist.
    // - **mod**: mods 100.
    // - **deterministic_proportional_steaming_division**: percentage.
    std::shared_ptr<string> operator_ = nullptr;
    // This parameter is not returned for Dubbo services.
    std::shared_ptr<string> type_ = nullptr;
    // The value of the parameter. This value is compared with the value that is obtained based on the **expr** and **index** parameters.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
