// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNKNOWNTHREATDETECTPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUNKNOWNTHREATDETECTPROCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListUnknownThreatDetectProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUnknownThreatDetectProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnalyzeResult, analyzeResult_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(FirstTimeEnd, firstTimeEnd_);
      DARABONBA_PTR_TO_JSON(FirstTimeStart, firstTimeStart_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(ProcessPath, processPath_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Sha256, sha256_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListUnknownThreatDetectProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalyzeResult, analyzeResult_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(FirstTimeEnd, firstTimeEnd_);
      DARABONBA_PTR_FROM_JSON(FirstTimeStart, firstTimeStart_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(ProcessPath, processPath_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Sha256, sha256_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListUnknownThreatDetectProcessRequest() = default ;
    ListUnknownThreatDetectProcessRequest(const ListUnknownThreatDetectProcessRequest &) = default ;
    ListUnknownThreatDetectProcessRequest(ListUnknownThreatDetectProcessRequest &&) = default ;
    ListUnknownThreatDetectProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUnknownThreatDetectProcessRequest() = default ;
    ListUnknownThreatDetectProcessRequest& operator=(const ListUnknownThreatDetectProcessRequest &) = default ;
    ListUnknownThreatDetectProcessRequest& operator=(ListUnknownThreatDetectProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analyzeResult_ == nullptr
        && this->currentPage_ == nullptr && this->firstTimeEnd_ == nullptr && this->firstTimeStart_ == nullptr && this->md5_ == nullptr && this->pageSize_ == nullptr
        && this->path_ == nullptr && this->processPath_ == nullptr && this->remark_ == nullptr && this->sha256_ == nullptr && this->uuid_ == nullptr; };
    // analyzeResult Field Functions 
    bool hasAnalyzeResult() const { return this->analyzeResult_ != nullptr;};
    void deleteAnalyzeResult() { this->analyzeResult_ = nullptr;};
    inline string getAnalyzeResult() const { DARABONBA_PTR_GET_DEFAULT(analyzeResult_, "") };
    inline ListUnknownThreatDetectProcessRequest& setAnalyzeResult(string analyzeResult) { DARABONBA_PTR_SET_VALUE(analyzeResult_, analyzeResult) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListUnknownThreatDetectProcessRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // firstTimeEnd Field Functions 
    bool hasFirstTimeEnd() const { return this->firstTimeEnd_ != nullptr;};
    void deleteFirstTimeEnd() { this->firstTimeEnd_ = nullptr;};
    inline int64_t getFirstTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(firstTimeEnd_, 0L) };
    inline ListUnknownThreatDetectProcessRequest& setFirstTimeEnd(int64_t firstTimeEnd) { DARABONBA_PTR_SET_VALUE(firstTimeEnd_, firstTimeEnd) };


    // firstTimeStart Field Functions 
    bool hasFirstTimeStart() const { return this->firstTimeStart_ != nullptr;};
    void deleteFirstTimeStart() { this->firstTimeStart_ = nullptr;};
    inline int64_t getFirstTimeStart() const { DARABONBA_PTR_GET_DEFAULT(firstTimeStart_, 0L) };
    inline ListUnknownThreatDetectProcessRequest& setFirstTimeStart(int64_t firstTimeStart) { DARABONBA_PTR_SET_VALUE(firstTimeStart_, firstTimeStart) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline ListUnknownThreatDetectProcessRequest& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUnknownThreatDetectProcessRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListUnknownThreatDetectProcessRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // processPath Field Functions 
    bool hasProcessPath() const { return this->processPath_ != nullptr;};
    void deleteProcessPath() { this->processPath_ = nullptr;};
    inline string getProcessPath() const { DARABONBA_PTR_GET_DEFAULT(processPath_, "") };
    inline ListUnknownThreatDetectProcessRequest& setProcessPath(string processPath) { DARABONBA_PTR_SET_VALUE(processPath_, processPath) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListUnknownThreatDetectProcessRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sha256 Field Functions 
    bool hasSha256() const { return this->sha256_ != nullptr;};
    void deleteSha256() { this->sha256_ = nullptr;};
    inline string getSha256() const { DARABONBA_PTR_GET_DEFAULT(sha256_, "") };
    inline ListUnknownThreatDetectProcessRequest& setSha256(string sha256) { DARABONBA_PTR_SET_VALUE(sha256_, sha256) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListUnknownThreatDetectProcessRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<string> analyzeResult_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<int64_t> firstTimeEnd_ {};
    shared_ptr<int64_t> firstTimeStart_ {};
    shared_ptr<string> md5_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> path_ {};
    shared_ptr<string> processPath_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> sha256_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
