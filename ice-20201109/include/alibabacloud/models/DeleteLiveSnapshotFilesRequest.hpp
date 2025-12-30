// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVESNAPSHOTFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVESNAPSHOTFILESREQUEST_HPP_
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
  class DeleteLiveSnapshotFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveSnapshotFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimestampList, createTimestampList_);
      DARABONBA_PTR_TO_JSON(DeleteOriginalFile, deleteOriginalFile_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveSnapshotFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimestampList, createTimestampList_);
      DARABONBA_PTR_FROM_JSON(DeleteOriginalFile, deleteOriginalFile_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    DeleteLiveSnapshotFilesRequest() = default ;
    DeleteLiveSnapshotFilesRequest(const DeleteLiveSnapshotFilesRequest &) = default ;
    DeleteLiveSnapshotFilesRequest(DeleteLiveSnapshotFilesRequest &&) = default ;
    DeleteLiveSnapshotFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveSnapshotFilesRequest() = default ;
    DeleteLiveSnapshotFilesRequest& operator=(const DeleteLiveSnapshotFilesRequest &) = default ;
    DeleteLiveSnapshotFilesRequest& operator=(DeleteLiveSnapshotFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTimestampList_ == nullptr
        && this->deleteOriginalFile_ == nullptr && this->jobId_ == nullptr; };
    // createTimestampList Field Functions 
    bool hasCreateTimestampList() const { return this->createTimestampList_ != nullptr;};
    void deleteCreateTimestampList() { this->createTimestampList_ = nullptr;};
    inline const vector<int64_t> & getCreateTimestampList() const { DARABONBA_PTR_GET_CONST(createTimestampList_, vector<int64_t>) };
    inline vector<int64_t> getCreateTimestampList() { DARABONBA_PTR_GET(createTimestampList_, vector<int64_t>) };
    inline DeleteLiveSnapshotFilesRequest& setCreateTimestampList(const vector<int64_t> & createTimestampList) { DARABONBA_PTR_SET_VALUE(createTimestampList_, createTimestampList) };
    inline DeleteLiveSnapshotFilesRequest& setCreateTimestampList(vector<int64_t> && createTimestampList) { DARABONBA_PTR_SET_RVALUE(createTimestampList_, createTimestampList) };


    // deleteOriginalFile Field Functions 
    bool hasDeleteOriginalFile() const { return this->deleteOriginalFile_ != nullptr;};
    void deleteDeleteOriginalFile() { this->deleteOriginalFile_ = nullptr;};
    inline bool getDeleteOriginalFile() const { DARABONBA_PTR_GET_DEFAULT(deleteOriginalFile_, false) };
    inline DeleteLiveSnapshotFilesRequest& setDeleteOriginalFile(bool deleteOriginalFile) { DARABONBA_PTR_SET_VALUE(deleteOriginalFile_, deleteOriginalFile) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DeleteLiveSnapshotFilesRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The list of timestamps when the jobs were created. The values are UNIX timestamps representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. A maximum of 200 jobs can be deleted at a time.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> createTimestampList_ {};
    // Specifies whether to delete the original files at the same time. Default value: false.
    shared_ptr<bool> deleteOriginalFile_ {};
    // The ID of the snapshot job.
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
