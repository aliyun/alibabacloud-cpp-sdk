// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSTATUSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSTATUSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSynchronizationJobStatusListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynchronizationJobStatusListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobListStatusList, synchronizationJobListStatusList_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynchronizationJobStatusListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobListStatusList, synchronizationJobListStatusList_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeSynchronizationJobStatusListResponseBody() = default ;
    DescribeSynchronizationJobStatusListResponseBody(const DescribeSynchronizationJobStatusListResponseBody &) = default ;
    DescribeSynchronizationJobStatusListResponseBody(DescribeSynchronizationJobStatusListResponseBody &&) = default ;
    DescribeSynchronizationJobStatusListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynchronizationJobStatusListResponseBody() = default ;
    DescribeSynchronizationJobStatusListResponseBody& operator=(const DescribeSynchronizationJobStatusListResponseBody &) = default ;
    DescribeSynchronizationJobStatusListResponseBody& operator=(DescribeSynchronizationJobStatusListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SynchronizationJobListStatusList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SynchronizationJobListStatusList& obj) { 
        DARABONBA_PTR_TO_JSON(SynchronizationDirectionInfoList, synchronizationDirectionInfoList_);
        DARABONBA_PTR_TO_JSON(SynchronizationJobId, synchronizationJobId_);
      };
      friend void from_json(const Darabonba::Json& j, SynchronizationJobListStatusList& obj) { 
        DARABONBA_PTR_FROM_JSON(SynchronizationDirectionInfoList, synchronizationDirectionInfoList_);
        DARABONBA_PTR_FROM_JSON(SynchronizationJobId, synchronizationJobId_);
      };
      SynchronizationJobListStatusList() = default ;
      SynchronizationJobListStatusList(const SynchronizationJobListStatusList &) = default ;
      SynchronizationJobListStatusList(SynchronizationJobListStatusList &&) = default ;
      SynchronizationJobListStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SynchronizationJobListStatusList() = default ;
      SynchronizationJobListStatusList& operator=(const SynchronizationJobListStatusList &) = default ;
      SynchronizationJobListStatusList& operator=(SynchronizationJobListStatusList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SynchronizationDirectionInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SynchronizationDirectionInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
        };
        friend void from_json(const Darabonba::Json& j, SynchronizationDirectionInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
        };
        SynchronizationDirectionInfoList() = default ;
        SynchronizationDirectionInfoList(const SynchronizationDirectionInfoList &) = default ;
        SynchronizationDirectionInfoList(SynchronizationDirectionInfoList &&) = default ;
        SynchronizationDirectionInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SynchronizationDirectionInfoList() = default ;
        SynchronizationDirectionInfoList& operator=(const SynchronizationDirectionInfoList &) = default ;
        SynchronizationDirectionInfoList& operator=(SynchronizationDirectionInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkpoint_ == nullptr
        && this->status_ == nullptr && this->synchronizationDirection_ == nullptr; };
        // checkpoint Field Functions 
        bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
        void deleteCheckpoint() { this->checkpoint_ = nullptr;};
        inline string getCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
        inline SynchronizationDirectionInfoList& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline SynchronizationDirectionInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // synchronizationDirection Field Functions 
        bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
        void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
        inline string getSynchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
        inline SynchronizationDirectionInfoList& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


      protected:
        // The UNIX timestamp generated when the latest data record was synchronized.
        // 
        // >  You can use a search engine to obtain a UNIX timestamp converter.
        shared_ptr<string> checkpoint_ {};
        // The status of the data synchronization task in this direction. Valid values:
        // 
        // *   **NotStarted**: The task is not started.
        // *   **Prechecking**: The task is being prechecked.
        // *   **PrecheckFailed**: The task failed to pass the precheck.
        // *   **Initializing**: The task is performing initial synchronization.
        // *   **InitializeFailed**: Initial synchronization failed.
        // *   **Synchronizing**: The task is synchronizing data.
        // *   **Failed**: The task failed to synchronize data.
        // *   **Suspending**: The task is paused.
        // *   **Modifying**: The objects in the task are being modified.
        // *   **Finished**: The task is completed.
        shared_ptr<string> status_ {};
        // The synchronization direction. Valid values:
        // 
        // *   **Forward**
        // *   **Reverse**
        shared_ptr<string> synchronizationDirection_ {};
      };

      virtual bool empty() const override { return this->synchronizationDirectionInfoList_ == nullptr
        && this->synchronizationJobId_ == nullptr; };
      // synchronizationDirectionInfoList Field Functions 
      bool hasSynchronizationDirectionInfoList() const { return this->synchronizationDirectionInfoList_ != nullptr;};
      void deleteSynchronizationDirectionInfoList() { this->synchronizationDirectionInfoList_ = nullptr;};
      inline const vector<SynchronizationJobListStatusList::SynchronizationDirectionInfoList> & getSynchronizationDirectionInfoList() const { DARABONBA_PTR_GET_CONST(synchronizationDirectionInfoList_, vector<SynchronizationJobListStatusList::SynchronizationDirectionInfoList>) };
      inline vector<SynchronizationJobListStatusList::SynchronizationDirectionInfoList> getSynchronizationDirectionInfoList() { DARABONBA_PTR_GET(synchronizationDirectionInfoList_, vector<SynchronizationJobListStatusList::SynchronizationDirectionInfoList>) };
      inline SynchronizationJobListStatusList& setSynchronizationDirectionInfoList(const vector<SynchronizationJobListStatusList::SynchronizationDirectionInfoList> & synchronizationDirectionInfoList) { DARABONBA_PTR_SET_VALUE(synchronizationDirectionInfoList_, synchronizationDirectionInfoList) };
      inline SynchronizationJobListStatusList& setSynchronizationDirectionInfoList(vector<SynchronizationJobListStatusList::SynchronizationDirectionInfoList> && synchronizationDirectionInfoList) { DARABONBA_PTR_SET_RVALUE(synchronizationDirectionInfoList_, synchronizationDirectionInfoList) };


      // synchronizationJobId Field Functions 
      bool hasSynchronizationJobId() const { return this->synchronizationJobId_ != nullptr;};
      void deleteSynchronizationJobId() { this->synchronizationJobId_ = nullptr;};
      inline string getSynchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobId_, "") };
      inline SynchronizationJobListStatusList& setSynchronizationJobId(string synchronizationJobId) { DARABONBA_PTR_SET_VALUE(synchronizationJobId_, synchronizationJobId) };


    protected:
      // The details of data synchronization tasks in each direction.
      shared_ptr<vector<SynchronizationJobListStatusList::SynchronizationDirectionInfoList>> synchronizationDirectionInfoList_ {};
      // The ID of the data synchronization instance.
      shared_ptr<string> synchronizationJobId_ {};
    };

    virtual bool empty() const override { return this->errCode_ == nullptr
        && this->errMessage_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->synchronizationJobListStatusList_ == nullptr && this->totalRecordCount_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeSynchronizationJobStatusListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeSynchronizationJobStatusListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSynchronizationJobStatusListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeSynchronizationJobStatusListResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSynchronizationJobStatusListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSynchronizationJobStatusListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // synchronizationJobListStatusList Field Functions 
    bool hasSynchronizationJobListStatusList() const { return this->synchronizationJobListStatusList_ != nullptr;};
    void deleteSynchronizationJobListStatusList() { this->synchronizationJobListStatusList_ = nullptr;};
    inline const vector<DescribeSynchronizationJobStatusListResponseBody::SynchronizationJobListStatusList> & getSynchronizationJobListStatusList() const { DARABONBA_PTR_GET_CONST(synchronizationJobListStatusList_, vector<DescribeSynchronizationJobStatusListResponseBody::SynchronizationJobListStatusList>) };
    inline vector<DescribeSynchronizationJobStatusListResponseBody::SynchronizationJobListStatusList> getSynchronizationJobListStatusList() { DARABONBA_PTR_GET(synchronizationJobListStatusList_, vector<DescribeSynchronizationJobStatusListResponseBody::SynchronizationJobListStatusList>) };
    inline DescribeSynchronizationJobStatusListResponseBody& setSynchronizationJobListStatusList(const vector<DescribeSynchronizationJobStatusListResponseBody::SynchronizationJobListStatusList> & synchronizationJobListStatusList) { DARABONBA_PTR_SET_VALUE(synchronizationJobListStatusList_, synchronizationJobListStatusList) };
    inline DescribeSynchronizationJobStatusListResponseBody& setSynchronizationJobListStatusList(vector<DescribeSynchronizationJobStatusListResponseBody::SynchronizationJobListStatusList> && synchronizationJobListStatusList) { DARABONBA_PTR_SET_RVALUE(synchronizationJobListStatusList_, synchronizationJobListStatusList) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline DescribeSynchronizationJobStatusListResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The error code returned if the call failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the call failed.
    shared_ptr<string> errMessage_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of data synchronization instances displayed on one page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<string> success_ {};
    // The status of the data synchronization tasks.
    shared_ptr<vector<DescribeSynchronizationJobStatusListResponseBody::SynchronizationJobListStatusList>> synchronizationJobListStatusList_ {};
    // The total number of data synchronization instances.
    shared_ptr<int64_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
