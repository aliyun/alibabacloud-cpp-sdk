// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKFORCONSOLIDATEDBILLINGACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKFORCONSOLIDATEDBILLINGACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class PrecheckForConsolidatedBillingAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrecheckForConsolidatedBillingAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Reasons, reasons_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, PrecheckForConsolidatedBillingAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Reasons, reasons_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    PrecheckForConsolidatedBillingAccountResponseBody() = default ;
    PrecheckForConsolidatedBillingAccountResponseBody(const PrecheckForConsolidatedBillingAccountResponseBody &) = default ;
    PrecheckForConsolidatedBillingAccountResponseBody(PrecheckForConsolidatedBillingAccountResponseBody &&) = default ;
    PrecheckForConsolidatedBillingAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrecheckForConsolidatedBillingAccountResponseBody() = default ;
    PrecheckForConsolidatedBillingAccountResponseBody& operator=(const PrecheckForConsolidatedBillingAccountResponseBody &) = default ;
    PrecheckForConsolidatedBillingAccountResponseBody& operator=(PrecheckForConsolidatedBillingAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Reasons : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Reasons& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Reasons& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      Reasons() = default ;
      Reasons(const Reasons &) = default ;
      Reasons(Reasons &&) = default ;
      Reasons(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Reasons() = default ;
      Reasons& operator=(const Reasons &) = default ;
      Reasons& operator=(Reasons &&) = default ;
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
      inline Reasons& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Reasons& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // The error code.
      shared_ptr<string> code_ {};
      // The error message.
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->reasons_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr; };
    // reasons Field Functions 
    bool hasReasons() const { return this->reasons_ != nullptr;};
    void deleteReasons() { this->reasons_ = nullptr;};
    inline const vector<PrecheckForConsolidatedBillingAccountResponseBody::Reasons> & getReasons() const { DARABONBA_PTR_GET_CONST(reasons_, vector<PrecheckForConsolidatedBillingAccountResponseBody::Reasons>) };
    inline vector<PrecheckForConsolidatedBillingAccountResponseBody::Reasons> getReasons() { DARABONBA_PTR_GET(reasons_, vector<PrecheckForConsolidatedBillingAccountResponseBody::Reasons>) };
    inline PrecheckForConsolidatedBillingAccountResponseBody& setReasons(const vector<PrecheckForConsolidatedBillingAccountResponseBody::Reasons> & reasons) { DARABONBA_PTR_SET_VALUE(reasons_, reasons) };
    inline PrecheckForConsolidatedBillingAccountResponseBody& setReasons(vector<PrecheckForConsolidatedBillingAccountResponseBody::Reasons> && reasons) { DARABONBA_PTR_SET_RVALUE(reasons_, reasons) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PrecheckForConsolidatedBillingAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline PrecheckForConsolidatedBillingAccountResponseBody& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    // The cause of the check failure.
    shared_ptr<vector<PrecheckForConsolidatedBillingAccountResponseBody::Reasons>> reasons_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the check was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
