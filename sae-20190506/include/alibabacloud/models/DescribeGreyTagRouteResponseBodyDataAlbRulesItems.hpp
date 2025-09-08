// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGREYTAGROUTERESPONSEBODYDATAALBRULESITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGREYTAGROUTERESPONSEBODYDATAALBRULESITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeGreyTagRouteResponseBodyDataAlbRulesItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGreyTagRouteResponseBodyDataAlbRulesItems& obj) { 
      DARABONBA_PTR_TO_JSON(cond, cond_);
      DARABONBA_PTR_TO_JSON(expr, expr_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGreyTagRouteResponseBodyDataAlbRulesItems& obj) { 
      DARABONBA_PTR_FROM_JSON(cond, cond_);
      DARABONBA_PTR_FROM_JSON(expr, expr_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    DescribeGreyTagRouteResponseBodyDataAlbRulesItems() = default ;
    DescribeGreyTagRouteResponseBodyDataAlbRulesItems(const DescribeGreyTagRouteResponseBodyDataAlbRulesItems &) = default ;
    DescribeGreyTagRouteResponseBodyDataAlbRulesItems(DescribeGreyTagRouteResponseBodyDataAlbRulesItems &&) = default ;
    DescribeGreyTagRouteResponseBodyDataAlbRulesItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGreyTagRouteResponseBodyDataAlbRulesItems() = default ;
    DescribeGreyTagRouteResponseBodyDataAlbRulesItems& operator=(const DescribeGreyTagRouteResponseBodyDataAlbRulesItems &) = default ;
    DescribeGreyTagRouteResponseBodyDataAlbRulesItems& operator=(DescribeGreyTagRouteResponseBodyDataAlbRulesItems &&) = default ;
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
    inline DescribeGreyTagRouteResponseBodyDataAlbRulesItems& setCond(string cond) { DARABONBA_PTR_SET_VALUE(cond_, cond) };


    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string expr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline DescribeGreyTagRouteResponseBodyDataAlbRulesItems& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline DescribeGreyTagRouteResponseBodyDataAlbRulesItems& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeGreyTagRouteResponseBodyDataAlbRulesItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DescribeGreyTagRouteResponseBodyDataAlbRulesItems& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeGreyTagRouteResponseBodyDataAlbRulesItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeGreyTagRouteResponseBodyDataAlbRulesItems& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Valid value: ==.
    std::shared_ptr<string> cond_ = nullptr;
    // This parameter is not returned for applications that are associated with ALB instances.
    std::shared_ptr<string> expr_ = nullptr;
    // This parameter is not returned for applications that are associated with Application Load Balancer (ALB) instances.
    std::shared_ptr<int32_t> index_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> name_ = nullptr;
    // The operator. Valid value: **rawvalue**. This value indicates direct comparison.
    std::shared_ptr<string> operator_ = nullptr;
    // The type of the comparison. Valid values:
    // 
    // *   **sourceIp**: SourceIp
    // *   **cookie**: cookie
    // *   **header**: header
    std::shared_ptr<string> type_ = nullptr;
    // The value of the parameter. This value is compared with the value that is obtained based on the type and name parameters.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
