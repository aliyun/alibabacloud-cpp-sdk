// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBEFILETOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBEFILETOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMcubeFileTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeFileTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GetFileTokenResult, getFileTokenResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeFileTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GetFileTokenResult, getFileTokenResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    GetMcubeFileTokenResponseBody() = default ;
    GetMcubeFileTokenResponseBody(const GetMcubeFileTokenResponseBody &) = default ;
    GetMcubeFileTokenResponseBody(GetMcubeFileTokenResponseBody &&) = default ;
    GetMcubeFileTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeFileTokenResponseBody() = default ;
    GetMcubeFileTokenResponseBody& operator=(const GetMcubeFileTokenResponseBody &) = default ;
    GetMcubeFileTokenResponseBody& operator=(GetMcubeFileTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GetFileTokenResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GetFileTokenResult& obj) { 
        DARABONBA_PTR_TO_JSON(FileToken, fileToken_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, GetFileTokenResult& obj) { 
        DARABONBA_PTR_FROM_JSON(FileToken, fileToken_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      GetFileTokenResult() = default ;
      GetFileTokenResult(const GetFileTokenResult &) = default ;
      GetFileTokenResult(GetFileTokenResult &&) = default ;
      GetFileTokenResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GetFileTokenResult() = default ;
      GetFileTokenResult& operator=(const GetFileTokenResult &) = default ;
      GetFileTokenResult& operator=(GetFileTokenResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FileToken : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileToken& obj) { 
          DARABONBA_PTR_TO_JSON(Accessid, accessid_);
          DARABONBA_PTR_TO_JSON(Dir, dir_);
          DARABONBA_PTR_TO_JSON(Expire, expire_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(Policy, policy_);
          DARABONBA_PTR_TO_JSON(Signature, signature_);
        };
        friend void from_json(const Darabonba::Json& j, FileToken& obj) { 
          DARABONBA_PTR_FROM_JSON(Accessid, accessid_);
          DARABONBA_PTR_FROM_JSON(Dir, dir_);
          DARABONBA_PTR_FROM_JSON(Expire, expire_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(Policy, policy_);
          DARABONBA_PTR_FROM_JSON(Signature, signature_);
        };
        FileToken() = default ;
        FileToken(const FileToken &) = default ;
        FileToken(FileToken &&) = default ;
        FileToken(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileToken() = default ;
        FileToken& operator=(const FileToken &) = default ;
        FileToken& operator=(FileToken &&) = default ;
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
        inline FileToken& setAccessid(string accessid) { DARABONBA_PTR_SET_VALUE(accessid_, accessid) };


        // dir Field Functions 
        bool hasDir() const { return this->dir_ != nullptr;};
        void deleteDir() { this->dir_ = nullptr;};
        inline string getDir() const { DARABONBA_PTR_GET_DEFAULT(dir_, "") };
        inline FileToken& setDir(string dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


        // expire Field Functions 
        bool hasExpire() const { return this->expire_ != nullptr;};
        void deleteExpire() { this->expire_ = nullptr;};
        inline string getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, "") };
        inline FileToken& setExpire(string expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline FileToken& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // policy Field Functions 
        bool hasPolicy() const { return this->policy_ != nullptr;};
        void deletePolicy() { this->policy_ = nullptr;};
        inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
        inline FileToken& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


        // signature Field Functions 
        bool hasSignature() const { return this->signature_ != nullptr;};
        void deleteSignature() { this->signature_ = nullptr;};
        inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
        inline FileToken& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


      protected:
        shared_ptr<string> accessid_ {};
        shared_ptr<string> dir_ {};
        shared_ptr<string> expire_ {};
        shared_ptr<string> host_ {};
        shared_ptr<string> policy_ {};
        shared_ptr<string> signature_ {};
      };

      virtual bool empty() const override { return this->fileToken_ == nullptr
        && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // fileToken Field Functions 
      bool hasFileToken() const { return this->fileToken_ != nullptr;};
      void deleteFileToken() { this->fileToken_ = nullptr;};
      inline const GetFileTokenResult::FileToken & getFileToken() const { DARABONBA_PTR_GET_CONST(fileToken_, GetFileTokenResult::FileToken) };
      inline GetFileTokenResult::FileToken getFileToken() { DARABONBA_PTR_GET(fileToken_, GetFileTokenResult::FileToken) };
      inline GetFileTokenResult& setFileToken(const GetFileTokenResult::FileToken & fileToken) { DARABONBA_PTR_SET_VALUE(fileToken_, fileToken) };
      inline GetFileTokenResult& setFileToken(GetFileTokenResult::FileToken && fileToken) { DARABONBA_PTR_SET_RVALUE(fileToken_, fileToken) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline GetFileTokenResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline GetFileTokenResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<GetFileTokenResult::FileToken> fileToken_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->getFileTokenResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // getFileTokenResult Field Functions 
    bool hasGetFileTokenResult() const { return this->getFileTokenResult_ != nullptr;};
    void deleteGetFileTokenResult() { this->getFileTokenResult_ = nullptr;};
    inline const GetMcubeFileTokenResponseBody::GetFileTokenResult & getGetFileTokenResult() const { DARABONBA_PTR_GET_CONST(getFileTokenResult_, GetMcubeFileTokenResponseBody::GetFileTokenResult) };
    inline GetMcubeFileTokenResponseBody::GetFileTokenResult getGetFileTokenResult() { DARABONBA_PTR_GET(getFileTokenResult_, GetMcubeFileTokenResponseBody::GetFileTokenResult) };
    inline GetMcubeFileTokenResponseBody& setGetFileTokenResult(const GetMcubeFileTokenResponseBody::GetFileTokenResult & getFileTokenResult) { DARABONBA_PTR_SET_VALUE(getFileTokenResult_, getFileTokenResult) };
    inline GetMcubeFileTokenResponseBody& setGetFileTokenResult(GetMcubeFileTokenResponseBody::GetFileTokenResult && getFileTokenResult) { DARABONBA_PTR_SET_RVALUE(getFileTokenResult_, getFileTokenResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMcubeFileTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline GetMcubeFileTokenResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline GetMcubeFileTokenResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<GetMcubeFileTokenResponseBody::GetFileTokenResult> getFileTokenResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
