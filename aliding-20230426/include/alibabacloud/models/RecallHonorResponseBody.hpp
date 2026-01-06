// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECALLHONORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECALLHONORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class RecallHonorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecallHonorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_ANY_TO_JSON(errorCtx, errorCtx_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RecallHonorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_ANY_FROM_JSON(errorCtx, errorCtx_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    RecallHonorResponseBody() = default ;
    RecallHonorResponseBody(const RecallHonorResponseBody &) = default ;
    RecallHonorResponseBody(RecallHonorResponseBody &&) = default ;
    RecallHonorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecallHonorResponseBody() = default ;
    RecallHonorResponseBody& operator=(const RecallHonorResponseBody &) = default ;
    RecallHonorResponseBody& operator=(RecallHonorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_ANY_TO_JSON(data, data_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_ANY_FROM_JSON(data, data_);
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
      virtual bool empty() const override { return this->data_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline       const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
      Darabonba::Json & getData() { DARABONBA_GET(data_) };
      inline Content& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
      inline Content& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


    protected:
      Darabonba::Json data_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->errorCode_ == nullptr && this->errorCtx_ == nullptr && this->errorMsg_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const RecallHonorResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, RecallHonorResponseBody::Content) };
    inline RecallHonorResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, RecallHonorResponseBody::Content) };
    inline RecallHonorResponseBody& setContent(const RecallHonorResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline RecallHonorResponseBody& setContent(RecallHonorResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline RecallHonorResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorCtx Field Functions 
    bool hasErrorCtx() const { return this->errorCtx_ != nullptr;};
    void deleteErrorCtx() { this->errorCtx_ = nullptr;};
    inline     const Darabonba::Json & getErrorCtx() const { DARABONBA_GET(errorCtx_) };
    Darabonba::Json & getErrorCtx() { DARABONBA_GET(errorCtx_) };
    inline RecallHonorResponseBody& setErrorCtx(const Darabonba::Json & errorCtx) { DARABONBA_SET_VALUE(errorCtx_, errorCtx) };
    inline RecallHonorResponseBody& setErrorCtx(Darabonba::Json && errorCtx) { DARABONBA_SET_RVALUE(errorCtx_, errorCtx) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline RecallHonorResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline RecallHonorResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecallHonorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RecallHonorResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<RecallHonorResponseBody::Content> content_ {};
    shared_ptr<string> errorCode_ {};
    Darabonba::Json errorCtx_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
