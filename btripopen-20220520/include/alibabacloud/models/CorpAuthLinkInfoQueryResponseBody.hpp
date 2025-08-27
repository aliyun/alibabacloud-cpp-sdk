// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CORPAUTHLINKINFOQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CORPAUTHLINKINFOQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CorpAuthLinkInfoQueryResponseBodyModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CorpAuthLinkInfoQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CorpAuthLinkInfoQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CorpAuthLinkInfoQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    CorpAuthLinkInfoQueryResponseBody() = default ;
    CorpAuthLinkInfoQueryResponseBody(const CorpAuthLinkInfoQueryResponseBody &) = default ;
    CorpAuthLinkInfoQueryResponseBody(CorpAuthLinkInfoQueryResponseBody &&) = default ;
    CorpAuthLinkInfoQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CorpAuthLinkInfoQueryResponseBody() = default ;
    CorpAuthLinkInfoQueryResponseBody& operator=(const CorpAuthLinkInfoQueryResponseBody &) = default ;
    CorpAuthLinkInfoQueryResponseBody& operator=(CorpAuthLinkInfoQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->module_ != nullptr && this->requestId_ != nullptr && this->traceId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CorpAuthLinkInfoQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CorpAuthLinkInfoQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CorpAuthLinkInfoQueryResponseBodyModule & module() const { DARABONBA_PTR_GET_CONST(module_, CorpAuthLinkInfoQueryResponseBodyModule) };
    inline CorpAuthLinkInfoQueryResponseBodyModule module() { DARABONBA_PTR_GET(module_, CorpAuthLinkInfoQueryResponseBodyModule) };
    inline CorpAuthLinkInfoQueryResponseBody& setModule(const CorpAuthLinkInfoQueryResponseBodyModule & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CorpAuthLinkInfoQueryResponseBody& setModule(CorpAuthLinkInfoQueryResponseBodyModule && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CorpAuthLinkInfoQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CorpAuthLinkInfoQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<CorpAuthLinkInfoQueryResponseBodyModule> module_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
