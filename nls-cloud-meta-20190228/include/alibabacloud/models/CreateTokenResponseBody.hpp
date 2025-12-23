// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTokenResponseBodyToken.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NlsCloudMeta20190228
{
namespace Models
{
  class CreateTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(NlsRequestId, nlsRequestId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(NlsRequestId, nlsRequestId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    CreateTokenResponseBody() = default ;
    CreateTokenResponseBody(const CreateTokenResponseBody &) = default ;
    CreateTokenResponseBody(CreateTokenResponseBody &&) = default ;
    CreateTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTokenResponseBody() = default ;
    CreateTokenResponseBody& operator=(const CreateTokenResponseBody &) = default ;
    CreateTokenResponseBody& operator=(CreateTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errCode_ == nullptr
        && return this->errMsg_ == nullptr && return this->nlsRequestId_ == nullptr && return this->requestId_ == nullptr && return this->token_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline int32_t errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, 0) };
    inline CreateTokenResponseBody& setErrCode(int32_t errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline CreateTokenResponseBody& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // nlsRequestId Field Functions 
    bool hasNlsRequestId() const { return this->nlsRequestId_ != nullptr;};
    void deleteNlsRequestId() { this->nlsRequestId_ = nullptr;};
    inline string nlsRequestId() const { DARABONBA_PTR_GET_DEFAULT(nlsRequestId_, "") };
    inline CreateTokenResponseBody& setNlsRequestId(string nlsRequestId) { DARABONBA_PTR_SET_VALUE(nlsRequestId_, nlsRequestId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline const CreateTokenResponseBodyToken & token() const { DARABONBA_PTR_GET_CONST(token_, CreateTokenResponseBodyToken) };
    inline CreateTokenResponseBodyToken token() { DARABONBA_PTR_GET(token_, CreateTokenResponseBodyToken) };
    inline CreateTokenResponseBody& setToken(const CreateTokenResponseBodyToken & token) { DARABONBA_PTR_SET_VALUE(token_, token) };
    inline CreateTokenResponseBody& setToken(CreateTokenResponseBodyToken && token) { DARABONBA_PTR_SET_RVALUE(token_, token) };


  protected:
    std::shared_ptr<int32_t> errCode_ = nullptr;
    std::shared_ptr<string> errMsg_ = nullptr;
    std::shared_ptr<string> nlsRequestId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<CreateTokenResponseBodyToken> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NlsCloudMeta20190228
#endif
