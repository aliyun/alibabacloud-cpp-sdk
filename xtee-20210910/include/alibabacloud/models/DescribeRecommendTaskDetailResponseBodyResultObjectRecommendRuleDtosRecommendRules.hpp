// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDTASKDETAILRESPONSEBODYRESULTOBJECTRECOMMENDRULEDTOSRECOMMENDRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDTASKDETAILRESPONSEBODYRESULTOBJECTRECOMMENDRULEDTOSRECOMMENDRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules& obj) { 
      DARABONBA_PTR_TO_JSON(left, left_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(right, right_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules& obj) { 
      DARABONBA_PTR_FROM_JSON(left, left_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(right, right_);
    };
    DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules() = default ;
    DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules(const DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules &) = default ;
    DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules(DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules &&) = default ;
    DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules() = default ;
    DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules& operator=(const DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules &) = default ;
    DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules& operator=(DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->left_ != nullptr
        && this->operator_ != nullptr && this->right_ != nullptr; };
    // left Field Functions 
    bool hasLeft() const { return this->left_ != nullptr;};
    void deleteLeft() { this->left_ = nullptr;};
    inline string left() const { DARABONBA_PTR_GET_DEFAULT(left_, "") };
    inline DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules& setLeft(string left) { DARABONBA_PTR_SET_VALUE(left_, left) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // right Field Functions 
    bool hasRight() const { return this->right_ != nullptr;};
    void deleteRight() { this->right_ = nullptr;};
    inline string right() const { DARABONBA_PTR_GET_DEFAULT(right_, "") };
    inline DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules& setRight(string right) { DARABONBA_PTR_SET_VALUE(right_, right) };


  protected:
    // Left variable
    std::shared_ptr<string> left_ = nullptr;
    // Operator
    std::shared_ptr<string> operator_ = nullptr;
    // Right variable
    std::shared_ptr<string> right_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
