// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTEXPORTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTEXPORTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspEventExportInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventExportInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExportStatus, exportStatus_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Link, link_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventExportInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportStatus, exportStatus_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Link, link_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeSuspEventExportInfoResponseBody() = default ;
    DescribeSuspEventExportInfoResponseBody(const DescribeSuspEventExportInfoResponseBody &) = default ;
    DescribeSuspEventExportInfoResponseBody(DescribeSuspEventExportInfoResponseBody &&) = default ;
    DescribeSuspEventExportInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspEventExportInfoResponseBody() = default ;
    DescribeSuspEventExportInfoResponseBody& operator=(const DescribeSuspEventExportInfoResponseBody &) = default ;
    DescribeSuspEventExportInfoResponseBody& operator=(DescribeSuspEventExportInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportStatus_ == nullptr
        && return this->fileName_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->link_ == nullptr
        && return this->progress_ == nullptr && return this->properties_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->type_ == nullptr; };
    // exportStatus Field Functions 
    bool hasExportStatus() const { return this->exportStatus_ != nullptr;};
    void deleteExportStatus() { this->exportStatus_ = nullptr;};
    inline string exportStatus() const { DARABONBA_PTR_GET_DEFAULT(exportStatus_, "") };
    inline DescribeSuspEventExportInfoResponseBody& setExportStatus(string exportStatus) { DARABONBA_PTR_SET_VALUE(exportStatus_, exportStatus) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeSuspEventExportInfoResponseBody& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeSuspEventExportInfoResponseBody& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeSuspEventExportInfoResponseBody& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DescribeSuspEventExportInfoResponseBody& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string link() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline DescribeSuspEventExportInfoResponseBody& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribeSuspEventExportInfoResponseBody& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline string properties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
    inline DescribeSuspEventExportInfoResponseBody& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSuspEventExportInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSuspEventExportInfoResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSuspEventExportInfoResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The handling status for the exception. Valid values:
    // 
    // *   **exporting**: in progress
    // *   **success**: successful
    // *   **failed**: failed
    // *   **pending**: pending
    std::shared_ptr<string> exportStatus_ = nullptr;
    // The name of the exported file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The time when the export task was created.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The time when the export task was modified.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The ID of the export task.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The URL at which you can download the exported Excel file.
    std::shared_ptr<string> link_ = nullptr;
    // The progress percentage of the export task.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The exported parameters of exceptions.
    std::shared_ptr<string> properties_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of exceptions exported.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The type of the export task. The value is fixed as suspiciousEvent.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
