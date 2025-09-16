// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASESCHEMARESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASESCHEMARESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetDatabaseSchemaResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabaseSchemaResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(fieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(fieldType, fieldType_);
      DARABONBA_ANY_TO_JSON(fieldTypeDetail, fieldTypeDetail_);
      DARABONBA_PTR_TO_JSON(indexName, indexName_);
      DARABONBA_PTR_TO_JSON(indexType, indexType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabaseSchemaResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(fieldType, fieldType_);
      DARABONBA_ANY_FROM_JSON(fieldTypeDetail, fieldTypeDetail_);
      DARABONBA_PTR_FROM_JSON(indexName, indexName_);
      DARABONBA_PTR_FROM_JSON(indexType, indexType_);
    };
    GetDatabaseSchemaResponseBodyResult() = default ;
    GetDatabaseSchemaResponseBodyResult(const GetDatabaseSchemaResponseBodyResult &) = default ;
    GetDatabaseSchemaResponseBodyResult(GetDatabaseSchemaResponseBodyResult &&) = default ;
    GetDatabaseSchemaResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabaseSchemaResponseBodyResult() = default ;
    GetDatabaseSchemaResponseBodyResult& operator=(const GetDatabaseSchemaResponseBodyResult &) = default ;
    GetDatabaseSchemaResponseBodyResult& operator=(GetDatabaseSchemaResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fieldName_ != nullptr
        && this->fieldType_ != nullptr && this->fieldTypeDetail_ != nullptr && this->indexName_ != nullptr && this->indexType_ != nullptr; };
    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline GetDatabaseSchemaResponseBodyResult& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string fieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline GetDatabaseSchemaResponseBodyResult& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // fieldTypeDetail Field Functions 
    bool hasFieldTypeDetail() const { return this->fieldTypeDetail_ != nullptr;};
    void deleteFieldTypeDetail() { this->fieldTypeDetail_ = nullptr;};
    inline     const Darabonba::Json & fieldTypeDetail() const { DARABONBA_GET(fieldTypeDetail_) };
    Darabonba::Json & fieldTypeDetail() { DARABONBA_GET(fieldTypeDetail_) };
    inline GetDatabaseSchemaResponseBodyResult& setFieldTypeDetail(const Darabonba::Json & fieldTypeDetail) { DARABONBA_SET_VALUE(fieldTypeDetail_, fieldTypeDetail) };
    inline GetDatabaseSchemaResponseBodyResult& setFieldTypeDetail(Darabonba::Json & fieldTypeDetail) { DARABONBA_SET_RVALUE(fieldTypeDetail_, fieldTypeDetail) };


    // indexName Field Functions 
    bool hasIndexName() const { return this->indexName_ != nullptr;};
    void deleteIndexName() { this->indexName_ = nullptr;};
    inline string indexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
    inline GetDatabaseSchemaResponseBodyResult& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


    // indexType Field Functions 
    bool hasIndexType() const { return this->indexType_ != nullptr;};
    void deleteIndexType() { this->indexType_ = nullptr;};
    inline string indexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
    inline GetDatabaseSchemaResponseBodyResult& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


  protected:
    std::shared_ptr<string> fieldName_ = nullptr;
    std::shared_ptr<string> fieldType_ = nullptr;
    Darabonba::Json fieldTypeDetail_ = nullptr;
    std::shared_ptr<string> indexName_ = nullptr;
    std::shared_ptr<string> indexType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
