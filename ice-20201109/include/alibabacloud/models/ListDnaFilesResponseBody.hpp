// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDNAFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDNAFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListDNAFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDNAFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileList, fileList_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDNAFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileList, fileList_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDNAFilesResponseBody() = default ;
    ListDNAFilesResponseBody(const ListDNAFilesResponseBody &) = default ;
    ListDNAFilesResponseBody(ListDNAFilesResponseBody &&) = default ;
    ListDNAFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDNAFilesResponseBody() = default ;
    ListDNAFilesResponseBody& operator=(const ListDNAFilesResponseBody &) = default ;
    ListDNAFilesResponseBody& operator=(ListDNAFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FileList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileList& obj) { 
        DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
        DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
      };
      friend void from_json(const Darabonba::Json& j, FileList& obj) { 
        DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
        DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
      };
      FileList() = default ;
      FileList(const FileList &) = default ;
      FileList(FileList &&) = default ;
      FileList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileList() = default ;
      FileList& operator=(const FileList &) = default ;
      FileList& operator=(FileList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InputFile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InputFile& obj) { 
          DARABONBA_PTR_TO_JSON(Bucket, bucket_);
          DARABONBA_PTR_TO_JSON(Location, location_);
          DARABONBA_PTR_TO_JSON(Object, object_);
        };
        friend void from_json(const Darabonba::Json& j, InputFile& obj) { 
          DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
          DARABONBA_PTR_FROM_JSON(Location, location_);
          DARABONBA_PTR_FROM_JSON(Object, object_);
        };
        InputFile() = default ;
        InputFile(const InputFile &) = default ;
        InputFile(InputFile &&) = default ;
        InputFile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InputFile() = default ;
        InputFile& operator=(const InputFile &) = default ;
        InputFile& operator=(InputFile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucket_ == nullptr
        && this->location_ == nullptr && this->object_ == nullptr; };
        // bucket Field Functions 
        bool hasBucket() const { return this->bucket_ != nullptr;};
        void deleteBucket() { this->bucket_ = nullptr;};
        inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
        inline InputFile& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline InputFile& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // object Field Functions 
        bool hasObject() const { return this->object_ != nullptr;};
        void deleteObject() { this->object_ = nullptr;};
        inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
        inline InputFile& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


      protected:
        // The name of the OSS bucket in which the input file is stored.
        shared_ptr<string> bucket_ {};
        // The OSS region in which the input file resides.
        shared_ptr<string> location_ {};
        // The name of the OSS object that is used as the input file.
        shared_ptr<string> object_ {};
      };

      virtual bool empty() const override { return this->inputFile_ == nullptr
        && this->primaryKey_ == nullptr; };
      // inputFile Field Functions 
      bool hasInputFile() const { return this->inputFile_ != nullptr;};
      void deleteInputFile() { this->inputFile_ = nullptr;};
      inline const FileList::InputFile & getInputFile() const { DARABONBA_PTR_GET_CONST(inputFile_, FileList::InputFile) };
      inline FileList::InputFile getInputFile() { DARABONBA_PTR_GET(inputFile_, FileList::InputFile) };
      inline FileList& setInputFile(const FileList::InputFile & inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };
      inline FileList& setInputFile(FileList::InputFile && inputFile) { DARABONBA_PTR_SET_RVALUE(inputFile_, inputFile) };


      // primaryKey Field Functions 
      bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
      void deletePrimaryKey() { this->primaryKey_ = nullptr;};
      inline string getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
      inline FileList& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    protected:
      // The Object Storage Service (OSS) information about the input file.
      shared_ptr<FileList::InputFile> inputFile_ {};
      // The primary key of the file.
      shared_ptr<string> primaryKey_ {};
    };

    virtual bool empty() const override { return this->fileList_ == nullptr
        && this->nextPageToken_ == nullptr && this->requestId_ == nullptr; };
    // fileList Field Functions 
    bool hasFileList() const { return this->fileList_ != nullptr;};
    void deleteFileList() { this->fileList_ = nullptr;};
    inline const vector<ListDNAFilesResponseBody::FileList> & getFileList() const { DARABONBA_PTR_GET_CONST(fileList_, vector<ListDNAFilesResponseBody::FileList>) };
    inline vector<ListDNAFilesResponseBody::FileList> getFileList() { DARABONBA_PTR_GET(fileList_, vector<ListDNAFilesResponseBody::FileList>) };
    inline ListDNAFilesResponseBody& setFileList(const vector<ListDNAFilesResponseBody::FileList> & fileList) { DARABONBA_PTR_SET_VALUE(fileList_, fileList) };
    inline ListDNAFilesResponseBody& setFileList(vector<ListDNAFilesResponseBody::FileList> && fileList) { DARABONBA_PTR_SET_RVALUE(fileList_, fileList) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListDNAFilesResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDNAFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried files.
    shared_ptr<vector<ListDNAFilesResponseBody::FileList>> fileList_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextPageToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
