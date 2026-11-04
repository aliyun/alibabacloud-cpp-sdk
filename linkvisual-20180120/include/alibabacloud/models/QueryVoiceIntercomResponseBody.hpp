// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVOICEINTERCOMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYVOICEINTERCOMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryVoiceIntercomResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVoiceIntercomResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVoiceIntercomResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryVoiceIntercomResponseBody() = default ;
    QueryVoiceIntercomResponseBody(const QueryVoiceIntercomResponseBody &) = default ;
    QueryVoiceIntercomResponseBody(QueryVoiceIntercomResponseBody &&) = default ;
    QueryVoiceIntercomResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVoiceIntercomResponseBody() = default ;
    QueryVoiceIntercomResponseBody& operator=(const QueryVoiceIntercomResponseBody &) = default ;
    QueryVoiceIntercomResponseBody& operator=(QueryVoiceIntercomResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CryptoKey, cryptoKey_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CryptoKey, cryptoKey_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
      class CryptoKey : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CryptoKey& obj) { 
          DARABONBA_PTR_TO_JSON(Iv, iv_);
          DARABONBA_PTR_TO_JSON(Key, key_);
        };
        friend void from_json(const Darabonba::Json& j, CryptoKey& obj) { 
          DARABONBA_PTR_FROM_JSON(Iv, iv_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
        };
        CryptoKey() = default ;
        CryptoKey(const CryptoKey &) = default ;
        CryptoKey(CryptoKey &&) = default ;
        CryptoKey(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CryptoKey() = default ;
        CryptoKey& operator=(const CryptoKey &) = default ;
        CryptoKey& operator=(CryptoKey &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->iv_ == nullptr
        && this->key_ == nullptr; };
        // iv Field Functions 
        bool hasIv() const { return this->iv_ != nullptr;};
        void deleteIv() { this->iv_ = nullptr;};
        inline string getIv() const { DARABONBA_PTR_GET_DEFAULT(iv_, "") };
        inline CryptoKey& setIv(string iv) { DARABONBA_PTR_SET_VALUE(iv_, iv) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline CryptoKey& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      protected:
        // The decryption vector.
        shared_ptr<string> iv_ {};
        // The decryption key.
        shared_ptr<string> key_ {};
      };

      virtual bool empty() const override { return this->cryptoKey_ == nullptr
        && this->url_ == nullptr; };
      // cryptoKey Field Functions 
      bool hasCryptoKey() const { return this->cryptoKey_ != nullptr;};
      void deleteCryptoKey() { this->cryptoKey_ = nullptr;};
      inline const Data::CryptoKey & getCryptoKey() const { DARABONBA_PTR_GET_CONST(cryptoKey_, Data::CryptoKey) };
      inline Data::CryptoKey getCryptoKey() { DARABONBA_PTR_GET(cryptoKey_, Data::CryptoKey) };
      inline Data& setCryptoKey(const Data::CryptoKey & cryptoKey) { DARABONBA_PTR_SET_VALUE(cryptoKey_, cryptoKey) };
      inline Data& setCryptoKey(Data::CryptoKey && cryptoKey) { DARABONBA_PTR_SET_RVALUE(cryptoKey_, cryptoKey) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The decryption parameters.
      shared_ptr<Data::CryptoKey> cryptoKey_ {};
      // The voice intercom address.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryVoiceIntercomResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryVoiceIntercomResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryVoiceIntercomResponseBody::Data) };
    inline QueryVoiceIntercomResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryVoiceIntercomResponseBody::Data) };
    inline QueryVoiceIntercomResponseBody& setData(const QueryVoiceIntercomResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryVoiceIntercomResponseBody& setData(QueryVoiceIntercomResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryVoiceIntercomResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryVoiceIntercomResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryVoiceIntercomResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code returned by the operation. Valid values:
    // 
    // - **200**: The call was successful.
    // - Other values: The error code. For more information about error codes, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    // The voice intercom address information.
    shared_ptr<QueryVoiceIntercomResponseBody::Data> data_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The unique identifier generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
