// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRELATIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRELATIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryRelationListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRelationListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRelationListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryRelationListResponseBody() = default ;
    QueryRelationListResponseBody(const QueryRelationListResponseBody &) = default ;
    QueryRelationListResponseBody(QueryRelationListResponseBody &&) = default ;
    QueryRelationListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRelationListResponseBody() = default ;
    QueryRelationListResponseBody& operator=(const QueryRelationListResponseBody &) = default ;
    QueryRelationListResponseBody& operator=(QueryRelationListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FinancialRelationInfoList, financialRelationInfoList_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FinancialRelationInfoList, financialRelationInfoList_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
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
      class FinancialRelationInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FinancialRelationInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(AccountNickName, accountNickName_);
          DARABONBA_PTR_TO_JSON(AccountType, accountType_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(RelationId, relationId_);
          DARABONBA_PTR_TO_JSON(RelationType, relationType_);
          DARABONBA_PTR_TO_JSON(SetupTime, setupTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(State, state_);
        };
        friend void from_json(const Darabonba::Json& j, FinancialRelationInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(AccountNickName, accountNickName_);
          DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(RelationId, relationId_);
          DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
          DARABONBA_PTR_FROM_JSON(SetupTime, setupTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(State, state_);
        };
        FinancialRelationInfoList() = default ;
        FinancialRelationInfoList(const FinancialRelationInfoList &) = default ;
        FinancialRelationInfoList(FinancialRelationInfoList &&) = default ;
        FinancialRelationInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FinancialRelationInfoList() = default ;
        FinancialRelationInfoList& operator=(const FinancialRelationInfoList &) = default ;
        FinancialRelationInfoList& operator=(FinancialRelationInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->accountNickName_ == nullptr && this->accountType_ == nullptr && this->endTime_ == nullptr && this->relationId_ == nullptr
        && this->relationType_ == nullptr && this->setupTime_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
        inline FinancialRelationInfoList& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline FinancialRelationInfoList& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // accountNickName Field Functions 
        bool hasAccountNickName() const { return this->accountNickName_ != nullptr;};
        void deleteAccountNickName() { this->accountNickName_ = nullptr;};
        inline string getAccountNickName() const { DARABONBA_PTR_GET_DEFAULT(accountNickName_, "") };
        inline FinancialRelationInfoList& setAccountNickName(string accountNickName) { DARABONBA_PTR_SET_VALUE(accountNickName_, accountNickName) };


        // accountType Field Functions 
        bool hasAccountType() const { return this->accountType_ != nullptr;};
        void deleteAccountType() { this->accountType_ = nullptr;};
        inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
        inline FinancialRelationInfoList& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline FinancialRelationInfoList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // relationId Field Functions 
        bool hasRelationId() const { return this->relationId_ != nullptr;};
        void deleteRelationId() { this->relationId_ = nullptr;};
        inline int64_t getRelationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, 0L) };
        inline FinancialRelationInfoList& setRelationId(int64_t relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


        // relationType Field Functions 
        bool hasRelationType() const { return this->relationType_ != nullptr;};
        void deleteRelationType() { this->relationType_ = nullptr;};
        inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
        inline FinancialRelationInfoList& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


        // setupTime Field Functions 
        bool hasSetupTime() const { return this->setupTime_ != nullptr;};
        void deleteSetupTime() { this->setupTime_ = nullptr;};
        inline string getSetupTime() const { DARABONBA_PTR_GET_DEFAULT(setupTime_, "") };
        inline FinancialRelationInfoList& setSetupTime(string setupTime) { DARABONBA_PTR_SET_VALUE(setupTime_, setupTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline FinancialRelationInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline FinancialRelationInfoList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      protected:
        // The ID of the Alibaba Cloud account.
        shared_ptr<int64_t> accountId_ {};
        // The name of the account.
        shared_ptr<string> accountName_ {};
        // The display name of the account.
        shared_ptr<string> accountNickName_ {};
        // The type of the account. Valid values: MASTER and MEMBER.
        shared_ptr<string> accountType_ {};
        // The time when the relationship became invalid. If no value is returned, the relationship is still valid.
        shared_ptr<string> endTime_ {};
        // The ID of the relationship.
        shared_ptr<int64_t> relationId_ {};
        // The type of the relationship. Valid values: FinancialManagement and FinancialTrusteeship.
        shared_ptr<string> relationType_ {};
        // The time when the relationship was established. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC. Example: 2016-05-23T12:00:00Z.
        shared_ptr<string> setupTime_ {};
        // The time when the relationship became valid. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC. Example: 2016-05-23T12:00:00Z.
        shared_ptr<string> startTime_ {};
        // The state of the relationship. One of the enumeration members of the RelationshipStatusEnum data type is returned.
        shared_ptr<string> state_ {};
      };

      virtual bool empty() const override { return this->financialRelationInfoList_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // financialRelationInfoList Field Functions 
      bool hasFinancialRelationInfoList() const { return this->financialRelationInfoList_ != nullptr;};
      void deleteFinancialRelationInfoList() { this->financialRelationInfoList_ = nullptr;};
      inline const vector<Data::FinancialRelationInfoList> & getFinancialRelationInfoList() const { DARABONBA_PTR_GET_CONST(financialRelationInfoList_, vector<Data::FinancialRelationInfoList>) };
      inline vector<Data::FinancialRelationInfoList> getFinancialRelationInfoList() { DARABONBA_PTR_GET(financialRelationInfoList_, vector<Data::FinancialRelationInfoList>) };
      inline Data& setFinancialRelationInfoList(const vector<Data::FinancialRelationInfoList> & financialRelationInfoList) { DARABONBA_PTR_SET_VALUE(financialRelationInfoList_, financialRelationInfoList) };
      inline Data& setFinancialRelationInfoList(vector<Data::FinancialRelationInfoList> && financialRelationInfoList) { DARABONBA_PTR_SET_RVALUE(financialRelationInfoList_, financialRelationInfoList) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


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
      // The relationships.
      shared_ptr<vector<Data::FinancialRelationInfoList>> financialRelationInfoList_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> pageNum_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryRelationListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryRelationListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryRelationListResponseBody::Data) };
    inline QueryRelationListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryRelationListResponseBody::Data) };
    inline QueryRelationListResponseBody& setData(const QueryRelationListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryRelationListResponseBody& setData(QueryRelationListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryRelationListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRelationListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryRelationListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<QueryRelationListResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
