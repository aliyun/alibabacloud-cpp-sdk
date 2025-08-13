// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPERATORLISTRESPONSEBODYRESULTOBJECTOPERATORSRIGHTVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPERATORLISTRESPONSEBODYRESULTOBJECTOPERATORSRIGHTVARIABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeOperatorListResponseBodyResultObjectOperatorsRightVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOperatorListResponseBodyResultObjectOperatorsRightVariables& obj) { 
      DARABONBA_PTR_TO_JSON(fieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(fieldType, fieldType_);
      DARABONBA_PTR_TO_JSON(fieldValue, fieldValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOperatorListResponseBodyResultObjectOperatorsRightVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(fieldType, fieldType_);
      DARABONBA_PTR_FROM_JSON(fieldValue, fieldValue_);
    };
    DescribeOperatorListResponseBodyResultObjectOperatorsRightVariables() = default ;
    DescribeOperatorListResponseBodyResultObjectOperatorsRightVariables(const DescribeOperatorListResponseBodyResultObjectOperatorsRightVariables &) = default ;
    DescribeOperatorListResponseBodyResultObjectOperatorsRightVariables(DescribeOperatorListResponseBodyResultObjectOperatorsRightVariables &&) = default ;
    DescribeOperatorListResponseBodyResultObjectOperatorsRightVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOperatorListResponseBodyResultObjectOperatorsRightVariables() = default ;
    DescribeOperatorListResponseBodyResultObjectOperatorsRightVariables& operator=(const DescribeOperatorListResponseBodyResultObjectOperatorsRightVariables &) = default ;
    DescribeOperatorListResponseBodyResultObjectOperatorsRightVariables& operator=(DescribeOperatorListResponseBodyResultObjectOperatorsRightVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fieldName_ != nullptr
        && this->fieldType_ != nullptr && this->fieldValue_ != nullptr; };
    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DescribeOperatorListResponseBodyResultObjectOperatorsRightVariables& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string fieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline DescribeOperatorListResponseBodyResultObjectOperatorsRightVariables& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline DescribeOperatorListResponseBodyResultObjectOperatorsRightVariables& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


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
