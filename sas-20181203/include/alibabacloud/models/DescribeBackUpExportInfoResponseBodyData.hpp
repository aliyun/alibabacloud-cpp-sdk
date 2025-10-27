// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPEXPORTINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPEXPORTINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackUpExportInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackUpExportInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentCount, currentCount_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Link, link_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackUpExportInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentCount, currentCount_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Link, link_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBackUpExportInfoResponseBodyData() = default ;
    DescribeBackUpExportInfoResponseBodyData(const DescribeBackUpExportInfoResponseBodyData &) = default ;
    DescribeBackUpExportInfoResponseBodyData(DescribeBackUpExportInfoResponseBodyData &&) = default ;
    DescribeBackUpExportInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackUpExportInfoResponseBodyData() = default ;
    DescribeBackUpExportInfoResponseBodyData& operator=(const DescribeBackUpExportInfoResponseBodyData &) = default ;
    DescribeBackUpExportInfoResponseBodyData& operator=(DescribeBackUpExportInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentCount_ == nullptr
        && return this->fileName_ == nullptr && return this->gmtCreate_ == nullptr && return this->id_ == nullptr && return this->link_ == nullptr && return this->message_ == nullptr
        && return this->progress_ == nullptr && return this->status_ == nullptr && return this->totalCount_ == nullptr; };
    // currentCount Field Functions 
    bool hasCurrentCount() const { return this->currentCount_ != nullptr;};
    void deleteCurrentCount() { this->currentCount_ = nullptr;};
    inline int32_t currentCount() const { DARABONBA_PTR_GET_DEFAULT(currentCount_, 0) };
    inline DescribeBackUpExportInfoResponseBodyData& setCurrentCount(int32_t currentCount) { DARABONBA_PTR_SET_VALUE(currentCount_, currentCount) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeBackUpExportInfoResponseBodyData& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeBackUpExportInfoResponseBodyData& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeBackUpExportInfoResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string link() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline DescribeBackUpExportInfoResponseBodyData& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeBackUpExportInfoResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribeBackUpExportInfoResponseBodyData& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeBackUpExportInfoResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeBackUpExportInfoResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of exported entries.
    std::shared_ptr<int32_t> currentCount_ = nullptr;
    // The name of the file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The time when the export task was created.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The ID of the export task.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The URL at which you can download the archived information.
    std::shared_ptr<string> link_ = nullptr;
    // The error message that is returned when the export task fails.
    std::shared_ptr<string> message_ = nullptr;
    // The progress percentage of the export task.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The status of the export task. Valid values:
    // 
    // *   **init**: The task is being initialized.
    // *   **exporting**: The task is in progress.
    // *   **success**: The task is complete.
    std::shared_ptr<string> status_ = nullptr;
    // The total number of entries in the file.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
