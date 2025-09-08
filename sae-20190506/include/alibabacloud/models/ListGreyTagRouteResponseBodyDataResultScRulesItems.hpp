// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGREYTAGROUTERESPONSEBODYDATARESULTSCRULESITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTGREYTAGROUTERESPONSEBODYDATARESULTSCRULESITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListGreyTagRouteResponseBodyDataResultScRulesItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGreyTagRouteResponseBodyDataResultScRulesItems& obj) { 
      DARABONBA_PTR_TO_JSON(cond, cond_);
      DARABONBA_PTR_TO_JSON(expr, expr_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListGreyTagRouteResponseBodyDataResultScRulesItems& obj) { 
      DARABONBA_PTR_FROM_JSON(cond, cond_);
      DARABONBA_PTR_FROM_JSON(expr, expr_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ListGreyTagRouteResponseBodyDataResultScRulesItems() = default ;
    ListGreyTagRouteResponseBodyDataResultScRulesItems(const ListGreyTagRouteResponseBodyDataResultScRulesItems &) = default ;
    ListGreyTagRouteResponseBodyDataResultScRulesItems(ListGreyTagRouteResponseBodyDataResultScRulesItems &&) = default ;
    ListGreyTagRouteResponseBodyDataResultScRulesItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGreyTagRouteResponseBodyDataResultScRulesItems() = default ;
    ListGreyTagRouteResponseBodyDataResultScRulesItems& operator=(const ListGreyTagRouteResponseBodyDataResultScRulesItems &) = default ;
    ListGreyTagRouteResponseBodyDataResultScRulesItems& operator=(ListGreyTagRouteResponseBodyDataResultScRulesItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cond_ != nullptr
        && this->expr_ != nullptr && this->index_ != nullptr && this->name_ != nullptr && this->operator_ != nullptr && this->type_ != nullptr
        && this->value_ != nullptr; };
    // cond Field Functions 
    bool hasCond() const { return this->cond_ != nullptr;};
    void deleteCond() { this->cond_ = nullptr;};
    inline string cond() const { DARABONBA_PTR_GET_DEFAULT(cond_, "") };
    inline ListGreyTagRouteResponseBodyDataResultScRulesItems& setCond(string cond) { DARABONBA_PTR_SET_VALUE(cond_, cond) };


    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string expr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline ListGreyTagRouteResponseBodyDataResultScRulesItems& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline ListGreyTagRouteResponseBodyDataResultScRulesItems& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGreyTagRouteResponseBodyDataResultScRulesItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ListGreyTagRouteResponseBodyDataResultScRulesItems& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListGreyTagRouteResponseBodyDataResultScRulesItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListGreyTagRouteResponseBodyDataResultScRulesItems& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The comparison operator. Valid values: **>**, **<**, **>=**, **<=**, **==**, and **! =**.
    std::shared_ptr<string> cond_ = nullptr;
    // This parameter is not returned for Spring Cloud applications.
    std::shared_ptr<string> expr_ = nullptr;
    // This parameter is not returned for Spring Cloud applications.
    std::shared_ptr<int32_t> index_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> name_ = nullptr;
    // The operator. Valid values:
    // 
    // *   **rawvalue**: direct comparison.
    // *   **list**: whitelist.
    // *   **mod**: mods 100.
    // *   **deterministic_proportional_steaming_division**: percentage.
    std::shared_ptr<string> operator_ = nullptr;
    // The type of the comparison. Valid values:
    // 
    // *   **param**: parameter
    // *   **cookie**: cookie
    // *   **header**: header
    std::shared_ptr<string> type_ = nullptr;
    // The value of the parameter. This value is compared with the value that is obtained based on the **type** and **name** parameters.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
