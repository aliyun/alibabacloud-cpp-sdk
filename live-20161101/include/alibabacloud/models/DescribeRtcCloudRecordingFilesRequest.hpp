// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCLOUDRECORDINGFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCLOUDRECORDINGFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeRtcCloudRecordingFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcCloudRecordingFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcCloudRecordingFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeRtcCloudRecordingFilesRequest() = default ;
    DescribeRtcCloudRecordingFilesRequest(const DescribeRtcCloudRecordingFilesRequest &) = default ;
    DescribeRtcCloudRecordingFilesRequest(DescribeRtcCloudRecordingFilesRequest &&) = default ;
    DescribeRtcCloudRecordingFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcCloudRecordingFilesRequest() = default ;
    DescribeRtcCloudRecordingFilesRequest& operator=(const DescribeRtcCloudRecordingFilesRequest &) = default ;
    DescribeRtcCloudRecordingFilesRequest& operator=(DescribeRtcCloudRecordingFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeRtcCloudRecordingFilesRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
