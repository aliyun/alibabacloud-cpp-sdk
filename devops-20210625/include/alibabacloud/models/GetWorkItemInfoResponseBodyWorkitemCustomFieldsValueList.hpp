// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMINFORESPONSEBODYWORKITEMCUSTOMFIELDSVALUELIST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMINFORESPONSEBODYWORKITEMCUSTOMFIELDSVALUELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList& obj) { 
      DARABONBA_PTR_TO_JSON(displayValue, displayValue_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(value, value_);
      DARABONBA_PTR_TO_JSON(valueEn, valueEn_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList& obj) { 
      DARABONBA_PTR_FROM_JSON(displayValue, displayValue_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(value, value_);
      DARABONBA_PTR_FROM_JSON(valueEn, valueEn_);
    };
    GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList() = default ;
    GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList(const GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList &) = default ;
    GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList(GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList &&) = default ;
    GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList() = default ;
    GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList& operator=(const GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList &) = default ;
    GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList& operator=(GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayValue_ == nullptr
        && return this->identifier_ == nullptr && return this->level_ == nullptr && return this->value_ == nullptr && return this->valueEn_ == nullptr; };
    // displayValue Field Functions 
    bool hasDisplayValue() const { return this->displayValue_ != nullptr;};
    void deleteDisplayValue() { this->displayValue_ = nullptr;};
    inline string displayValue() const { DARABONBA_PTR_GET_DEFAULT(displayValue_, "") };
    inline GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList& setDisplayValue(string displayValue) { DARABONBA_PTR_SET_VALUE(displayValue_, displayValue) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueEn Field Functions 
    bool hasValueEn() const { return this->valueEn_ != nullptr;};
    void deleteValueEn() { this->valueEn_ = nullptr;};
    inline string valueEn() const { DARABONBA_PTR_GET_DEFAULT(valueEn_, "") };
    inline GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList& setValueEn(string valueEn) { DARABONBA_PTR_SET_VALUE(valueEn_, valueEn) };


  protected:
    std::shared_ptr<string> displayValue_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<int64_t> level_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<string> valueEn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
