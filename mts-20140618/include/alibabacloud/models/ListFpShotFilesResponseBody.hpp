// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFPSHOTFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFPSHOTFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListFpShotFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFpShotFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FpShotFileList, fpShotFileList_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFpShotFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FpShotFileList, fpShotFileList_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFpShotFilesResponseBody() = default ;
    ListFpShotFilesResponseBody(const ListFpShotFilesResponseBody &) = default ;
    ListFpShotFilesResponseBody(ListFpShotFilesResponseBody &&) = default ;
    ListFpShotFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFpShotFilesResponseBody() = default ;
    ListFpShotFilesResponseBody& operator=(const ListFpShotFilesResponseBody &) = default ;
    ListFpShotFilesResponseBody& operator=(ListFpShotFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FpShotFileList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FpShotFileList& obj) { 
        DARABONBA_PTR_TO_JSON(FpShotFile, fpShotFile_);
      };
      friend void from_json(const Darabonba::Json& j, FpShotFileList& obj) { 
        DARABONBA_PTR_FROM_JSON(FpShotFile, fpShotFile_);
      };
      FpShotFileList() = default ;
      FpShotFileList(const FpShotFileList &) = default ;
      FpShotFileList(FpShotFileList &&) = default ;
      FpShotFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FpShotFileList() = default ;
      FpShotFileList& operator=(const FpShotFileList &) = default ;
      FpShotFileList& operator=(FpShotFileList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FpShotFile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FpShotFile& obj) { 
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
          DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
          DARABONBA_PTR_TO_JSON(StoreTime, storeTime_);
        };
        friend void from_json(const Darabonba::Json& j, FpShotFile& obj) { 
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
          DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
          DARABONBA_PTR_FROM_JSON(StoreTime, storeTime_);
        };
        FpShotFile() = default ;
        FpShotFile(const FpShotFile &) = default ;
        FpShotFile(FpShotFile &&) = default ;
        FpShotFile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FpShotFile() = default ;
        FpShotFile& operator=(const FpShotFile &) = default ;
        FpShotFile& operator=(FpShotFile &&) = default ;
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
          shared_ptr<string> bucket_ {};
          shared_ptr<string> location_ {};
          shared_ptr<string> object_ {};
        };

        virtual bool empty() const override { return this->fileId_ == nullptr
        && this->inputFile_ == nullptr && this->primaryKey_ == nullptr && this->storeTime_ == nullptr; };
        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
        inline FpShotFile& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // inputFile Field Functions 
        bool hasInputFile() const { return this->inputFile_ != nullptr;};
        void deleteInputFile() { this->inputFile_ = nullptr;};
        inline const FpShotFile::InputFile & getInputFile() const { DARABONBA_PTR_GET_CONST(inputFile_, FpShotFile::InputFile) };
        inline FpShotFile::InputFile getInputFile() { DARABONBA_PTR_GET(inputFile_, FpShotFile::InputFile) };
        inline FpShotFile& setInputFile(const FpShotFile::InputFile & inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };
        inline FpShotFile& setInputFile(FpShotFile::InputFile && inputFile) { DARABONBA_PTR_SET_RVALUE(inputFile_, inputFile) };


        // primaryKey Field Functions 
        bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
        void deletePrimaryKey() { this->primaryKey_ = nullptr;};
        inline string getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
        inline FpShotFile& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


        // storeTime Field Functions 
        bool hasStoreTime() const { return this->storeTime_ != nullptr;};
        void deleteStoreTime() { this->storeTime_ = nullptr;};
        inline string getStoreTime() const { DARABONBA_PTR_GET_DEFAULT(storeTime_, "") };
        inline FpShotFile& setStoreTime(string storeTime) { DARABONBA_PTR_SET_VALUE(storeTime_, storeTime) };


      protected:
        shared_ptr<string> fileId_ {};
        shared_ptr<FpShotFile::InputFile> inputFile_ {};
        shared_ptr<string> primaryKey_ {};
        shared_ptr<string> storeTime_ {};
      };

      virtual bool empty() const override { return this->fpShotFile_ == nullptr; };
      // fpShotFile Field Functions 
      bool hasFpShotFile() const { return this->fpShotFile_ != nullptr;};
      void deleteFpShotFile() { this->fpShotFile_ = nullptr;};
      inline const vector<FpShotFileList::FpShotFile> & getFpShotFile() const { DARABONBA_PTR_GET_CONST(fpShotFile_, vector<FpShotFileList::FpShotFile>) };
      inline vector<FpShotFileList::FpShotFile> getFpShotFile() { DARABONBA_PTR_GET(fpShotFile_, vector<FpShotFileList::FpShotFile>) };
      inline FpShotFileList& setFpShotFile(const vector<FpShotFileList::FpShotFile> & fpShotFile) { DARABONBA_PTR_SET_VALUE(fpShotFile_, fpShotFile) };
      inline FpShotFileList& setFpShotFile(vector<FpShotFileList::FpShotFile> && fpShotFile) { DARABONBA_PTR_SET_RVALUE(fpShotFile_, fpShotFile) };


    protected:
      shared_ptr<vector<FpShotFileList::FpShotFile>> fpShotFile_ {};
    };

    virtual bool empty() const override { return this->fpShotFileList_ == nullptr
        && this->nextPageToken_ == nullptr && this->requestId_ == nullptr; };
    // fpShotFileList Field Functions 
    bool hasFpShotFileList() const { return this->fpShotFileList_ != nullptr;};
    void deleteFpShotFileList() { this->fpShotFileList_ = nullptr;};
    inline const ListFpShotFilesResponseBody::FpShotFileList & getFpShotFileList() const { DARABONBA_PTR_GET_CONST(fpShotFileList_, ListFpShotFilesResponseBody::FpShotFileList) };
    inline ListFpShotFilesResponseBody::FpShotFileList getFpShotFileList() { DARABONBA_PTR_GET(fpShotFileList_, ListFpShotFilesResponseBody::FpShotFileList) };
    inline ListFpShotFilesResponseBody& setFpShotFileList(const ListFpShotFilesResponseBody::FpShotFileList & fpShotFileList) { DARABONBA_PTR_SET_VALUE(fpShotFileList_, fpShotFileList) };
    inline ListFpShotFilesResponseBody& setFpShotFileList(ListFpShotFilesResponseBody::FpShotFileList && fpShotFileList) { DARABONBA_PTR_SET_RVALUE(fpShotFileList_, fpShotFileList) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListFpShotFilesResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFpShotFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListFpShotFilesResponseBody::FpShotFileList> fpShotFileList_ {};
    // The returned value of NextPageToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextPageToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
