// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUSTOMAUTHIDENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUSTOMAUTHIDENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class QueryCustomAuthIdentityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCustomAuthIdentityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCustomAuthIdentityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryCustomAuthIdentityResponseBody() = default ;
    QueryCustomAuthIdentityResponseBody(const QueryCustomAuthIdentityResponseBody &) = default ;
    QueryCustomAuthIdentityResponseBody(QueryCustomAuthIdentityResponseBody &&) = default ;
    QueryCustomAuthIdentityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCustomAuthIdentityResponseBody() = default ;
    QueryCustomAuthIdentityResponseBody& operator=(const QueryCustomAuthIdentityResponseBody &) = default ;
    QueryCustomAuthIdentityResponseBody& operator=(QueryCustomAuthIdentityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(Results, results_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
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
      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
          DARABONBA_PTR_TO_JSON(ClientId, clientId_);
          DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
          DARABONBA_PTR_TO_JSON(Secret, secret_);
          DARABONBA_PTR_TO_JSON(SignMode, signMode_);
          DARABONBA_PTR_TO_JSON(Username, username_);
        };
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
          DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
          DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
          DARABONBA_PTR_FROM_JSON(Secret, secret_);
          DARABONBA_PTR_FROM_JSON(SignMode, signMode_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
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
        virtual bool empty() const override { return this->clientId_ == nullptr
        && this->identityType_ == nullptr && this->secret_ == nullptr && this->signMode_ == nullptr && this->username_ == nullptr; };
        // clientId Field Functions 
        bool hasClientId() const { return this->clientId_ != nullptr;};
        void deleteClientId() { this->clientId_ = nullptr;};
        inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
        inline Results& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


        // identityType Field Functions 
        bool hasIdentityType() const { return this->identityType_ != nullptr;};
        void deleteIdentityType() { this->identityType_ = nullptr;};
        inline string getIdentityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
        inline Results& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


        // secret Field Functions 
        bool hasSecret() const { return this->secret_ != nullptr;};
        void deleteSecret() { this->secret_ = nullptr;};
        inline string getSecret() const { DARABONBA_PTR_GET_DEFAULT(secret_, "") };
        inline Results& setSecret(string secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


        // signMode Field Functions 
        bool hasSignMode() const { return this->signMode_ != nullptr;};
        void deleteSignMode() { this->signMode_ = nullptr;};
        inline string getSignMode() const { DARABONBA_PTR_GET_DEFAULT(signMode_, "") };
        inline Results& setSignMode(string signMode) { DARABONBA_PTR_SET_VALUE(signMode_, signMode) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline Results& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      protected:
        // The client ID of the device when the identity type is CLIENT.
        shared_ptr<string> clientId_ {};
        // The identity type.
        // 
        // - USER: Username only.
        // 
        // - CLIENT: Specific to a client.
        shared_ptr<string> identityType_ {};
        // The secret key.
        shared_ptr<string> secret_ {};
        // The signature verification mode. ORIGIN: Original value comparison, which compares the password with the secret. SIGNED: The HmacSHA1 signature is calculated for the clientId using the secret for verification, and then the password is compared.
        shared_ptr<string> signMode_ {};
        // The username.
        shared_ptr<string> username_ {};
      };

      virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->results_ == nullptr; };
      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<Data::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Data::Results>) };
      inline vector<Data::Results> getResults() { DARABONBA_PTR_GET(results_, vector<Data::Results>) };
      inline Data& setResults(const vector<Data::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline Data& setResults(vector<Data::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    protected:
      // If more results are available, a NextToken is returned.
      shared_ptr<string> nextToken_ {};
      // The returned data.
      shared_ptr<vector<Data::Results>> results_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryCustomAuthIdentityResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryCustomAuthIdentityResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryCustomAuthIdentityResponseBody::Data) };
    inline QueryCustomAuthIdentityResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryCustomAuthIdentityResponseBody::Data) };
    inline QueryCustomAuthIdentityResponseBody& setData(const QueryCustomAuthIdentityResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryCustomAuthIdentityResponseBody& setData(QueryCustomAuthIdentityResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCustomAuthIdentityResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCustomAuthIdentityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryCustomAuthIdentityResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. 200: The request is successful. Other codes indicate errors. For more information about error codes, see Error codes.
    shared_ptr<int32_t> code_ {};
    // The query result.
    shared_ptr<QueryCustomAuthIdentityResponseBody::Data> data_ {};
    // The additional information.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. true: The request is successful. false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
