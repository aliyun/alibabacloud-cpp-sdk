// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEKGRELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEKGRELATIONRESPONSEBODY_HPP_
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
  class BatchCreateKgRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateKgRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateResult, createResult_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateKgRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateResult, createResult_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchCreateKgRelationResponseBody() = default ;
    BatchCreateKgRelationResponseBody(const BatchCreateKgRelationResponseBody &) = default ;
    BatchCreateKgRelationResponseBody(BatchCreateKgRelationResponseBody &&) = default ;
    BatchCreateKgRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateKgRelationResponseBody() = default ;
    BatchCreateKgRelationResponseBody& operator=(const BatchCreateKgRelationResponseBody &) = default ;
    BatchCreateKgRelationResponseBody& operator=(BatchCreateKgRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateResult& obj) { 
        DARABONBA_PTR_TO_JSON(FailCount, failCount_);
        DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_TO_JSON(SuccessRelationList, successRelationList_);
      };
      friend void from_json(const Darabonba::Json& j, CreateResult& obj) { 
        DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
        DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_FROM_JSON(SuccessRelationList, successRelationList_);
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
      class SuccessRelationList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SuccessRelationList& obj) { 
          DARABONBA_PTR_TO_JSON(RelationId, relationId_);
          DARABONBA_PTR_TO_JSON(RelationType, relationType_);
        };
        friend void from_json(const Darabonba::Json& j, SuccessRelationList& obj) { 
          DARABONBA_PTR_FROM_JSON(RelationId, relationId_);
          DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
        };
        SuccessRelationList() = default ;
        SuccessRelationList(const SuccessRelationList &) = default ;
        SuccessRelationList(SuccessRelationList &&) = default ;
        SuccessRelationList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SuccessRelationList() = default ;
        SuccessRelationList& operator=(const SuccessRelationList &) = default ;
        SuccessRelationList& operator=(SuccessRelationList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->relationId_ == nullptr
        && this->relationType_ == nullptr; };
        // relationId Field Functions 
        bool hasRelationId() const { return this->relationId_ != nullptr;};
        void deleteRelationId() { this->relationId_ = nullptr;};
        inline string getRelationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, "") };
        inline SuccessRelationList& setRelationId(string relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


        // relationType Field Functions 
        bool hasRelationType() const { return this->relationType_ != nullptr;};
        void deleteRelationType() { this->relationType_ = nullptr;};
        inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
        inline SuccessRelationList& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


      protected:
        // The relationship record ID.
        shared_ptr<string> relationId_ {};
        // The relationship type code.
        shared_ptr<string> relationType_ {};
      };

      virtual bool empty() const override { return this->failCount_ == nullptr
        && this->successCount_ == nullptr && this->successRelationList_ == nullptr; };
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


      // successRelationList Field Functions 
      bool hasSuccessRelationList() const { return this->successRelationList_ != nullptr;};
      void deleteSuccessRelationList() { this->successRelationList_ = nullptr;};
      inline const vector<CreateResult::SuccessRelationList> & getSuccessRelationList() const { DARABONBA_PTR_GET_CONST(successRelationList_, vector<CreateResult::SuccessRelationList>) };
      inline vector<CreateResult::SuccessRelationList> getSuccessRelationList() { DARABONBA_PTR_GET(successRelationList_, vector<CreateResult::SuccessRelationList>) };
      inline CreateResult& setSuccessRelationList(const vector<CreateResult::SuccessRelationList> & successRelationList) { DARABONBA_PTR_SET_VALUE(successRelationList_, successRelationList) };
      inline CreateResult& setSuccessRelationList(vector<CreateResult::SuccessRelationList> && successRelationList) { DARABONBA_PTR_SET_RVALUE(successRelationList_, successRelationList) };


    protected:
      // The number of failed records.
      shared_ptr<int32_t> failCount_ {};
      // The number of successfully created records.
      shared_ptr<int32_t> successCount_ {};
      // The list of successfully created entity records.
      shared_ptr<vector<CreateResult::SuccessRelationList>> successRelationList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->createResult_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchCreateKgRelationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createResult Field Functions 
    bool hasCreateResult() const { return this->createResult_ != nullptr;};
    void deleteCreateResult() { this->createResult_ = nullptr;};
    inline const BatchCreateKgRelationResponseBody::CreateResult & getCreateResult() const { DARABONBA_PTR_GET_CONST(createResult_, BatchCreateKgRelationResponseBody::CreateResult) };
    inline BatchCreateKgRelationResponseBody::CreateResult getCreateResult() { DARABONBA_PTR_GET(createResult_, BatchCreateKgRelationResponseBody::CreateResult) };
    inline BatchCreateKgRelationResponseBody& setCreateResult(const BatchCreateKgRelationResponseBody::CreateResult & createResult) { DARABONBA_PTR_SET_VALUE(createResult_, createResult) };
    inline BatchCreateKgRelationResponseBody& setCreateResult(BatchCreateKgRelationResponseBody::CreateResult && createResult) { DARABONBA_PTR_SET_RVALUE(createResult_, createResult) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline BatchCreateKgRelationResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchCreateKgRelationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchCreateKgRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchCreateKgRelationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The result of batch relationship record creation.
    shared_ptr<BatchCreateKgRelationResponseBody::CreateResult> createResult_ {};
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
