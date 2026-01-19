// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class ListCasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCasesResponseBody() = default ;
    ListCasesResponseBody(const ListCasesResponseBody &) = default ;
    ListCasesResponseBody(ListCasesResponseBody &&) = default ;
    ListCasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCasesResponseBody() = default ;
    ListCasesResponseBody& operator=(const ListCasesResponseBody &) = default ;
    ListCasesResponseBody& operator=(ListCasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AbandonType, abandonType_);
          DARABONBA_PTR_TO_JSON(AttemptCount, attemptCount_);
          DARABONBA_PTR_TO_JSON(CaseId, caseId_);
          DARABONBA_PTR_TO_JSON(CustomVariables, customVariables_);
          DARABONBA_PTR_TO_JSON(ExpandInfo, expandInfo_);
          DARABONBA_PTR_TO_JSON(FailureReason, failureReason_);
          DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
          DARABONBA_PTR_TO_JSON(State, state_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AbandonType, abandonType_);
          DARABONBA_PTR_FROM_JSON(AttemptCount, attemptCount_);
          DARABONBA_PTR_FROM_JSON(CaseId, caseId_);
          DARABONBA_PTR_FROM_JSON(CustomVariables, customVariables_);
          DARABONBA_PTR_FROM_JSON(ExpandInfo, expandInfo_);
          DARABONBA_PTR_FROM_JSON(FailureReason, failureReason_);
          DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
          DARABONBA_PTR_FROM_JSON(State, state_);
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
        virtual bool empty() const override { return this->abandonType_ == nullptr
        && this->attemptCount_ == nullptr && this->caseId_ == nullptr && this->customVariables_ == nullptr && this->expandInfo_ == nullptr && this->failureReason_ == nullptr
        && this->phoneNumber_ == nullptr && this->state_ == nullptr; };
        // abandonType Field Functions 
        bool hasAbandonType() const { return this->abandonType_ != nullptr;};
        void deleteAbandonType() { this->abandonType_ = nullptr;};
        inline string getAbandonType() const { DARABONBA_PTR_GET_DEFAULT(abandonType_, "") };
        inline List& setAbandonType(string abandonType) { DARABONBA_PTR_SET_VALUE(abandonType_, abandonType) };


        // attemptCount Field Functions 
        bool hasAttemptCount() const { return this->attemptCount_ != nullptr;};
        void deleteAttemptCount() { this->attemptCount_ = nullptr;};
        inline int64_t getAttemptCount() const { DARABONBA_PTR_GET_DEFAULT(attemptCount_, 0L) };
        inline List& setAttemptCount(int64_t attemptCount) { DARABONBA_PTR_SET_VALUE(attemptCount_, attemptCount) };


        // caseId Field Functions 
        bool hasCaseId() const { return this->caseId_ != nullptr;};
        void deleteCaseId() { this->caseId_ = nullptr;};
        inline string getCaseId() const { DARABONBA_PTR_GET_DEFAULT(caseId_, "") };
        inline List& setCaseId(string caseId) { DARABONBA_PTR_SET_VALUE(caseId_, caseId) };


        // customVariables Field Functions 
        bool hasCustomVariables() const { return this->customVariables_ != nullptr;};
        void deleteCustomVariables() { this->customVariables_ = nullptr;};
        inline string getCustomVariables() const { DARABONBA_PTR_GET_DEFAULT(customVariables_, "") };
        inline List& setCustomVariables(string customVariables) { DARABONBA_PTR_SET_VALUE(customVariables_, customVariables) };


        // expandInfo Field Functions 
        bool hasExpandInfo() const { return this->expandInfo_ != nullptr;};
        void deleteExpandInfo() { this->expandInfo_ = nullptr;};
        inline string getExpandInfo() const { DARABONBA_PTR_GET_DEFAULT(expandInfo_, "") };
        inline List& setExpandInfo(string expandInfo) { DARABONBA_PTR_SET_VALUE(expandInfo_, expandInfo) };


        // failureReason Field Functions 
        bool hasFailureReason() const { return this->failureReason_ != nullptr;};
        void deleteFailureReason() { this->failureReason_ = nullptr;};
        inline string getFailureReason() const { DARABONBA_PTR_GET_DEFAULT(failureReason_, "") };
        inline List& setFailureReason(string failureReason) { DARABONBA_PTR_SET_VALUE(failureReason_, failureReason) };


        // phoneNumber Field Functions 
        bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
        void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
        inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
        inline List& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline List& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      protected:
        shared_ptr<string> abandonType_ {};
        shared_ptr<int64_t> attemptCount_ {};
        shared_ptr<string> caseId_ {};
        shared_ptr<string> customVariables_ {};
        shared_ptr<string> expandInfo_ {};
        shared_ptr<string> failureReason_ {};
        shared_ptr<string> phoneNumber_ {};
        shared_ptr<string> state_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int64_t> pageNumber_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCasesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCasesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCasesResponseBody::Data) };
    inline ListCasesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCasesResponseBody::Data) };
    inline ListCasesResponseBody& setData(const ListCasesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCasesResponseBody& setData(ListCasesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline ListCasesResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCasesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCasesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListCasesResponseBody::Data> data_ {};
    shared_ptr<int64_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
