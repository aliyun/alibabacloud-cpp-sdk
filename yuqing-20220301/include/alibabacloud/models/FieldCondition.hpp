// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIELDCONDITION_HPP_
#define ALIBABACLOUD_MODELS_FIELDCONDITION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
namespace Models
{
  class FieldCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FieldCondition& obj) { 
      DARABONBA_PTR_TO_JSON(fieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(nestFieldPath, nestFieldPath_);
      DARABONBA_PTR_TO_JSON(nestFieldValue, nestFieldValue_);
      DARABONBA_PTR_TO_JSON(operateType, operateType_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, FieldCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(nestFieldPath, nestFieldPath_);
      DARABONBA_PTR_FROM_JSON(nestFieldValue, nestFieldValue_);
      DARABONBA_PTR_FROM_JSON(operateType, operateType_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    FieldCondition() = default ;
    FieldCondition(const FieldCondition &) = default ;
    FieldCondition(FieldCondition &&) = default ;
    FieldCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FieldCondition() = default ;
    FieldCondition& operator=(const FieldCondition &) = default ;
    FieldCondition& operator=(FieldCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldName_ == nullptr
        && return this->nestFieldPath_ == nullptr && return this->nestFieldValue_ == nullptr && return this->operateType_ == nullptr && return this->value_ == nullptr; };
    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline FieldCondition& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // nestFieldPath Field Functions 
    bool hasNestFieldPath() const { return this->nestFieldPath_ != nullptr;};
    void deleteNestFieldPath() { this->nestFieldPath_ = nullptr;};
    inline string nestFieldPath() const { DARABONBA_PTR_GET_DEFAULT(nestFieldPath_, "") };
    inline FieldCondition& setNestFieldPath(string nestFieldPath) { DARABONBA_PTR_SET_VALUE(nestFieldPath_, nestFieldPath) };


    // nestFieldValue Field Functions 
    bool hasNestFieldValue() const { return this->nestFieldValue_ != nullptr;};
    void deleteNestFieldValue() { this->nestFieldValue_ = nullptr;};
    inline const vector<int64_t> & nestFieldValue() const { DARABONBA_PTR_GET_CONST(nestFieldValue_, vector<int64_t>) };
    inline vector<int64_t> nestFieldValue() { DARABONBA_PTR_GET(nestFieldValue_, vector<int64_t>) };
    inline FieldCondition& setNestFieldValue(const vector<int64_t> & nestFieldValue) { DARABONBA_PTR_SET_VALUE(nestFieldValue_, nestFieldValue) };
    inline FieldCondition& setNestFieldValue(vector<int64_t> && nestFieldValue) { DARABONBA_PTR_SET_RVALUE(nestFieldValue_, nestFieldValue) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline FieldCondition& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline FieldCondition& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> fieldName_ = nullptr;
    std::shared_ptr<string> nestFieldPath_ = nullptr;
    std::shared_ptr<vector<int64_t>> nestFieldValue_ = nullptr;
    std::shared_ptr<string> operateType_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
