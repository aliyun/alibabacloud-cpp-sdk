// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVESTREAMRECORDINDEXFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVESTREAMRECORDINDEXFILESREQUEST_HPP_
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
  class DeleteLiveStreamRecordIndexFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveStreamRecordIndexFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoveFile, removeFile_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveStreamRecordIndexFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoveFile, removeFile_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    DeleteLiveStreamRecordIndexFilesRequest() = default ;
    DeleteLiveStreamRecordIndexFilesRequest(const DeleteLiveStreamRecordIndexFilesRequest &) = default ;
    DeleteLiveStreamRecordIndexFilesRequest(DeleteLiveStreamRecordIndexFilesRequest &&) = default ;
    DeleteLiveStreamRecordIndexFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveStreamRecordIndexFilesRequest() = default ;
    DeleteLiveStreamRecordIndexFilesRequest& operator=(const DeleteLiveStreamRecordIndexFilesRequest &) = default ;
    DeleteLiveStreamRecordIndexFilesRequest& operator=(DeleteLiveStreamRecordIndexFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->domainName_ != nullptr && this->ownerId_ != nullptr && this->recordId_ != nullptr && this->regionId_ != nullptr && this->removeFile_ != nullptr
        && this->streamName_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DeleteLiveStreamRecordIndexFilesRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DeleteLiveStreamRecordIndexFilesRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteLiveStreamRecordIndexFilesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline const vector<string> & recordId() const { DARABONBA_PTR_GET_CONST(recordId_, vector<string>) };
    inline vector<string> recordId() { DARABONBA_PTR_GET(recordId_, vector<string>) };
    inline DeleteLiveStreamRecordIndexFilesRequest& setRecordId(const vector<string> & recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };
    inline DeleteLiveStreamRecordIndexFilesRequest& setRecordId(vector<string> && recordId) { DARABONBA_PTR_SET_RVALUE(recordId_, recordId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteLiveStreamRecordIndexFilesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removeFile Field Functions 
    bool hasRemoveFile() const { return this->removeFile_ != nullptr;};
    void deleteRemoveFile() { this->removeFile_ = nullptr;};
    inline string removeFile() const { DARABONBA_PTR_GET_DEFAULT(removeFile_, "") };
    inline DeleteLiveStreamRecordIndexFilesRequest& setRemoveFile(string removeFile) { DARABONBA_PTR_SET_VALUE(removeFile_, removeFile) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DeleteLiveStreamRecordIndexFilesRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The name of the application to which the live stream belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The name of the main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The index file IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> recordId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to delete the corresponding file in Object Storage Service (OSS) synchronously. Valid values:
    // 
    // *   **true**: The corresponding file in OSS is deleted.
    // *   **false**: The corresponding file in OSS is not deleted.
    // 
    // This parameter is required.
    std::shared_ptr<string> removeFile_ = nullptr;
    // The name of the live stream.
    // 
    // This parameter is required.
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
