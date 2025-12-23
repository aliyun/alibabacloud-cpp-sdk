// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEMATABLESVALUEFIELDSVALUE_HPP_
#define ALIBABACLOUD_MODELS_SCHEMATABLESVALUEFIELDSVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class SchemaTablesValueFieldsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SchemaTablesValueFieldsValue& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(primaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(joinWith, joinWith_);
      DARABONBA_PTR_TO_JSON(label, label_);
    };
    friend void from_json(const Darabonba::Json& j, SchemaTablesValueFieldsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(primaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(joinWith, joinWith_);
      DARABONBA_PTR_FROM_JSON(label, label_);
    };
    SchemaTablesValueFieldsValue() = default ;
    SchemaTablesValueFieldsValue(const SchemaTablesValueFieldsValue &) = default ;
    SchemaTablesValueFieldsValue(SchemaTablesValueFieldsValue &&) = default ;
    SchemaTablesValueFieldsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SchemaTablesValueFieldsValue() = default ;
    SchemaTablesValueFieldsValue& operator=(const SchemaTablesValueFieldsValue &) = default ;
    SchemaTablesValueFieldsValue& operator=(SchemaTablesValueFieldsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->primaryKey_ == nullptr && return this->type_ == nullptr && return this->joinWith_ == nullptr && return this->label_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SchemaTablesValueFieldsValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline bool primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, false) };
    inline SchemaTablesValueFieldsValue& setPrimaryKey(bool primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SchemaTablesValueFieldsValue& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // joinWith Field Functions 
    bool hasJoinWith() const { return this->joinWith_ != nullptr;};
    void deleteJoinWith() { this->joinWith_ = nullptr;};
    inline const vector<string> & joinWith() const { DARABONBA_PTR_GET_CONST(joinWith_, vector<string>) };
    inline vector<string> joinWith() { DARABONBA_PTR_GET(joinWith_, vector<string>) };
    inline SchemaTablesValueFieldsValue& setJoinWith(const vector<string> & joinWith) { DARABONBA_PTR_SET_VALUE(joinWith_, joinWith) };
    inline SchemaTablesValueFieldsValue& setJoinWith(vector<string> && joinWith) { DARABONBA_PTR_SET_RVALUE(joinWith_, joinWith) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline SchemaTablesValueFieldsValue& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> primaryKey_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<vector<string>> joinWith_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
