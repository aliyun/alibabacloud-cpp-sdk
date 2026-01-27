// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDDRIVESERVICEMOUNTTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDDRIVESERVICEMOUNTTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class GetCloudDriveServiceMountTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudDriveServiceMountTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudDriveServiceMountTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    GetCloudDriveServiceMountTokenResponseBody() = default ;
    GetCloudDriveServiceMountTokenResponseBody(const GetCloudDriveServiceMountTokenResponseBody &) = default ;
    GetCloudDriveServiceMountTokenResponseBody(GetCloudDriveServiceMountTokenResponseBody &&) = default ;
    GetCloudDriveServiceMountTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudDriveServiceMountTokenResponseBody() = default ;
    GetCloudDriveServiceMountTokenResponseBody& operator=(const GetCloudDriveServiceMountTokenResponseBody &) = default ;
    GetCloudDriveServiceMountTokenResponseBody& operator=(GetCloudDriveServiceMountTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Token : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Token& obj) { 
        DARABONBA_PTR_TO_JSON(DomainId, domainId_);
        DARABONBA_PTR_TO_JSON(ExpiredAfter, expiredAfter_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Token, token_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
        DARABONBA_PTR_TO_JSON(UsedSize, usedSize_);
      };
      friend void from_json(const Darabonba::Json& j, Token& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
        DARABONBA_PTR_FROM_JSON(ExpiredAfter, expiredAfter_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Token, token_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
        DARABONBA_PTR_FROM_JSON(UsedSize, usedSize_);
      };
      Token() = default ;
      Token(const Token &) = default ;
      Token(Token &&) = default ;
      Token(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Token() = default ;
      Token& operator=(const Token &) = default ;
      Token& operator=(Token &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domainId_ == nullptr
        && this->expiredAfter_ == nullptr && this->status_ == nullptr && this->token_ == nullptr && this->totalSize_ == nullptr && this->usedSize_ == nullptr; };
      // domainId Field Functions 
      bool hasDomainId() const { return this->domainId_ != nullptr;};
      void deleteDomainId() { this->domainId_ = nullptr;};
      inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
      inline Token& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


      // expiredAfter Field Functions 
      bool hasExpiredAfter() const { return this->expiredAfter_ != nullptr;};
      void deleteExpiredAfter() { this->expiredAfter_ = nullptr;};
      inline string getExpiredAfter() const { DARABONBA_PTR_GET_DEFAULT(expiredAfter_, "") };
      inline Token& setExpiredAfter(string expiredAfter) { DARABONBA_PTR_SET_VALUE(expiredAfter_, expiredAfter) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Token& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline Token& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Token& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


      // usedSize Field Functions 
      bool hasUsedSize() const { return this->usedSize_ != nullptr;};
      void deleteUsedSize() { this->usedSize_ = nullptr;};
      inline int64_t getUsedSize() const { DARABONBA_PTR_GET_DEFAULT(usedSize_, 0L) };
      inline Token& setUsedSize(int64_t usedSize) { DARABONBA_PTR_SET_VALUE(usedSize_, usedSize) };


    protected:
      shared_ptr<string> domainId_ {};
      shared_ptr<string> expiredAfter_ {};
      shared_ptr<string> status_ {};
      // The token.
      shared_ptr<string> token_ {};
      // The total capacity of the enterprise drive. Unit: GiB
      shared_ptr<int64_t> totalSize_ {};
      shared_ptr<int64_t> usedSize_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->token_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCloudDriveServiceMountTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline const GetCloudDriveServiceMountTokenResponseBody::Token & getToken() const { DARABONBA_PTR_GET_CONST(token_, GetCloudDriveServiceMountTokenResponseBody::Token) };
    inline GetCloudDriveServiceMountTokenResponseBody::Token getToken() { DARABONBA_PTR_GET(token_, GetCloudDriveServiceMountTokenResponseBody::Token) };
    inline GetCloudDriveServiceMountTokenResponseBody& setToken(const GetCloudDriveServiceMountTokenResponseBody::Token & token) { DARABONBA_PTR_SET_VALUE(token_, token) };
    inline GetCloudDriveServiceMountTokenResponseBody& setToken(GetCloudDriveServiceMountTokenResponseBody::Token && token) { DARABONBA_PTR_SET_RVALUE(token_, token) };


  protected:
    shared_ptr<string> requestId_ {};
    // The tokens.
    shared_ptr<GetCloudDriveServiceMountTokenResponseBody::Token> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
