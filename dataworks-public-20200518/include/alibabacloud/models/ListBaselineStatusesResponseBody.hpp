// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASELINESTATUSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBASELINESTATUSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListBaselineStatusesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaselineStatusesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaselineStatusesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListBaselineStatusesResponseBody() = default ;
    ListBaselineStatusesResponseBody(const ListBaselineStatusesResponseBody &) = default ;
    ListBaselineStatusesResponseBody(ListBaselineStatusesResponseBody &&) = default ;
    ListBaselineStatusesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaselineStatusesResponseBody() = default ;
    ListBaselineStatusesResponseBody& operator=(const ListBaselineStatusesResponseBody &) = default ;
    ListBaselineStatusesResponseBody& operator=(ListBaselineStatusesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BaselineStatuses, baselineStatuses_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BaselineStatuses, baselineStatuses_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BaselineStatuses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BaselineStatuses& obj) { 
          DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
          DARABONBA_PTR_TO_JSON(BaselineType, baselineType_);
          DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
          DARABONBA_PTR_TO_JSON(Buffer, buffer_);
          DARABONBA_PTR_TO_JSON(EndCast, endCast_);
          DARABONBA_PTR_TO_JSON(ExpTime, expTime_);
          DARABONBA_PTR_TO_JSON(FinishStatus, finishStatus_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(InGroupId, inGroupId_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(SlaTime, slaTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, BaselineStatuses& obj) { 
          DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
          DARABONBA_PTR_FROM_JSON(BaselineType, baselineType_);
          DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
          DARABONBA_PTR_FROM_JSON(Buffer, buffer_);
          DARABONBA_PTR_FROM_JSON(EndCast, endCast_);
          DARABONBA_PTR_FROM_JSON(ExpTime, expTime_);
          DARABONBA_PTR_FROM_JSON(FinishStatus, finishStatus_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(InGroupId, inGroupId_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(SlaTime, slaTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        BaselineStatuses() = default ;
        BaselineStatuses(const BaselineStatuses &) = default ;
        BaselineStatuses(BaselineStatuses &&) = default ;
        BaselineStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BaselineStatuses() = default ;
        BaselineStatuses& operator=(const BaselineStatuses &) = default ;
        BaselineStatuses& operator=(BaselineStatuses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->baselineId_ == nullptr
        && this->baselineName_ == nullptr && this->baselineType_ == nullptr && this->bizdate_ == nullptr && this->buffer_ == nullptr && this->endCast_ == nullptr
        && this->expTime_ == nullptr && this->finishStatus_ == nullptr && this->finishTime_ == nullptr && this->inGroupId_ == nullptr && this->owner_ == nullptr
        && this->priority_ == nullptr && this->projectId_ == nullptr && this->slaTime_ == nullptr && this->status_ == nullptr; };
        // baselineId Field Functions 
        bool hasBaselineId() const { return this->baselineId_ != nullptr;};
        void deleteBaselineId() { this->baselineId_ = nullptr;};
        inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
        inline BaselineStatuses& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


        // baselineName Field Functions 
        bool hasBaselineName() const { return this->baselineName_ != nullptr;};
        void deleteBaselineName() { this->baselineName_ = nullptr;};
        inline string getBaselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
        inline BaselineStatuses& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


        // baselineType Field Functions 
        bool hasBaselineType() const { return this->baselineType_ != nullptr;};
        void deleteBaselineType() { this->baselineType_ = nullptr;};
        inline string getBaselineType() const { DARABONBA_PTR_GET_DEFAULT(baselineType_, "") };
        inline BaselineStatuses& setBaselineType(string baselineType) { DARABONBA_PTR_SET_VALUE(baselineType_, baselineType) };


        // bizdate Field Functions 
        bool hasBizdate() const { return this->bizdate_ != nullptr;};
        void deleteBizdate() { this->bizdate_ = nullptr;};
        inline int64_t getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
        inline BaselineStatuses& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


        // buffer Field Functions 
        bool hasBuffer() const { return this->buffer_ != nullptr;};
        void deleteBuffer() { this->buffer_ = nullptr;};
        inline int64_t getBuffer() const { DARABONBA_PTR_GET_DEFAULT(buffer_, 0L) };
        inline BaselineStatuses& setBuffer(int64_t buffer) { DARABONBA_PTR_SET_VALUE(buffer_, buffer) };


        // endCast Field Functions 
        bool hasEndCast() const { return this->endCast_ != nullptr;};
        void deleteEndCast() { this->endCast_ = nullptr;};
        inline int64_t getEndCast() const { DARABONBA_PTR_GET_DEFAULT(endCast_, 0L) };
        inline BaselineStatuses& setEndCast(int64_t endCast) { DARABONBA_PTR_SET_VALUE(endCast_, endCast) };


        // expTime Field Functions 
        bool hasExpTime() const { return this->expTime_ != nullptr;};
        void deleteExpTime() { this->expTime_ = nullptr;};
        inline int64_t getExpTime() const { DARABONBA_PTR_GET_DEFAULT(expTime_, 0L) };
        inline BaselineStatuses& setExpTime(int64_t expTime) { DARABONBA_PTR_SET_VALUE(expTime_, expTime) };


        // finishStatus Field Functions 
        bool hasFinishStatus() const { return this->finishStatus_ != nullptr;};
        void deleteFinishStatus() { this->finishStatus_ = nullptr;};
        inline string getFinishStatus() const { DARABONBA_PTR_GET_DEFAULT(finishStatus_, "") };
        inline BaselineStatuses& setFinishStatus(string finishStatus) { DARABONBA_PTR_SET_VALUE(finishStatus_, finishStatus) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
        inline BaselineStatuses& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // inGroupId Field Functions 
        bool hasInGroupId() const { return this->inGroupId_ != nullptr;};
        void deleteInGroupId() { this->inGroupId_ = nullptr;};
        inline int32_t getInGroupId() const { DARABONBA_PTR_GET_DEFAULT(inGroupId_, 0) };
        inline BaselineStatuses& setInGroupId(int32_t inGroupId) { DARABONBA_PTR_SET_VALUE(inGroupId_, inGroupId) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline BaselineStatuses& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline BaselineStatuses& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline BaselineStatuses& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // slaTime Field Functions 
        bool hasSlaTime() const { return this->slaTime_ != nullptr;};
        void deleteSlaTime() { this->slaTime_ = nullptr;};
        inline int64_t getSlaTime() const { DARABONBA_PTR_GET_DEFAULT(slaTime_, 0L) };
        inline BaselineStatuses& setSlaTime(int64_t slaTime) { DARABONBA_PTR_SET_VALUE(slaTime_, slaTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline BaselineStatuses& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The baseline ID.
        shared_ptr<int64_t> baselineId_ {};
        // The name of the baseline.
        shared_ptr<string> baselineName_ {};
        // The type of the baseline, including DAILY and HOURLY. Separate multiple types with commas (,).
        shared_ptr<string> baselineType_ {};
        // The data timestamp.
        shared_ptr<int64_t> bizdate_ {};
        // The margin of the baseline instance. Unit: seconds.
        shared_ptr<int64_t> buffer_ {};
        // The timestamp of the predicted time when the baseline instance finished running.
        shared_ptr<int64_t> endCast_ {};
        // The timestamp of the alerting time of the baseline instance.
        shared_ptr<int64_t> expTime_ {};
        // The status of the baseline instance. Valid values: UNFINISH and FINISH.
        shared_ptr<string> finishStatus_ {};
        // The timestamp of the actual time when the baseline instance finished running. This parameter is returned if the value of the FinishStatus parameter is FINISH.
        shared_ptr<int64_t> finishTime_ {};
        // The ID of the cycle of the baseline instance. Valid values of the ID of an hour-level cycle: [1,24]. The ID of a day-level cycle is 1.
        shared_ptr<int32_t> inGroupId_ {};
        // The ID of the Alibaba Cloud account used by the baseline owner. Multiple IDs are separated by commas (,).
        shared_ptr<string> owner_ {};
        // The priority of the baseline. Valid values: {1,3,5,7,8}.
        shared_ptr<int32_t> priority_ {};
        // The ID of the workspace to which the baseline belongs.
        shared_ptr<int64_t> projectId_ {};
        // The timestamp of the actual time when the baseline instance finished running.
        shared_ptr<int64_t> slaTime_ {};
        // The status of the baseline. Valid values: ERROR, SAFE, DANGEROUS, and OVER. The value ERROR indicates that no nodes are associated with the baseline, or all nodes associated with the baseline are suspended. The value SAFE indicates that nodes are run before the alert duration begins. The value DANGEROUS indicates that nodes are still running after the alert duration ends but the committed completion time does not arrive. The value OVER indicates that nodes are still running after the committed completion time.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->baselineStatuses_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // baselineStatuses Field Functions 
      bool hasBaselineStatuses() const { return this->baselineStatuses_ != nullptr;};
      void deleteBaselineStatuses() { this->baselineStatuses_ = nullptr;};
      inline const vector<Data::BaselineStatuses> & getBaselineStatuses() const { DARABONBA_PTR_GET_CONST(baselineStatuses_, vector<Data::BaselineStatuses>) };
      inline vector<Data::BaselineStatuses> getBaselineStatuses() { DARABONBA_PTR_GET(baselineStatuses_, vector<Data::BaselineStatuses>) };
      inline Data& setBaselineStatuses(const vector<Data::BaselineStatuses> & baselineStatuses) { DARABONBA_PTR_SET_VALUE(baselineStatuses_, baselineStatuses) };
      inline Data& setBaselineStatuses(vector<Data::BaselineStatuses> && baselineStatuses) { DARABONBA_PTR_SET_RVALUE(baselineStatuses_, baselineStatuses) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of baseline instances.
      shared_ptr<vector<Data::BaselineStatuses>> baselineStatuses_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of baseline instances.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListBaselineStatusesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListBaselineStatusesResponseBody::Data) };
    inline ListBaselineStatusesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListBaselineStatusesResponseBody::Data) };
    inline ListBaselineStatusesResponseBody& setData(const ListBaselineStatusesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListBaselineStatusesResponseBody& setData(ListBaselineStatusesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListBaselineStatusesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListBaselineStatusesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListBaselineStatusesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBaselineStatusesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListBaselineStatusesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    shared_ptr<ListBaselineStatusesResponseBody::Data> data_ {};
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The ID of the request. You can use the ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
