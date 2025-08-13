// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMARKPAGERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMARKPAGERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeMarkPageResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMarkPageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(fieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(fieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(markType, markType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMarkPageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(fieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(markType, markType_);
    };
    DescribeMarkPageResponseBodyResultObject() = default ;
    DescribeMarkPageResponseBodyResultObject(const DescribeMarkPageResponseBodyResultObject &) = default ;
    DescribeMarkPageResponseBodyResultObject(DescribeMarkPageResponseBodyResultObject &&) = default ;
    DescribeMarkPageResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMarkPageResponseBodyResultObject() = default ;
    DescribeMarkPageResponseBodyResultObject& operator=(const DescribeMarkPageResponseBodyResultObject &) = default ;
    DescribeMarkPageResponseBodyResultObject& operator=(DescribeMarkPageResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fieldName_ != nullptr
        && this->fieldValue_ != nullptr && this->id_ != nullptr && this->markType_ != nullptr; };
    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DescribeMarkPageResponseBodyResultObject& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline DescribeMarkPageResponseBodyResultObject& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeMarkPageResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // markType Field Functions 
    bool hasMarkType() const { return this->markType_ != nullptr;};
    void deleteMarkType() { this->markType_ = nullptr;};
    inline string markType() const { DARABONBA_PTR_GET_DEFAULT(markType_, "") };
    inline DescribeMarkPageResponseBodyResultObject& setMarkType(string markType) { DARABONBA_PTR_SET_VALUE(markType_, markType) };


  protected:
    // Field name.
    std::shared_ptr<string> fieldName_ = nullptr;
    // Field value.
    std::shared_ptr<string> fieldValue_ = nullptr;
    // Primary key ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Mark (0 No / 1 Yes).
    std::shared_ptr<string> markType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
