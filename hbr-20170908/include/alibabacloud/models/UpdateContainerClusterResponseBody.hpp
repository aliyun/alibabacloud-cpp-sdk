// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTAINERCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTAINERCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdateContainerClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContainerClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(TokenUpdated, tokenUpdated_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContainerClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(TokenUpdated, tokenUpdated_);
    };
    UpdateContainerClusterResponseBody() = default ;
    UpdateContainerClusterResponseBody(const UpdateContainerClusterResponseBody &) = default ;
    UpdateContainerClusterResponseBody(UpdateContainerClusterResponseBody &&) = default ;
    UpdateContainerClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContainerClusterResponseBody() = default ;
    UpdateContainerClusterResponseBody& operator=(const UpdateContainerClusterResponseBody &) = default ;
    UpdateContainerClusterResponseBody& operator=(UpdateContainerClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->token_ == nullptr && this->tokenUpdated_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateContainerClusterResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateContainerClusterResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateContainerClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateContainerClusterResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline UpdateContainerClusterResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // tokenUpdated Field Functions 
    bool hasTokenUpdated() const { return this->tokenUpdated_ != nullptr;};
    void deleteTokenUpdated() { this->tokenUpdated_ = nullptr;};
    inline bool getTokenUpdated() const { DARABONBA_PTR_GET_DEFAULT(tokenUpdated_, false) };
    inline UpdateContainerClusterResponseBody& setTokenUpdated(bool tokenUpdated) { DARABONBA_PTR_SET_VALUE(tokenUpdated_, tokenUpdated) };


  protected:
    // Return code, 200 indicates success.
    shared_ptr<string> code_ {};
    // Return information.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Indicates if the request was successful.
    // 
    // - true: Success
    // - false: Failure
    shared_ptr<bool> success_ {};
    // Cluster token, used for registering HBR clients within the cluster.
    shared_ptr<string> token_ {};
    // Indicates whether the cluster token has been updated.
    shared_ptr<bool> tokenUpdated_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
