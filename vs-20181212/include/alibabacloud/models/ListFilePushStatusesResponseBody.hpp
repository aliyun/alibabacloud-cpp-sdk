// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEPUSHSTATUSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEPUSHSTATUSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListFilePushStatusesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFilePushStatusesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PushStatuses, pushStatuses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFilePushStatusesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PushStatuses, pushStatuses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFilePushStatusesResponseBody() = default ;
    ListFilePushStatusesResponseBody(const ListFilePushStatusesResponseBody &) = default ;
    ListFilePushStatusesResponseBody(ListFilePushStatusesResponseBody &&) = default ;
    ListFilePushStatusesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFilePushStatusesResponseBody() = default ;
    ListFilePushStatusesResponseBody& operator=(const ListFilePushStatusesResponseBody &) = default ;
    ListFilePushStatusesResponseBody& operator=(ListFilePushStatusesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PushStatuses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PushStatuses& obj) { 
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(PushTime, pushTime_);
        DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusDescription, statusDescription_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, PushStatuses& obj) { 
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(PushTime, pushTime_);
        DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusDescription, statusDescription_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      PushStatuses() = default ;
      PushStatuses(const PushStatuses &) = default ;
      PushStatuses(PushStatuses &&) = default ;
      PushStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PushStatuses() = default ;
      PushStatuses& operator=(const PushStatuses &) = default ;
      PushStatuses& operator=(PushStatuses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileId_ == nullptr
        && this->fileName_ == nullptr && this->pushTime_ == nullptr && this->renderingInstanceId_ == nullptr && this->status_ == nullptr && this->statusDescription_ == nullptr
        && this->updateTime_ == nullptr; };
      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline PushStatuses& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline PushStatuses& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // pushTime Field Functions 
      bool hasPushTime() const { return this->pushTime_ != nullptr;};
      void deletePushTime() { this->pushTime_ = nullptr;};
      inline string getPushTime() const { DARABONBA_PTR_GET_DEFAULT(pushTime_, "") };
      inline PushStatuses& setPushTime(string pushTime) { DARABONBA_PTR_SET_VALUE(pushTime_, pushTime) };


      // renderingInstanceId Field Functions 
      bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
      void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
      inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
      inline PushStatuses& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PushStatuses& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusDescription Field Functions 
      bool hasStatusDescription() const { return this->statusDescription_ != nullptr;};
      void deleteStatusDescription() { this->statusDescription_ = nullptr;};
      inline string getStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(statusDescription_, "") };
      inline PushStatuses& setStatusDescription(string statusDescription) { DARABONBA_PTR_SET_VALUE(statusDescription_, statusDescription) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline PushStatuses& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> fileId_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<string> pushTime_ {};
      shared_ptr<string> renderingInstanceId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> statusDescription_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->pushStatuses_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListFilePushStatusesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListFilePushStatusesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pushStatuses Field Functions 
    bool hasPushStatuses() const { return this->pushStatuses_ != nullptr;};
    void deletePushStatuses() { this->pushStatuses_ = nullptr;};
    inline const vector<ListFilePushStatusesResponseBody::PushStatuses> & getPushStatuses() const { DARABONBA_PTR_GET_CONST(pushStatuses_, vector<ListFilePushStatusesResponseBody::PushStatuses>) };
    inline vector<ListFilePushStatusesResponseBody::PushStatuses> getPushStatuses() { DARABONBA_PTR_GET(pushStatuses_, vector<ListFilePushStatusesResponseBody::PushStatuses>) };
    inline ListFilePushStatusesResponseBody& setPushStatuses(const vector<ListFilePushStatusesResponseBody::PushStatuses> & pushStatuses) { DARABONBA_PTR_SET_VALUE(pushStatuses_, pushStatuses) };
    inline ListFilePushStatusesResponseBody& setPushStatuses(vector<ListFilePushStatusesResponseBody::PushStatuses> && pushStatuses) { DARABONBA_PTR_SET_RVALUE(pushStatuses_, pushStatuses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFilePushStatusesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListFilePushStatusesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<vector<ListFilePushStatusesResponseBody::PushStatuses>> pushStatuses_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
