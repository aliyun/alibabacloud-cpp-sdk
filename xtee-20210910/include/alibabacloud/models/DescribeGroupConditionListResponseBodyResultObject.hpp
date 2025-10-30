// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPCONDITIONLISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPCONDITIONLISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeGroupConditionListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupConditionListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(fieldKey, fieldKey_);
      DARABONBA_PTR_TO_JSON(fieldValue, fieldValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupConditionListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldKey, fieldKey_);
      DARABONBA_PTR_FROM_JSON(fieldValue, fieldValue_);
    };
    DescribeGroupConditionListResponseBodyResultObject() = default ;
    DescribeGroupConditionListResponseBodyResultObject(const DescribeGroupConditionListResponseBodyResultObject &) = default ;
    DescribeGroupConditionListResponseBodyResultObject(DescribeGroupConditionListResponseBodyResultObject &&) = default ;
    DescribeGroupConditionListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupConditionListResponseBodyResultObject() = default ;
    DescribeGroupConditionListResponseBodyResultObject& operator=(const DescribeGroupConditionListResponseBodyResultObject &) = default ;
    DescribeGroupConditionListResponseBodyResultObject& operator=(DescribeGroupConditionListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldKey_ == nullptr
        && return this->fieldValue_ == nullptr; };
    // fieldKey Field Functions 
    bool hasFieldKey() const { return this->fieldKey_ != nullptr;};
    void deleteFieldKey() { this->fieldKey_ = nullptr;};
    inline string fieldKey() const { DARABONBA_PTR_GET_DEFAULT(fieldKey_, "") };
    inline DescribeGroupConditionListResponseBodyResultObject& setFieldKey(string fieldKey) { DARABONBA_PTR_SET_VALUE(fieldKey_, fieldKey) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline DescribeGroupConditionListResponseBodyResultObject& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


  protected:
    // Field key
    std::shared_ptr<string> fieldKey_ = nullptr;
    // Field value.
    std::shared_ptr<string> fieldValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
