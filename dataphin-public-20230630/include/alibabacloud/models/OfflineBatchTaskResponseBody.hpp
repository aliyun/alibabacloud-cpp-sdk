// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OFFLINEBATCHTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OFFLINEBATCHTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OfflineBatchTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OfflineBatchTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OfflineResult, offlineResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, OfflineBatchTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OfflineResult, offlineResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    OfflineBatchTaskResponseBody() = default ;
    OfflineBatchTaskResponseBody(const OfflineBatchTaskResponseBody &) = default ;
    OfflineBatchTaskResponseBody(OfflineBatchTaskResponseBody &&) = default ;
    OfflineBatchTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OfflineBatchTaskResponseBody() = default ;
    OfflineBatchTaskResponseBody& operator=(const OfflineBatchTaskResponseBody &) = default ;
    OfflineBatchTaskResponseBody& operator=(OfflineBatchTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OfflineResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OfflineResult& obj) { 
        DARABONBA_PTR_TO_JSON(PublishObjectId, publishObjectId_);
      };
      friend void from_json(const Darabonba::Json& j, OfflineResult& obj) { 
        DARABONBA_PTR_FROM_JSON(PublishObjectId, publishObjectId_);
      };
      OfflineResult() = default ;
      OfflineResult(const OfflineResult &) = default ;
      OfflineResult(OfflineResult &&) = default ;
      OfflineResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OfflineResult() = default ;
      OfflineResult& operator=(const OfflineResult &) = default ;
      OfflineResult& operator=(OfflineResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->publishObjectId_ == nullptr; };
      // publishObjectId Field Functions 
      bool hasPublishObjectId() const { return this->publishObjectId_ != nullptr;};
      void deletePublishObjectId() { this->publishObjectId_ = nullptr;};
      inline int64_t getPublishObjectId() const { DARABONBA_PTR_GET_DEFAULT(publishObjectId_, 0L) };
      inline OfflineResult& setPublishObjectId(int64_t publishObjectId) { DARABONBA_PTR_SET_VALUE(publishObjectId_, publishObjectId) };


    protected:
      shared_ptr<int64_t> publishObjectId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->offlineResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline OfflineBatchTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline OfflineBatchTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline OfflineBatchTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // offlineResult Field Functions 
    bool hasOfflineResult() const { return this->offlineResult_ != nullptr;};
    void deleteOfflineResult() { this->offlineResult_ = nullptr;};
    inline const OfflineBatchTaskResponseBody::OfflineResult & getOfflineResult() const { DARABONBA_PTR_GET_CONST(offlineResult_, OfflineBatchTaskResponseBody::OfflineResult) };
    inline OfflineBatchTaskResponseBody::OfflineResult getOfflineResult() { DARABONBA_PTR_GET(offlineResult_, OfflineBatchTaskResponseBody::OfflineResult) };
    inline OfflineBatchTaskResponseBody& setOfflineResult(const OfflineBatchTaskResponseBody::OfflineResult & offlineResult) { DARABONBA_PTR_SET_VALUE(offlineResult_, offlineResult) };
    inline OfflineBatchTaskResponseBody& setOfflineResult(OfflineBatchTaskResponseBody::OfflineResult && offlineResult) { DARABONBA_PTR_SET_RVALUE(offlineResult_, offlineResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OfflineBatchTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline OfflineBatchTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<OfflineBatchTaskResponseBody::OfflineResult> offlineResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
