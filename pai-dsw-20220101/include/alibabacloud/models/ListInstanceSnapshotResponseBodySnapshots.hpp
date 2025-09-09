// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESNAPSHOTRESPONSEBODYSNAPSHOTS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESNAPSHOTRESPONSEBODYSNAPSHOTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceSnapshotResponseBodySnapshotsLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ListInstanceSnapshotResponseBodySnapshots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceSnapshotResponseBodySnapshots& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludePaths, excludePaths_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceSnapshotResponseBodySnapshots& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludePaths, excludePaths_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListInstanceSnapshotResponseBodySnapshots() = default ;
    ListInstanceSnapshotResponseBodySnapshots(const ListInstanceSnapshotResponseBodySnapshots &) = default ;
    ListInstanceSnapshotResponseBodySnapshots(ListInstanceSnapshotResponseBodySnapshots &&) = default ;
    ListInstanceSnapshotResponseBodySnapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceSnapshotResponseBodySnapshots() = default ;
    ListInstanceSnapshotResponseBodySnapshots& operator=(const ListInstanceSnapshotResponseBodySnapshots &) = default ;
    ListInstanceSnapshotResponseBodySnapshots& operator=(ListInstanceSnapshotResponseBodySnapshots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->excludePaths_ != nullptr
        && this->gmtCreateTime_ != nullptr && this->gmtModifiedTime_ != nullptr && this->imageId_ != nullptr && this->imageUrl_ != nullptr && this->instanceId_ != nullptr
        && this->labels_ != nullptr && this->reasonCode_ != nullptr && this->reasonMessage_ != nullptr && this->snapshotId_ != nullptr && this->snapshotName_ != nullptr
        && this->status_ != nullptr; };
    // excludePaths Field Functions 
    bool hasExcludePaths() const { return this->excludePaths_ != nullptr;};
    void deleteExcludePaths() { this->excludePaths_ = nullptr;};
    inline const vector<string> & excludePaths() const { DARABONBA_PTR_GET_CONST(excludePaths_, vector<string>) };
    inline vector<string> excludePaths() { DARABONBA_PTR_GET(excludePaths_, vector<string>) };
    inline ListInstanceSnapshotResponseBodySnapshots& setExcludePaths(const vector<string> & excludePaths) { DARABONBA_PTR_SET_VALUE(excludePaths_, excludePaths) };
    inline ListInstanceSnapshotResponseBodySnapshots& setExcludePaths(vector<string> && excludePaths) { DARABONBA_PTR_SET_RVALUE(excludePaths_, excludePaths) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListInstanceSnapshotResponseBodySnapshots& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListInstanceSnapshotResponseBodySnapshots& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListInstanceSnapshotResponseBodySnapshots& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ListInstanceSnapshotResponseBodySnapshots& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceSnapshotResponseBodySnapshots& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::ListInstanceSnapshotResponseBodySnapshotsLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::ListInstanceSnapshotResponseBodySnapshotsLabels>) };
    inline vector<Models::ListInstanceSnapshotResponseBodySnapshotsLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::ListInstanceSnapshotResponseBodySnapshotsLabels>) };
    inline ListInstanceSnapshotResponseBodySnapshots& setLabels(const vector<Models::ListInstanceSnapshotResponseBodySnapshotsLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListInstanceSnapshotResponseBodySnapshots& setLabels(vector<Models::ListInstanceSnapshotResponseBodySnapshotsLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline ListInstanceSnapshotResponseBodySnapshots& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string reasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline ListInstanceSnapshotResponseBodySnapshots& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline ListInstanceSnapshotResponseBodySnapshots& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // snapshotName Field Functions 
    bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
    void deleteSnapshotName() { this->snapshotName_ = nullptr;};
    inline string snapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
    inline ListInstanceSnapshotResponseBodySnapshots& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstanceSnapshotResponseBodySnapshots& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<string>> excludePaths_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<vector<Models::ListInstanceSnapshotResponseBodySnapshotsLabels>> labels_ = nullptr;
    std::shared_ptr<string> reasonCode_ = nullptr;
    std::shared_ptr<string> reasonMessage_ = nullptr;
    std::shared_ptr<string> snapshotId_ = nullptr;
    std::shared_ptr<string> snapshotName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
