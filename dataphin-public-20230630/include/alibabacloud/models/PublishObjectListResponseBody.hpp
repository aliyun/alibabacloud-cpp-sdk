// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHOBJECTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHOBJECTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublishObjectListResponseBodyPublishResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class PublishObjectListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishObjectListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PublishResult, publishResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PublishObjectListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PublishResult, publishResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PublishObjectListResponseBody() = default ;
    PublishObjectListResponseBody(const PublishObjectListResponseBody &) = default ;
    PublishObjectListResponseBody(PublishObjectListResponseBody &&) = default ;
    PublishObjectListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishObjectListResponseBody() = default ;
    PublishObjectListResponseBody& operator=(const PublishObjectListResponseBody &) = default ;
    PublishObjectListResponseBody& operator=(PublishObjectListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->httpStatusCode_ != nullptr && this->message_ != nullptr && this->publishResult_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PublishObjectListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline PublishObjectListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PublishObjectListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // publishResult Field Functions 
    bool hasPublishResult() const { return this->publishResult_ != nullptr;};
    void deletePublishResult() { this->publishResult_ = nullptr;};
    inline const PublishObjectListResponseBodyPublishResult & publishResult() const { DARABONBA_PTR_GET_CONST(publishResult_, PublishObjectListResponseBodyPublishResult) };
    inline PublishObjectListResponseBodyPublishResult publishResult() { DARABONBA_PTR_GET(publishResult_, PublishObjectListResponseBodyPublishResult) };
    inline PublishObjectListResponseBody& setPublishResult(const PublishObjectListResponseBodyPublishResult & publishResult) { DARABONBA_PTR_SET_VALUE(publishResult_, publishResult) };
    inline PublishObjectListResponseBody& setPublishResult(PublishObjectListResponseBodyPublishResult && publishResult) { DARABONBA_PTR_SET_RVALUE(publishResult_, publishResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PublishObjectListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PublishObjectListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<PublishObjectListResponseBodyPublishResult> publishResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
