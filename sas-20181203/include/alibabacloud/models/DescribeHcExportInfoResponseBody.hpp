// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHCEXPORTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHCEXPORTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeHcExportInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHcExportInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentCount, currentCount_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Link, link_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultStatus, resultStatus_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHcExportInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentCount, currentCount_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Link, link_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultStatus, resultStatus_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHcExportInfoResponseBody() = default ;
    DescribeHcExportInfoResponseBody(const DescribeHcExportInfoResponseBody &) = default ;
    DescribeHcExportInfoResponseBody(DescribeHcExportInfoResponseBody &&) = default ;
    DescribeHcExportInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHcExportInfoResponseBody() = default ;
    DescribeHcExportInfoResponseBody& operator=(const DescribeHcExportInfoResponseBody &) = default ;
    DescribeHcExportInfoResponseBody& operator=(DescribeHcExportInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentCount_ == nullptr
        && return this->fileName_ == nullptr && return this->gmtCreate_ == nullptr && return this->id_ == nullptr && return this->link_ == nullptr && return this->progress_ == nullptr
        && return this->requestId_ == nullptr && return this->resultStatus_ == nullptr && return this->totalCount_ == nullptr; };
    // currentCount Field Functions 
    bool hasCurrentCount() const { return this->currentCount_ != nullptr;};
    void deleteCurrentCount() { this->currentCount_ = nullptr;};
    inline int32_t currentCount() const { DARABONBA_PTR_GET_DEFAULT(currentCount_, 0) };
    inline DescribeHcExportInfoResponseBody& setCurrentCount(int32_t currentCount) { DARABONBA_PTR_SET_VALUE(currentCount_, currentCount) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeHcExportInfoResponseBody& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeHcExportInfoResponseBody& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeHcExportInfoResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string link() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline DescribeHcExportInfoResponseBody& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribeHcExportInfoResponseBody& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHcExportInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultStatus Field Functions 
    bool hasResultStatus() const { return this->resultStatus_ != nullptr;};
    void deleteResultStatus() { this->resultStatus_ = nullptr;};
    inline string resultStatus() const { DARABONBA_PTR_GET_DEFAULT(resultStatus_, "") };
    inline DescribeHcExportInfoResponseBody& setResultStatus(string resultStatus) { DARABONBA_PTR_SET_VALUE(resultStatus_, resultStatus) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHcExportInfoResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of exported entries.
    std::shared_ptr<int32_t> currentCount_ = nullptr;
    // The name of the exported file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The time when the export task was created.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The ID of the export task.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The download URL for the exported file.
    std::shared_ptr<string> link_ = nullptr;
    // The progress percentage of the export task.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the export task. Valid values:
    // 
    // *   **exporting**: The task is in progress.
    // *   **success**: The task is complete.
    std::shared_ptr<string> resultStatus_ = nullptr;
    // The total number of exported entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
