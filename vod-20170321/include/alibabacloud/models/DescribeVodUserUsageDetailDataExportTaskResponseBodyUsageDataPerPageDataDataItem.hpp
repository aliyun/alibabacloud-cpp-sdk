// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODUSERUSAGEDETAILDATAEXPORTTASKRESPONSEBODYUSAGEDATAPERPAGEDATADATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODUSERUSAGEDETAILDATAEXPORTTASKRESPONSEBODYUSAGEDATAPERPAGEDATADATAITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskConfig, taskConfig_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskConfig, taskConfig_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem() = default ;
    DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem(const DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem &) = default ;
    DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem(DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem &&) = default ;
    DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem() = default ;
    DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem& operator=(const DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem &) = default ;
    DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem& operator=(DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->downloadUrl_ != nullptr && this->status_ != nullptr && this->taskConfig_ != nullptr && this->taskId_ != nullptr && this->taskName_ != nullptr
        && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskConfig Field Functions 
    bool hasTaskConfig() const { return this->taskConfig_ != nullptr;};
    void deleteTaskConfig() { this->taskConfig_ = nullptr;};
    inline const Models::DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig & taskConfig() const { DARABONBA_PTR_GET_CONST(taskConfig_, Models::DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig) };
    inline Models::DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig taskConfig() { DARABONBA_PTR_GET(taskConfig_, Models::DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig) };
    inline DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem& setTaskConfig(const Models::DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig & taskConfig) { DARABONBA_PTR_SET_VALUE(taskConfig_, taskConfig) };
    inline DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem& setTaskConfig(Models::DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig && taskConfig) { DARABONBA_PTR_SET_RVALUE(taskConfig_, taskConfig) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItem& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> downloadUrl_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::DescribeVodUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig> taskConfig_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
