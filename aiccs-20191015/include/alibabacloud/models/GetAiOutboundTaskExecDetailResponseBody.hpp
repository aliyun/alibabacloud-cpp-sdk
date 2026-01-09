// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKEXECDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKEXECDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAiOutboundTaskExecDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiOutboundTaskExecDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiOutboundTaskExecDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAiOutboundTaskExecDetailResponseBody() = default ;
    GetAiOutboundTaskExecDetailResponseBody(const GetAiOutboundTaskExecDetailResponseBody &) = default ;
    GetAiOutboundTaskExecDetailResponseBody(GetAiOutboundTaskExecDetailResponseBody &&) = default ;
    GetAiOutboundTaskExecDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiOutboundTaskExecDetailResponseBody() = default ;
    GetAiOutboundTaskExecDetailResponseBody& operator=(const GetAiOutboundTaskExecDetailResponseBody &) = default ;
    GetAiOutboundTaskExecDetailResponseBody& operator=(GetAiOutboundTaskExecDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(HasNextPage, hasNextPage_);
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalResults, totalResults_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(HasNextPage, hasNextPage_);
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalResults, totalResults_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(BatchVersion, batchVersion_);
          DARABONBA_PTR_TO_JSON(BizData, bizData_);
          DARABONBA_PTR_TO_JSON(CallCount, callCount_);
          DARABONBA_PTR_TO_JSON(CaseId, caseId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(LastCallResult, lastCallResult_);
          DARABONBA_PTR_TO_JSON(PhoneNum, phoneNum_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(BatchVersion, batchVersion_);
          DARABONBA_PTR_FROM_JSON(BizData, bizData_);
          DARABONBA_PTR_FROM_JSON(CallCount, callCount_);
          DARABONBA_PTR_FROM_JSON(CaseId, caseId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(LastCallResult, lastCallResult_);
          DARABONBA_PTR_FROM_JSON(PhoneNum, phoneNum_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->batchVersion_ == nullptr
        && this->bizData_ == nullptr && this->callCount_ == nullptr && this->caseId_ == nullptr && this->createTime_ == nullptr && this->lastCallResult_ == nullptr
        && this->phoneNum_ == nullptr && this->status_ == nullptr && this->statusDesc_ == nullptr; };
        // batchVersion Field Functions 
        bool hasBatchVersion() const { return this->batchVersion_ != nullptr;};
        void deleteBatchVersion() { this->batchVersion_ = nullptr;};
        inline int32_t getBatchVersion() const { DARABONBA_PTR_GET_DEFAULT(batchVersion_, 0) };
        inline List& setBatchVersion(int32_t batchVersion) { DARABONBA_PTR_SET_VALUE(batchVersion_, batchVersion) };


        // bizData Field Functions 
        bool hasBizData() const { return this->bizData_ != nullptr;};
        void deleteBizData() { this->bizData_ = nullptr;};
        inline string getBizData() const { DARABONBA_PTR_GET_DEFAULT(bizData_, "") };
        inline List& setBizData(string bizData) { DARABONBA_PTR_SET_VALUE(bizData_, bizData) };


        // callCount Field Functions 
        bool hasCallCount() const { return this->callCount_ != nullptr;};
        void deleteCallCount() { this->callCount_ = nullptr;};
        inline int32_t getCallCount() const { DARABONBA_PTR_GET_DEFAULT(callCount_, 0) };
        inline List& setCallCount(int32_t callCount) { DARABONBA_PTR_SET_VALUE(callCount_, callCount) };


        // caseId Field Functions 
        bool hasCaseId() const { return this->caseId_ != nullptr;};
        void deleteCaseId() { this->caseId_ = nullptr;};
        inline int64_t getCaseId() const { DARABONBA_PTR_GET_DEFAULT(caseId_, 0L) };
        inline List& setCaseId(int64_t caseId) { DARABONBA_PTR_SET_VALUE(caseId_, caseId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline List& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // lastCallResult Field Functions 
        bool hasLastCallResult() const { return this->lastCallResult_ != nullptr;};
        void deleteLastCallResult() { this->lastCallResult_ = nullptr;};
        inline string getLastCallResult() const { DARABONBA_PTR_GET_DEFAULT(lastCallResult_, "") };
        inline List& setLastCallResult(string lastCallResult) { DARABONBA_PTR_SET_VALUE(lastCallResult_, lastCallResult) };


        // phoneNum Field Functions 
        bool hasPhoneNum() const { return this->phoneNum_ != nullptr;};
        void deletePhoneNum() { this->phoneNum_ = nullptr;};
        inline string getPhoneNum() const { DARABONBA_PTR_GET_DEFAULT(phoneNum_, "") };
        inline List& setPhoneNum(string phoneNum) { DARABONBA_PTR_SET_VALUE(phoneNum_, phoneNum) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline List& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusDesc Field Functions 
        bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
        void deleteStatusDesc() { this->statusDesc_ = nullptr;};
        inline int32_t getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, 0) };
        inline List& setStatusDesc(int32_t statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


      protected:
        shared_ptr<int32_t> batchVersion_ {};
        shared_ptr<string> bizData_ {};
        shared_ptr<int32_t> callCount_ {};
        shared_ptr<int64_t> caseId_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> lastCallResult_ {};
        shared_ptr<string> phoneNum_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<int32_t> statusDesc_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->hasNextPage_ == nullptr && this->list_ == nullptr && this->pageSize_ == nullptr && this->totalResults_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // hasNextPage Field Functions 
      bool hasHasNextPage() const { return this->hasNextPage_ != nullptr;};
      void deleteHasNextPage() { this->hasNextPage_ = nullptr;};
      inline bool getHasNextPage() const { DARABONBA_PTR_GET_DEFAULT(hasNextPage_, false) };
      inline Data& setHasNextPage(bool hasNextPage) { DARABONBA_PTR_SET_VALUE(hasNextPage_, hasNextPage) };


      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalResults Field Functions 
      bool hasTotalResults() const { return this->totalResults_ != nullptr;};
      void deleteTotalResults() { this->totalResults_ = nullptr;};
      inline int32_t getTotalResults() const { DARABONBA_PTR_GET_DEFAULT(totalResults_, 0) };
      inline Data& setTotalResults(int32_t totalResults) { DARABONBA_PTR_SET_VALUE(totalResults_, totalResults) };


    protected:
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<bool> hasNextPage_ {};
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalResults_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAiOutboundTaskExecDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAiOutboundTaskExecDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAiOutboundTaskExecDetailResponseBody::Data) };
    inline GetAiOutboundTaskExecDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAiOutboundTaskExecDetailResponseBody::Data) };
    inline GetAiOutboundTaskExecDetailResponseBody& setData(const GetAiOutboundTaskExecDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAiOutboundTaskExecDetailResponseBody& setData(GetAiOutboundTaskExecDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAiOutboundTaskExecDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAiOutboundTaskExecDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAiOutboundTaskExecDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetAiOutboundTaskExecDetailResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
