// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHAUTHTOKENSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REFRESHAUTHTOKENSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class RefreshAuthTokensResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshAuthTokensResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshAuthTokensResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RefreshAuthTokensResponseBody() = default ;
    RefreshAuthTokensResponseBody(const RefreshAuthTokensResponseBody &) = default ;
    RefreshAuthTokensResponseBody(RefreshAuthTokensResponseBody &&) = default ;
    RefreshAuthTokensResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshAuthTokensResponseBody() = default ;
    RefreshAuthTokensResponseBody& operator=(const RefreshAuthTokensResponseBody &) = default ;
    RefreshAuthTokensResponseBody& operator=(RefreshAuthTokensResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BaseUrl, baseUrl_);
        DARABONBA_PTR_TO_JSON(Tokens, tokens_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BaseUrl, baseUrl_);
        DARABONBA_PTR_FROM_JSON(Tokens, tokens_);
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
      class Tokens : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tokens& obj) { 
          DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
          DARABONBA_PTR_TO_JSON(ExpireAt, expireAt_);
          DARABONBA_PTR_TO_JSON(ExpireSeconds, expireSeconds_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(IssuedAt, issuedAt_);
          DARABONBA_PTR_TO_JSON(LicenseKey, licenseKey_);
        };
        friend void from_json(const Darabonba::Json& j, Tokens& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
          DARABONBA_PTR_FROM_JSON(ExpireAt, expireAt_);
          DARABONBA_PTR_FROM_JSON(ExpireSeconds, expireSeconds_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(IssuedAt, issuedAt_);
          DARABONBA_PTR_FROM_JSON(LicenseKey, licenseKey_);
        };
        Tokens() = default ;
        Tokens(const Tokens &) = default ;
        Tokens(Tokens &&) = default ;
        Tokens(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tokens() = default ;
        Tokens& operator=(const Tokens &) = default ;
        Tokens& operator=(Tokens &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authToken_ == nullptr
        && this->expireAt_ == nullptr && this->expireSeconds_ == nullptr && this->instanceId_ == nullptr && this->issuedAt_ == nullptr && this->licenseKey_ == nullptr; };
        // authToken Field Functions 
        bool hasAuthToken() const { return this->authToken_ != nullptr;};
        void deleteAuthToken() { this->authToken_ = nullptr;};
        inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
        inline Tokens& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


        // expireAt Field Functions 
        bool hasExpireAt() const { return this->expireAt_ != nullptr;};
        void deleteExpireAt() { this->expireAt_ = nullptr;};
        inline int64_t getExpireAt() const { DARABONBA_PTR_GET_DEFAULT(expireAt_, 0L) };
        inline Tokens& setExpireAt(int64_t expireAt) { DARABONBA_PTR_SET_VALUE(expireAt_, expireAt) };


        // expireSeconds Field Functions 
        bool hasExpireSeconds() const { return this->expireSeconds_ != nullptr;};
        void deleteExpireSeconds() { this->expireSeconds_ = nullptr;};
        inline int64_t getExpireSeconds() const { DARABONBA_PTR_GET_DEFAULT(expireSeconds_, 0L) };
        inline Tokens& setExpireSeconds(int64_t expireSeconds) { DARABONBA_PTR_SET_VALUE(expireSeconds_, expireSeconds) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Tokens& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // issuedAt Field Functions 
        bool hasIssuedAt() const { return this->issuedAt_ != nullptr;};
        void deleteIssuedAt() { this->issuedAt_ = nullptr;};
        inline int64_t getIssuedAt() const { DARABONBA_PTR_GET_DEFAULT(issuedAt_, 0L) };
        inline Tokens& setIssuedAt(int64_t issuedAt) { DARABONBA_PTR_SET_VALUE(issuedAt_, issuedAt) };


        // licenseKey Field Functions 
        bool hasLicenseKey() const { return this->licenseKey_ != nullptr;};
        void deleteLicenseKey() { this->licenseKey_ = nullptr;};
        inline string getLicenseKey() const { DARABONBA_PTR_GET_DEFAULT(licenseKey_, "") };
        inline Tokens& setLicenseKey(string licenseKey) { DARABONBA_PTR_SET_VALUE(licenseKey_, licenseKey) };


      protected:
        // The authorization token value.
        shared_ptr<string> authToken_ {};
        // The expiration timestamp.
        shared_ptr<int64_t> expireAt_ {};
        // The validity period in seconds.
        shared_ptr<int64_t> expireSeconds_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The issuance timestamp.
        shared_ptr<int64_t> issuedAt_ {};
        // The license key.
        shared_ptr<string> licenseKey_ {};
      };

      virtual bool empty() const override { return this->baseUrl_ == nullptr
        && this->tokens_ == nullptr; };
      // baseUrl Field Functions 
      bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
      void deleteBaseUrl() { this->baseUrl_ = nullptr;};
      inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
      inline Data& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


      // tokens Field Functions 
      bool hasTokens() const { return this->tokens_ != nullptr;};
      void deleteTokens() { this->tokens_ = nullptr;};
      inline const vector<Data::Tokens> & getTokens() const { DARABONBA_PTR_GET_CONST(tokens_, vector<Data::Tokens>) };
      inline vector<Data::Tokens> getTokens() { DARABONBA_PTR_GET(tokens_, vector<Data::Tokens>) };
      inline Data& setTokens(const vector<Data::Tokens> & tokens) { DARABONBA_PTR_SET_VALUE(tokens_, tokens) };
      inline Data& setTokens(vector<Data::Tokens> && tokens) { DARABONBA_PTR_SET_RVALUE(tokens_, tokens) };


    protected:
      // The model gateway access URL.
      shared_ptr<string> baseUrl_ {};
      // The list of tokens.
      shared_ptr<vector<Data::Tokens>> tokens_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RefreshAuthTokensResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RefreshAuthTokensResponseBody::Data) };
    inline RefreshAuthTokensResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RefreshAuthTokensResponseBody::Data) };
    inline RefreshAuthTokensResponseBody& setData(const RefreshAuthTokensResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RefreshAuthTokensResponseBody& setData(RefreshAuthTokensResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RefreshAuthTokensResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The token data.
    shared_ptr<RefreshAuthTokensResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
