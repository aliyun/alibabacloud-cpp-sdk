// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMESPACECHANGEORDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMESPACECHANGEORDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListNamespaceChangeOrdersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamespaceChangeOrdersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamespaceChangeOrdersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    ListNamespaceChangeOrdersResponseBody() = default ;
    ListNamespaceChangeOrdersResponseBody(const ListNamespaceChangeOrdersResponseBody &) = default ;
    ListNamespaceChangeOrdersResponseBody(ListNamespaceChangeOrdersResponseBody &&) = default ;
    ListNamespaceChangeOrdersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamespaceChangeOrdersResponseBody() = default ;
    ListNamespaceChangeOrdersResponseBody& operator=(const ListNamespaceChangeOrdersResponseBody &) = default ;
    ListNamespaceChangeOrdersResponseBody& operator=(ListNamespaceChangeOrdersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ChangeOrderList, changeOrderList_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ChangeOrderList, changeOrderList_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class ChangeOrderList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChangeOrderList& obj) { 
          DARABONBA_PTR_TO_JSON(BatchCount, batchCount_);
          DARABONBA_PTR_TO_JSON(BatchType, batchType_);
          DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
          DARABONBA_PTR_TO_JSON(CoType, coType_);
          DARABONBA_PTR_TO_JSON(CoTypeCode, coTypeCode_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_TO_JSON(Pipelines, pipelines_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, ChangeOrderList& obj) { 
          DARABONBA_PTR_FROM_JSON(BatchCount, batchCount_);
          DARABONBA_PTR_FROM_JSON(BatchType, batchType_);
          DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
          DARABONBA_PTR_FROM_JSON(CoType, coType_);
          DARABONBA_PTR_FROM_JSON(CoTypeCode, coTypeCode_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_FROM_JSON(Pipelines, pipelines_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        ChangeOrderList() = default ;
        ChangeOrderList(const ChangeOrderList &) = default ;
        ChangeOrderList(ChangeOrderList &&) = default ;
        ChangeOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChangeOrderList() = default ;
        ChangeOrderList& operator=(const ChangeOrderList &) = default ;
        ChangeOrderList& operator=(ChangeOrderList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->batchCount_ == nullptr
        && this->batchType_ == nullptr && this->changeOrderId_ == nullptr && this->coType_ == nullptr && this->coTypeCode_ == nullptr && this->createTime_ == nullptr
        && this->createUserId_ == nullptr && this->description_ == nullptr && this->finishTime_ == nullptr && this->groupId_ == nullptr && this->namespaceId_ == nullptr
        && this->pipelines_ == nullptr && this->source_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr; };
        // batchCount Field Functions 
        bool hasBatchCount() const { return this->batchCount_ != nullptr;};
        void deleteBatchCount() { this->batchCount_ = nullptr;};
        inline int32_t getBatchCount() const { DARABONBA_PTR_GET_DEFAULT(batchCount_, 0) };
        inline ChangeOrderList& setBatchCount(int32_t batchCount) { DARABONBA_PTR_SET_VALUE(batchCount_, batchCount) };


        // batchType Field Functions 
        bool hasBatchType() const { return this->batchType_ != nullptr;};
        void deleteBatchType() { this->batchType_ = nullptr;};
        inline string getBatchType() const { DARABONBA_PTR_GET_DEFAULT(batchType_, "") };
        inline ChangeOrderList& setBatchType(string batchType) { DARABONBA_PTR_SET_VALUE(batchType_, batchType) };


        // changeOrderId Field Functions 
        bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
        void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
        inline string getChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
        inline ChangeOrderList& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


        // coType Field Functions 
        bool hasCoType() const { return this->coType_ != nullptr;};
        void deleteCoType() { this->coType_ = nullptr;};
        inline string getCoType() const { DARABONBA_PTR_GET_DEFAULT(coType_, "") };
        inline ChangeOrderList& setCoType(string coType) { DARABONBA_PTR_SET_VALUE(coType_, coType) };


        // coTypeCode Field Functions 
        bool hasCoTypeCode() const { return this->coTypeCode_ != nullptr;};
        void deleteCoTypeCode() { this->coTypeCode_ = nullptr;};
        inline string getCoTypeCode() const { DARABONBA_PTR_GET_DEFAULT(coTypeCode_, "") };
        inline ChangeOrderList& setCoTypeCode(string coTypeCode) { DARABONBA_PTR_SET_VALUE(coTypeCode_, coTypeCode) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ChangeOrderList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUserId Field Functions 
        bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
        void deleteCreateUserId() { this->createUserId_ = nullptr;};
        inline string getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
        inline ChangeOrderList& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ChangeOrderList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline ChangeOrderList& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ChangeOrderList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // namespaceId Field Functions 
        bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
        void deleteNamespaceId() { this->namespaceId_ = nullptr;};
        inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
        inline ChangeOrderList& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


        // pipelines Field Functions 
        bool hasPipelines() const { return this->pipelines_ != nullptr;};
        void deletePipelines() { this->pipelines_ = nullptr;};
        inline string getPipelines() const { DARABONBA_PTR_GET_DEFAULT(pipelines_, "") };
        inline ChangeOrderList& setPipelines(string pipelines) { DARABONBA_PTR_SET_VALUE(pipelines_, pipelines) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline ChangeOrderList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline ChangeOrderList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline ChangeOrderList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The number of release batches.
        shared_ptr<int32_t> batchCount_ {};
        // The mode in which the release batches are determined. Valid values:
        // 
        // *   **auto**: SAE automatically determines the release batches.
        // *   **manual**: You must manually determine the release batches.
        shared_ptr<string> batchType_ {};
        // The ID of the change order.
        shared_ptr<string> changeOrderId_ {};
        // The type of the change order, which corresponds the **CoTypeCode** parameter.
        shared_ptr<string> coType_ {};
        // The code of the change order type. Valid values:
        // 
        // *   **CoBatchStartApplication**: starts multiple applications concurrently.
        // *   **CoBatchStopApplication**: stops multiple applications concurrently.
        shared_ptr<string> coTypeCode_ {};
        // The time when the change order was created.
        shared_ptr<string> createTime_ {};
        // The ID of the user who created the change order.
        shared_ptr<string> createUserId_ {};
        // The description of the change order.
        shared_ptr<string> description_ {};
        // The time when the change order was completed.
        shared_ptr<string> finishTime_ {};
        // The ID of the group.
        shared_ptr<string> groupId_ {};
        // The ID of the namespace.
        shared_ptr<string> namespaceId_ {};
        // The information about release batches.
        shared_ptr<string> pipelines_ {};
        // The source of the change order.
        shared_ptr<string> source_ {};
        // The status of the change order. Valid values:
        // 
        // *   **0**: The change order is being prepared.
        // *   **1**: The change order is being executed.
        // *   **2**: The change order was executed.
        // *   **3**: The change order could not be executed.
        // *   **6**: The change order was terminated.
        // *   **10**: The change order could not be executed due to a system exception.
        shared_ptr<int32_t> status_ {};
        // The ID of the user.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->changeOrderList_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // changeOrderList Field Functions 
      bool hasChangeOrderList() const { return this->changeOrderList_ != nullptr;};
      void deleteChangeOrderList() { this->changeOrderList_ = nullptr;};
      inline const vector<Data::ChangeOrderList> & getChangeOrderList() const { DARABONBA_PTR_GET_CONST(changeOrderList_, vector<Data::ChangeOrderList>) };
      inline vector<Data::ChangeOrderList> getChangeOrderList() { DARABONBA_PTR_GET(changeOrderList_, vector<Data::ChangeOrderList>) };
      inline Data& setChangeOrderList(const vector<Data::ChangeOrderList> & changeOrderList) { DARABONBA_PTR_SET_VALUE(changeOrderList_, changeOrderList) };
      inline Data& setChangeOrderList(vector<Data::ChangeOrderList> && changeOrderList) { DARABONBA_PTR_SET_RVALUE(changeOrderList_, changeOrderList) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The list of change orders.
      shared_ptr<vector<Data::ChangeOrderList>> changeOrderList_ {};
      // The number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned on each page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of change orders.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListNamespaceChangeOrdersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListNamespaceChangeOrdersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListNamespaceChangeOrdersResponseBody::Data) };
    inline ListNamespaceChangeOrdersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListNamespaceChangeOrdersResponseBody::Data) };
    inline ListNamespaceChangeOrdersResponseBody& setData(const ListNamespaceChangeOrdersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListNamespaceChangeOrdersResponseBody& setData(ListNamespaceChangeOrdersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListNamespaceChangeOrdersResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListNamespaceChangeOrdersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNamespaceChangeOrdersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListNamespaceChangeOrdersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ListNamespaceChangeOrdersResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: indicates that the request was successful.
    // *   **3xx**: indicates that the request was redirected.
    // *   **4xx**: indicates that the request was invalid.
    // *   **5xx**: indicates that a server error occurred.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListNamespaceChangeOrdersResponseBody::Data> data_ {};
    // The error code.
    // 
    // *   The **ErrorCode** parameter is not returned when the request succeeds.
    // *   The **ErrorCode** parameter is returned when the request fails. For more information, see **Error codes** in this topic.
    shared_ptr<string> errorCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the list of change orders was obtained. Valid values:
    // 
    // *   **true**: indicates that the list was obtained.
    // *   **false**: indicates that the list could not be obtained.
    shared_ptr<bool> success_ {};
    // The ID of the trace. It is used to query the details of a request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
