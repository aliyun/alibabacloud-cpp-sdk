// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEOUTPUTFILETORESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVEOUTPUTFILETORESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SaveOutputFileToResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveOutputFileToResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(results, results_);
    };
    friend void from_json(const Darabonba::Json& j, SaveOutputFileToResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(results, results_);
    };
    SaveOutputFileToResourceResponseBody() = default ;
    SaveOutputFileToResourceResponseBody(const SaveOutputFileToResourceResponseBody &) = default ;
    SaveOutputFileToResourceResponseBody(SaveOutputFileToResourceResponseBody &&) = default ;
    SaveOutputFileToResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveOutputFileToResourceResponseBody() = default ;
    SaveOutputFileToResourceResponseBody& operator=(const SaveOutputFileToResourceResponseBody &) = default ;
    SaveOutputFileToResourceResponseBody& operator=(SaveOutputFileToResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(itemId, itemId_);
        DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
        DARABONBA_PTR_TO_JSON(success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(itemId, itemId_);
        DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
        DARABONBA_PTR_FROM_JSON(success, success_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->itemId_ == nullptr && this->sourceId_ == nullptr && this->success_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Results& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Results& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // itemId Field Functions 
      bool hasItemId() const { return this->itemId_ != nullptr;};
      void deleteItemId() { this->itemId_ = nullptr;};
      inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
      inline Results& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
      inline Results& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Results& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The business error code (i18n key). Returned on failure.
      shared_ptr<string> errorCode_ {};
      // The error description, localized based on the request Accept-Language header. Returned on failure.
      shared_ptr<string> errorMessage_ {};
      // The output detail ID.
      shared_ptr<string> itemId_ {};
      // The sourceId of the newly created resource. Returned on success.
      shared_ptr<string> sourceId_ {};
      // Indicates whether the operation is successful.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->results_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SaveOutputFileToResourceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SaveOutputFileToResourceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SaveOutputFileToResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<SaveOutputFileToResourceResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<SaveOutputFileToResourceResponseBody::Results>) };
    inline vector<SaveOutputFileToResourceResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<SaveOutputFileToResourceResponseBody::Results>) };
    inline SaveOutputFileToResourceResponseBody& setResults(const vector<SaveOutputFileToResourceResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline SaveOutputFileToResourceResponseBody& setResults(vector<SaveOutputFileToResourceResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The business status code. A value of 200 indicates success. A failure returns a backend error code (ERR.* / InvalidParameter.*).
    shared_ptr<string> code_ {};
    // The error description. This value is empty on success.
    shared_ptr<string> message_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
    // The per-record results in the same order as the input itemIds. A single record failure does not affect other records.
    shared_ptr<vector<SaveOutputFileToResourceResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
