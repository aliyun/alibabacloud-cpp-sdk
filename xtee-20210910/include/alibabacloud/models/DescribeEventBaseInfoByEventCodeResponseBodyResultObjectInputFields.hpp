// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTBASEINFOBYEVENTCODERESPONSEBODYRESULTOBJECTINPUTFIELDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTBASEINFOBYEVENTCODERESPONSEBODYRESULTOBJECTINPUTFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(fieldCode, fieldCode_);
      DARABONBA_PTR_TO_JSON(fieldRank, fieldRank_);
      DARABONBA_PTR_TO_JSON(fieldSource, fieldSource_);
      DARABONBA_PTR_TO_JSON(fieldType, fieldType_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(fieldCode, fieldCode_);
      DARABONBA_PTR_FROM_JSON(fieldRank, fieldRank_);
      DARABONBA_PTR_FROM_JSON(fieldSource, fieldSource_);
      DARABONBA_PTR_FROM_JSON(fieldType, fieldType_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields() = default ;
    DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields(const DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields &) = default ;
    DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields(DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields &&) = default ;
    DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields() = default ;
    DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields& operator=(const DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields &) = default ;
    DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields& operator=(DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->fieldCode_ == nullptr && return this->fieldRank_ == nullptr && return this->fieldSource_ == nullptr && return this->fieldType_ == nullptr && return this->title_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fieldCode Field Functions 
    bool hasFieldCode() const { return this->fieldCode_ != nullptr;};
    void deleteFieldCode() { this->fieldCode_ = nullptr;};
    inline string fieldCode() const { DARABONBA_PTR_GET_DEFAULT(fieldCode_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields& setFieldCode(string fieldCode) { DARABONBA_PTR_SET_VALUE(fieldCode_, fieldCode) };


    // fieldRank Field Functions 
    bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
    void deleteFieldRank() { this->fieldRank_ = nullptr;};
    inline string fieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields& setFieldRank(string fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


    // fieldSource Field Functions 
    bool hasFieldSource() const { return this->fieldSource_ != nullptr;};
    void deleteFieldSource() { this->fieldSource_ = nullptr;};
    inline string fieldSource() const { DARABONBA_PTR_GET_DEFAULT(fieldSource_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields& setFieldSource(string fieldSource) { DARABONBA_PTR_SET_VALUE(fieldSource_, fieldSource) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string fieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // Field description.
    std::shared_ptr<string> description_ = nullptr;
    // Field code
    std::shared_ptr<string> fieldCode_ = nullptr;
    // Field ranking
    std::shared_ptr<string> fieldRank_ = nullptr;
    // Field source.
    std::shared_ptr<string> fieldSource_ = nullptr;
    // Field type.
    std::shared_ptr<string> fieldType_ = nullptr;
    // Field name.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
