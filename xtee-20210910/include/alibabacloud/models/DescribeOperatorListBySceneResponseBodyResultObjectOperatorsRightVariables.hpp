// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPERATORLISTBYSCENERESPONSEBODYRESULTOBJECTOPERATORSRIGHTVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPERATORLISTBYSCENERESPONSEBODYRESULTOBJECTOPERATORSRIGHTVARIABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables& obj) { 
      DARABONBA_PTR_TO_JSON(fieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(fieldType, fieldType_);
      DARABONBA_PTR_TO_JSON(fieldValue, fieldValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(fieldType, fieldType_);
      DARABONBA_PTR_FROM_JSON(fieldValue, fieldValue_);
    };
    DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables() = default ;
    DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables(const DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables &) = default ;
    DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables(DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables &&) = default ;
    DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables() = default ;
    DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables& operator=(const DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables &) = default ;
    DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables& operator=(DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldName_ == nullptr
        && return this->fieldType_ == nullptr && return this->fieldValue_ == nullptr; };
    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string fieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


  protected:
    // Field name.
    std::shared_ptr<string> fieldName_ = nullptr;
    // Field type.
    std::shared_ptr<string> fieldType_ = nullptr;
    // Field value.
    std::shared_ptr<string> fieldValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
