// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCLOUDRECORDINGFILESRESPONSEBODYTASKINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCLOUDRECORDINGFILESRESPONSEBODYTASKINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeRtcCloudRecordingFilesResponseBodyTaskInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcCloudRecordingFilesResponseBodyTaskInfo& obj) { 
      DARABONBA_PTR_TO_JSON(RecordFileList, recordFileList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcCloudRecordingFilesResponseBodyTaskInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordFileList, recordFileList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeRtcCloudRecordingFilesResponseBodyTaskInfo() = default ;
    DescribeRtcCloudRecordingFilesResponseBodyTaskInfo(const DescribeRtcCloudRecordingFilesResponseBodyTaskInfo &) = default ;
    DescribeRtcCloudRecordingFilesResponseBodyTaskInfo(DescribeRtcCloudRecordingFilesResponseBodyTaskInfo &&) = default ;
    DescribeRtcCloudRecordingFilesResponseBodyTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcCloudRecordingFilesResponseBodyTaskInfo() = default ;
    DescribeRtcCloudRecordingFilesResponseBodyTaskInfo& operator=(const DescribeRtcCloudRecordingFilesResponseBodyTaskInfo &) = default ;
    DescribeRtcCloudRecordingFilesResponseBodyTaskInfo& operator=(DescribeRtcCloudRecordingFilesResponseBodyTaskInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordFileList_ == nullptr
        && return this->status_ == nullptr && return this->taskId_ == nullptr; };
    // recordFileList Field Functions 
    bool hasRecordFileList() const { return this->recordFileList_ != nullptr;};
    void deleteRecordFileList() { this->recordFileList_ = nullptr;};
    inline const Models::DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList & recordFileList() const { DARABONBA_PTR_GET_CONST(recordFileList_, Models::DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList) };
    inline Models::DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList recordFileList() { DARABONBA_PTR_GET(recordFileList_, Models::DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList) };
    inline DescribeRtcCloudRecordingFilesResponseBodyTaskInfo& setRecordFileList(const Models::DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList & recordFileList) { DARABONBA_PTR_SET_VALUE(recordFileList_, recordFileList) };
    inline DescribeRtcCloudRecordingFilesResponseBodyTaskInfo& setRecordFileList(Models::DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList && recordFileList) { DARABONBA_PTR_SET_RVALUE(recordFileList_, recordFileList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRtcCloudRecordingFilesResponseBodyTaskInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeRtcCloudRecordingFilesResponseBodyTaskInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<Models::DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList> recordFileList_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
