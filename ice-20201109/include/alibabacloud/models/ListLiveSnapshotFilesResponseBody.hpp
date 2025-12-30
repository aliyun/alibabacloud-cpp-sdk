// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVESNAPSHOTFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVESNAPSHOTFILESRESPONSEBODY_HPP_
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
  class ListLiveSnapshotFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveSnapshotFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileList, fileList_);
      DARABONBA_PTR_TO_JSON(NextStartTime, nextStartTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveSnapshotFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileList, fileList_);
      DARABONBA_PTR_FROM_JSON(NextStartTime, nextStartTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLiveSnapshotFilesResponseBody() = default ;
    ListLiveSnapshotFilesResponseBody(const ListLiveSnapshotFilesResponseBody &) = default ;
    ListLiveSnapshotFilesResponseBody(ListLiveSnapshotFilesResponseBody &&) = default ;
    ListLiveSnapshotFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveSnapshotFilesResponseBody() = default ;
    ListLiveSnapshotFilesResponseBody& operator=(const ListLiveSnapshotFilesResponseBody &) = default ;
    ListLiveSnapshotFilesResponseBody& operator=(ListLiveSnapshotFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FileList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileList& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(IsOverlay, isOverlay_);
        DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
        DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
        DARABONBA_PTR_TO_JSON(OssObject, ossObject_);
      };
      friend void from_json(const Darabonba::Json& j, FileList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(IsOverlay, isOverlay_);
        DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
        DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
        DARABONBA_PTR_FROM_JSON(OssObject, ossObject_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->isOverlay_ == nullptr && this->ossBucket_ == nullptr && this->ossEndpoint_ == nullptr && this->ossObject_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline FileList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline FileList& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // isOverlay Field Functions 
      bool hasIsOverlay() const { return this->isOverlay_ != nullptr;};
      void deleteIsOverlay() { this->isOverlay_ = nullptr;};
      inline bool getIsOverlay() const { DARABONBA_PTR_GET_DEFAULT(isOverlay_, false) };
      inline FileList& setIsOverlay(bool isOverlay) { DARABONBA_PTR_SET_VALUE(isOverlay_, isOverlay) };


      // ossBucket Field Functions 
      bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
      void deleteOssBucket() { this->ossBucket_ = nullptr;};
      inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
      inline FileList& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


      // ossEndpoint Field Functions 
      bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
      void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
      inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
      inline FileList& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


      // ossObject Field Functions 
      bool hasOssObject() const { return this->ossObject_ != nullptr;};
      void deleteOssObject() { this->ossObject_ = nullptr;};
      inline string getOssObject() const { DARABONBA_PTR_GET_DEFAULT(ossObject_, "") };
      inline FileList& setOssObject(string ossObject) { DARABONBA_PTR_SET_VALUE(ossObject_, ossObject) };


    protected:
      // The time when the template was created.
      shared_ptr<string> createTime_ {};
      // The creation timestamp that is used as an input parameter for a delete API operation.
      shared_ptr<int64_t> createTimestamp_ {};
      // Specifies whether to overlay snapshots.
      shared_ptr<bool> isOverlay_ {};
      // The OSS bucket.
      shared_ptr<string> ossBucket_ {};
      // The Object Storage Service (OSS) domain name.
      shared_ptr<string> ossEndpoint_ {};
      // The location in which the OSS object is stored.
      shared_ptr<string> ossObject_ {};
    };

    virtual bool empty() const override { return this->fileList_ == nullptr
        && this->nextStartTime_ == nullptr && this->requestId_ == nullptr; };
    // fileList Field Functions 
    bool hasFileList() const { return this->fileList_ != nullptr;};
    void deleteFileList() { this->fileList_ = nullptr;};
    inline const vector<ListLiveSnapshotFilesResponseBody::FileList> & getFileList() const { DARABONBA_PTR_GET_CONST(fileList_, vector<ListLiveSnapshotFilesResponseBody::FileList>) };
    inline vector<ListLiveSnapshotFilesResponseBody::FileList> getFileList() { DARABONBA_PTR_GET(fileList_, vector<ListLiveSnapshotFilesResponseBody::FileList>) };
    inline ListLiveSnapshotFilesResponseBody& setFileList(const vector<ListLiveSnapshotFilesResponseBody::FileList> & fileList) { DARABONBA_PTR_SET_VALUE(fileList_, fileList) };
    inline ListLiveSnapshotFilesResponseBody& setFileList(vector<ListLiveSnapshotFilesResponseBody::FileList> && fileList) { DARABONBA_PTR_SET_RVALUE(fileList_, fileList) };


    // nextStartTime Field Functions 
    bool hasNextStartTime() const { return this->nextStartTime_ != nullptr;};
    void deleteNextStartTime() { this->nextStartTime_ = nullptr;};
    inline string getNextStartTime() const { DARABONBA_PTR_GET_DEFAULT(nextStartTime_, "") };
    inline ListLiveSnapshotFilesResponseBody& setNextStartTime(string nextStartTime) { DARABONBA_PTR_SET_VALUE(nextStartTime_, nextStartTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveSnapshotFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of files.
    shared_ptr<vector<ListLiveSnapshotFilesResponseBody::FileList>> fileList_ {};
    // The start time of the next page. If no value is returned, the pagination ends.
    shared_ptr<string> nextStartTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
