// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYRESULTSCHEMASINDEXES_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYRESULTSCHEMASINDEXES_HPP_
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
  class CreateAppResponseBodyResultSchemasIndexes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppResponseBodyResultSchemasIndexes& obj) { 
      DARABONBA_PTR_TO_JSON(filterFields, filterFields_);
      DARABONBA_ANY_TO_JSON(searchFields, searchFields_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppResponseBodyResultSchemasIndexes& obj) { 
      DARABONBA_PTR_FROM_JSON(filterFields, filterFields_);
      DARABONBA_ANY_FROM_JSON(searchFields, searchFields_);
    };
    CreateAppResponseBodyResultSchemasIndexes() = default ;
    CreateAppResponseBodyResultSchemasIndexes(const CreateAppResponseBodyResultSchemasIndexes &) = default ;
    CreateAppResponseBodyResultSchemasIndexes(CreateAppResponseBodyResultSchemasIndexes &&) = default ;
    CreateAppResponseBodyResultSchemasIndexes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppResponseBodyResultSchemasIndexes() = default ;
    CreateAppResponseBodyResultSchemasIndexes& operator=(const CreateAppResponseBodyResultSchemasIndexes &) = default ;
    CreateAppResponseBodyResultSchemasIndexes& operator=(CreateAppResponseBodyResultSchemasIndexes &&) = default ;
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
    inline CreateAppResponseBodyResultSchemasIndexes& setFilterFields(const vector<string> & filterFields) { DARABONBA_PTR_SET_VALUE(filterFields_, filterFields) };
    inline CreateAppResponseBodyResultSchemasIndexes& setFilterFields(vector<string> && filterFields) { DARABONBA_PTR_SET_RVALUE(filterFields_, filterFields) };


    // searchFields Field Functions 
    bool hasSearchFields() const { return this->searchFields_ != nullptr;};
    void deleteSearchFields() { this->searchFields_ = nullptr;};
    inline     const Darabonba::Json & searchFields() const { DARABONBA_GET(searchFields_) };
    Darabonba::Json & searchFields() { DARABONBA_GET(searchFields_) };
    inline CreateAppResponseBodyResultSchemasIndexes& setSearchFields(const Darabonba::Json & searchFields) { DARABONBA_SET_VALUE(searchFields_, searchFields) };
    inline CreateAppResponseBodyResultSchemasIndexes& setSearchFields(Darabonba::Json & searchFields) { DARABONBA_SET_RVALUE(searchFields_, searchFields) };


  protected:
    // The attribute fields.
    std::shared_ptr<vector<string>> filterFields_ = nullptr;
    // The index fields.
    Darabonba::Json searchFields_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
