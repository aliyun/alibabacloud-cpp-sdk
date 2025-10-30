// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPERATORLISTBYSCENERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPERATORLISTBYSCENERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOperatorListBySceneResponseBodyResultObjectOperators.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeOperatorListBySceneResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOperatorListBySceneResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(fieldType, fieldType_);
      DARABONBA_PTR_TO_JSON(operators, operators_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOperatorListBySceneResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldType, fieldType_);
      DARABONBA_PTR_FROM_JSON(operators, operators_);
    };
    DescribeOperatorListBySceneResponseBodyResultObject() = default ;
    DescribeOperatorListBySceneResponseBodyResultObject(const DescribeOperatorListBySceneResponseBodyResultObject &) = default ;
    DescribeOperatorListBySceneResponseBodyResultObject(DescribeOperatorListBySceneResponseBodyResultObject &&) = default ;
    DescribeOperatorListBySceneResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOperatorListBySceneResponseBodyResultObject() = default ;
    DescribeOperatorListBySceneResponseBodyResultObject& operator=(const DescribeOperatorListBySceneResponseBodyResultObject &) = default ;
    DescribeOperatorListBySceneResponseBodyResultObject& operator=(DescribeOperatorListBySceneResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldType_ == nullptr
        && return this->operators_ == nullptr; };
    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string fieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline DescribeOperatorListBySceneResponseBodyResultObject& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // operators Field Functions 
    bool hasOperators() const { return this->operators_ != nullptr;};
    void deleteOperators() { this->operators_ = nullptr;};
    inline const vector<Models::DescribeOperatorListBySceneResponseBodyResultObjectOperators> & operators() const { DARABONBA_PTR_GET_CONST(operators_, vector<Models::DescribeOperatorListBySceneResponseBodyResultObjectOperators>) };
    inline vector<Models::DescribeOperatorListBySceneResponseBodyResultObjectOperators> operators() { DARABONBA_PTR_GET(operators_, vector<Models::DescribeOperatorListBySceneResponseBodyResultObjectOperators>) };
    inline DescribeOperatorListBySceneResponseBodyResultObject& setOperators(const vector<Models::DescribeOperatorListBySceneResponseBodyResultObjectOperators> & operators) { DARABONBA_PTR_SET_VALUE(operators_, operators) };
    inline DescribeOperatorListBySceneResponseBodyResultObject& setOperators(vector<Models::DescribeOperatorListBySceneResponseBodyResultObjectOperators> && operators) { DARABONBA_PTR_SET_RVALUE(operators_, operators) };


  protected:
    // Return value type
    std::shared_ptr<string> fieldType_ = nullptr;
    // Operator list
    std::shared_ptr<vector<Models::DescribeOperatorListBySceneResponseBodyResultObjectOperators>> operators_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
