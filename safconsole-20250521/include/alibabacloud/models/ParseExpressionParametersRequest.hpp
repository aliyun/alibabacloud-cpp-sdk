// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARSEEXPRESSIONPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PARSEEXPRESSIONPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class ParseExpressionParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ParseExpressionParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Expression, expression_);
    };
    friend void from_json(const Darabonba::Json& j, ParseExpressionParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
    };
    ParseExpressionParametersRequest() = default ;
    ParseExpressionParametersRequest(const ParseExpressionParametersRequest &) = default ;
    ParseExpressionParametersRequest(ParseExpressionParametersRequest &&) = default ;
    ParseExpressionParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ParseExpressionParametersRequest() = default ;
    ParseExpressionParametersRequest& operator=(const ParseExpressionParametersRequest &) = default ;
    ParseExpressionParametersRequest& operator=(ParseExpressionParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expression_ == nullptr; };
    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline ParseExpressionParametersRequest& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


  protected:
    shared_ptr<string> expression_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
