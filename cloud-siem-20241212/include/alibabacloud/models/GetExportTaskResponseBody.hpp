// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXPORTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXPORTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetExportTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExportTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExportStatus, exportStatus_);
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Link, link_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetExportTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportStatus, exportStatus_);
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Link, link_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetExportTaskResponseBody() = default ;
    GetExportTaskResponseBody(const GetExportTaskResponseBody &) = default ;
    GetExportTaskResponseBody(GetExportTaskResponseBody &&) = default ;
    GetExportTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExportTaskResponseBody() = default ;
    GetExportTaskResponseBody& operator=(const GetExportTaskResponseBody &) = default ;
    GetExportTaskResponseBody& operator=(GetExportTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportStatus_ == nullptr
        && return this->exportType_ == nullptr && return this->fileName_ == nullptr && return this->gmtCreate_ == nullptr && return this->id_ == nullptr && return this->link_ == nullptr
        && return this->progress_ == nullptr && return this->requestId_ == nullptr; };
    // exportStatus Field Functions 
    bool hasExportStatus() const { return this->exportStatus_ != nullptr;};
    void deleteExportStatus() { this->exportStatus_ = nullptr;};
    inline string exportStatus() const { DARABONBA_PTR_GET_DEFAULT(exportStatus_, "") };
    inline GetExportTaskResponseBody& setExportStatus(string exportStatus) { DARABONBA_PTR_SET_VALUE(exportStatus_, exportStatus) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string exportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline GetExportTaskResponseBody& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetExportTaskResponseBody& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetExportTaskResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetExportTaskResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string link() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline GetExportTaskResponseBody& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline GetExportTaskResponseBody& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExportTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> exportStatus_ = nullptr;
    std::shared_ptr<string> exportType_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> link_ = nullptr;
    std::shared_ptr<int32_t> progress_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
