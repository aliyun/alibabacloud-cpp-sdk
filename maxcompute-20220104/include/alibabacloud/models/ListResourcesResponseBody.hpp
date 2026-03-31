// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODY_HPP_
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
  class ListResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListResourcesResponseBody() = default ;
    ListResourcesResponseBody(const ListResourcesResponseBody &) = default ;
    ListResourcesResponseBody(ListResourcesResponseBody &&) = default ;
    ListResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesResponseBody() = default ;
    ListResourcesResponseBody& operator=(const ListResourcesResponseBody &) = default ;
    ListResourcesResponseBody& operator=(ListResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(marker, marker_);
        DARABONBA_PTR_TO_JSON(maxItem, maxItem_);
        DARABONBA_PTR_TO_JSON(resources, resources_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(marker, marker_);
        DARABONBA_PTR_FROM_JSON(maxItem, maxItem_);
        DARABONBA_PTR_FROM_JSON(resources, resources_);
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
      class Resources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Resources& obj) { 
          DARABONBA_PTR_TO_JSON(comment, comment_);
          DARABONBA_PTR_TO_JSON(contentMD5, contentMD5_);
          DARABONBA_PTR_TO_JSON(creationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(displayName, displayName_);
          DARABONBA_PTR_TO_JSON(lastModifiedTime, lastModifiedTime_);
          DARABONBA_PTR_TO_JSON(lastUpdator, lastUpdator_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(owner, owner_);
          DARABONBA_PTR_TO_JSON(schema, schema_);
          DARABONBA_PTR_TO_JSON(size, size_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Resources& obj) { 
          DARABONBA_PTR_FROM_JSON(comment, comment_);
          DARABONBA_PTR_FROM_JSON(contentMD5, contentMD5_);
          DARABONBA_PTR_FROM_JSON(creationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(displayName, displayName_);
          DARABONBA_PTR_FROM_JSON(lastModifiedTime, lastModifiedTime_);
          DARABONBA_PTR_FROM_JSON(lastUpdator, lastUpdator_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(owner, owner_);
          DARABONBA_PTR_FROM_JSON(schema, schema_);
          DARABONBA_PTR_FROM_JSON(size, size_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Resources() = default ;
        Resources(const Resources &) = default ;
        Resources(Resources &&) = default ;
        Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Resources() = default ;
        Resources& operator=(const Resources &) = default ;
        Resources& operator=(Resources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comment_ == nullptr
        && this->contentMD5_ == nullptr && this->creationTime_ == nullptr && this->displayName_ == nullptr && this->lastModifiedTime_ == nullptr && this->lastUpdator_ == nullptr
        && this->name_ == nullptr && this->owner_ == nullptr && this->schema_ == nullptr && this->size_ == nullptr && this->type_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline Resources& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // contentMD5 Field Functions 
        bool hasContentMD5() const { return this->contentMD5_ != nullptr;};
        void deleteContentMD5() { this->contentMD5_ = nullptr;};
        inline string getContentMD5() const { DARABONBA_PTR_GET_DEFAULT(contentMD5_, "") };
        inline Resources& setContentMD5(string contentMD5) { DARABONBA_PTR_SET_VALUE(contentMD5_, contentMD5) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline int64_t getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
        inline Resources& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Resources& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // lastModifiedTime Field Functions 
        bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
        void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
        inline int64_t getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
        inline Resources& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


        // lastUpdator Field Functions 
        bool hasLastUpdator() const { return this->lastUpdator_ != nullptr;};
        void deleteLastUpdator() { this->lastUpdator_ = nullptr;};
        inline string getLastUpdator() const { DARABONBA_PTR_GET_DEFAULT(lastUpdator_, "") };
        inline Resources& setLastUpdator(string lastUpdator) { DARABONBA_PTR_SET_VALUE(lastUpdator_, lastUpdator) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Resources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Resources& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // schema Field Functions 
        bool hasSchema() const { return this->schema_ != nullptr;};
        void deleteSchema() { this->schema_ = nullptr;};
        inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
        inline Resources& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline Resources& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Resources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The remarks.
        shared_ptr<string> comment_ {};
        // The Base64-encoded 128-bit MD5 hash value of the HTTP request body.
        shared_ptr<string> contentMD5_ {};
        // The time when the resource was created.
        shared_ptr<int64_t> creationTime_ {};
        // The display name.
        shared_ptr<string> displayName_ {};
        // The time when the resource was modified.
        shared_ptr<int64_t> lastModifiedTime_ {};
        // The user who updated the resource.
        shared_ptr<string> lastUpdator_ {};
        // The name of the resource.
        shared_ptr<string> name_ {};
        // The owner of the resource.
        shared_ptr<string> owner_ {};
        // The schema to which the resource belongs.
        shared_ptr<string> schema_ {};
        // The size of the resource.
        shared_ptr<int64_t> size_ {};
        // The resource type.
        // 
        // Valid values:
        // 
        // *   file
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        // *   py
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        // *   jar
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        // *   volumefile
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        // *   table
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->marker_ == nullptr
        && this->maxItem_ == nullptr && this->resources_ == nullptr; };
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


      // resources Field Functions 
      bool hasResources() const { return this->resources_ != nullptr;};
      void deleteResources() { this->resources_ = nullptr;};
      inline const vector<Data::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<Data::Resources>) };
      inline vector<Data::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<Data::Resources>) };
      inline Data& setResources(const vector<Data::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
      inline Data& setResources(vector<Data::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    protected:
      // Indicates the marker after which the returned list begins.
      shared_ptr<string> marker_ {};
      // The maximum number of entries returned per page.
      shared_ptr<int32_t> maxItem_ {};
      // The list of resources.
      shared_ptr<vector<Data::Resources>> resources_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListResourcesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListResourcesResponseBody::Data) };
    inline ListResourcesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListResourcesResponseBody::Data) };
    inline ListResourcesResponseBody& setData(const ListResourcesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListResourcesResponseBody& setData(ListResourcesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ListResourcesResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
