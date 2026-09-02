// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHCHANGETABLEOWNERSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHCHANGETABLEOWNERSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetBatchChangeTableOwnerStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchChangeTableOwnerStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchChangeTableOwnerStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBatchChangeTableOwnerStatusResponseBody() = default ;
    GetBatchChangeTableOwnerStatusResponseBody(const GetBatchChangeTableOwnerStatusResponseBody &) = default ;
    GetBatchChangeTableOwnerStatusResponseBody(GetBatchChangeTableOwnerStatusResponseBody &&) = default ;
    GetBatchChangeTableOwnerStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchChangeTableOwnerStatusResponseBody() = default ;
    GetBatchChangeTableOwnerStatusResponseBody& operator=(const GetBatchChangeTableOwnerStatusResponseBody &) = default ;
    GetBatchChangeTableOwnerStatusResponseBody& operator=(GetBatchChangeTableOwnerStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BatchId, batchId_);
        DARABONBA_PTR_TO_JSON(Details, details_);
        DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
        DARABONBA_PTR_TO_JSON(OngoingCount, ongoingCount_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
        DARABONBA_PTR_FROM_JSON(Details, details_);
        DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
        DARABONBA_PTR_FROM_JSON(OngoingCount, ongoingCount_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
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
      class Details : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Details& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TableMetaEntityId, tableMetaEntityId_);
        };
        friend void from_json(const Darabonba::Json& j, Details& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TableMetaEntityId, tableMetaEntityId_);
        };
        Details() = default ;
        Details(const Details &) = default ;
        Details(Details &&) = default ;
        Details(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Details() = default ;
        Details& operator=(const Details &) = default ;
        Details& operator=(Details &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->status_ == nullptr && this->tableMetaEntityId_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline Details& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Details& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tableMetaEntityId Field Functions 
        bool hasTableMetaEntityId() const { return this->tableMetaEntityId_ != nullptr;};
        void deleteTableMetaEntityId() { this->tableMetaEntityId_ = nullptr;};
        inline string getTableMetaEntityId() const { DARABONBA_PTR_GET_DEFAULT(tableMetaEntityId_, "") };
        inline Details& setTableMetaEntityId(string tableMetaEntityId) { DARABONBA_PTR_SET_VALUE(tableMetaEntityId_, tableMetaEntityId) };


      protected:
        shared_ptr<string> errorMessage_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> tableMetaEntityId_ {};
      };

      virtual bool empty() const override { return this->batchId_ == nullptr
        && this->details_ == nullptr && this->failedCount_ == nullptr && this->ongoingCount_ == nullptr && this->status_ == nullptr && this->successCount_ == nullptr
        && this->totalCount_ == nullptr; };
      // batchId Field Functions 
      bool hasBatchId() const { return this->batchId_ != nullptr;};
      void deleteBatchId() { this->batchId_ = nullptr;};
      inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
      inline Data& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


      // details Field Functions 
      bool hasDetails() const { return this->details_ != nullptr;};
      void deleteDetails() { this->details_ = nullptr;};
      inline const vector<Data::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<Data::Details>) };
      inline vector<Data::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<Data::Details>) };
      inline Data& setDetails(const vector<Data::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
      inline Data& setDetails(vector<Data::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


      // failedCount Field Functions 
      bool hasFailedCount() const { return this->failedCount_ != nullptr;};
      void deleteFailedCount() { this->failedCount_ = nullptr;};
      inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
      inline Data& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


      // ongoingCount Field Functions 
      bool hasOngoingCount() const { return this->ongoingCount_ != nullptr;};
      void deleteOngoingCount() { this->ongoingCount_ = nullptr;};
      inline int32_t getOngoingCount() const { DARABONBA_PTR_GET_DEFAULT(ongoingCount_, 0) };
      inline Data& setOngoingCount(int32_t ongoingCount) { DARABONBA_PTR_SET_VALUE(ongoingCount_, ongoingCount) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline Data& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<string> batchId_ {};
      shared_ptr<vector<Data::Details>> details_ {};
      shared_ptr<int32_t> failedCount_ {};
      shared_ptr<int32_t> ongoingCount_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int32_t> successCount_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBatchChangeTableOwnerStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBatchChangeTableOwnerStatusResponseBody::Data) };
    inline GetBatchChangeTableOwnerStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBatchChangeTableOwnerStatusResponseBody::Data) };
    inline GetBatchChangeTableOwnerStatusResponseBody& setData(const GetBatchChangeTableOwnerStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBatchChangeTableOwnerStatusResponseBody& setData(GetBatchChangeTableOwnerStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBatchChangeTableOwnerStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBatchChangeTableOwnerStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<GetBatchChangeTableOwnerStatusResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
