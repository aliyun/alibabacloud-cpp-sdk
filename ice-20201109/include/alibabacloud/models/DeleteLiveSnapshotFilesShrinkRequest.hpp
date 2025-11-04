// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVESNAPSHOTFILESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVESNAPSHOTFILESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteLiveSnapshotFilesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveSnapshotFilesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimestampList, createTimestampListShrink_);
      DARABONBA_PTR_TO_JSON(DeleteOriginalFile, deleteOriginalFile_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveSnapshotFilesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimestampList, createTimestampListShrink_);
      DARABONBA_PTR_FROM_JSON(DeleteOriginalFile, deleteOriginalFile_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    DeleteLiveSnapshotFilesShrinkRequest() = default ;
    DeleteLiveSnapshotFilesShrinkRequest(const DeleteLiveSnapshotFilesShrinkRequest &) = default ;
    DeleteLiveSnapshotFilesShrinkRequest(DeleteLiveSnapshotFilesShrinkRequest &&) = default ;
    DeleteLiveSnapshotFilesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveSnapshotFilesShrinkRequest() = default ;
    DeleteLiveSnapshotFilesShrinkRequest& operator=(const DeleteLiveSnapshotFilesShrinkRequest &) = default ;
    DeleteLiveSnapshotFilesShrinkRequest& operator=(DeleteLiveSnapshotFilesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTimestampListShrink_ == nullptr
        && return this->deleteOriginalFile_ == nullptr && return this->jobId_ == nullptr; };
    // createTimestampListShrink Field Functions 
    bool hasCreateTimestampListShrink() const { return this->createTimestampListShrink_ != nullptr;};
    void deleteCreateTimestampListShrink() { this->createTimestampListShrink_ = nullptr;};
    inline string createTimestampListShrink() const { DARABONBA_PTR_GET_DEFAULT(createTimestampListShrink_, "") };
    inline DeleteLiveSnapshotFilesShrinkRequest& setCreateTimestampListShrink(string createTimestampListShrink) { DARABONBA_PTR_SET_VALUE(createTimestampListShrink_, createTimestampListShrink) };


    // deleteOriginalFile Field Functions 
    bool hasDeleteOriginalFile() const { return this->deleteOriginalFile_ != nullptr;};
    void deleteDeleteOriginalFile() { this->deleteOriginalFile_ = nullptr;};
    inline bool deleteOriginalFile() const { DARABONBA_PTR_GET_DEFAULT(deleteOriginalFile_, false) };
    inline DeleteLiveSnapshotFilesShrinkRequest& setDeleteOriginalFile(bool deleteOriginalFile) { DARABONBA_PTR_SET_VALUE(deleteOriginalFile_, deleteOriginalFile) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DeleteLiveSnapshotFilesShrinkRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The list of timestamps when the jobs were created. The values are UNIX timestamps representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. A maximum of 200 jobs can be deleted at a time.
    // 
    // This parameter is required.
    std::shared_ptr<string> createTimestampListShrink_ = nullptr;
    // Specifies whether to delete the original files at the same time. Default value: false.
    std::shared_ptr<bool> deleteOriginalFile_ = nullptr;
    // The ID of the snapshot job.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
