// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEMATABLESVALUE_HPP_
#define ALIBABACLOUD_MODELS_SCHEMATABLESVALUE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SchemaTablesValueFieldsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class SchemaTablesValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SchemaTablesValue& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(primaryTable, primaryTable_);
      DARABONBA_PTR_TO_JSON(fields, fields_);
    };
    friend void from_json(const Darabonba::Json& j, SchemaTablesValue& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(primaryTable, primaryTable_);
      DARABONBA_PTR_FROM_JSON(fields, fields_);
    };
    SchemaTablesValue() = default ;
    SchemaTablesValue(const SchemaTablesValue &) = default ;
    SchemaTablesValue(SchemaTablesValue &&) = default ;
    SchemaTablesValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SchemaTablesValue() = default ;
    SchemaTablesValue& operator=(const SchemaTablesValue &) = default ;
    SchemaTablesValue& operator=(SchemaTablesValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->primaryTable_ == nullptr && return this->fields_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SchemaTablesValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // primaryTable Field Functions 
    bool hasPrimaryTable() const { return this->primaryTable_ != nullptr;};
    void deletePrimaryTable() { this->primaryTable_ = nullptr;};
    inline bool primaryTable() const { DARABONBA_PTR_GET_DEFAULT(primaryTable_, false) };
    inline SchemaTablesValue& setPrimaryTable(bool primaryTable) { DARABONBA_PTR_SET_VALUE(primaryTable_, primaryTable) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const map<string, SchemaTablesValueFieldsValue> & fields() const { DARABONBA_PTR_GET_CONST(fields_, map<string, SchemaTablesValueFieldsValue>) };
    inline map<string, SchemaTablesValueFieldsValue> fields() { DARABONBA_PTR_GET(fields_, map<string, SchemaTablesValueFieldsValue>) };
    inline SchemaTablesValue& setFields(const map<string, SchemaTablesValueFieldsValue> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline SchemaTablesValue& setFields(map<string, SchemaTablesValueFieldsValue> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> primaryTable_ = nullptr;
    std::shared_ptr<map<string, SchemaTablesValueFieldsValue>> fields_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
