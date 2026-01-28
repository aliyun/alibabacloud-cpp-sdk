// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCHANGELOGLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCHANGELOGLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryChangeLogListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryChangeLogListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePage, prePage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultLimit, resultLimit_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, QueryChangeLogListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultLimit, resultLimit_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    QueryChangeLogListResponseBody() = default ;
    QueryChangeLogListResponseBody(const QueryChangeLogListResponseBody &) = default ;
    QueryChangeLogListResponseBody(QueryChangeLogListResponseBody &&) = default ;
    QueryChangeLogListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryChangeLogListResponseBody() = default ;
    QueryChangeLogListResponseBody& operator=(const QueryChangeLogListResponseBody &) = default ;
    QueryChangeLogListResponseBody& operator=(QueryChangeLogListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ChangeLog, changeLog_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ChangeLog, changeLog_);
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
      class ChangeLog : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChangeLog& obj) { 
          DARABONBA_PTR_TO_JSON(Details, details_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(Operation, operation_);
          DARABONBA_PTR_TO_JSON(OperationIPAddress, operationIPAddress_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(Result, result_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, ChangeLog& obj) { 
          DARABONBA_PTR_FROM_JSON(Details, details_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(Operation, operation_);
          DARABONBA_PTR_FROM_JSON(OperationIPAddress, operationIPAddress_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        ChangeLog() = default ;
        ChangeLog(const ChangeLog &) = default ;
        ChangeLog(ChangeLog &&) = default ;
        ChangeLog(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChangeLog() = default ;
        ChangeLog& operator=(const ChangeLog &) = default ;
        ChangeLog& operator=(ChangeLog &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->details_ == nullptr
        && this->domainName_ == nullptr && this->operation_ == nullptr && this->operationIPAddress_ == nullptr && this->remark_ == nullptr && this->result_ == nullptr
        && this->time_ == nullptr; };
        // details Field Functions 
        bool hasDetails() const { return this->details_ != nullptr;};
        void deleteDetails() { this->details_ = nullptr;};
        inline string getDetails() const { DARABONBA_PTR_GET_DEFAULT(details_, "") };
        inline ChangeLog& setDetails(string details) { DARABONBA_PTR_SET_VALUE(details_, details) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline ChangeLog& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // operation Field Functions 
        bool hasOperation() const { return this->operation_ != nullptr;};
        void deleteOperation() { this->operation_ = nullptr;};
        inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
        inline ChangeLog& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


        // operationIPAddress Field Functions 
        bool hasOperationIPAddress() const { return this->operationIPAddress_ != nullptr;};
        void deleteOperationIPAddress() { this->operationIPAddress_ = nullptr;};
        inline string getOperationIPAddress() const { DARABONBA_PTR_GET_DEFAULT(operationIPAddress_, "") };
        inline ChangeLog& setOperationIPAddress(string operationIPAddress) { DARABONBA_PTR_SET_VALUE(operationIPAddress_, operationIPAddress) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline ChangeLog& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline ChangeLog& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline ChangeLog& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        shared_ptr<string> details_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<string> operation_ {};
        shared_ptr<string> operationIPAddress_ {};
        shared_ptr<string> remark_ {};
        shared_ptr<string> result_ {};
        shared_ptr<string> time_ {};
      };

      virtual bool empty() const override { return this->changeLog_ == nullptr; };
      // changeLog Field Functions 
      bool hasChangeLog() const { return this->changeLog_ != nullptr;};
      void deleteChangeLog() { this->changeLog_ = nullptr;};
      inline const vector<Data::ChangeLog> & getChangeLog() const { DARABONBA_PTR_GET_CONST(changeLog_, vector<Data::ChangeLog>) };
      inline vector<Data::ChangeLog> getChangeLog() { DARABONBA_PTR_GET(changeLog_, vector<Data::ChangeLog>) };
      inline Data& setChangeLog(const vector<Data::ChangeLog> & changeLog) { DARABONBA_PTR_SET_VALUE(changeLog_, changeLog) };
      inline Data& setChangeLog(vector<Data::ChangeLog> && changeLog) { DARABONBA_PTR_SET_RVALUE(changeLog_, changeLog) };


    protected:
      shared_ptr<vector<Data::ChangeLog>> changeLog_ {};
    };

    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->data_ == nullptr && this->nextPage_ == nullptr && this->pageSize_ == nullptr && this->prePage_ == nullptr && this->requestId_ == nullptr
        && this->resultLimit_ == nullptr && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline QueryChangeLogListResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryChangeLogListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryChangeLogListResponseBody::Data) };
    inline QueryChangeLogListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryChangeLogListResponseBody::Data) };
    inline QueryChangeLogListResponseBody& setData(const QueryChangeLogListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryChangeLogListResponseBody& setData(QueryChangeLogListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline bool getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, false) };
    inline QueryChangeLogListResponseBody& setNextPage(bool nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryChangeLogListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePage Field Functions 
    bool hasPrePage() const { return this->prePage_ != nullptr;};
    void deletePrePage() { this->prePage_ = nullptr;};
    inline bool getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, false) };
    inline QueryChangeLogListResponseBody& setPrePage(bool prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryChangeLogListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultLimit Field Functions 
    bool hasResultLimit() const { return this->resultLimit_ != nullptr;};
    void deleteResultLimit() { this->resultLimit_ = nullptr;};
    inline bool getResultLimit() const { DARABONBA_PTR_GET_DEFAULT(resultLimit_, false) };
    inline QueryChangeLogListResponseBody& setResultLimit(bool resultLimit) { DARABONBA_PTR_SET_VALUE(resultLimit_, resultLimit) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline QueryChangeLogListResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline QueryChangeLogListResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    shared_ptr<int32_t> currentPageNum_ {};
    shared_ptr<QueryChangeLogListResponseBody::Data> data_ {};
    shared_ptr<bool> nextPage_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<bool> prePage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> resultLimit_ {};
    shared_ptr<int32_t> totalItemNum_ {};
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
