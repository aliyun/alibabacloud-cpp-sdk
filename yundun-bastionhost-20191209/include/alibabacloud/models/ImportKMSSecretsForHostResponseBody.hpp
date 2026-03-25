// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTKMSSECRETSFORHOSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTKMSSECRETSFORHOSTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ImportKMSSecretsForHostResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportKMSSecretsForHostResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
    };
    friend void from_json(const Darabonba::Json& j, ImportKMSSecretsForHostResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
    };
    ImportKMSSecretsForHostResponseBody() = default ;
    ImportKMSSecretsForHostResponseBody(const ImportKMSSecretsForHostResponseBody &) = default ;
    ImportKMSSecretsForHostResponseBody(ImportKMSSecretsForHostResponseBody &&) = default ;
    ImportKMSSecretsForHostResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportKMSSecretsForHostResponseBody() = default ;
    ImportKMSSecretsForHostResponseBody& operator=(const ImportKMSSecretsForHostResponseBody &) = default ;
    ImportKMSSecretsForHostResponseBody& operator=(ImportKMSSecretsForHostResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->secretName_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Results& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Results& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // secretName Field Functions 
      bool hasSecretName() const { return this->secretName_ != nullptr;};
      void deleteSecretName() { this->secretName_ = nullptr;};
      inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
      inline Results& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> secretName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr && this->successCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportKMSSecretsForHostResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<ImportKMSSecretsForHostResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<ImportKMSSecretsForHostResponseBody::Results>) };
    inline vector<ImportKMSSecretsForHostResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<ImportKMSSecretsForHostResponseBody::Results>) };
    inline ImportKMSSecretsForHostResponseBody& setResults(const vector<ImportKMSSecretsForHostResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline ImportKMSSecretsForHostResponseBody& setResults(vector<ImportKMSSecretsForHostResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int64_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0L) };
    inline ImportKMSSecretsForHostResponseBody& setSuccessCount(int64_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ImportKMSSecretsForHostResponseBody::Results>> results_ {};
    shared_ptr<int64_t> successCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
