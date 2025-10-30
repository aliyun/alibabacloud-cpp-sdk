// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLELISTRESPONSEBODYRESULTOBJECTEXPRESSIONVARIABLESVARIABLEVELOCITY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLELISTRESPONSEBODYRESULTOBJECTEXPRESSIONVARIABLESVARIABLEVELOCITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventVariableListResponseBodyResultObjectExpressionVariablesVariableVelocity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventVariableListResponseBodyResultObjectExpressionVariablesVariableVelocity& obj) { 
      DARABONBA_PTR_TO_JSON(iv, iv_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventVariableListResponseBodyResultObjectExpressionVariablesVariableVelocity& obj) { 
      DARABONBA_PTR_FROM_JSON(iv, iv_);
    };
    DescribeEventVariableListResponseBodyResultObjectExpressionVariablesVariableVelocity() = default ;
    DescribeEventVariableListResponseBodyResultObjectExpressionVariablesVariableVelocity(const DescribeEventVariableListResponseBodyResultObjectExpressionVariablesVariableVelocity &) = default ;
    DescribeEventVariableListResponseBodyResultObjectExpressionVariablesVariableVelocity(DescribeEventVariableListResponseBodyResultObjectExpressionVariablesVariableVelocity &&) = default ;
    DescribeEventVariableListResponseBodyResultObjectExpressionVariablesVariableVelocity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventVariableListResponseBodyResultObjectExpressionVariablesVariableVelocity() = default ;
    DescribeEventVariableListResponseBodyResultObjectExpressionVariablesVariableVelocity& operator=(const DescribeEventVariableListResponseBodyResultObjectExpressionVariablesVariableVelocity &) = default ;
    DescribeEventVariableListResponseBodyResultObjectExpressionVariablesVariableVelocity& operator=(DescribeEventVariableListResponseBodyResultObjectExpressionVariablesVariableVelocity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->iv_ == nullptr; };
    // iv Field Functions 
    bool hasIv() const { return this->iv_ != nullptr;};
    void deleteIv() { this->iv_ = nullptr;};
    inline string iv() const { DARABONBA_PTR_GET_DEFAULT(iv_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectExpressionVariablesVariableVelocity& setIv(string iv) { DARABONBA_PTR_SET_VALUE(iv_, iv) };


  protected:
    // The IV value. This field is not returned for this type of variable.
    std::shared_ptr<string> iv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
