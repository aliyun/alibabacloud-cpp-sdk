// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESOURCESCHEMASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESOURCESCHEMASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListInstanceResourceSchemasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResourceSchemasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schemas, schemas_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResourceSchemasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schemas, schemas_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInstanceResourceSchemasResponseBody() = default ;
    ListInstanceResourceSchemasResponseBody(const ListInstanceResourceSchemasResponseBody &) = default ;
    ListInstanceResourceSchemasResponseBody(ListInstanceResourceSchemasResponseBody &&) = default ;
    ListInstanceResourceSchemasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResourceSchemasResponseBody() = default ;
    ListInstanceResourceSchemasResponseBody& operator=(const ListInstanceResourceSchemasResponseBody &) = default ;
    ListInstanceResourceSchemasResponseBody& operator=(ListInstanceResourceSchemasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Schemas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Schemas& obj) { 
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      };
      friend void from_json(const Darabonba::Json& j, Schemas& obj) { 
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      };
      Schemas() = default ;
      Schemas(const Schemas &) = default ;
      Schemas(Schemas &&) = default ;
      Schemas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Schemas() = default ;
      Schemas& operator=(const Schemas &) = default ;
      Schemas& operator=(Schemas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->schemaName_ == nullptr; };
      // schemaName Field Functions 
      bool hasSchemaName() const { return this->schemaName_ != nullptr;};
      void deleteSchemaName() { this->schemaName_ = nullptr;};
      inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
      inline Schemas& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    protected:
      shared_ptr<string> schemaName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->schemas_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceResourceSchemasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const vector<ListInstanceResourceSchemasResponseBody::Schemas> & getSchemas() const { DARABONBA_PTR_GET_CONST(schemas_, vector<ListInstanceResourceSchemasResponseBody::Schemas>) };
    inline vector<ListInstanceResourceSchemasResponseBody::Schemas> getSchemas() { DARABONBA_PTR_GET(schemas_, vector<ListInstanceResourceSchemasResponseBody::Schemas>) };
    inline ListInstanceResourceSchemasResponseBody& setSchemas(const vector<ListInstanceResourceSchemasResponseBody::Schemas> & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline ListInstanceResourceSchemasResponseBody& setSchemas(vector<ListInstanceResourceSchemasResponseBody::Schemas> && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListInstanceResourceSchemasResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListInstanceResourceSchemasResponseBody::Schemas>> schemas_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
