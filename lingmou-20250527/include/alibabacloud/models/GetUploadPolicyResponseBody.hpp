// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class GetUploadPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetUploadPolicyResponseBody() = default ;
    GetUploadPolicyResponseBody(const GetUploadPolicyResponseBody &) = default ;
    GetUploadPolicyResponseBody(GetUploadPolicyResponseBody &&) = default ;
    GetUploadPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadPolicyResponseBody() = default ;
    GetUploadPolicyResponseBody& operator=(const GetUploadPolicyResponseBody &) = default ;
    GetUploadPolicyResponseBody& operator=(GetUploadPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ossKey, ossKey_);
        DARABONBA_PTR_TO_JSON(ossPolicy, ossPolicy_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ossKey, ossKey_);
        DARABONBA_PTR_FROM_JSON(ossPolicy, ossPolicy_);
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
      class OssPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OssPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(accessId, accessId_);
          DARABONBA_PTR_TO_JSON(dir, dir_);
          DARABONBA_PTR_TO_JSON(expire, expire_);
          DARABONBA_PTR_TO_JSON(host, host_);
          DARABONBA_PTR_TO_JSON(policy, policy_);
          DARABONBA_PTR_TO_JSON(signature, signature_);
        };
        friend void from_json(const Darabonba::Json& j, OssPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(accessId, accessId_);
          DARABONBA_PTR_FROM_JSON(dir, dir_);
          DARABONBA_PTR_FROM_JSON(expire, expire_);
          DARABONBA_PTR_FROM_JSON(host, host_);
          DARABONBA_PTR_FROM_JSON(policy, policy_);
          DARABONBA_PTR_FROM_JSON(signature, signature_);
        };
        OssPolicy() = default ;
        OssPolicy(const OssPolicy &) = default ;
        OssPolicy(OssPolicy &&) = default ;
        OssPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OssPolicy() = default ;
        OssPolicy& operator=(const OssPolicy &) = default ;
        OssPolicy& operator=(OssPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessId_ == nullptr
        && this->dir_ == nullptr && this->expire_ == nullptr && this->host_ == nullptr && this->policy_ == nullptr && this->signature_ == nullptr; };
        // accessId Field Functions 
        bool hasAccessId() const { return this->accessId_ != nullptr;};
        void deleteAccessId() { this->accessId_ = nullptr;};
        inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
        inline OssPolicy& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


        // dir Field Functions 
        bool hasDir() const { return this->dir_ != nullptr;};
        void deleteDir() { this->dir_ = nullptr;};
        inline string getDir() const { DARABONBA_PTR_GET_DEFAULT(dir_, "") };
        inline OssPolicy& setDir(string dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


        // expire Field Functions 
        bool hasExpire() const { return this->expire_ != nullptr;};
        void deleteExpire() { this->expire_ = nullptr;};
        inline string getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, "") };
        inline OssPolicy& setExpire(string expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline OssPolicy& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // policy Field Functions 
        bool hasPolicy() const { return this->policy_ != nullptr;};
        void deletePolicy() { this->policy_ = nullptr;};
        inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
        inline OssPolicy& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


        // signature Field Functions 
        bool hasSignature() const { return this->signature_ != nullptr;};
        void deleteSignature() { this->signature_ = nullptr;};
        inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
        inline OssPolicy& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


      protected:
        // accessId。
        shared_ptr<string> accessId_ {};
        shared_ptr<string> dir_ {};
        shared_ptr<string> expire_ {};
        shared_ptr<string> host_ {};
        shared_ptr<string> policy_ {};
        shared_ptr<string> signature_ {};
      };

      virtual bool empty() const override { return this->ossKey_ == nullptr
        && this->ossPolicy_ == nullptr; };
      // ossKey Field Functions 
      bool hasOssKey() const { return this->ossKey_ != nullptr;};
      void deleteOssKey() { this->ossKey_ = nullptr;};
      inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
      inline Data& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


      // ossPolicy Field Functions 
      bool hasOssPolicy() const { return this->ossPolicy_ != nullptr;};
      void deleteOssPolicy() { this->ossPolicy_ = nullptr;};
      inline const Data::OssPolicy & getOssPolicy() const { DARABONBA_PTR_GET_CONST(ossPolicy_, Data::OssPolicy) };
      inline Data::OssPolicy getOssPolicy() { DARABONBA_PTR_GET(ossPolicy_, Data::OssPolicy) };
      inline Data& setOssPolicy(const Data::OssPolicy & ossPolicy) { DARABONBA_PTR_SET_VALUE(ossPolicy_, ossPolicy) };
      inline Data& setOssPolicy(Data::OssPolicy && ossPolicy) { DARABONBA_PTR_SET_RVALUE(ossPolicy_, ossPolicy) };


    protected:
      shared_ptr<string> ossKey_ {};
      shared_ptr<Data::OssPolicy> ossPolicy_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUploadPolicyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetUploadPolicyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetUploadPolicyResponseBody::Data) };
    inline GetUploadPolicyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetUploadPolicyResponseBody::Data) };
    inline GetUploadPolicyResponseBody& setData(const GetUploadPolicyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetUploadPolicyResponseBody& setData(GetUploadPolicyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetUploadPolicyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUploadPolicyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUploadPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUploadPolicyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetUploadPolicyResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
