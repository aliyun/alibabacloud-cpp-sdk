// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTPROCESSEXPRESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TESTPROCESSEXPRESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class TestProcessExpressionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestProcessExpressionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, TestProcessExpressionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    TestProcessExpressionRequest() = default ;
    TestProcessExpressionRequest(const TestProcessExpressionRequest &) = default ;
    TestProcessExpressionRequest(TestProcessExpressionRequest &&) = default ;
    TestProcessExpressionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestProcessExpressionRequest() = default ;
    TestProcessExpressionRequest& operator=(const TestProcessExpressionRequest &) = default ;
    TestProcessExpressionRequest& operator=(TestProcessExpressionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expression_ == nullptr
        && this->params_ == nullptr; };
    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline TestProcessExpressionRequest& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline TestProcessExpressionRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


  protected:
    // Expression.
    shared_ptr<string> expression_ {};
    // Parameter list.
    shared_ptr<string> params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
