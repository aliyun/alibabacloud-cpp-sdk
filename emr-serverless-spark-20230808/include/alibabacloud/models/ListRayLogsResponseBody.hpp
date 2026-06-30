// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRAYLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRAYLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListRayLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRayLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRayLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListRayLogsResponseBody() = default ;
    ListRayLogsResponseBody(const ListRayLogsResponseBody &) = default ;
    ListRayLogsResponseBody(ListRayLogsResponseBody &&) = default ;
    ListRayLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRayLogsResponseBody() = default ;
    ListRayLogsResponseBody& operator=(const ListRayLogsResponseBody &) = default ;
    ListRayLogsResponseBody& operator=(ListRayLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(delimiter, delimiter_);
        DARABONBA_PTR_TO_JSON(isTruncated, isTruncated_);
        DARABONBA_PTR_TO_JSON(marker, marker_);
        DARABONBA_PTR_TO_JSON(maxKeys, maxKeys_);
        DARABONBA_PTR_TO_JSON(nextMarker, nextMarker_);
        DARABONBA_PTR_TO_JSON(objectList, objectList_);
        DARABONBA_PTR_TO_JSON(prefix, prefix_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(delimiter, delimiter_);
        DARABONBA_PTR_FROM_JSON(isTruncated, isTruncated_);
        DARABONBA_PTR_FROM_JSON(marker, marker_);
        DARABONBA_PTR_FROM_JSON(maxKeys, maxKeys_);
        DARABONBA_PTR_FROM_JSON(nextMarker, nextMarker_);
        DARABONBA_PTR_FROM_JSON(objectList, objectList_);
        DARABONBA_PTR_FROM_JSON(prefix, prefix_);
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
      class ObjectList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ObjectList& obj) { 
          DARABONBA_PTR_TO_JSON(isDir, isDir_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(path, path_);
          DARABONBA_PTR_TO_JSON(size, size_);
          DARABONBA_PTR_TO_JSON(timeModified, timeModified_);
        };
        friend void from_json(const Darabonba::Json& j, ObjectList& obj) { 
          DARABONBA_PTR_FROM_JSON(isDir, isDir_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(path, path_);
          DARABONBA_PTR_FROM_JSON(size, size_);
          DARABONBA_PTR_FROM_JSON(timeModified, timeModified_);
        };
        ObjectList() = default ;
        ObjectList(const ObjectList &) = default ;
        ObjectList(ObjectList &&) = default ;
        ObjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ObjectList() = default ;
        ObjectList& operator=(const ObjectList &) = default ;
        ObjectList& operator=(ObjectList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->isDir_ == nullptr
        && this->name_ == nullptr && this->path_ == nullptr && this->size_ == nullptr && this->timeModified_ == nullptr; };
        // isDir Field Functions 
        bool hasIsDir() const { return this->isDir_ != nullptr;};
        void deleteIsDir() { this->isDir_ = nullptr;};
        inline bool getIsDir() const { DARABONBA_PTR_GET_DEFAULT(isDir_, false) };
        inline ObjectList& setIsDir(bool isDir) { DARABONBA_PTR_SET_VALUE(isDir_, isDir) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ObjectList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline ObjectList& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline ObjectList& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // timeModified Field Functions 
        bool hasTimeModified() const { return this->timeModified_ != nullptr;};
        void deleteTimeModified() { this->timeModified_ = nullptr;};
        inline int64_t getTimeModified() const { DARABONBA_PTR_GET_DEFAULT(timeModified_, 0L) };
        inline ObjectList& setTimeModified(int64_t timeModified) { DARABONBA_PTR_SET_VALUE(timeModified_, timeModified) };


      protected:
        // Indicates whether the entry is a directory.
        shared_ptr<bool> isDir_ {};
        // The name.
        shared_ptr<string> name_ {};
        // The file path.
        shared_ptr<string> path_ {};
        // The file size, in bytes.
        shared_ptr<int64_t> size_ {};
        // The modification time. The value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> timeModified_ {};
      };

      virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->delimiter_ == nullptr && this->isTruncated_ == nullptr && this->marker_ == nullptr && this->maxKeys_ == nullptr && this->nextMarker_ == nullptr
        && this->objectList_ == nullptr && this->prefix_ == nullptr; };
      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline Data& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // delimiter Field Functions 
      bool hasDelimiter() const { return this->delimiter_ != nullptr;};
      void deleteDelimiter() { this->delimiter_ = nullptr;};
      inline string getDelimiter() const { DARABONBA_PTR_GET_DEFAULT(delimiter_, "") };
      inline Data& setDelimiter(string delimiter) { DARABONBA_PTR_SET_VALUE(delimiter_, delimiter) };


      // isTruncated Field Functions 
      bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
      void deleteIsTruncated() { this->isTruncated_ = nullptr;};
      inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
      inline Data& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


      // marker Field Functions 
      bool hasMarker() const { return this->marker_ != nullptr;};
      void deleteMarker() { this->marker_ = nullptr;};
      inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
      inline Data& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


      // maxKeys Field Functions 
      bool hasMaxKeys() const { return this->maxKeys_ != nullptr;};
      void deleteMaxKeys() { this->maxKeys_ = nullptr;};
      inline int64_t getMaxKeys() const { DARABONBA_PTR_GET_DEFAULT(maxKeys_, 0L) };
      inline Data& setMaxKeys(int64_t maxKeys) { DARABONBA_PTR_SET_VALUE(maxKeys_, maxKeys) };


      // nextMarker Field Functions 
      bool hasNextMarker() const { return this->nextMarker_ != nullptr;};
      void deleteNextMarker() { this->nextMarker_ = nullptr;};
      inline string getNextMarker() const { DARABONBA_PTR_GET_DEFAULT(nextMarker_, "") };
      inline Data& setNextMarker(string nextMarker) { DARABONBA_PTR_SET_VALUE(nextMarker_, nextMarker) };


      // objectList Field Functions 
      bool hasObjectList() const { return this->objectList_ != nullptr;};
      void deleteObjectList() { this->objectList_ = nullptr;};
      inline const vector<Data::ObjectList> & getObjectList() const { DARABONBA_PTR_GET_CONST(objectList_, vector<Data::ObjectList>) };
      inline vector<Data::ObjectList> getObjectList() { DARABONBA_PTR_GET(objectList_, vector<Data::ObjectList>) };
      inline Data& setObjectList(const vector<Data::ObjectList> & objectList) { DARABONBA_PTR_SET_VALUE(objectList_, objectList) };
      inline Data& setObjectList(vector<Data::ObjectList> && objectList) { DARABONBA_PTR_SET_RVALUE(objectList_, objectList) };


      // prefix Field Functions 
      bool hasPrefix() const { return this->prefix_ != nullptr;};
      void deletePrefix() { this->prefix_ = nullptr;};
      inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
      inline Data& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    protected:
      // The OSS bucket name.
      shared_ptr<string> bucketName_ {};
      // The character used to group object names. All objects whose names contain the specified prefix and between which the delimiter character appears for the first time are grouped as a set of elements (CommonPrefixes).
      shared_ptr<string> delimiter_ {};
      // Indicates whether the results returned in the request are truncated.
      shared_ptr<bool> isTruncated_ {};
      // The marker after which the returned objects are listed in alphabetical order.
      shared_ptr<string> marker_ {};
      // The maximum number of objects to return.
      shared_ptr<int64_t> maxKeys_ {};
      // The marker from which the next listing of files starts.
      shared_ptr<string> nextMarker_ {};
      // The list of object metadata.
      shared_ptr<vector<Data::ObjectList>> objectList_ {};
      // The prefix that the keys of the returned files must start with.
      shared_ptr<string> prefix_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRayLogsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListRayLogsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListRayLogsResponseBody::Data) };
    inline ListRayLogsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListRayLogsResponseBody::Data) };
    inline ListRayLogsResponseBody& setData(const ListRayLogsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRayLogsResponseBody& setData(ListRayLogsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListRayLogsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRayLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code. The value 1000000 indicates success.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListRayLogsResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
