// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOCRESPONSEBODYDOCMETADATAMETACELLINFODTOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOCRESPONSEBODYDOCMETADATAMETACELLINFODTOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList& obj) { 
      DARABONBA_PTR_TO_JSON(FieldCode, fieldCode_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldCode, fieldCode_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList() = default ;
    DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList(const DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList &) = default ;
    DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList(DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList &&) = default ;
    DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList() = default ;
    DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList& operator=(const DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList &) = default ;
    DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList& operator=(DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fieldCode_ != nullptr
        && this->fieldName_ != nullptr && this->value_ != nullptr; };
    // fieldCode Field Functions 
    bool hasFieldCode() const { return this->fieldCode_ != nullptr;};
    void deleteFieldCode() { this->fieldCode_ = nullptr;};
    inline string fieldCode() const { DARABONBA_PTR_GET_DEFAULT(fieldCode_, "") };
    inline DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList& setFieldCode(string fieldCode) { DARABONBA_PTR_SET_VALUE(fieldCode_, fieldCode) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> fieldCode_ = nullptr;
    std::shared_ptr<string> fieldName_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
