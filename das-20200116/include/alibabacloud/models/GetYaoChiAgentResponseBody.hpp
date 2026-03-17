// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYAOCHIAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETYAOCHIAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetYaoChiAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYaoChiAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(FunctionCall, functionCall_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
      DARABONBA_PTR_TO_JSON(ReasoningContent, reasoningContent_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SubAgentCall, subAgentCall_);
      DARABONBA_PTR_TO_JSON(UiFunctionCall, uiFunctionCall_);
    };
    friend void from_json(const Darabonba::Json& j, GetYaoChiAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(FunctionCall, functionCall_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
      DARABONBA_PTR_FROM_JSON(ReasoningContent, reasoningContent_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SubAgentCall, subAgentCall_);
      DARABONBA_PTR_FROM_JSON(UiFunctionCall, uiFunctionCall_);
    };
    GetYaoChiAgentResponseBody() = default ;
    GetYaoChiAgentResponseBody(const GetYaoChiAgentResponseBody &) = default ;
    GetYaoChiAgentResponseBody(GetYaoChiAgentResponseBody &&) = default ;
    GetYaoChiAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYaoChiAgentResponseBody() = default ;
    GetYaoChiAgentResponseBody& operator=(const GetYaoChiAgentResponseBody &) = default ;
    GetYaoChiAgentResponseBody& operator=(GetYaoChiAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UiFunctionCall : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UiFunctionCall& obj) { 
        DARABONBA_PTR_TO_JSON(ArgsText, argsText_);
        DARABONBA_PTR_TO_JSON(ToolName, toolName_);
      };
      friend void from_json(const Darabonba::Json& j, UiFunctionCall& obj) { 
        DARABONBA_PTR_FROM_JSON(ArgsText, argsText_);
        DARABONBA_PTR_FROM_JSON(ToolName, toolName_);
      };
      UiFunctionCall() = default ;
      UiFunctionCall(const UiFunctionCall &) = default ;
      UiFunctionCall(UiFunctionCall &&) = default ;
      UiFunctionCall(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UiFunctionCall() = default ;
      UiFunctionCall& operator=(const UiFunctionCall &) = default ;
      UiFunctionCall& operator=(UiFunctionCall &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->argsText_ == nullptr
        && this->toolName_ == nullptr; };
      // argsText Field Functions 
      bool hasArgsText() const { return this->argsText_ != nullptr;};
      void deleteArgsText() { this->argsText_ = nullptr;};
      inline string getArgsText() const { DARABONBA_PTR_GET_DEFAULT(argsText_, "") };
      inline UiFunctionCall& setArgsText(string argsText) { DARABONBA_PTR_SET_VALUE(argsText_, argsText) };


      // toolName Field Functions 
      bool hasToolName() const { return this->toolName_ != nullptr;};
      void deleteToolName() { this->toolName_ = nullptr;};
      inline string getToolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
      inline UiFunctionCall& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


    protected:
      shared_ptr<string> argsText_ {};
      shared_ptr<string> toolName_ {};
    };

    class SubAgentCall : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubAgentCall& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubAgentId, subAgentId_);
        DARABONBA_PTR_TO_JSON(SubAgentName, subAgentName_);
      };
      friend void from_json(const Darabonba::Json& j, SubAgentCall& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubAgentId, subAgentId_);
        DARABONBA_PTR_FROM_JSON(SubAgentName, subAgentName_);
      };
      SubAgentCall() = default ;
      SubAgentCall(const SubAgentCall &) = default ;
      SubAgentCall(SubAgentCall &&) = default ;
      SubAgentCall(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubAgentCall() = default ;
      SubAgentCall& operator=(const SubAgentCall &) = default ;
      SubAgentCall& operator=(SubAgentCall &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr
        && this->subAgentId_ == nullptr && this->subAgentName_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SubAgentCall& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subAgentId Field Functions 
      bool hasSubAgentId() const { return this->subAgentId_ != nullptr;};
      void deleteSubAgentId() { this->subAgentId_ = nullptr;};
      inline string getSubAgentId() const { DARABONBA_PTR_GET_DEFAULT(subAgentId_, "") };
      inline SubAgentCall& setSubAgentId(string subAgentId) { DARABONBA_PTR_SET_VALUE(subAgentId_, subAgentId) };


      // subAgentName Field Functions 
      bool hasSubAgentName() const { return this->subAgentName_ != nullptr;};
      void deleteSubAgentName() { this->subAgentName_ = nullptr;};
      inline string getSubAgentName() const { DARABONBA_PTR_GET_DEFAULT(subAgentName_, "") };
      inline SubAgentCall& setSubAgentName(string subAgentName) { DARABONBA_PTR_SET_VALUE(subAgentName_, subAgentName) };


    protected:
      shared_ptr<string> status_ {};
      shared_ptr<string> subAgentId_ {};
      shared_ptr<string> subAgentName_ {};
    };

    class FunctionCall : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FunctionCall& obj) { 
        DARABONBA_PTR_TO_JSON(Arguments, arguments_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, FunctionCall& obj) { 
        DARABONBA_PTR_FROM_JSON(Arguments, arguments_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      FunctionCall() = default ;
      FunctionCall(const FunctionCall &) = default ;
      FunctionCall(FunctionCall &&) = default ;
      FunctionCall(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FunctionCall() = default ;
      FunctionCall& operator=(const FunctionCall &) = default ;
      FunctionCall& operator=(FunctionCall &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->arguments_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->status_ == nullptr; };
      // arguments Field Functions 
      bool hasArguments() const { return this->arguments_ != nullptr;};
      void deleteArguments() { this->arguments_ = nullptr;};
      inline string getArguments() const { DARABONBA_PTR_GET_DEFAULT(arguments_, "") };
      inline FunctionCall& setArguments(string arguments) { DARABONBA_PTR_SET_VALUE(arguments_, arguments) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline FunctionCall& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline FunctionCall& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline FunctionCall& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> arguments_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->functionCall_ == nullptr && this->parentId_ == nullptr && this->product_ == nullptr && this->queryId_ == nullptr && this->reasoningContent_ == nullptr
        && this->requestId_ == nullptr && this->sessionId_ == nullptr && this->subAgentCall_ == nullptr && this->uiFunctionCall_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetYaoChiAgentResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // functionCall Field Functions 
    bool hasFunctionCall() const { return this->functionCall_ != nullptr;};
    void deleteFunctionCall() { this->functionCall_ = nullptr;};
    inline const vector<GetYaoChiAgentResponseBody::FunctionCall> & getFunctionCall() const { DARABONBA_PTR_GET_CONST(functionCall_, vector<GetYaoChiAgentResponseBody::FunctionCall>) };
    inline vector<GetYaoChiAgentResponseBody::FunctionCall> getFunctionCall() { DARABONBA_PTR_GET(functionCall_, vector<GetYaoChiAgentResponseBody::FunctionCall>) };
    inline GetYaoChiAgentResponseBody& setFunctionCall(const vector<GetYaoChiAgentResponseBody::FunctionCall> & functionCall) { DARABONBA_PTR_SET_VALUE(functionCall_, functionCall) };
    inline GetYaoChiAgentResponseBody& setFunctionCall(vector<GetYaoChiAgentResponseBody::FunctionCall> && functionCall) { DARABONBA_PTR_SET_RVALUE(functionCall_, functionCall) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline GetYaoChiAgentResponseBody& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetYaoChiAgentResponseBody& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline GetYaoChiAgentResponseBody& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    // reasoningContent Field Functions 
    bool hasReasoningContent() const { return this->reasoningContent_ != nullptr;};
    void deleteReasoningContent() { this->reasoningContent_ = nullptr;};
    inline string getReasoningContent() const { DARABONBA_PTR_GET_DEFAULT(reasoningContent_, "") };
    inline GetYaoChiAgentResponseBody& setReasoningContent(string reasoningContent) { DARABONBA_PTR_SET_VALUE(reasoningContent_, reasoningContent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetYaoChiAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetYaoChiAgentResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // subAgentCall Field Functions 
    bool hasSubAgentCall() const { return this->subAgentCall_ != nullptr;};
    void deleteSubAgentCall() { this->subAgentCall_ = nullptr;};
    inline const vector<GetYaoChiAgentResponseBody::SubAgentCall> & getSubAgentCall() const { DARABONBA_PTR_GET_CONST(subAgentCall_, vector<GetYaoChiAgentResponseBody::SubAgentCall>) };
    inline vector<GetYaoChiAgentResponseBody::SubAgentCall> getSubAgentCall() { DARABONBA_PTR_GET(subAgentCall_, vector<GetYaoChiAgentResponseBody::SubAgentCall>) };
    inline GetYaoChiAgentResponseBody& setSubAgentCall(const vector<GetYaoChiAgentResponseBody::SubAgentCall> & subAgentCall) { DARABONBA_PTR_SET_VALUE(subAgentCall_, subAgentCall) };
    inline GetYaoChiAgentResponseBody& setSubAgentCall(vector<GetYaoChiAgentResponseBody::SubAgentCall> && subAgentCall) { DARABONBA_PTR_SET_RVALUE(subAgentCall_, subAgentCall) };


    // uiFunctionCall Field Functions 
    bool hasUiFunctionCall() const { return this->uiFunctionCall_ != nullptr;};
    void deleteUiFunctionCall() { this->uiFunctionCall_ = nullptr;};
    inline const vector<GetYaoChiAgentResponseBody::UiFunctionCall> & getUiFunctionCall() const { DARABONBA_PTR_GET_CONST(uiFunctionCall_, vector<GetYaoChiAgentResponseBody::UiFunctionCall>) };
    inline vector<GetYaoChiAgentResponseBody::UiFunctionCall> getUiFunctionCall() { DARABONBA_PTR_GET(uiFunctionCall_, vector<GetYaoChiAgentResponseBody::UiFunctionCall>) };
    inline GetYaoChiAgentResponseBody& setUiFunctionCall(const vector<GetYaoChiAgentResponseBody::UiFunctionCall> & uiFunctionCall) { DARABONBA_PTR_SET_VALUE(uiFunctionCall_, uiFunctionCall) };
    inline GetYaoChiAgentResponseBody& setUiFunctionCall(vector<GetYaoChiAgentResponseBody::UiFunctionCall> && uiFunctionCall) { DARABONBA_PTR_SET_RVALUE(uiFunctionCall_, uiFunctionCall) };


  protected:
    shared_ptr<string> content_ {};
    shared_ptr<vector<GetYaoChiAgentResponseBody::FunctionCall>> functionCall_ {};
    shared_ptr<string> parentId_ {};
    shared_ptr<string> product_ {};
    shared_ptr<string> queryId_ {};
    shared_ptr<string> reasoningContent_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<vector<GetYaoChiAgentResponseBody::SubAgentCall>> subAgentCall_ {};
    shared_ptr<vector<GetYaoChiAgentResponseBody::UiFunctionCall>> uiFunctionCall_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
