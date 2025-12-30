// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHOBJECTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHOBJECTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class PublishResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PublishResult& obj) { 
        DARABONBA_PTR_TO_JSON(SubmitIdList, submitIdList_);
      };
      friend void from_json(const Darabonba::Json& j, PublishResult& obj) { 
        DARABONBA_PTR_FROM_JSON(SubmitIdList, submitIdList_);
      };
      PublishResult() = default ;
      PublishResult(const PublishResult &) = default ;
      PublishResult(PublishResult &&) = default ;
      PublishResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PublishResult() = default ;
      PublishResult& operator=(const PublishResult &) = default ;
      PublishResult& operator=(PublishResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->submitIdList_ == nullptr; };
      // submitIdList Field Functions 
      bool hasSubmitIdList() const { return this->submitIdList_ != nullptr;};
      void deleteSubmitIdList() { this->submitIdList_ = nullptr;};
      inline const vector<int64_t> & getSubmitIdList() const { DARABONBA_PTR_GET_CONST(submitIdList_, vector<int64_t>) };
      inline vector<int64_t> getSubmitIdList() { DARABONBA_PTR_GET(submitIdList_, vector<int64_t>) };
      inline PublishResult& setSubmitIdList(const vector<int64_t> & submitIdList) { DARABONBA_PTR_SET_VALUE(submitIdList_, submitIdList) };
      inline PublishResult& setSubmitIdList(vector<int64_t> && submitIdList) { DARABONBA_PTR_SET_RVALUE(submitIdList_, submitIdList) };


    protected:
      shared_ptr<vector<int64_t>> submitIdList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->publishResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PublishObjectListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline PublishObjectListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PublishObjectListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // publishResult Field Functions 
    bool hasPublishResult() const { return this->publishResult_ != nullptr;};
    void deletePublishResult() { this->publishResult_ = nullptr;};
    inline const PublishObjectListResponseBody::PublishResult & getPublishResult() const { DARABONBA_PTR_GET_CONST(publishResult_, PublishObjectListResponseBody::PublishResult) };
    inline PublishObjectListResponseBody::PublishResult getPublishResult() { DARABONBA_PTR_GET(publishResult_, PublishObjectListResponseBody::PublishResult) };
    inline PublishObjectListResponseBody& setPublishResult(const PublishObjectListResponseBody::PublishResult & publishResult) { DARABONBA_PTR_SET_VALUE(publishResult_, publishResult) };
    inline PublishObjectListResponseBody& setPublishResult(PublishObjectListResponseBody::PublishResult && publishResult) { DARABONBA_PTR_SET_RVALUE(publishResult_, publishResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PublishObjectListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PublishObjectListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<PublishObjectListResponseBody::PublishResult> publishResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
