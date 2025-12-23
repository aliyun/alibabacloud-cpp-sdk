// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEMAINDEXES_HPP_
#define ALIBABACLOUD_MODELS_SCHEMAINDEXES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/SchemaIndexesSearchFieldsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class SchemaIndexes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SchemaIndexes& obj) { 
      DARABONBA_PTR_TO_JSON(filterFields, filterFields_);
      DARABONBA_PTR_TO_JSON(searchFields, searchFields_);
    };
    friend void from_json(const Darabonba::Json& j, SchemaIndexes& obj) { 
      DARABONBA_PTR_FROM_JSON(filterFields, filterFields_);
      DARABONBA_PTR_FROM_JSON(searchFields, searchFields_);
    };
    SchemaIndexes() = default ;
    SchemaIndexes(const SchemaIndexes &) = default ;
    SchemaIndexes(SchemaIndexes &&) = default ;
    SchemaIndexes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SchemaIndexes() = default ;
    SchemaIndexes& operator=(const SchemaIndexes &) = default ;
    SchemaIndexes& operator=(SchemaIndexes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterFields_ == nullptr
        && return this->searchFields_ == nullptr; };
    // filterFields Field Functions 
    bool hasFilterFields() const { return this->filterFields_ != nullptr;};
    void deleteFilterFields() { this->filterFields_ = nullptr;};
    inline const vector<string> & filterFields() const { DARABONBA_PTR_GET_CONST(filterFields_, vector<string>) };
    inline vector<string> filterFields() { DARABONBA_PTR_GET(filterFields_, vector<string>) };
    inline SchemaIndexes& setFilterFields(const vector<string> & filterFields) { DARABONBA_PTR_SET_VALUE(filterFields_, filterFields) };
    inline SchemaIndexes& setFilterFields(vector<string> && filterFields) { DARABONBA_PTR_SET_RVALUE(filterFields_, filterFields) };


    // searchFields Field Functions 
    bool hasSearchFields() const { return this->searchFields_ != nullptr;};
    void deleteSearchFields() { this->searchFields_ = nullptr;};
    inline const map<string, Models::SchemaIndexesSearchFieldsValue> & searchFields() const { DARABONBA_PTR_GET_CONST(searchFields_, map<string, Models::SchemaIndexesSearchFieldsValue>) };
    inline map<string, Models::SchemaIndexesSearchFieldsValue> searchFields() { DARABONBA_PTR_GET(searchFields_, map<string, Models::SchemaIndexesSearchFieldsValue>) };
    inline SchemaIndexes& setSearchFields(const map<string, Models::SchemaIndexesSearchFieldsValue> & searchFields) { DARABONBA_PTR_SET_VALUE(searchFields_, searchFields) };
    inline SchemaIndexes& setSearchFields(map<string, Models::SchemaIndexesSearchFieldsValue> && searchFields) { DARABONBA_PTR_SET_RVALUE(searchFields_, searchFields) };


  protected:
    std::shared_ptr<vector<string>> filterFields_ = nullptr;
    std::shared_ptr<map<string, Models::SchemaIndexesSearchFieldsValue>> searchFields_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
