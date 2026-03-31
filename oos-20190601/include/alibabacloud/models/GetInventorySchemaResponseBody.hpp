// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINVENTORYSCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINVENTORYSCHEMARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetInventorySchemaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInventorySchemaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schemas, schemas_);
    };
    friend void from_json(const Darabonba::Json& j, GetInventorySchemaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schemas, schemas_);
    };
    GetInventorySchemaResponseBody() = default ;
    GetInventorySchemaResponseBody(const GetInventorySchemaResponseBody &) = default ;
    GetInventorySchemaResponseBody(GetInventorySchemaResponseBody &&) = default ;
    GetInventorySchemaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInventorySchemaResponseBody() = default ;
    GetInventorySchemaResponseBody& operator=(const GetInventorySchemaResponseBody &) = default ;
    GetInventorySchemaResponseBody& operator=(GetInventorySchemaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Schemas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Schemas& obj) { 
        DARABONBA_PTR_TO_JSON(Attributes, attributes_);
        DARABONBA_PTR_TO_JSON(TypeName, typeName_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Schemas& obj) { 
        DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
        DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
      class Attributes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Attributes& obj) { 
          DARABONBA_PTR_TO_JSON(DataType, dataType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Attributes& obj) { 
          DARABONBA_PTR_FROM_JSON(DataType, dataType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Attributes() = default ;
        Attributes(const Attributes &) = default ;
        Attributes(Attributes &&) = default ;
        Attributes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Attributes() = default ;
        Attributes& operator=(const Attributes &) = default ;
        Attributes& operator=(Attributes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataType_ == nullptr
        && this->name_ == nullptr; };
        // dataType Field Functions 
        bool hasDataType() const { return this->dataType_ != nullptr;};
        void deleteDataType() { this->dataType_ = nullptr;};
        inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
        inline Attributes& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Attributes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The data type of the property.
        shared_ptr<string> dataType_ {};
        // The name of the property.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->attributes_ == nullptr
        && this->typeName_ == nullptr && this->version_ == nullptr; };
      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline const vector<Schemas::Attributes> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<Schemas::Attributes>) };
      inline vector<Schemas::Attributes> getAttributes() { DARABONBA_PTR_GET(attributes_, vector<Schemas::Attributes>) };
      inline Schemas& setAttributes(const vector<Schemas::Attributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
      inline Schemas& setAttributes(vector<Schemas::Attributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


      // typeName Field Functions 
      bool hasTypeName() const { return this->typeName_ != nullptr;};
      void deleteTypeName() { this->typeName_ = nullptr;};
      inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
      inline Schemas& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Schemas& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The properties of the configuration list.
      shared_ptr<vector<Schemas::Attributes>> attributes_ {};
      // The name of the configuration list.
      shared_ptr<string> typeName_ {};
      // The version of the configuration list.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->schemas_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline GetInventorySchemaResponseBody& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetInventorySchemaResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInventorySchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const vector<GetInventorySchemaResponseBody::Schemas> & getSchemas() const { DARABONBA_PTR_GET_CONST(schemas_, vector<GetInventorySchemaResponseBody::Schemas>) };
    inline vector<GetInventorySchemaResponseBody::Schemas> getSchemas() { DARABONBA_PTR_GET(schemas_, vector<GetInventorySchemaResponseBody::Schemas>) };
    inline GetInventorySchemaResponseBody& setSchemas(const vector<GetInventorySchemaResponseBody::Schemas> & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline GetInventorySchemaResponseBody& setSchemas(vector<GetInventorySchemaResponseBody::Schemas> && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


  protected:
    // The number of entries per page.
    shared_ptr<string> maxResults_ {};
    // The pagination token that was used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The detailed configurations of the configuration list.
    shared_ptr<vector<GetInventorySchemaResponseBody::Schemas>> schemas_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
