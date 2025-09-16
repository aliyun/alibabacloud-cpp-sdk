// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESCHEMASRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESCHEMASRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataSourceSchemasResponseBodyResultPrimaryKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListDataSourceSchemasResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceSchemasResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(addIndex, addIndex_);
      DARABONBA_PTR_TO_JSON(attribute, attribute_);
      DARABONBA_PTR_TO_JSON(custom, custom_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(primaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceSchemasResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(addIndex, addIndex_);
      DARABONBA_PTR_FROM_JSON(attribute, attribute_);
      DARABONBA_PTR_FROM_JSON(custom, custom_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(primaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListDataSourceSchemasResponseBodyResult() = default ;
    ListDataSourceSchemasResponseBodyResult(const ListDataSourceSchemasResponseBodyResult &) = default ;
    ListDataSourceSchemasResponseBodyResult(ListDataSourceSchemasResponseBodyResult &&) = default ;
    ListDataSourceSchemasResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceSchemasResponseBodyResult() = default ;
    ListDataSourceSchemasResponseBodyResult& operator=(const ListDataSourceSchemasResponseBodyResult &) = default ;
    ListDataSourceSchemasResponseBodyResult& operator=(ListDataSourceSchemasResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addIndex_ != nullptr
        && this->attribute_ != nullptr && this->custom_ != nullptr && this->name_ != nullptr && this->primaryKey_ != nullptr && this->summary_ != nullptr
        && this->type_ != nullptr; };
    // addIndex Field Functions 
    bool hasAddIndex() const { return this->addIndex_ != nullptr;};
    void deleteAddIndex() { this->addIndex_ = nullptr;};
    inline bool addIndex() const { DARABONBA_PTR_GET_DEFAULT(addIndex_, false) };
    inline ListDataSourceSchemasResponseBodyResult& setAddIndex(bool addIndex) { DARABONBA_PTR_SET_VALUE(addIndex_, addIndex) };


    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline bool attribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, false) };
    inline ListDataSourceSchemasResponseBodyResult& setAttribute(bool attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


    // custom Field Functions 
    bool hasCustom() const { return this->custom_ != nullptr;};
    void deleteCustom() { this->custom_ = nullptr;};
    inline bool custom() const { DARABONBA_PTR_GET_DEFAULT(custom_, false) };
    inline ListDataSourceSchemasResponseBodyResult& setCustom(bool custom) { DARABONBA_PTR_SET_VALUE(custom_, custom) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDataSourceSchemasResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline const Models::ListDataSourceSchemasResponseBodyResultPrimaryKey & primaryKey() const { DARABONBA_PTR_GET_CONST(primaryKey_, Models::ListDataSourceSchemasResponseBodyResultPrimaryKey) };
    inline Models::ListDataSourceSchemasResponseBodyResultPrimaryKey primaryKey() { DARABONBA_PTR_GET(primaryKey_, Models::ListDataSourceSchemasResponseBodyResultPrimaryKey) };
    inline ListDataSourceSchemasResponseBodyResult& setPrimaryKey(const Models::ListDataSourceSchemasResponseBodyResultPrimaryKey & primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };
    inline ListDataSourceSchemasResponseBodyResult& setPrimaryKey(Models::ListDataSourceSchemasResponseBodyResultPrimaryKey && primaryKey) { DARABONBA_PTR_SET_RVALUE(primaryKey_, primaryKey) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline bool summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, false) };
    inline ListDataSourceSchemasResponseBodyResult& setSummary(bool summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDataSourceSchemasResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Indicates whether the field has the index attribute. Valid values: **true** and **false**.
    std::shared_ptr<bool> addIndex_ = nullptr;
    // Indicates whether the field is an attribute field. Valid values: **true** and **false**.
    std::shared_ptr<bool> attribute_ = nullptr;
    // Indicates whether the field is a custom field. Valid values: **true** and **false**.
    std::shared_ptr<bool> custom_ = nullptr;
    // The field name.
    std::shared_ptr<string> name_ = nullptr;
    // The primary key field.
    std::shared_ptr<Models::ListDataSourceSchemasResponseBodyResultPrimaryKey> primaryKey_ = nullptr;
    // Indicates whether the field can be displayed. Valid values: **true** and **false**.
    std::shared_ptr<bool> summary_ = nullptr;
    // The field type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
