// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMINFORESPONSEBODYWORKITEMCUSTOMFIELDS_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMINFORESPONSEBODYWORKITEMCUSTOMFIELDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkItemInfoResponseBodyWorkitemCustomFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkItemInfoResponseBodyWorkitemCustomFields& obj) { 
      DARABONBA_PTR_TO_JSON(fieldClassName, fieldClassName_);
      DARABONBA_PTR_TO_JSON(fieldFormat, fieldFormat_);
      DARABONBA_PTR_TO_JSON(fieldIdentifier, fieldIdentifier_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(objectValue, objectValue_);
      DARABONBA_PTR_TO_JSON(position, position_);
      DARABONBA_PTR_TO_JSON(value, value_);
      DARABONBA_PTR_TO_JSON(valueList, valueList_);
      DARABONBA_PTR_TO_JSON(workitemIdentifier, workitemIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkItemInfoResponseBodyWorkitemCustomFields& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldClassName, fieldClassName_);
      DARABONBA_PTR_FROM_JSON(fieldFormat, fieldFormat_);
      DARABONBA_PTR_FROM_JSON(fieldIdentifier, fieldIdentifier_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(objectValue, objectValue_);
      DARABONBA_PTR_FROM_JSON(position, position_);
      DARABONBA_PTR_FROM_JSON(value, value_);
      DARABONBA_PTR_FROM_JSON(valueList, valueList_);
      DARABONBA_PTR_FROM_JSON(workitemIdentifier, workitemIdentifier_);
    };
    GetWorkItemInfoResponseBodyWorkitemCustomFields() = default ;
    GetWorkItemInfoResponseBodyWorkitemCustomFields(const GetWorkItemInfoResponseBodyWorkitemCustomFields &) = default ;
    GetWorkItemInfoResponseBodyWorkitemCustomFields(GetWorkItemInfoResponseBodyWorkitemCustomFields &&) = default ;
    GetWorkItemInfoResponseBodyWorkitemCustomFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkItemInfoResponseBodyWorkitemCustomFields() = default ;
    GetWorkItemInfoResponseBodyWorkitemCustomFields& operator=(const GetWorkItemInfoResponseBodyWorkitemCustomFields &) = default ;
    GetWorkItemInfoResponseBodyWorkitemCustomFields& operator=(GetWorkItemInfoResponseBodyWorkitemCustomFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldClassName_ == nullptr
        && return this->fieldFormat_ == nullptr && return this->fieldIdentifier_ == nullptr && return this->level_ == nullptr && return this->objectValue_ == nullptr && return this->position_ == nullptr
        && return this->value_ == nullptr && return this->valueList_ == nullptr && return this->workitemIdentifier_ == nullptr; };
    // fieldClassName Field Functions 
    bool hasFieldClassName() const { return this->fieldClassName_ != nullptr;};
    void deleteFieldClassName() { this->fieldClassName_ = nullptr;};
    inline string fieldClassName() const { DARABONBA_PTR_GET_DEFAULT(fieldClassName_, "") };
    inline GetWorkItemInfoResponseBodyWorkitemCustomFields& setFieldClassName(string fieldClassName) { DARABONBA_PTR_SET_VALUE(fieldClassName_, fieldClassName) };


    // fieldFormat Field Functions 
    bool hasFieldFormat() const { return this->fieldFormat_ != nullptr;};
    void deleteFieldFormat() { this->fieldFormat_ = nullptr;};
    inline string fieldFormat() const { DARABONBA_PTR_GET_DEFAULT(fieldFormat_, "") };
    inline GetWorkItemInfoResponseBodyWorkitemCustomFields& setFieldFormat(string fieldFormat) { DARABONBA_PTR_SET_VALUE(fieldFormat_, fieldFormat) };


    // fieldIdentifier Field Functions 
    bool hasFieldIdentifier() const { return this->fieldIdentifier_ != nullptr;};
    void deleteFieldIdentifier() { this->fieldIdentifier_ = nullptr;};
    inline string fieldIdentifier() const { DARABONBA_PTR_GET_DEFAULT(fieldIdentifier_, "") };
    inline GetWorkItemInfoResponseBodyWorkitemCustomFields& setFieldIdentifier(string fieldIdentifier) { DARABONBA_PTR_SET_VALUE(fieldIdentifier_, fieldIdentifier) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline GetWorkItemInfoResponseBodyWorkitemCustomFields& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // objectValue Field Functions 
    bool hasObjectValue() const { return this->objectValue_ != nullptr;};
    void deleteObjectValue() { this->objectValue_ = nullptr;};
    inline string objectValue() const { DARABONBA_PTR_GET_DEFAULT(objectValue_, "") };
    inline GetWorkItemInfoResponseBodyWorkitemCustomFields& setObjectValue(string objectValue) { DARABONBA_PTR_SET_VALUE(objectValue_, objectValue) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int64_t position() const { DARABONBA_PTR_GET_DEFAULT(position_, 0L) };
    inline GetWorkItemInfoResponseBodyWorkitemCustomFields& setPosition(int64_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetWorkItemInfoResponseBodyWorkitemCustomFields& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueList Field Functions 
    bool hasValueList() const { return this->valueList_ != nullptr;};
    void deleteValueList() { this->valueList_ = nullptr;};
    inline const vector<Models::GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList> & valueList() const { DARABONBA_PTR_GET_CONST(valueList_, vector<Models::GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList>) };
    inline vector<Models::GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList> valueList() { DARABONBA_PTR_GET(valueList_, vector<Models::GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList>) };
    inline GetWorkItemInfoResponseBodyWorkitemCustomFields& setValueList(const vector<Models::GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList> & valueList) { DARABONBA_PTR_SET_VALUE(valueList_, valueList) };
    inline GetWorkItemInfoResponseBodyWorkitemCustomFields& setValueList(vector<Models::GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList> && valueList) { DARABONBA_PTR_SET_RVALUE(valueList_, valueList) };


    // workitemIdentifier Field Functions 
    bool hasWorkitemIdentifier() const { return this->workitemIdentifier_ != nullptr;};
    void deleteWorkitemIdentifier() { this->workitemIdentifier_ = nullptr;};
    inline string workitemIdentifier() const { DARABONBA_PTR_GET_DEFAULT(workitemIdentifier_, "") };
    inline GetWorkItemInfoResponseBodyWorkitemCustomFields& setWorkitemIdentifier(string workitemIdentifier) { DARABONBA_PTR_SET_VALUE(workitemIdentifier_, workitemIdentifier) };


  protected:
    std::shared_ptr<string> fieldClassName_ = nullptr;
    std::shared_ptr<string> fieldFormat_ = nullptr;
    std::shared_ptr<string> fieldIdentifier_ = nullptr;
    std::shared_ptr<int64_t> level_ = nullptr;
    std::shared_ptr<string> objectValue_ = nullptr;
    std::shared_ptr<int64_t> position_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<vector<Models::GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList>> valueList_ = nullptr;
    std::shared_ptr<string> workitemIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
