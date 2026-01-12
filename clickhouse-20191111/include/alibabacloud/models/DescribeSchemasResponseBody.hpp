// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEMASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEMASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeSchemasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSchemasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSchemasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSchemasResponseBody() = default ;
    DescribeSchemasResponseBody(const DescribeSchemasResponseBody &) = default ;
    DescribeSchemasResponseBody(DescribeSchemasResponseBody &&) = default ;
    DescribeSchemasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSchemasResponseBody() = default ;
    DescribeSchemasResponseBody& operator=(const DescribeSchemasResponseBody &) = default ;
    DescribeSchemasResponseBody& operator=(DescribeSchemasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Schema, schema_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Schema, schema_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Schema : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Schema& obj) { 
          DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        };
        friend void from_json(const Darabonba::Json& j, Schema& obj) { 
          DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        };
        Schema() = default ;
        Schema(const Schema &) = default ;
        Schema(Schema &&) = default ;
        Schema(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Schema() = default ;
        Schema& operator=(const Schema &) = default ;
        Schema& operator=(Schema &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->schemaName_ == nullptr; };
        // DBClusterId Field Functions 
        bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
        void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
        inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
        inline Schema& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline Schema& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      protected:
        // The cluster ID.
        shared_ptr<string> DBClusterId_ {};
        // The database name.
        shared_ptr<string> schemaName_ {};
      };

      virtual bool empty() const override { return this->schema_ == nullptr; };
      // schema Field Functions 
      bool hasSchema() const { return this->schema_ != nullptr;};
      void deleteSchema() { this->schema_ = nullptr;};
      inline const vector<Items::Schema> & getSchema() const { DARABONBA_PTR_GET_CONST(schema_, vector<Items::Schema>) };
      inline vector<Items::Schema> getSchema() { DARABONBA_PTR_GET(schema_, vector<Items::Schema>) };
      inline Items& setSchema(const vector<Items::Schema> & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
      inline Items& setSchema(vector<Items::Schema> && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


    protected:
      shared_ptr<vector<Items::Schema>> schema_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeSchemasResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeSchemasResponseBody::Items) };
    inline DescribeSchemasResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeSchemasResponseBody::Items) };
    inline DescribeSchemasResponseBody& setItems(const DescribeSchemasResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSchemasResponseBody& setItems(DescribeSchemasResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSchemasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the databases of the cluster.
    shared_ptr<DescribeSchemasResponseBody::Items> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
