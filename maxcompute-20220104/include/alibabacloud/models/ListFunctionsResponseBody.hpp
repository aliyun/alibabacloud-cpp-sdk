// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONSRESPONSEBODY_HPP_
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
  class ListFunctionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListFunctionsResponseBody() = default ;
    ListFunctionsResponseBody(const ListFunctionsResponseBody &) = default ;
    ListFunctionsResponseBody(ListFunctionsResponseBody &&) = default ;
    ListFunctionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionsResponseBody() = default ;
    ListFunctionsResponseBody& operator=(const ListFunctionsResponseBody &) = default ;
    ListFunctionsResponseBody& operator=(ListFunctionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(functions, functions_);
        DARABONBA_PTR_TO_JSON(marker, marker_);
        DARABONBA_PTR_TO_JSON(maxItem, maxItem_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(functions, functions_);
        DARABONBA_PTR_FROM_JSON(marker, marker_);
        DARABONBA_PTR_FROM_JSON(maxItem, maxItem_);
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
      class Functions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Functions& obj) { 
          DARABONBA_PTR_TO_JSON(class, class_);
          DARABONBA_PTR_TO_JSON(creationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(displayName, displayName_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(owner, owner_);
          DARABONBA_PTR_TO_JSON(resources, resources_);
          DARABONBA_PTR_TO_JSON(schema, schema_);
        };
        friend void from_json(const Darabonba::Json& j, Functions& obj) { 
          DARABONBA_PTR_FROM_JSON(class, class_);
          DARABONBA_PTR_FROM_JSON(creationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(displayName, displayName_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(owner, owner_);
          DARABONBA_PTR_FROM_JSON(resources, resources_);
          DARABONBA_PTR_FROM_JSON(schema, schema_);
        };
        Functions() = default ;
        Functions(const Functions &) = default ;
        Functions(Functions &&) = default ;
        Functions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Functions() = default ;
        Functions& operator=(const Functions &) = default ;
        Functions& operator=(Functions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->class_ == nullptr
        && this->creationTime_ == nullptr && this->displayName_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->resources_ == nullptr
        && this->schema_ == nullptr; };
        // class Field Functions 
        bool hasClass() const { return this->class_ != nullptr;};
        void deleteClass() { this->class_ = nullptr;};
        inline string getClass() const { DARABONBA_PTR_GET_DEFAULT(class_, "") };
        inline Functions& setClass(string _class) { DARABONBA_PTR_SET_VALUE(class_, _class) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline int64_t getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
        inline Functions& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Functions& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Functions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Functions& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // resources Field Functions 
        bool hasResources() const { return this->resources_ != nullptr;};
        void deleteResources() { this->resources_ = nullptr;};
        inline string getResources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
        inline Functions& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


        // schema Field Functions 
        bool hasSchema() const { return this->schema_ != nullptr;};
        void deleteSchema() { this->schema_ = nullptr;};
        inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
        inline Functions& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


      protected:
        // The class in which the function was defined.
        shared_ptr<string> class_ {};
        // The time when the function was created. Unit: milliseconds.
        shared_ptr<int64_t> creationTime_ {};
        // The display name of the function.
        shared_ptr<string> displayName_ {};
        // The name of the function.
        shared_ptr<string> name_ {};
        // The owner of the function.
        shared_ptr<string> owner_ {};
        // The name of the resource that was associated with the function.
        shared_ptr<string> resources_ {};
        // The schema of the function.
        shared_ptr<string> schema_ {};
      };

      virtual bool empty() const override { return this->functions_ == nullptr
        && this->marker_ == nullptr && this->maxItem_ == nullptr; };
      // functions Field Functions 
      bool hasFunctions() const { return this->functions_ != nullptr;};
      void deleteFunctions() { this->functions_ = nullptr;};
      inline const vector<Data::Functions> & getFunctions() const { DARABONBA_PTR_GET_CONST(functions_, vector<Data::Functions>) };
      inline vector<Data::Functions> getFunctions() { DARABONBA_PTR_GET(functions_, vector<Data::Functions>) };
      inline Data& setFunctions(const vector<Data::Functions> & functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };
      inline Data& setFunctions(vector<Data::Functions> && functions) { DARABONBA_PTR_SET_RVALUE(functions_, functions) };


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


    protected:
      // The information about each function.
      shared_ptr<vector<Data::Functions>> functions_ {};
      // Indicates the marker after which the returned list begins.
      shared_ptr<string> marker_ {};
      // The maximum number of entries returned per page.
      shared_ptr<int32_t> maxItem_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListFunctionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListFunctionsResponseBody::Data) };
    inline ListFunctionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListFunctionsResponseBody::Data) };
    inline ListFunctionsResponseBody& setData(const ListFunctionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListFunctionsResponseBody& setData(ListFunctionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFunctionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ListFunctionsResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
