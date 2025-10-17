// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEMASRESPONSEBODYITEMSSCHEMA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEMASRESPONSEBODYITEMSSCHEMA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSchemasResponseBodyItemsSchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSchemasResponseBodyItemsSchema& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSchemasResponseBodyItemsSchema& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
    };
    DescribeSchemasResponseBodyItemsSchema() = default ;
    DescribeSchemasResponseBodyItemsSchema(const DescribeSchemasResponseBodyItemsSchema &) = default ;
    DescribeSchemasResponseBodyItemsSchema(DescribeSchemasResponseBodyItemsSchema &&) = default ;
    DescribeSchemasResponseBodyItemsSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSchemasResponseBodyItemsSchema() = default ;
    DescribeSchemasResponseBodyItemsSchema& operator=(const DescribeSchemasResponseBodyItemsSchema &) = default ;
    DescribeSchemasResponseBodyItemsSchema& operator=(DescribeSchemasResponseBodyItemsSchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->schemaName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeSchemasResponseBodyItemsSchema& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeSchemasResponseBodyItemsSchema& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
