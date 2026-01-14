// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SMARTQAUTHORIZERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SMARTQAUTHORIZERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class SmartqAuthorizeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SmartqAuthorizeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SmartqAuthorizeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SmartqAuthorizeResponseBody() = default ;
    SmartqAuthorizeResponseBody(const SmartqAuthorizeResponseBody &) = default ;
    SmartqAuthorizeResponseBody(SmartqAuthorizeResponseBody &&) = default ;
    SmartqAuthorizeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SmartqAuthorizeResponseBody() = default ;
    SmartqAuthorizeResponseBody& operator=(const SmartqAuthorizeResponseBody &) = default ;
    SmartqAuthorizeResponseBody& operator=(SmartqAuthorizeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(DetailMessage, detailMessage_);
        DARABONBA_PTR_TO_JSON(LlmCube, llmCube_);
        DARABONBA_PTR_TO_JSON(LlmCubeTheme, llmCubeTheme_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(DetailMessage, detailMessage_);
        DARABONBA_PTR_FROM_JSON(LlmCube, llmCube_);
        DARABONBA_PTR_FROM_JSON(LlmCubeTheme, llmCubeTheme_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->detailMessage_ == nullptr
        && this->llmCube_ == nullptr && this->llmCubeTheme_ == nullptr && this->userId_ == nullptr; };
      // detailMessage Field Functions 
      bool hasDetailMessage() const { return this->detailMessage_ != nullptr;};
      void deleteDetailMessage() { this->detailMessage_ = nullptr;};
      inline string getDetailMessage() const { DARABONBA_PTR_GET_DEFAULT(detailMessage_, "") };
      inline Result& setDetailMessage(string detailMessage) { DARABONBA_PTR_SET_VALUE(detailMessage_, detailMessage) };


      // llmCube Field Functions 
      bool hasLlmCube() const { return this->llmCube_ != nullptr;};
      void deleteLlmCube() { this->llmCube_ = nullptr;};
      inline string getLlmCube() const { DARABONBA_PTR_GET_DEFAULT(llmCube_, "") };
      inline Result& setLlmCube(string llmCube) { DARABONBA_PTR_SET_VALUE(llmCube_, llmCube) };


      // llmCubeTheme Field Functions 
      bool hasLlmCubeTheme() const { return this->llmCubeTheme_ != nullptr;};
      void deleteLlmCubeTheme() { this->llmCubeTheme_ = nullptr;};
      inline string getLlmCubeTheme() const { DARABONBA_PTR_GET_DEFAULT(llmCubeTheme_, "") };
      inline Result& setLlmCubeTheme(string llmCubeTheme) { DARABONBA_PTR_SET_VALUE(llmCubeTheme_, llmCubeTheme) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Result& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // Reason for failure.
      shared_ptr<string> detailMessage_ {};
      // Q&A resource ID.
      shared_ptr<string> llmCube_ {};
      // Analysis theme ID.
      shared_ptr<string> llmCubeTheme_ {};
      // User ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SmartqAuthorizeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<SmartqAuthorizeResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<SmartqAuthorizeResponseBody::Result>) };
    inline vector<SmartqAuthorizeResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<SmartqAuthorizeResponseBody::Result>) };
    inline SmartqAuthorizeResponseBody& setResult(const vector<SmartqAuthorizeResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline SmartqAuthorizeResponseBody& setResult(vector<SmartqAuthorizeResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SmartqAuthorizeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Array of failed user information.
    shared_ptr<vector<SmartqAuthorizeResponseBody::Result>> result_ {};
    // Indicates whether the request was successful. The value range is as follows:
    // 
    // - true: Request succeeded
    // - false: Request failed
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
