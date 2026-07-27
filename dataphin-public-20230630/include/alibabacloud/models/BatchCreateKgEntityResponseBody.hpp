// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEKGENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEKGENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class BatchCreateKgEntityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateKgEntityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateResult, createResult_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateKgEntityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateResult, createResult_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchCreateKgEntityResponseBody() = default ;
    BatchCreateKgEntityResponseBody(const BatchCreateKgEntityResponseBody &) = default ;
    BatchCreateKgEntityResponseBody(BatchCreateKgEntityResponseBody &&) = default ;
    BatchCreateKgEntityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateKgEntityResponseBody() = default ;
    BatchCreateKgEntityResponseBody& operator=(const BatchCreateKgEntityResponseBody &) = default ;
    BatchCreateKgEntityResponseBody& operator=(BatchCreateKgEntityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateResult& obj) { 
        DARABONBA_PTR_TO_JSON(FailCount, failCount_);
        DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_TO_JSON(SuccessEntityList, successEntityList_);
      };
      friend void from_json(const Darabonba::Json& j, CreateResult& obj) { 
        DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
        DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_FROM_JSON(SuccessEntityList, successEntityList_);
      };
      CreateResult() = default ;
      CreateResult(const CreateResult &) = default ;
      CreateResult(CreateResult &&) = default ;
      CreateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateResult() = default ;
      CreateResult& operator=(const CreateResult &) = default ;
      CreateResult& operator=(CreateResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SuccessEntityList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SuccessEntityList& obj) { 
          DARABONBA_PTR_TO_JSON(EntityId, entityId_);
          DARABONBA_PTR_TO_JSON(EntityType, entityType_);
        };
        friend void from_json(const Darabonba::Json& j, SuccessEntityList& obj) { 
          DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
          DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
        };
        SuccessEntityList() = default ;
        SuccessEntityList(const SuccessEntityList &) = default ;
        SuccessEntityList(SuccessEntityList &&) = default ;
        SuccessEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SuccessEntityList() = default ;
        SuccessEntityList& operator=(const SuccessEntityList &) = default ;
        SuccessEntityList& operator=(SuccessEntityList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->entityId_ == nullptr
        && this->entityType_ == nullptr; };
        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline SuccessEntityList& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // entityType Field Functions 
        bool hasEntityType() const { return this->entityType_ != nullptr;};
        void deleteEntityType() { this->entityType_ = nullptr;};
        inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
        inline SuccessEntityList& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      protected:
        // The entity record ID.
        shared_ptr<string> entityId_ {};
        // The entity type code.
        shared_ptr<string> entityType_ {};
      };

      virtual bool empty() const override { return this->failCount_ == nullptr
        && this->successCount_ == nullptr && this->successEntityList_ == nullptr; };
      // failCount Field Functions 
      bool hasFailCount() const { return this->failCount_ != nullptr;};
      void deleteFailCount() { this->failCount_ = nullptr;};
      inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
      inline CreateResult& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline CreateResult& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      // successEntityList Field Functions 
      bool hasSuccessEntityList() const { return this->successEntityList_ != nullptr;};
      void deleteSuccessEntityList() { this->successEntityList_ = nullptr;};
      inline const vector<CreateResult::SuccessEntityList> & getSuccessEntityList() const { DARABONBA_PTR_GET_CONST(successEntityList_, vector<CreateResult::SuccessEntityList>) };
      inline vector<CreateResult::SuccessEntityList> getSuccessEntityList() { DARABONBA_PTR_GET(successEntityList_, vector<CreateResult::SuccessEntityList>) };
      inline CreateResult& setSuccessEntityList(const vector<CreateResult::SuccessEntityList> & successEntityList) { DARABONBA_PTR_SET_VALUE(successEntityList_, successEntityList) };
      inline CreateResult& setSuccessEntityList(vector<CreateResult::SuccessEntityList> && successEntityList) { DARABONBA_PTR_SET_RVALUE(successEntityList_, successEntityList) };


    protected:
      // The number of failed records.
      shared_ptr<int32_t> failCount_ {};
      // The number of successfully created records.
      shared_ptr<int32_t> successCount_ {};
      // The list of IDs of successfully created entity records.
      shared_ptr<vector<CreateResult::SuccessEntityList>> successEntityList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->createResult_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchCreateKgEntityResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createResult Field Functions 
    bool hasCreateResult() const { return this->createResult_ != nullptr;};
    void deleteCreateResult() { this->createResult_ = nullptr;};
    inline const BatchCreateKgEntityResponseBody::CreateResult & getCreateResult() const { DARABONBA_PTR_GET_CONST(createResult_, BatchCreateKgEntityResponseBody::CreateResult) };
    inline BatchCreateKgEntityResponseBody::CreateResult getCreateResult() { DARABONBA_PTR_GET(createResult_, BatchCreateKgEntityResponseBody::CreateResult) };
    inline BatchCreateKgEntityResponseBody& setCreateResult(const BatchCreateKgEntityResponseBody::CreateResult & createResult) { DARABONBA_PTR_SET_VALUE(createResult_, createResult) };
    inline BatchCreateKgEntityResponseBody& setCreateResult(BatchCreateKgEntityResponseBody::CreateResult && createResult) { DARABONBA_PTR_SET_RVALUE(createResult_, createResult) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline BatchCreateKgEntityResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchCreateKgEntityResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchCreateKgEntityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchCreateKgEntityResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The result of creating entity records in batches.
    shared_ptr<BatchCreateKgEntityResponseBody::CreateResult> createResult_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
