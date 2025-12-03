// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKITEMALLFIELDSRESPONSEBODYFIELDSOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKITEMALLFIELDSRESPONSEBODYFIELDSOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListWorkItemAllFieldsResponseBodyFieldsOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkItemAllFieldsResponseBodyFieldsOptions& obj) { 
      DARABONBA_PTR_TO_JSON(displayValue, displayValue_);
      DARABONBA_PTR_TO_JSON(fieldIdentifier, fieldIdentifier_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(position, position_);
      DARABONBA_PTR_TO_JSON(value, value_);
      DARABONBA_PTR_TO_JSON(valueEn, valueEn_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkItemAllFieldsResponseBodyFieldsOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(displayValue, displayValue_);
      DARABONBA_PTR_FROM_JSON(fieldIdentifier, fieldIdentifier_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(position, position_);
      DARABONBA_PTR_FROM_JSON(value, value_);
      DARABONBA_PTR_FROM_JSON(valueEn, valueEn_);
    };
    ListWorkItemAllFieldsResponseBodyFieldsOptions() = default ;
    ListWorkItemAllFieldsResponseBodyFieldsOptions(const ListWorkItemAllFieldsResponseBodyFieldsOptions &) = default ;
    ListWorkItemAllFieldsResponseBodyFieldsOptions(ListWorkItemAllFieldsResponseBodyFieldsOptions &&) = default ;
    ListWorkItemAllFieldsResponseBodyFieldsOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkItemAllFieldsResponseBodyFieldsOptions() = default ;
    ListWorkItemAllFieldsResponseBodyFieldsOptions& operator=(const ListWorkItemAllFieldsResponseBodyFieldsOptions &) = default ;
    ListWorkItemAllFieldsResponseBodyFieldsOptions& operator=(ListWorkItemAllFieldsResponseBodyFieldsOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayValue_ == nullptr
        && return this->fieldIdentifier_ == nullptr && return this->identifier_ == nullptr && return this->level_ == nullptr && return this->position_ == nullptr && return this->value_ == nullptr
        && return this->valueEn_ == nullptr; };
    // displayValue Field Functions 
    bool hasDisplayValue() const { return this->displayValue_ != nullptr;};
    void deleteDisplayValue() { this->displayValue_ = nullptr;};
    inline string displayValue() const { DARABONBA_PTR_GET_DEFAULT(displayValue_, "") };
    inline ListWorkItemAllFieldsResponseBodyFieldsOptions& setDisplayValue(string displayValue) { DARABONBA_PTR_SET_VALUE(displayValue_, displayValue) };


    // fieldIdentifier Field Functions 
    bool hasFieldIdentifier() const { return this->fieldIdentifier_ != nullptr;};
    void deleteFieldIdentifier() { this->fieldIdentifier_ = nullptr;};
    inline string fieldIdentifier() const { DARABONBA_PTR_GET_DEFAULT(fieldIdentifier_, "") };
    inline ListWorkItemAllFieldsResponseBodyFieldsOptions& setFieldIdentifier(string fieldIdentifier) { DARABONBA_PTR_SET_VALUE(fieldIdentifier_, fieldIdentifier) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListWorkItemAllFieldsResponseBodyFieldsOptions& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline ListWorkItemAllFieldsResponseBodyFieldsOptions& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int64_t position() const { DARABONBA_PTR_GET_DEFAULT(position_, 0L) };
    inline ListWorkItemAllFieldsResponseBodyFieldsOptions& setPosition(int64_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListWorkItemAllFieldsResponseBodyFieldsOptions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueEn Field Functions 
    bool hasValueEn() const { return this->valueEn_ != nullptr;};
    void deleteValueEn() { this->valueEn_ = nullptr;};
    inline string valueEn() const { DARABONBA_PTR_GET_DEFAULT(valueEn_, "") };
    inline ListWorkItemAllFieldsResponseBodyFieldsOptions& setValueEn(string valueEn) { DARABONBA_PTR_SET_VALUE(valueEn_, valueEn) };


  protected:
    std::shared_ptr<string> displayValue_ = nullptr;
    std::shared_ptr<string> fieldIdentifier_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<int64_t> level_ = nullptr;
    std::shared_ptr<int64_t> position_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<string> valueEn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
