// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSEMANTICKNOWLEDGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSEMANTICKNOWLEDGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class QuerySemanticKnowledgeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySemanticKnowledgeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(schemaKnowledge, schemaKnowledge_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySemanticKnowledgeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(schemaKnowledge, schemaKnowledge_);
    };
    QuerySemanticKnowledgeResponseBody() = default ;
    QuerySemanticKnowledgeResponseBody(const QuerySemanticKnowledgeResponseBody &) = default ;
    QuerySemanticKnowledgeResponseBody(QuerySemanticKnowledgeResponseBody &&) = default ;
    QuerySemanticKnowledgeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySemanticKnowledgeResponseBody() = default ;
    QuerySemanticKnowledgeResponseBody& operator=(const QuerySemanticKnowledgeResponseBody &) = default ;
    QuerySemanticKnowledgeResponseBody& operator=(QuerySemanticKnowledgeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->schemaKnowledge_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySemanticKnowledgeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySemanticKnowledgeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySemanticKnowledgeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaKnowledge Field Functions 
    bool hasSchemaKnowledge() const { return this->schemaKnowledge_ != nullptr;};
    void deleteSchemaKnowledge() { this->schemaKnowledge_ = nullptr;};
    inline string getSchemaKnowledge() const { DARABONBA_PTR_GET_DEFAULT(schemaKnowledge_, "") };
    inline QuerySemanticKnowledgeResponseBody& setSchemaKnowledge(string schemaKnowledge) { DARABONBA_PTR_SET_VALUE(schemaKnowledge_, schemaKnowledge) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    // 与 query 相关的语义知识文本
    // 
    // This parameter is required.
    shared_ptr<string> schemaKnowledge_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
