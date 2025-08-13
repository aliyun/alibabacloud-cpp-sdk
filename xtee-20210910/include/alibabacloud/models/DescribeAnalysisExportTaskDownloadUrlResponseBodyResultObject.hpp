// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANALYSISEXPORTTASKDOWNLOADURLRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANALYSISEXPORTTASKDOWNLOADURLRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(downloadFileUrl, downloadFileUrl_);
      DARABONBA_PTR_TO_JSON(executeTime, executeTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(downloadFileUrl, downloadFileUrl_);
      DARABONBA_PTR_FROM_JSON(executeTime, executeTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject() = default ;
    DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject(const DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject &) = default ;
    DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject(DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject &&) = default ;
    DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject() = default ;
    DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject& operator=(const DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject &) = default ;
    DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject& operator=(DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->downloadFileUrl_ != nullptr
        && this->executeTime_ != nullptr && this->status_ != nullptr; };
    // downloadFileUrl Field Functions 
    bool hasDownloadFileUrl() const { return this->downloadFileUrl_ != nullptr;};
    void deleteDownloadFileUrl() { this->downloadFileUrl_ = nullptr;};
    inline string downloadFileUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadFileUrl_, "") };
    inline DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject& setDownloadFileUrl(string downloadFileUrl) { DARABONBA_PTR_SET_VALUE(downloadFileUrl_, downloadFileUrl) };


    // executeTime Field Functions 
    bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
    void deleteExecuteTime() { this->executeTime_ = nullptr;};
    inline int64_t executeTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, 0L) };
    inline DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject& setExecuteTime(int64_t executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAnalysisExportTaskDownloadUrlResponseBodyResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Download URL.
    std::shared_ptr<string> downloadFileUrl_ = nullptr;
    // Download execution time
    std::shared_ptr<int64_t> executeTime_ = nullptr;
    // Task status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
