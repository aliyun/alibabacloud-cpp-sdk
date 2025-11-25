// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDASSETMATCHOPERATORSRESPONSEBODYMATCHTYPEOPERATORSMATCHOPERATORS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDASSETMATCHOPERATORSRESPONSEBODYMATCHTYPEOPERATORSMATCHOPERATORS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators& obj) { 
      DARABONBA_PTR_TO_JSON(InputPattern, inputPattern_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators& obj) { 
      DARABONBA_PTR_FROM_JSON(InputPattern, inputPattern_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators() = default ;
    ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators(const ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators &) = default ;
    ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators(ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators &&) = default ;
    ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators() = default ;
    ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators& operator=(const ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators &) = default ;
    ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators& operator=(ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputPattern_ == nullptr
        && return this->name_ == nullptr && return this->showName_ == nullptr && return this->value_ == nullptr; };
    // inputPattern Field Functions 
    bool hasInputPattern() const { return this->inputPattern_ != nullptr;};
    void deleteInputPattern() { this->inputPattern_ = nullptr;};
    inline string inputPattern() const { DARABONBA_PTR_GET_DEFAULT(inputPattern_, "") };
    inline ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators& setInputPattern(string inputPattern) { DARABONBA_PTR_SET_VALUE(inputPattern_, inputPattern) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperatorsMatchOperators& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Operation data types. Values: 
    // - LIST type: 
    // 1. For Name as LIST_CONTAINS, the value is: LIST 
    // 2. For Name as LIST_LENGTH_GT, the value is: PRIMITIVE 
    // 3. For Name as LIST_LENGTH_LT, the value is: PRIMITIVE 
    // 4. For Name as LIST_NOT_CONTAINS, the value is: LIST
    // - STRING type: 
    // 1. For Name as STRING_NOT_IN, the value is: LIST 
    // 2. For Name as STRING_EQ, the value is: PRIMITIVE 
    // 3. For Name as STRING_IN, the value is: LIST 
    // 4. For Name as STRING_NOT_EQ, the value is: PRIMITIVE
    // - BOOLEAN type: 
    // 1. For Name as BOOLEAN_NOT_IN, the value is: LIST 
    // 2. For Name as BOOLEAN_EQ, the value is: PRIMITIVE 
    // 3. For Name as BOOLEAN_IN, the value is: LIST 
    // 4. For Name as BOOLEAN_NOT_EQ, the value is: PRIMITIVE
    // - FLOAT type: 
    // 1. For Name as FLOAT_NOT_IN, the value is: LIST 
    // 2. For Name as FLOAT_EQ, the value is: PRIMITIVE 
    // 3. For Name as FLOAT_IN, the value is: LIST 
    // 4. For Name as FLOAT_NOT_EQ, the value is: PRIMITIVE 
    // 5. For Name as FLOAT_GT, the value is: PRIMITIVE 
    // 6. For Name as FLOAT_GTE, the value is: PRIMITIVE 
    // 7. For Name as FLOAT_LT, the value is: PRIMITIVE 
    // 8. For Name as FLOAT_LTE, the value is: PRIMITIVE
    // - DOUBLE type: 
    // 1. For Name as DOUBLE_NOT_IN, the value is: LIST 
    // 2. For Name as DOUBLE_EQ, the value is: PRIMITIVE 
    // 3. For Name as DOUBLE_IN, the value is: LIST 
    // 4. For Name as DOUBLE_NOT_EQ, the value is: PRIMITIVE 
    // 5. For Name as DOUBLE_GT, the value is: PRIMITIVE 
    // 6. For Name as DOUBLE_GTE, the value is: PRIMITIVE 
    // 7. For Name as DOUBLE_LT, the value is: PRIMITIVE 8. For Name as DOUBLE_LTE, the value is: PRIMITIVE
    // - INTEGER type: 
    // 1. For Name as INTEGER_NOT_IN, the value is: LIST 
    // 2. For Name as INTEGER_EQ, the value is: PRIMITIVE 
    // 3. For Name as INTEGER_IN, the value is: LIST 
    // 4. For Name as INTEGER_NOT_EQ, the value is: PRIMITIVE 
    // 5. For Name as INTEGER_GT, the value is: PRIMITIVE 
    // 6. For Name as INTEGER_GTE, the value is: PRIMITIVE 
    // 7. For Name as INTEGER_LT, the value is: PRIMITIVE 
    // 8. For Name as INTEGER_LTE, the value is: PRIMITIVE
    // - LONG type: 
    // 1. For Name as LONG_NOT_IN, the value is: LIST 
    // 2. For Name as LONG_EQ, the value is: PRIMITIVE 
    // 3. For Name as LONG_IN, the value is: LIST 
    // 4. For Name as LONG_NOT_EQ, the value is: PRIMITIVE 
    // 5. For Name as LONG_GT, the value is: PRIMITIVE 
    // 6. For Name as LONG_GTE, the value is: PRIMITIVE 
    // 7. For Name as LONG_LT, the value is: PRIMITIVE 
    // 8. For Name as LONG_LTE, the value is: PRIMITIVE
    // - INTEGER type (repeated): 
    // 1. For Name as INTEGER_NOT_IN, the value is: LIST 
    // 2. For Name as INTEGER_EQ, the value is: PRIMITIVE 
    // 3. For Name as INTEGER_IN, the value is: LIST 
    // 4. For Name as INTEGER_NOT_EQ, the value is: PRIMITIVE 
    // 5. For Name as INTEGER_GT, the value is: PRIMITIVE 
    // 6. For Name as INTEGER_GTE, the value is: PRIMITIVE 
    // 7. For Name as INTEGER_LT, the value is: PRIMITIVE 
    // 8. For Name as INTEGER_LTE, the value is: PRIMITIVE
    std::shared_ptr<string> inputPattern_ = nullptr;
    // Unique name of the operator. Values: - LIST type: 
    // 1. LIST_CONTAINS: contains 
    // 2. LIST_LENGTH_GT: length greater than 
    // 3. LIST_LENGTH_LT: length less than 
    // 4. LIST_NOT_CONTAINS: does not contain
    // - STRING type: 
    // 1. STRING_NOT_IN: not in list 
    // 2. STRING_EQ: equals 
    // 3. STRING_IN: in list 
    // 4. STRING_NOT_EQ: not equal
    // - BOOLEAN type: 
    // 1. BOOLEAN_NOT_IN: not in list 
    // 2. BOOLEAN_EQ: equals 
    // 3. BOOLEAN_IN: in list 
    // 4. BOOLEAN_NOT_EQ: not equal
    // - FLOAT type: 1. FLOAT_NOT_IN: not in list 
    // 2. FLOAT_EQ: equals 3. FLOAT_IN: in list 
    // 4. FLOAT_NOT_EQ: not equal 
    // 5. FLOAT_GT: greater than 
    // 6. FLOAT_GTE: greater than or equal to 
    // 7. FLOAT_LT: less than 
    // 8. FLOAT_LTE: less than or equal to
    // - DOUBLE type: 
    // 1. DOUBLE_NOT_IN: not in list 
    // 2. DOUBLE_EQ: equals 
    // 3. DOUBLE_IN: in list 
    // 4. DOUBLE_NOT_EQ: not equal 
    // 5. DOUBLE_GT: greater than 
    // 6. DOUBLE_GTE: greater than or equal to 7
    // . DOUBLE_LT: less than 
    // 8. DOUBLE_LTE: less than or equal to
    // - INTEGER type: 
    // 1. INTEGER_NOT_IN: not in list 
    // 2. INTEGER_EQ: equals 
    // 3. INTEGER_IN: in list 
    // 4. INTEGER_NOT_EQ: not equal 
    // 5. INTEGER_GT: greater than 
    // 6. INTEGER_GTE: greater than or equal to 
    // 7. INTEGER_LT: less than 
    // 8. INTEGER_LTE: less than or equal to
    // - LONG type: 
    // 1. LONG_NOT_IN: not in list 
    // 2. LONG_EQ: equals 
    // 3. LONG_IN: in list 
    // 4. LONG_NOT_EQ: not equal 
    // 5. LONG_GT: greater than 
    // 6. LONG_GTE: greater than or equal to 
    // 7. LONG_LT: less than 
    // 8. LONG_LTE: less than or equal to<details>
    std::shared_ptr<string> name_ = nullptr;
    // Operator display name. Values: - For LIST type: 
    // 1. Contains: includes 
    // 2. SizeGreaterThan: size greater than 
    // 3. SizeLessThan: size less than 
    // 4. NotContains: does not include
    // - For STRING type: 
    // 1. NotIn: not in the list 
    // 2. Equals: equals 
    // 3. In: in the list 
    // 4. NotEquals: does not equal
    // - For BOOLEAN type: 
    // 1. NotIn: not in the list 
    // 2. Equals: equals 
    // 3. In: in the list 
    // 4. NotEquals: does not equal
    // - For FLOAT type: 
    // 1. NotIn: not in the list 
    // 2. Equals: equals 
    // 3. In: in the list 
    // 4. NotEquals: does not equal 
    // 5. >: greater than 
    // 6. >=: greater than or equal to 
    // 7. <: less than 
    // 8. <=: less than or equal to
    // - For DOUBLE type: 
    // 1. NotIn: not in the list 
    // 2. Equals: equals 
    // 3. In: in the list 
    // 4. NotEquals: does not equal 
    // 5. >: greater than 
    // 6. >=: greater than or equal to 
    // 7. <: less than 
    // 8. <=: less than or equal to (Note: There seems to be a repetition here, likely meant to be \\"<=\\" for \\"less than or equal to\\")
    // - For INTEGER type: 
    // 1. NotIn: not in the list 
    // 2. Equals: equals 
    // 3. In: in the list 
    // 4. NotEquals: does not equal 
    // 5. >: greater than 
    // 6. >=: greater than or equal to 
    // 7. <: less than 
    // 8. <=: less than or equal to
    // - For LONG type: 
    // 1. NotIn: not in the list 
    // 2. Equals: equals 
    // 3. In: in the list 
    // 4. NotEquals: does not equal 
    // 5. >: greater than 
    // 6. >=: greater than or equal to 
    // 7. <: less than 
    // 8. <=: less than or equal to
    // - For INTEGER type (repeated): 
    // 1. NotIn: not in the list 
    // 2. Equals: equals 
    // 3. In: in the list 
    // 4. NotEquals: does not equal 
    // 5. >: greater than 
    // 6. >=: greater than or equal to 
    // 7. <: less than 
    // 8. <=: less than or equal to
    std::shared_ptr<string> showName_ = nullptr;
    // Operator value. Options: - For LIST type: 
    // 1. CONTAINS: contains 
    // 2. LENGTH_GT: length greater than 
    // 3. LENGTH_LT: length less than 
    // 4. NOT_CONTAINS: does not contain
    // - For STRING type: 
    // 1. NOT_IN: not in the list 
    // 2. EQ: equals 
    // 3. IN: in the list 
    // 4. NOT_EQ: does not equal
    // - For BOOLEAN type: 
    // 1. NOT_IN: not in the list 
    // 2. EQ: equals 
    // 3. IN: in the list 
    // 4. NOT_EQ: does not equal
    // - For FLOAT type: 
    // 1. NOT_IN: not in the list 
    // 2. EQ: equals 
    // 3. IN: in the list 
    // 4. NOT_EQ: does not equal 
    // 5. GT: greater than 
    // 6. GTE: greater than or equal to 
    // 7. LT: less than 
    // 8. LTE: less than or equal to
    // - For DOUBLE type: 
    // 1. NOT_IN: not in the list 
    // 2. EQ: equals 
    // 3. IN: in the list 
    // 4. NOT_EQ: does not equal 
    // 5. GT: greater than 
    // 6. GTE: greater than or equal to 
    // 7. LT: less than 
    // 8. LTE: less than or equal to
    // - For INTEGER type: 
    // 1. NOT_IN: not in the list 
    // 2. EQ: equals 
    // 3. IN: in the list 
    // 4. NOT_EQ: does not equal 
    // 5. GT: greater than 
    // 6. GTE: greater than or equal to 
    // 7. LT: less than 
    // 8. LTE: less than or equal to
    // - For LONG type: 
    // 1. NOT_IN: not in the list 
    // 2. EQ: equals 
    // 3. IN: in the list 
    // 4. NOT_EQ: does not equal 
    // 5. GT: greater than 
    // 6. GTE: greater than or equal to 
    // 7. LT: less than 
    // 8. LTE: less than or equal to
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
