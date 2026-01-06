// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKCREATEORDERFORDELETEDBNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKCREATEORDERFORDELETEDBNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class PreCheckCreateOrderForDeleteDBNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreCheckCreateOrderForDeleteDBNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Failures, failures_);
      DARABONBA_PTR_TO_JSON(PreCheckResult, preCheckResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PreCheckCreateOrderForDeleteDBNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Failures, failures_);
      DARABONBA_PTR_FROM_JSON(PreCheckResult, preCheckResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PreCheckCreateOrderForDeleteDBNodesResponseBody() = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBody(const PreCheckCreateOrderForDeleteDBNodesResponseBody &) = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBody(PreCheckCreateOrderForDeleteDBNodesResponseBody &&) = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreCheckCreateOrderForDeleteDBNodesResponseBody() = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBody& operator=(const PreCheckCreateOrderForDeleteDBNodesResponseBody &) = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBody& operator=(PreCheckCreateOrderForDeleteDBNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Failures : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Failures& obj) { 
        DARABONBA_PTR_TO_JSON(Failures, failures_);
      };
      friend void from_json(const Darabonba::Json& j, Failures& obj) { 
        DARABONBA_PTR_FROM_JSON(Failures, failures_);
      };
      Failures() = default ;
      Failures(const Failures &) = default ;
      Failures(Failures &&) = default ;
      Failures(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Failures() = default ;
      Failures& operator=(const Failures &) = default ;
      Failures& operator=(Failures &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FailuresItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailuresItem& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, FailuresItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        FailuresItem() = default ;
        FailuresItem(const FailuresItem &) = default ;
        FailuresItem(FailuresItem &&) = default ;
        FailuresItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailuresItem() = default ;
        FailuresItem& operator=(const FailuresItem &) = default ;
        FailuresItem& operator=(FailuresItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline FailuresItem& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline FailuresItem& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The response code. Valid values:
        // 
        // *   **200**: success
        // *   **400**: client error
        // *   **401**: identity authentication failed
        // *   **404**: requested page not found
        // *   **500**: server error
        shared_ptr<string> code_ {};
        // The returned message.
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->failures_ == nullptr; };
      // failures Field Functions 
      bool hasFailures() const { return this->failures_ != nullptr;};
      void deleteFailures() { this->failures_ = nullptr;};
      inline const vector<Failures::FailuresItem> & getFailures() const { DARABONBA_PTR_GET_CONST(failures_, vector<Failures::FailuresItem>) };
      inline vector<Failures::FailuresItem> getFailures() { DARABONBA_PTR_GET(failures_, vector<Failures::FailuresItem>) };
      inline Failures& setFailures(const vector<Failures::FailuresItem> & failures) { DARABONBA_PTR_SET_VALUE(failures_, failures) };
      inline Failures& setFailures(vector<Failures::FailuresItem> && failures) { DARABONBA_PTR_SET_RVALUE(failures_, failures) };


    protected:
      shared_ptr<vector<Failures::FailuresItem>> failures_ {};
    };

    virtual bool empty() const override { return this->failures_ == nullptr
        && this->preCheckResult_ == nullptr && this->requestId_ == nullptr; };
    // failures Field Functions 
    bool hasFailures() const { return this->failures_ != nullptr;};
    void deleteFailures() { this->failures_ = nullptr;};
    inline const PreCheckCreateOrderForDeleteDBNodesResponseBody::Failures & getFailures() const { DARABONBA_PTR_GET_CONST(failures_, PreCheckCreateOrderForDeleteDBNodesResponseBody::Failures) };
    inline PreCheckCreateOrderForDeleteDBNodesResponseBody::Failures getFailures() { DARABONBA_PTR_GET(failures_, PreCheckCreateOrderForDeleteDBNodesResponseBody::Failures) };
    inline PreCheckCreateOrderForDeleteDBNodesResponseBody& setFailures(const PreCheckCreateOrderForDeleteDBNodesResponseBody::Failures & failures) { DARABONBA_PTR_SET_VALUE(failures_, failures) };
    inline PreCheckCreateOrderForDeleteDBNodesResponseBody& setFailures(PreCheckCreateOrderForDeleteDBNodesResponseBody::Failures && failures) { DARABONBA_PTR_SET_RVALUE(failures_, failures) };


    // preCheckResult Field Functions 
    bool hasPreCheckResult() const { return this->preCheckResult_ != nullptr;};
    void deletePreCheckResult() { this->preCheckResult_ = nullptr;};
    inline bool getPreCheckResult() const { DARABONBA_PTR_GET_DEFAULT(preCheckResult_, false) };
    inline PreCheckCreateOrderForDeleteDBNodesResponseBody& setPreCheckResult(bool preCheckResult) { DARABONBA_PTR_SET_VALUE(preCheckResult_, preCheckResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreCheckCreateOrderForDeleteDBNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the failed order.
    shared_ptr<PreCheckCreateOrderForDeleteDBNodesResponseBody::Failures> failures_ {};
    // The precheck result.
    shared_ptr<bool> preCheckResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
