// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWARNINGEXPORTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWARNINGEXPORTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWarningExportInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWarningExportInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentCount, currentCount_);
      DARABONBA_PTR_TO_JSON(ExportStatus, exportStatus_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Link, link_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWarningExportInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentCount, currentCount_);
      DARABONBA_PTR_FROM_JSON(ExportStatus, exportStatus_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Link, link_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWarningExportInfoResponseBody() = default ;
    DescribeWarningExportInfoResponseBody(const DescribeWarningExportInfoResponseBody &) = default ;
    DescribeWarningExportInfoResponseBody(DescribeWarningExportInfoResponseBody &&) = default ;
    DescribeWarningExportInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWarningExportInfoResponseBody() = default ;
    DescribeWarningExportInfoResponseBody& operator=(const DescribeWarningExportInfoResponseBody &) = default ;
    DescribeWarningExportInfoResponseBody& operator=(DescribeWarningExportInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentCount_ == nullptr
        && this->exportStatus_ == nullptr && this->fileName_ == nullptr && this->id_ == nullptr && this->link_ == nullptr && this->message_ == nullptr
        && this->progress_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentCount Field Functions 
    bool hasCurrentCount() const { return this->currentCount_ != nullptr;};
    void deleteCurrentCount() { this->currentCount_ = nullptr;};
    inline int32_t getCurrentCount() const { DARABONBA_PTR_GET_DEFAULT(currentCount_, 0) };
    inline DescribeWarningExportInfoResponseBody& setCurrentCount(int32_t currentCount) { DARABONBA_PTR_SET_VALUE(currentCount_, currentCount) };


    // exportStatus Field Functions 
    bool hasExportStatus() const { return this->exportStatus_ != nullptr;};
    void deleteExportStatus() { this->exportStatus_ = nullptr;};
    inline string getExportStatus() const { DARABONBA_PTR_GET_DEFAULT(exportStatus_, "") };
    inline DescribeWarningExportInfoResponseBody& setExportStatus(string exportStatus) { DARABONBA_PTR_SET_VALUE(exportStatus_, exportStatus) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeWarningExportInfoResponseBody& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeWarningExportInfoResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string getLink() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline DescribeWarningExportInfoResponseBody& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeWarningExportInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribeWarningExportInfoResponseBody& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWarningExportInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWarningExportInfoResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of baseline entries that are exported.
    shared_ptr<int32_t> currentCount_ {};
    // The status of the export task.
    // 
    // Valid values:
    // 
    // *   **init**: The task is being initialized.
    // *   **exporting**: The task is in progress.
    // *   **success**: The task is successful.
    shared_ptr<string> exportStatus_ {};
    // The name of the exported Excel file.
    shared_ptr<string> fileName_ {};
    // The ID of the export task for the baseline check result.
    shared_ptr<int64_t> id_ {};
    // The URL at which you can download the exported Excel file.
    shared_ptr<string> link_ {};
    // The message that shows the task result. The value is fixed as **successful**, which indicates that the export task is complete.
    shared_ptr<string> message_ {};
    // The progress percentage of the export task.
    shared_ptr<int32_t> progress_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of baseline entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
