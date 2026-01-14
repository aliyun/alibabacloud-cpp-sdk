// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMIGRATIONOPERATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMIGRATIONOPERATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListMigrationOperationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMigrationOperationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListMigrationOperationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListMigrationOperationsResponseBody() = default ;
    ListMigrationOperationsResponseBody(const ListMigrationOperationsResponseBody &) = default ;
    ListMigrationOperationsResponseBody(ListMigrationOperationsResponseBody &&) = default ;
    ListMigrationOperationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMigrationOperationsResponseBody() = default ;
    ListMigrationOperationsResponseBody& operator=(const ListMigrationOperationsResponseBody &) = default ;
    ListMigrationOperationsResponseBody& operator=(ListMigrationOperationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(list, list_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(list, list_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
          DARABONBA_PTR_TO_JSON(businessStatus, businessStatus_);
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(migrationId, migrationId_);
          DARABONBA_PTR_TO_JSON(operationId, operationId_);
          DARABONBA_PTR_TO_JSON(operationKey, operationKey_);
          DARABONBA_PTR_TO_JSON(operationParam, operationParam_);
          DARABONBA_PTR_TO_JSON(operationResult, operationResult_);
          DARABONBA_PTR_TO_JSON(operationStatus, operationStatus_);
          DARABONBA_PTR_TO_JSON(operationType, operationType_);
          DARABONBA_PTR_TO_JSON(stageType, stageType_);
          DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(businessStatus, businessStatus_);
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(migrationId, migrationId_);
          DARABONBA_PTR_FROM_JSON(operationId, operationId_);
          DARABONBA_PTR_FROM_JSON(operationKey, operationKey_);
          DARABONBA_PTR_FROM_JSON(operationParam, operationParam_);
          DARABONBA_PTR_FROM_JSON(operationResult, operationResult_);
          DARABONBA_PTR_FROM_JSON(operationStatus, operationStatus_);
          DARABONBA_PTR_FROM_JSON(operationType, operationType_);
          DARABONBA_PTR_FROM_JSON(stageType, stageType_);
          DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
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
        class OperationResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OperationResult& obj) { 
            DARABONBA_ANY_TO_JSON(resultData, resultData_);
          };
          friend void from_json(const Darabonba::Json& j, OperationResult& obj) { 
            DARABONBA_ANY_FROM_JSON(resultData, resultData_);
          };
          OperationResult() = default ;
          OperationResult(const OperationResult &) = default ;
          OperationResult(OperationResult &&) = default ;
          OperationResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OperationResult() = default ;
          OperationResult& operator=(const OperationResult &) = default ;
          OperationResult& operator=(OperationResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->resultData_ == nullptr; };
          // resultData Field Functions 
          bool hasResultData() const { return this->resultData_ != nullptr;};
          void deleteResultData() { this->resultData_ = nullptr;};
          inline           const Darabonba::Json & getResultData() const { DARABONBA_GET(resultData_) };
          Darabonba::Json & getResultData() { DARABONBA_GET(resultData_) };
          inline OperationResult& setResultData(const Darabonba::Json & resultData) { DARABONBA_SET_VALUE(resultData_, resultData) };
          inline OperationResult& setResultData(Darabonba::Json && resultData) { DARABONBA_SET_RVALUE(resultData_, resultData) };


        protected:
          Darabonba::Json resultData_ {};
        };

        class OperationParam : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OperationParam& obj) { 
            DARABONBA_ANY_TO_JSON(paramData, paramData_);
          };
          friend void from_json(const Darabonba::Json& j, OperationParam& obj) { 
            DARABONBA_ANY_FROM_JSON(paramData, paramData_);
          };
          OperationParam() = default ;
          OperationParam(const OperationParam &) = default ;
          OperationParam(OperationParam &&) = default ;
          OperationParam(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OperationParam() = default ;
          OperationParam& operator=(const OperationParam &) = default ;
          OperationParam& operator=(OperationParam &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->paramData_ == nullptr; };
          // paramData Field Functions 
          bool hasParamData() const { return this->paramData_ != nullptr;};
          void deleteParamData() { this->paramData_ = nullptr;};
          inline           const Darabonba::Json & getParamData() const { DARABONBA_GET(paramData_) };
          Darabonba::Json & getParamData() { DARABONBA_GET(paramData_) };
          inline OperationParam& setParamData(const Darabonba::Json & paramData) { DARABONBA_SET_VALUE(paramData_, paramData) };
          inline OperationParam& setParamData(Darabonba::Json && paramData) { DARABONBA_SET_RVALUE(paramData_, paramData) };


        protected:
          Darabonba::Json paramData_ {};
        };

        virtual bool empty() const override { return this->businessStatus_ == nullptr
        && this->createTime_ == nullptr && this->migrationId_ == nullptr && this->operationId_ == nullptr && this->operationKey_ == nullptr && this->operationParam_ == nullptr
        && this->operationResult_ == nullptr && this->operationStatus_ == nullptr && this->operationType_ == nullptr && this->stageType_ == nullptr && this->updateTime_ == nullptr; };
        // businessStatus Field Functions 
        bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
        void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
        inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
        inline List& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline List& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // migrationId Field Functions 
        bool hasMigrationId() const { return this->migrationId_ != nullptr;};
        void deleteMigrationId() { this->migrationId_ = nullptr;};
        inline int64_t getMigrationId() const { DARABONBA_PTR_GET_DEFAULT(migrationId_, 0L) };
        inline List& setMigrationId(int64_t migrationId) { DARABONBA_PTR_SET_VALUE(migrationId_, migrationId) };


        // operationId Field Functions 
        bool hasOperationId() const { return this->operationId_ != nullptr;};
        void deleteOperationId() { this->operationId_ = nullptr;};
        inline int64_t getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, 0L) };
        inline List& setOperationId(int64_t operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


        // operationKey Field Functions 
        bool hasOperationKey() const { return this->operationKey_ != nullptr;};
        void deleteOperationKey() { this->operationKey_ = nullptr;};
        inline string getOperationKey() const { DARABONBA_PTR_GET_DEFAULT(operationKey_, "") };
        inline List& setOperationKey(string operationKey) { DARABONBA_PTR_SET_VALUE(operationKey_, operationKey) };


        // operationParam Field Functions 
        bool hasOperationParam() const { return this->operationParam_ != nullptr;};
        void deleteOperationParam() { this->operationParam_ = nullptr;};
        inline const List::OperationParam & getOperationParam() const { DARABONBA_PTR_GET_CONST(operationParam_, List::OperationParam) };
        inline List::OperationParam getOperationParam() { DARABONBA_PTR_GET(operationParam_, List::OperationParam) };
        inline List& setOperationParam(const List::OperationParam & operationParam) { DARABONBA_PTR_SET_VALUE(operationParam_, operationParam) };
        inline List& setOperationParam(List::OperationParam && operationParam) { DARABONBA_PTR_SET_RVALUE(operationParam_, operationParam) };


        // operationResult Field Functions 
        bool hasOperationResult() const { return this->operationResult_ != nullptr;};
        void deleteOperationResult() { this->operationResult_ = nullptr;};
        inline const List::OperationResult & getOperationResult() const { DARABONBA_PTR_GET_CONST(operationResult_, List::OperationResult) };
        inline List::OperationResult getOperationResult() { DARABONBA_PTR_GET(operationResult_, List::OperationResult) };
        inline List& setOperationResult(const List::OperationResult & operationResult) { DARABONBA_PTR_SET_VALUE(operationResult_, operationResult) };
        inline List& setOperationResult(List::OperationResult && operationResult) { DARABONBA_PTR_SET_RVALUE(operationResult_, operationResult) };


        // operationStatus Field Functions 
        bool hasOperationStatus() const { return this->operationStatus_ != nullptr;};
        void deleteOperationStatus() { this->operationStatus_ = nullptr;};
        inline string getOperationStatus() const { DARABONBA_PTR_GET_DEFAULT(operationStatus_, "") };
        inline List& setOperationStatus(string operationStatus) { DARABONBA_PTR_SET_VALUE(operationStatus_, operationStatus) };


        // operationType Field Functions 
        bool hasOperationType() const { return this->operationType_ != nullptr;};
        void deleteOperationType() { this->operationType_ = nullptr;};
        inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
        inline List& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


        // stageType Field Functions 
        bool hasStageType() const { return this->stageType_ != nullptr;};
        void deleteStageType() { this->stageType_ = nullptr;};
        inline string getStageType() const { DARABONBA_PTR_GET_DEFAULT(stageType_, "") };
        inline List& setStageType(string stageType) { DARABONBA_PTR_SET_VALUE(stageType_, stageType) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline List& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<string> businessStatus_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<int64_t> migrationId_ {};
        shared_ptr<int64_t> operationId_ {};
        shared_ptr<string> operationKey_ {};
        shared_ptr<List::OperationParam> operationParam_ {};
        shared_ptr<List::OperationResult> operationResult_ {};
        shared_ptr<string> operationStatus_ {};
        shared_ptr<string> operationType_ {};
        shared_ptr<string> stageType_ {};
        shared_ptr<string> updateTime_ {};
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
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListMigrationOperationsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListMigrationOperationsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListMigrationOperationsResponseBody::Data) };
    inline ListMigrationOperationsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListMigrationOperationsResponseBody::Data) };
    inline ListMigrationOperationsResponseBody& setData(const ListMigrationOperationsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMigrationOperationsResponseBody& setData(ListMigrationOperationsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListMigrationOperationsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListMigrationOperationsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListMigrationOperationsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListMigrationOperationsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMigrationOperationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMigrationOperationsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListMigrationOperationsResponseBody::Data> data_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
