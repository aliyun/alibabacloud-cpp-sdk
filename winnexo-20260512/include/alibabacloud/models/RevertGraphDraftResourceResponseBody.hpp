// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVERTGRAPHDRAFTRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REVERTGRAPHDRAFTRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RevertGraphDraftResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevertGraphDraftResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(reverted, reverted_);
    };
    friend void from_json(const Darabonba::Json& j, RevertGraphDraftResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(reverted, reverted_);
    };
    RevertGraphDraftResourceResponseBody() = default ;
    RevertGraphDraftResourceResponseBody(const RevertGraphDraftResourceResponseBody &) = default ;
    RevertGraphDraftResourceResponseBody(RevertGraphDraftResourceResponseBody &&) = default ;
    RevertGraphDraftResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevertGraphDraftResourceResponseBody() = default ;
    RevertGraphDraftResourceResponseBody& operator=(const RevertGraphDraftResourceResponseBody &) = default ;
    RevertGraphDraftResourceResponseBody& operator=(RevertGraphDraftResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->reverted_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RevertGraphDraftResourceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RevertGraphDraftResourceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RevertGraphDraftResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reverted Field Functions 
    bool hasReverted() const { return this->reverted_ != nullptr;};
    void deleteReverted() { this->reverted_ = nullptr;};
    inline bool getReverted() const { DARABONBA_PTR_GET_DEFAULT(reverted_, false) };
    inline RevertGraphDraftResourceResponseBody& setReverted(bool reverted) { DARABONBA_PTR_SET_VALUE(reverted_, reverted) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The prompt message.
    shared_ptr<string> message_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the draft is actually revoked (true / false).
    // 
    // This parameter is required.
    shared_ptr<bool> reverted_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
