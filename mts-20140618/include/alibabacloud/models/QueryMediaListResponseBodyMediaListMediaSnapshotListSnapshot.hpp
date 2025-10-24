// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIASNAPSHOTLISTSNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIASNAPSHOTLISTSNAPSHOT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshotFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(MediaWorkflowId, mediaWorkflowId_);
      DARABONBA_PTR_TO_JSON(MediaWorkflowName, mediaWorkflowName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(MediaWorkflowId, mediaWorkflowId_);
      DARABONBA_PTR_FROM_JSON(MediaWorkflowName, mediaWorkflowName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot() = default ;
    QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot(const QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot &) = default ;
    QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot(QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot &&) = default ;
    QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot() = default ;
    QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot& operator=(const QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot &) = default ;
    QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot& operator=(QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityName_ == nullptr
        && return this->count_ == nullptr && return this->file_ == nullptr && return this->mediaWorkflowId_ == nullptr && return this->mediaWorkflowName_ == nullptr && return this->type_ == nullptr; };
    // activityName Field Functions 
    bool hasActivityName() const { return this->activityName_ != nullptr;};
    void deleteActivityName() { this->activityName_ = nullptr;};
    inline string activityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
    inline QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline const Models::QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshotFile & file() const { DARABONBA_PTR_GET_CONST(file_, Models::QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshotFile) };
    inline Models::QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshotFile file() { DARABONBA_PTR_GET(file_, Models::QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshotFile) };
    inline QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot& setFile(const Models::QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshotFile & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
    inline QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot& setFile(Models::QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshotFile && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


    // mediaWorkflowId Field Functions 
    bool hasMediaWorkflowId() const { return this->mediaWorkflowId_ != nullptr;};
    void deleteMediaWorkflowId() { this->mediaWorkflowId_ = nullptr;};
    inline string mediaWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowId_, "") };
    inline QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot& setMediaWorkflowId(string mediaWorkflowId) { DARABONBA_PTR_SET_VALUE(mediaWorkflowId_, mediaWorkflowId) };


    // mediaWorkflowName Field Functions 
    bool hasMediaWorkflowName() const { return this->mediaWorkflowName_ != nullptr;};
    void deleteMediaWorkflowName() { this->mediaWorkflowName_ = nullptr;};
    inline string mediaWorkflowName() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowName_, "") };
    inline QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot& setMediaWorkflowName(string mediaWorkflowName) { DARABONBA_PTR_SET_VALUE(mediaWorkflowName_, mediaWorkflowName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the workflow activity that generates the snapshot.
    std::shared_ptr<string> activityName_ = nullptr;
    // The number of snapshots. This parameter is valid only when the value of the **Type** parameter is **Sequence**.
    std::shared_ptr<string> count_ = nullptr;
    // The snapshot.
    std::shared_ptr<Models::QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshotFile> file_ = nullptr;
    // The ID of the workflow that generates the snapshot.
    std::shared_ptr<string> mediaWorkflowId_ = nullptr;
    // The name of the workflow that generates the snapshot.
    std::shared_ptr<string> mediaWorkflowName_ = nullptr;
    // The type of the snapshot. Valid values:
    // 
    // - **Single**
    // - **Sequence**
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
