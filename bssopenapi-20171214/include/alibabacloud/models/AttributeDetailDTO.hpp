// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTRIBUTEDETAILDTO_HPP_
#define ALIBABACLOUD_MODELS_ATTRIBUTEDETAILDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttributeDetailDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class AttributeDetailDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttributeDetailDTO& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, AttributeDetailDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    AttributeDetailDTO() = default ;
    AttributeDetailDTO(const AttributeDetailDTO &) = default ;
    AttributeDetailDTO(AttributeDetailDTO &&) = default ;
    AttributeDetailDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttributeDetailDTO() = default ;
    AttributeDetailDTO& operator=(const AttributeDetailDTO &) = default ;
    AttributeDetailDTO& operator=(AttributeDetailDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Values : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Values& obj) { 
        DARABONBA_PTR_TO_JSON(CascadingAttributeValues, cascadingAttributeValues_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Values& obj) { 
        DARABONBA_PTR_FROM_JSON(CascadingAttributeValues, cascadingAttributeValues_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Values() = default ;
      Values(const Values &) = default ;
      Values(Values &&) = default ;
      Values(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Values() = default ;
      Values& operator=(const Values &) = default ;
      Values& operator=(Values &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cascadingAttributeValues_ == nullptr
        && this->value_ == nullptr; };
      // cascadingAttributeValues Field Functions 
      bool hasCascadingAttributeValues() const { return this->cascadingAttributeValues_ != nullptr;};
      void deleteCascadingAttributeValues() { this->cascadingAttributeValues_ = nullptr;};
      inline const vector<AttributeDetailDTO> & getCascadingAttributeValues() const { DARABONBA_PTR_GET_CONST(cascadingAttributeValues_, vector<AttributeDetailDTO>) };
      inline vector<AttributeDetailDTO> getCascadingAttributeValues() { DARABONBA_PTR_GET(cascadingAttributeValues_, vector<AttributeDetailDTO>) };
      inline Values& setCascadingAttributeValues(const vector<AttributeDetailDTO> & cascadingAttributeValues) { DARABONBA_PTR_SET_VALUE(cascadingAttributeValues_, cascadingAttributeValues) };
      inline Values& setCascadingAttributeValues(vector<AttributeDetailDTO> && cascadingAttributeValues) { DARABONBA_PTR_SET_RVALUE(cascadingAttributeValues_, cascadingAttributeValues) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Values& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The list of cascading property values (recursive structure).
      shared_ptr<vector<AttributeDetailDTO>> cascadingAttributeValues_ {};
      // The property value, which corresponds to the identifyKey in the property value definition.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->defaultValue_ == nullptr && this->status_ == nullptr && this->values_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AttributeDetailDTO& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline AttributeDetailDTO& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AttributeDetailDTO& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<AttributeDetailDTO::Values> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<AttributeDetailDTO::Values>) };
    inline vector<AttributeDetailDTO::Values> getValues() { DARABONBA_PTR_GET(values_, vector<AttributeDetailDTO::Values>) };
    inline AttributeDetailDTO& setValues(const vector<AttributeDetailDTO::Values> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline AttributeDetailDTO& setValues(vector<AttributeDetailDTO::Values> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The property code.
    shared_ptr<string> code_ {};
    // The default value.
    shared_ptr<string> defaultValue_ {};
    // The property status.
    shared_ptr<string> status_ {};
    // The list of valid values for the property.
    shared_ptr<vector<AttributeDetailDTO::Values>> values_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
