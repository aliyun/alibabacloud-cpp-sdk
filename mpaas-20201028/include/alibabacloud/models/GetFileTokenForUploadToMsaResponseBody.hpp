// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILETOKENFORUPLOADTOMSARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILETOKENFORUPLOADTOMSARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetFileTokenForUploadToMsaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileTokenForUploadToMsaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileTokenForUploadToMsaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    GetFileTokenForUploadToMsaResponseBody() = default ;
    GetFileTokenForUploadToMsaResponseBody(const GetFileTokenForUploadToMsaResponseBody &) = default ;
    GetFileTokenForUploadToMsaResponseBody(GetFileTokenForUploadToMsaResponseBody &&) = default ;
    GetFileTokenForUploadToMsaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileTokenForUploadToMsaResponseBody() = default ;
    GetFileTokenForUploadToMsaResponseBody& operator=(const GetFileTokenForUploadToMsaResponseBody &) = default ;
    GetFileTokenForUploadToMsaResponseBody& operator=(GetFileTokenForUploadToMsaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultContent& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, ResultContent& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      ResultContent() = default ;
      ResultContent(const ResultContent &) = default ;
      ResultContent(ResultContent &&) = default ;
      ResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultContent() = default ;
      ResultContent& operator=(const ResultContent &) = default ;
      ResultContent& operator=(ResultContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(Accessid, accessid_);
          DARABONBA_PTR_TO_JSON(Dir, dir_);
          DARABONBA_PTR_TO_JSON(Expire, expire_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(Policy, policy_);
          DARABONBA_PTR_TO_JSON(Signature, signature_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(Accessid, accessid_);
          DARABONBA_PTR_FROM_JSON(Dir, dir_);
          DARABONBA_PTR_FROM_JSON(Expire, expire_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(Policy, policy_);
          DARABONBA_PTR_FROM_JSON(Signature, signature_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessid_ == nullptr
        && this->dir_ == nullptr && this->expire_ == nullptr && this->host_ == nullptr && this->policy_ == nullptr && this->signature_ == nullptr; };
        // accessid Field Functions 
        bool hasAccessid() const { return this->accessid_ != nullptr;};
        void deleteAccessid() { this->accessid_ = nullptr;};
        inline string getAccessid() const { DARABONBA_PTR_GET_DEFAULT(accessid_, "") };
        inline Content& setAccessid(string accessid) { DARABONBA_PTR_SET_VALUE(accessid_, accessid) };


        // dir Field Functions 
        bool hasDir() const { return this->dir_ != nullptr;};
        void deleteDir() { this->dir_ = nullptr;};
        inline string getDir() const { DARABONBA_PTR_GET_DEFAULT(dir_, "") };
        inline Content& setDir(string dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


        // expire Field Functions 
        bool hasExpire() const { return this->expire_ != nullptr;};
        void deleteExpire() { this->expire_ = nullptr;};
        inline string getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, "") };
        inline Content& setExpire(string expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline Content& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // policy Field Functions 
        bool hasPolicy() const { return this->policy_ != nullptr;};
        void deletePolicy() { this->policy_ = nullptr;};
        inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
        inline Content& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


        // signature Field Functions 
        bool hasSignature() const { return this->signature_ != nullptr;};
        void deleteSignature() { this->signature_ = nullptr;};
        inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
        inline Content& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


      protected:
        shared_ptr<string> accessid_ {};
        shared_ptr<string> dir_ {};
        shared_ptr<string> expire_ {};
        shared_ptr<string> host_ {};
        shared_ptr<string> policy_ {};
        shared_ptr<string> signature_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->errorCode_ == nullptr && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const ResultContent::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, ResultContent::Content) };
      inline ResultContent::Content getContent() { DARABONBA_PTR_GET(content_, ResultContent::Content) };
      inline ResultContent& setContent(const ResultContent::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline ResultContent& setContent(ResultContent::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline ResultContent& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline ResultContent& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline ResultContent& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
      inline ResultContent& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<ResultContent::Content> content_ {};
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<string> success_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultCode_ == nullptr && this->resultContent_ == nullptr && this->resultMessage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileTokenForUploadToMsaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline GetFileTokenForUploadToMsaResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline const GetFileTokenForUploadToMsaResponseBody::ResultContent & getResultContent() const { DARABONBA_PTR_GET_CONST(resultContent_, GetFileTokenForUploadToMsaResponseBody::ResultContent) };
    inline GetFileTokenForUploadToMsaResponseBody::ResultContent getResultContent() { DARABONBA_PTR_GET(resultContent_, GetFileTokenForUploadToMsaResponseBody::ResultContent) };
    inline GetFileTokenForUploadToMsaResponseBody& setResultContent(const GetFileTokenForUploadToMsaResponseBody::ResultContent & resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };
    inline GetFileTokenForUploadToMsaResponseBody& setResultContent(GetFileTokenForUploadToMsaResponseBody::ResultContent && resultContent) { DARABONBA_PTR_SET_RVALUE(resultContent_, resultContent) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline GetFileTokenForUploadToMsaResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<GetFileTokenForUploadToMsaResponseBody::ResultContent> resultContent_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
