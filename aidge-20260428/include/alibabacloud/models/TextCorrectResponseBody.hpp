// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTCORRECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TEXTCORRECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class TextCorrectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextCorrectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, TextCorrectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    TextCorrectResponseBody() = default ;
    TextCorrectResponseBody(const TextCorrectResponseBody &) = default ;
    TextCorrectResponseBody(TextCorrectResponseBody &&) = default ;
    TextCorrectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextCorrectResponseBody() = default ;
    TextCorrectResponseBody& operator=(const TextCorrectResponseBody &) = default ;
    TextCorrectResponseBody& operator=(TextCorrectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CorrectedText, correctedText_);
        DARABONBA_PTR_TO_JSON(UsageMap, usageMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CorrectedText, correctedText_);
        DARABONBA_PTR_FROM_JSON(UsageMap, usageMap_);
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
      virtual bool empty() const override { return this->correctedText_ == nullptr
        && this->usageMap_ == nullptr; };
      // correctedText Field Functions 
      bool hasCorrectedText() const { return this->correctedText_ != nullptr;};
      void deleteCorrectedText() { this->correctedText_ = nullptr;};
      inline string getCorrectedText() const { DARABONBA_PTR_GET_DEFAULT(correctedText_, "") };
      inline Data& setCorrectedText(string correctedText) { DARABONBA_PTR_SET_VALUE(correctedText_, correctedText) };


      // usageMap Field Functions 
      bool hasUsageMap() const { return this->usageMap_ != nullptr;};
      void deleteUsageMap() { this->usageMap_ = nullptr;};
      inline const map<string, int64_t> & getUsageMap() const { DARABONBA_PTR_GET_CONST(usageMap_, map<string, int64_t>) };
      inline map<string, int64_t> getUsageMap() { DARABONBA_PTR_GET(usageMap_, map<string, int64_t>) };
      inline Data& setUsageMap(const map<string, int64_t> & usageMap) { DARABONBA_PTR_SET_VALUE(usageMap_, usageMap) };
      inline Data& setUsageMap(map<string, int64_t> && usageMap) { DARABONBA_PTR_SET_RVALUE(usageMap_, usageMap) };


    protected:
      // The corrected text.
      shared_ptr<string> correctedText_ {};
      // Usage information, including the number of input characters.
      shared_ptr<map<string, int64_t>> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TextCorrectResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TextCorrectResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TextCorrectResponseBody::Data) };
    inline TextCorrectResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TextCorrectResponseBody::Data) };
    inline TextCorrectResponseBody& setData(const TextCorrectResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TextCorrectResponseBody& setData(TextCorrectResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TextCorrectResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TextCorrectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TextCorrectResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Response code. Returns "success" during normal calls.
    shared_ptr<string> code_ {};
    // Intelligent error correction result data.
    shared_ptr<TextCorrectResponseBody::Data> data_ {};
    // Error message. Returns "Success" during normal calls. Returns specific error information during exceptions, such as "The parameters contain sensitive information. Please try a different input."
    shared_ptr<string> message_ {};
    // Request ID, used to identify a unique request call.
    shared_ptr<string> requestId_ {};
    // Whether the call was successful. true indicates success, false indicates failure.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
