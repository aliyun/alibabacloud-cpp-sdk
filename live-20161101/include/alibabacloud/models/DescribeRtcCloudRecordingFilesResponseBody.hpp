// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCLOUDRECORDINGFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCLOUDRECORDINGFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRtcCloudRecordingFilesResponseBodyTaskInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeRtcCloudRecordingFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcCloudRecordingFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcCloudRecordingFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
    };
    DescribeRtcCloudRecordingFilesResponseBody() = default ;
    DescribeRtcCloudRecordingFilesResponseBody(const DescribeRtcCloudRecordingFilesResponseBody &) = default ;
    DescribeRtcCloudRecordingFilesResponseBody(DescribeRtcCloudRecordingFilesResponseBody &&) = default ;
    DescribeRtcCloudRecordingFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcCloudRecordingFilesResponseBody() = default ;
    DescribeRtcCloudRecordingFilesResponseBody& operator=(const DescribeRtcCloudRecordingFilesResponseBody &) = default ;
    DescribeRtcCloudRecordingFilesResponseBody& operator=(DescribeRtcCloudRecordingFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->taskInfo_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRtcCloudRecordingFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const DescribeRtcCloudRecordingFilesResponseBodyTaskInfo & taskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, DescribeRtcCloudRecordingFilesResponseBodyTaskInfo) };
    inline DescribeRtcCloudRecordingFilesResponseBodyTaskInfo taskInfo() { DARABONBA_PTR_GET(taskInfo_, DescribeRtcCloudRecordingFilesResponseBodyTaskInfo) };
    inline DescribeRtcCloudRecordingFilesResponseBody& setTaskInfo(const DescribeRtcCloudRecordingFilesResponseBodyTaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline DescribeRtcCloudRecordingFilesResponseBody& setTaskInfo(DescribeRtcCloudRecordingFilesResponseBodyTaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeRtcCloudRecordingFilesResponseBodyTaskInfo> taskInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
