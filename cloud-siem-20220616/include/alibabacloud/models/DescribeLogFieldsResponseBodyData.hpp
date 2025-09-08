// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGFIELDSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGFIELDSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeLogFieldsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogFieldsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
      DARABONBA_PTR_TO_JSON(FieldDesc, fieldDesc_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FieldType, fieldType_);
      DARABONBA_PTR_TO_JSON(LogCode, logCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogFieldsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
      DARABONBA_PTR_FROM_JSON(FieldDesc, fieldDesc_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FieldType, fieldType_);
      DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
    };
    DescribeLogFieldsResponseBodyData() = default ;
    DescribeLogFieldsResponseBodyData(const DescribeLogFieldsResponseBodyData &) = default ;
    DescribeLogFieldsResponseBodyData(DescribeLogFieldsResponseBodyData &&) = default ;
    DescribeLogFieldsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogFieldsResponseBodyData() = default ;
    DescribeLogFieldsResponseBodyData& operator=(const DescribeLogFieldsResponseBodyData &) = default ;
    DescribeLogFieldsResponseBodyData& operator=(DescribeLogFieldsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityName_ != nullptr
        && this->fieldDesc_ != nullptr && this->fieldName_ != nullptr && this->fieldType_ != nullptr && this->logCode_ != nullptr; };
    // activityName Field Functions 
    bool hasActivityName() const { return this->activityName_ != nullptr;};
    void deleteActivityName() { this->activityName_ = nullptr;};
    inline string activityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
    inline DescribeLogFieldsResponseBodyData& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


    // fieldDesc Field Functions 
    bool hasFieldDesc() const { return this->fieldDesc_ != nullptr;};
    void deleteFieldDesc() { this->fieldDesc_ = nullptr;};
    inline string fieldDesc() const { DARABONBA_PTR_GET_DEFAULT(fieldDesc_, "") };
    inline DescribeLogFieldsResponseBodyData& setFieldDesc(string fieldDesc) { DARABONBA_PTR_SET_VALUE(fieldDesc_, fieldDesc) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DescribeLogFieldsResponseBodyData& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string fieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline DescribeLogFieldsResponseBodyData& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // logCode Field Functions 
    bool hasLogCode() const { return this->logCode_ != nullptr;};
    void deleteLogCode() { this->logCode_ = nullptr;};
    inline string logCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
    inline DescribeLogFieldsResponseBodyData& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


  protected:
    // The type of the log to which the field belongs.
    std::shared_ptr<string> activityName_ = nullptr;
    // The internal code of the field description.
    std::shared_ptr<string> fieldDesc_ = nullptr;
    // The name of the field.
    std::shared_ptr<string> fieldName_ = nullptr;
    // The data type of the field. Valid values:
    // 
    // *   varchar
    // *   bigint
    std::shared_ptr<string> fieldType_ = nullptr;
    // The log source to which the field belongs.
    std::shared_ptr<string> logCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
