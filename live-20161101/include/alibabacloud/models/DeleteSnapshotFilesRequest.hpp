// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESNAPSHOTFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESNAPSHOTFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteSnapshotFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSnapshotFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CreateTimestampList, createTimestampList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoveFile, removeFile_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSnapshotFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CreateTimestampList, createTimestampList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoveFile, removeFile_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    DeleteSnapshotFilesRequest() = default ;
    DeleteSnapshotFilesRequest(const DeleteSnapshotFilesRequest &) = default ;
    DeleteSnapshotFilesRequest(DeleteSnapshotFilesRequest &&) = default ;
    DeleteSnapshotFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSnapshotFilesRequest() = default ;
    DeleteSnapshotFilesRequest& operator=(const DeleteSnapshotFilesRequest &) = default ;
    DeleteSnapshotFilesRequest& operator=(DeleteSnapshotFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->createTimestampList_ == nullptr && this->domainName_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->removeFile_ == nullptr
        && this->streamName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DeleteSnapshotFilesRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // createTimestampList Field Functions 
    bool hasCreateTimestampList() const { return this->createTimestampList_ != nullptr;};
    void deleteCreateTimestampList() { this->createTimestampList_ = nullptr;};
    inline const vector<int64_t> & getCreateTimestampList() const { DARABONBA_PTR_GET_CONST(createTimestampList_, vector<int64_t>) };
    inline vector<int64_t> getCreateTimestampList() { DARABONBA_PTR_GET(createTimestampList_, vector<int64_t>) };
    inline DeleteSnapshotFilesRequest& setCreateTimestampList(const vector<int64_t> & createTimestampList) { DARABONBA_PTR_SET_VALUE(createTimestampList_, createTimestampList) };
    inline DeleteSnapshotFilesRequest& setCreateTimestampList(vector<int64_t> && createTimestampList) { DARABONBA_PTR_SET_RVALUE(createTimestampList_, createTimestampList) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DeleteSnapshotFilesRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteSnapshotFilesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteSnapshotFilesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removeFile Field Functions 
    bool hasRemoveFile() const { return this->removeFile_ != nullptr;};
    void deleteRemoveFile() { this->removeFile_ = nullptr;};
    inline bool getRemoveFile() const { DARABONBA_PTR_GET_DEFAULT(removeFile_, false) };
    inline DeleteSnapshotFilesRequest& setRemoveFile(bool removeFile) { DARABONBA_PTR_SET_VALUE(removeFile_, removeFile) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DeleteSnapshotFilesRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The name of the application to which the live stream belongs.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The timestamps when the snapshots that you want to delete were captured.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> createTimestampList_ {};
    // The main streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
    // Specifies whether to also delete the corresponding file in Object Storage Service (OSS) at the same time. Value values:
    // 
    // *   **true**: deletes the corresponding file in OSS.
    // *   **false**: does not delete the corresponding file in OSS.
    // 
    // >  To delete the corresponding file in OSS, you must have the permissions on the OSS bucket.
    // 
    // This parameter is required.
    shared_ptr<bool> removeFile_ {};
    // The name of the live stream.
    // 
    // This parameter is required.
    shared_ptr<string> streamName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
