// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBINARYLOGLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBINARYLOGLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeBinaryLogListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBinaryLogListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogList, logList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNumber, totalNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBinaryLogListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogList, logList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNumber, totalNumber_);
    };
    DescribeBinaryLogListResponseBody() = default ;
    DescribeBinaryLogListResponseBody(const DescribeBinaryLogListResponseBody &) = default ;
    DescribeBinaryLogListResponseBody(DescribeBinaryLogListResponseBody &&) = default ;
    DescribeBinaryLogListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBinaryLogListResponseBody() = default ;
    DescribeBinaryLogListResponseBody& operator=(const DescribeBinaryLogListResponseBody &) = default ;
    DescribeBinaryLogListResponseBody& operator=(DescribeBinaryLogListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogList& obj) { 
        DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(DownloadLink, downloadLink_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LogSize, logSize_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(PurgeStatus, purgeStatus_);
        DARABONBA_PTR_TO_JSON(UploadHost, uploadHost_);
        DARABONBA_PTR_TO_JSON(UploadStatus, uploadStatus_);
      };
      friend void from_json(const Darabonba::Json& j, LogList& obj) { 
        DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(DownloadLink, downloadLink_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LogSize, logSize_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(PurgeStatus, purgeStatus_);
        DARABONBA_PTR_FROM_JSON(UploadHost, uploadHost_);
        DARABONBA_PTR_FROM_JSON(UploadStatus, uploadStatus_);
      };
      LogList() = default ;
      LogList(const LogList &) = default ;
      LogList(LogList &&) = default ;
      LogList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogList() = default ;
      LogList& operator=(const LogList &) = default ;
      LogList& operator=(LogList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->createdTime_ == nullptr && this->downloadLink_ == nullptr && this->endTime_ == nullptr && this->fileName_ == nullptr && this->id_ == nullptr
        && this->logSize_ == nullptr && this->modifiedTime_ == nullptr && this->purgeStatus_ == nullptr && this->uploadHost_ == nullptr && this->uploadStatus_ == nullptr; };
      // beginTime Field Functions 
      bool hasBeginTime() const { return this->beginTime_ != nullptr;};
      void deleteBeginTime() { this->beginTime_ = nullptr;};
      inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
      inline LogList& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline LogList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // downloadLink Field Functions 
      bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
      void deleteDownloadLink() { this->downloadLink_ = nullptr;};
      inline string getDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
      inline LogList& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline LogList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline LogList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline LogList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // logSize Field Functions 
      bool hasLogSize() const { return this->logSize_ != nullptr;};
      void deleteLogSize() { this->logSize_ = nullptr;};
      inline int64_t getLogSize() const { DARABONBA_PTR_GET_DEFAULT(logSize_, 0L) };
      inline LogList& setLogSize(int64_t logSize) { DARABONBA_PTR_SET_VALUE(logSize_, logSize) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline LogList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // purgeStatus Field Functions 
      bool hasPurgeStatus() const { return this->purgeStatus_ != nullptr;};
      void deletePurgeStatus() { this->purgeStatus_ = nullptr;};
      inline int32_t getPurgeStatus() const { DARABONBA_PTR_GET_DEFAULT(purgeStatus_, 0) };
      inline LogList& setPurgeStatus(int32_t purgeStatus) { DARABONBA_PTR_SET_VALUE(purgeStatus_, purgeStatus) };


      // uploadHost Field Functions 
      bool hasUploadHost() const { return this->uploadHost_ != nullptr;};
      void deleteUploadHost() { this->uploadHost_ = nullptr;};
      inline string getUploadHost() const { DARABONBA_PTR_GET_DEFAULT(uploadHost_, "") };
      inline LogList& setUploadHost(string uploadHost) { DARABONBA_PTR_SET_VALUE(uploadHost_, uploadHost) };


      // uploadStatus Field Functions 
      bool hasUploadStatus() const { return this->uploadStatus_ != nullptr;};
      void deleteUploadStatus() { this->uploadStatus_ = nullptr;};
      inline int32_t getUploadStatus() const { DARABONBA_PTR_GET_DEFAULT(uploadStatus_, 0) };
      inline LogList& setUploadStatus(int32_t uploadStatus) { DARABONBA_PTR_SET_VALUE(uploadStatus_, uploadStatus) };


    protected:
      shared_ptr<string> beginTime_ {};
      shared_ptr<string> createdTime_ {};
      shared_ptr<string> downloadLink_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<int64_t> logSize_ {};
      shared_ptr<string> modifiedTime_ {};
      shared_ptr<int32_t> purgeStatus_ {};
      shared_ptr<string> uploadHost_ {};
      shared_ptr<int32_t> uploadStatus_ {};
    };

    virtual bool empty() const override { return this->logList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalNumber_ == nullptr; };
    // logList Field Functions 
    bool hasLogList() const { return this->logList_ != nullptr;};
    void deleteLogList() { this->logList_ = nullptr;};
    inline const vector<DescribeBinaryLogListResponseBody::LogList> & getLogList() const { DARABONBA_PTR_GET_CONST(logList_, vector<DescribeBinaryLogListResponseBody::LogList>) };
    inline vector<DescribeBinaryLogListResponseBody::LogList> getLogList() { DARABONBA_PTR_GET(logList_, vector<DescribeBinaryLogListResponseBody::LogList>) };
    inline DescribeBinaryLogListResponseBody& setLogList(const vector<DescribeBinaryLogListResponseBody::LogList> & logList) { DARABONBA_PTR_SET_VALUE(logList_, logList) };
    inline DescribeBinaryLogListResponseBody& setLogList(vector<DescribeBinaryLogListResponseBody::LogList> && logList) { DARABONBA_PTR_SET_RVALUE(logList_, logList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBinaryLogListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBinaryLogListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBinaryLogListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNumber Field Functions 
    bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
    void deleteTotalNumber() { this->totalNumber_ = nullptr;};
    inline int32_t getTotalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
    inline DescribeBinaryLogListResponseBody& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


  protected:
    shared_ptr<vector<DescribeBinaryLogListResponseBody::LogList>> logList_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
