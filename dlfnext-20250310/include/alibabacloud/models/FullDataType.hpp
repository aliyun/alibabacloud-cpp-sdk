// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FULLDATATYPE_HPP_
#define ALIBABACLOUD_MODELS_FULLDATATYPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FullDataType.hpp>
#include <vector>
#include <alibabacloud/models/DataField.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class FullDataType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FullDataType& obj) { 
      DARABONBA_PTR_TO_JSON(element, element_);
      DARABONBA_PTR_TO_JSON(fields, fields_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, FullDataType& obj) { 
      DARABONBA_PTR_FROM_JSON(element, element_);
      DARABONBA_PTR_FROM_JSON(fields, fields_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    FullDataType() = default ;
    FullDataType(const FullDataType &) = default ;
    FullDataType(FullDataType &&) = default ;
    FullDataType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FullDataType() = default ;
    FullDataType& operator=(const FullDataType &) = default ;
    FullDataType& operator=(FullDataType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->element_ == nullptr
        && return this->fields_ == nullptr && return this->key_ == nullptr && return this->type_ == nullptr && return this->value_ == nullptr; };
    // element Field Functions 
    bool hasElement() const { return this->element_ != nullptr;};
    void deleteElement() { this->element_ = nullptr;};
    inline const FullDataType & element() const { DARABONBA_PTR_GET_CONST(element_, FullDataType) };
    inline FullDataType element() { DARABONBA_PTR_GET(element_, FullDataType) };
    inline FullDataType& setElement(const FullDataType & element) { DARABONBA_PTR_SET_VALUE(element_, element) };
    inline FullDataType& setElement(FullDataType && element) { DARABONBA_PTR_SET_RVALUE(element_, element) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<DataField> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<DataField>) };
    inline vector<DataField> fields() { DARABONBA_PTR_GET(fields_, vector<DataField>) };
    inline FullDataType& setFields(const vector<DataField> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline FullDataType& setFields(vector<DataField> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline const FullDataType & key() const { DARABONBA_PTR_GET_CONST(key_, FullDataType) };
    inline FullDataType key() { DARABONBA_PTR_GET(key_, FullDataType) };
    inline FullDataType& setKey(const FullDataType & key) { DARABONBA_PTR_SET_VALUE(key_, key) };
    inline FullDataType& setKey(FullDataType && key) { DARABONBA_PTR_SET_RVALUE(key_, key) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline FullDataType& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const FullDataType & value() const { DARABONBA_PTR_GET_CONST(value_, FullDataType) };
    inline FullDataType value() { DARABONBA_PTR_GET(value_, FullDataType) };
    inline FullDataType& setValue(const FullDataType & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline FullDataType& setValue(FullDataType && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<FullDataType> element_ = nullptr;
    std::shared_ptr<vector<DataField>> fields_ = nullptr;
    std::shared_ptr<FullDataType> key_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<FullDataType> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
