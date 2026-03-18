// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListTablesResponseBody() = default ;
    ListTablesResponseBody(const ListTablesResponseBody &) = default ;
    ListTablesResponseBody(ListTablesResponseBody &&) = default ;
    ListTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTablesResponseBody() = default ;
    ListTablesResponseBody& operator=(const ListTablesResponseBody &) = default ;
    ListTablesResponseBody& operator=(ListTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(marker, marker_);
        DARABONBA_PTR_TO_JSON(maxItem, maxItem_);
        DARABONBA_PTR_TO_JSON(tables, tables_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(marker, marker_);
        DARABONBA_PTR_FROM_JSON(maxItem, maxItem_);
        DARABONBA_PTR_FROM_JSON(tables, tables_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tables& obj) { 
          DARABONBA_PTR_TO_JSON(creationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(displayName, displayName_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(owner, owner_);
          DARABONBA_PTR_TO_JSON(schema, schema_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Tables& obj) { 
          DARABONBA_PTR_FROM_JSON(creationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(displayName, displayName_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(owner, owner_);
          DARABONBA_PTR_FROM_JSON(schema, schema_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Tables() = default ;
        Tables(const Tables &) = default ;
        Tables(Tables &&) = default ;
        Tables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tables() = default ;
        Tables& operator=(const Tables &) = default ;
        Tables& operator=(Tables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->displayName_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->schema_ == nullptr && this->type_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline int64_t getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
        inline Tables& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Tables& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Tables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Tables& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // schema Field Functions 
        bool hasSchema() const { return this->schema_ != nullptr;};
        void deleteSchema() { this->schema_ = nullptr;};
        inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
        inline Tables& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Tables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int64_t> creationTime_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> owner_ {};
        shared_ptr<string> schema_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->marker_ == nullptr
        && this->maxItem_ == nullptr && this->tables_ == nullptr; };
      // marker Field Functions 
      bool hasMarker() const { return this->marker_ != nullptr;};
      void deleteMarker() { this->marker_ = nullptr;};
      inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
      inline Data& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


      // maxItem Field Functions 
      bool hasMaxItem() const { return this->maxItem_ != nullptr;};
      void deleteMaxItem() { this->maxItem_ = nullptr;};
      inline int32_t getMaxItem() const { DARABONBA_PTR_GET_DEFAULT(maxItem_, 0) };
      inline Data& setMaxItem(int32_t maxItem) { DARABONBA_PTR_SET_VALUE(maxItem_, maxItem) };


      // tables Field Functions 
      bool hasTables() const { return this->tables_ != nullptr;};
      void deleteTables() { this->tables_ = nullptr;};
      inline const vector<Data::Tables> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Data::Tables>) };
      inline vector<Data::Tables> getTables() { DARABONBA_PTR_GET(tables_, vector<Data::Tables>) };
      inline Data& setTables(const vector<Data::Tables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
      inline Data& setTables(vector<Data::Tables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    protected:
      shared_ptr<string> marker_ {};
      shared_ptr<int32_t> maxItem_ {};
      shared_ptr<vector<Data::Tables>> tables_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListTablesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListTablesResponseBody::Data) };
    inline ListTablesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListTablesResponseBody::Data) };
    inline ListTablesResponseBody& setData(const ListTablesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTablesResponseBody& setData(ListTablesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListTablesResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
