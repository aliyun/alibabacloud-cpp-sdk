// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDASAGENTSSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDASAGENTSSERESPONSEBODY_HPP_
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
  class GetDasAgentSSEResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDasAgentSSEResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Answer, answer_);
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
    };
    friend void from_json(const Darabonba::Json& j, GetDasAgentSSEResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Answer, answer_);
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
    };
    GetDasAgentSSEResponseBody() = default ;
    GetDasAgentSSEResponseBody(const GetDasAgentSSEResponseBody &) = default ;
    GetDasAgentSSEResponseBody(GetDasAgentSSEResponseBody &&) = default ;
    GetDasAgentSSEResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDasAgentSSEResponseBody() = default ;
    GetDasAgentSSEResponseBody& operator=(const GetDasAgentSSEResponseBody &) = default ;
    GetDasAgentSSEResponseBody& operator=(GetDasAgentSSEResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Metadata : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
        DARABONBA_PTR_TO_JSON(CharCount, charCount_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ToolName, toolName_);
        DARABONBA_PTR_TO_JSON(ToolParams, toolParams_);
      };
      friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
        DARABONBA_PTR_FROM_JSON(CharCount, charCount_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ToolName, toolName_);
        DARABONBA_PTR_FROM_JSON(ToolParams, toolParams_);
      };
      Metadata() = default ;
      Metadata(const Metadata &) = default ;
      Metadata(Metadata &&) = default ;
      Metadata(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Metadata() = default ;
      Metadata& operator=(const Metadata &) = default ;
      Metadata& operator=(Metadata &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->charCount_ == nullptr
        && this->code_ == nullptr && this->requestId_ == nullptr && this->toolName_ == nullptr && this->toolParams_ == nullptr; };
      // charCount Field Functions 
      bool hasCharCount() const { return this->charCount_ != nullptr;};
      void deleteCharCount() { this->charCount_ = nullptr;};
      inline int64_t getCharCount() const { DARABONBA_PTR_GET_DEFAULT(charCount_, 0L) };
      inline Metadata& setCharCount(int64_t charCount) { DARABONBA_PTR_SET_VALUE(charCount_, charCount) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
      inline Metadata& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Metadata& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // toolName Field Functions 
      bool hasToolName() const { return this->toolName_ != nullptr;};
      void deleteToolName() { this->toolName_ = nullptr;};
      inline string getToolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
      inline Metadata& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


      // toolParams Field Functions 
      bool hasToolParams() const { return this->toolParams_ != nullptr;};
      void deleteToolParams() { this->toolParams_ = nullptr;};
      inline const vector<string> & getToolParams() const { DARABONBA_PTR_GET_CONST(toolParams_, vector<string>) };
      inline vector<string> getToolParams() { DARABONBA_PTR_GET(toolParams_, vector<string>) };
      inline Metadata& setToolParams(const vector<string> & toolParams) { DARABONBA_PTR_SET_VALUE(toolParams_, toolParams) };
      inline Metadata& setToolParams(vector<string> && toolParams) { DARABONBA_PTR_SET_RVALUE(toolParams_, toolParams) };


    protected:
      shared_ptr<int64_t> charCount_ {};
      shared_ptr<int32_t> code_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> toolName_ {};
      shared_ptr<vector<string>> toolParams_ {};
    };

    virtual bool empty() const override { return this->answer_ == nullptr
        && this->event_ == nullptr && this->id_ == nullptr && this->metadata_ == nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline GetDasAgentSSEResponseBody& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline GetDasAgentSSEResponseBody& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetDasAgentSSEResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const GetDasAgentSSEResponseBody::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, GetDasAgentSSEResponseBody::Metadata) };
    inline GetDasAgentSSEResponseBody::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, GetDasAgentSSEResponseBody::Metadata) };
    inline GetDasAgentSSEResponseBody& setMetadata(const GetDasAgentSSEResponseBody::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline GetDasAgentSSEResponseBody& setMetadata(GetDasAgentSSEResponseBody::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


  protected:
    shared_ptr<string> answer_ {};
    shared_ptr<string> event_ {};
    shared_ptr<string> id_ {};
    shared_ptr<GetDasAgentSSEResponseBody::Metadata> metadata_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
