// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATAREQUESTRELATIONALTABLEFILTER_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATAREQUESTRELATIONALTABLEFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryCollectionDataRequestRelationalTableFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCollectionDataRequestRelationalTableFilter& obj) { 
      DARABONBA_PTR_TO_JSON(CollectionMetadataField, collectionMetadataField_);
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(TableField, tableField_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCollectionDataRequestRelationalTableFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(CollectionMetadataField, collectionMetadataField_);
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(TableField, tableField_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    QueryCollectionDataRequestRelationalTableFilter() = default ;
    QueryCollectionDataRequestRelationalTableFilter(const QueryCollectionDataRequestRelationalTableFilter &) = default ;
    QueryCollectionDataRequestRelationalTableFilter(QueryCollectionDataRequestRelationalTableFilter &&) = default ;
    QueryCollectionDataRequestRelationalTableFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCollectionDataRequestRelationalTableFilter() = default ;
    QueryCollectionDataRequestRelationalTableFilter& operator=(const QueryCollectionDataRequestRelationalTableFilter &) = default ;
    QueryCollectionDataRequestRelationalTableFilter& operator=(QueryCollectionDataRequestRelationalTableFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->collectionMetadataField_ != nullptr
        && this->condition_ != nullptr && this->tableField_ != nullptr && this->tableName_ != nullptr; };
    // collectionMetadataField Field Functions 
    bool hasCollectionMetadataField() const { return this->collectionMetadataField_ != nullptr;};
    void deleteCollectionMetadataField() { this->collectionMetadataField_ = nullptr;};
    inline string collectionMetadataField() const { DARABONBA_PTR_GET_DEFAULT(collectionMetadataField_, "") };
    inline QueryCollectionDataRequestRelationalTableFilter& setCollectionMetadataField(string collectionMetadataField) { DARABONBA_PTR_SET_VALUE(collectionMetadataField_, collectionMetadataField) };


    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline QueryCollectionDataRequestRelationalTableFilter& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // tableField Field Functions 
    bool hasTableField() const { return this->tableField_ != nullptr;};
    void deleteTableField() { this->tableField_ = nullptr;};
    inline string tableField() const { DARABONBA_PTR_GET_DEFAULT(tableField_, "") };
    inline QueryCollectionDataRequestRelationalTableFilter& setTableField(string tableField) { DARABONBA_PTR_SET_VALUE(tableField_, tableField) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline QueryCollectionDataRequestRelationalTableFilter& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The Metadata field of the vector collection, used to associate with the fields in the vector table.
    std::shared_ptr<string> collectionMetadataField_ = nullptr;
    // The filtering condition for the relational table.
    std::shared_ptr<string> condition_ = nullptr;
    // The field in the relational table, used to associate with the Metadata field of the vector collection.
    std::shared_ptr<string> tableField_ = nullptr;
    // The name of the relational table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
