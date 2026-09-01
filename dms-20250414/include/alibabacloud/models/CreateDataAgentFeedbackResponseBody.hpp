// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAAGENTFEEDBACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAAGENTFEEDBACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateDataAgentFeedbackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataAgentFeedbackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataAgentFeedbackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateDataAgentFeedbackResponseBody() = default ;
    CreateDataAgentFeedbackResponseBody(const CreateDataAgentFeedbackResponseBody &) = default ;
    CreateDataAgentFeedbackResponseBody(CreateDataAgentFeedbackResponseBody &&) = default ;
    CreateDataAgentFeedbackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataAgentFeedbackResponseBody() = default ;
    CreateDataAgentFeedbackResponseBody& operator=(const CreateDataAgentFeedbackResponseBody &) = default ;
    CreateDataAgentFeedbackResponseBody& operator=(CreateDataAgentFeedbackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FeedbackContent, feedbackContent_);
        DARABONBA_PTR_TO_JSON(FeedbackType, feedbackType_);
        DARABONBA_PTR_TO_JSON(LikeValue, likeValue_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FeedbackContent, feedbackContent_);
        DARABONBA_PTR_FROM_JSON(FeedbackType, feedbackType_);
        DARABONBA_PTR_FROM_JSON(LikeValue, likeValue_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->feedbackContent_ == nullptr
        && this->feedbackType_ == nullptr && this->likeValue_ == nullptr && this->regionId_ == nullptr && this->sessionId_ == nullptr && this->targetId_ == nullptr
        && this->targetType_ == nullptr; };
      // feedbackContent Field Functions 
      bool hasFeedbackContent() const { return this->feedbackContent_ != nullptr;};
      void deleteFeedbackContent() { this->feedbackContent_ = nullptr;};
      inline string getFeedbackContent() const { DARABONBA_PTR_GET_DEFAULT(feedbackContent_, "") };
      inline Data& setFeedbackContent(string feedbackContent) { DARABONBA_PTR_SET_VALUE(feedbackContent_, feedbackContent) };


      // feedbackType Field Functions 
      bool hasFeedbackType() const { return this->feedbackType_ != nullptr;};
      void deleteFeedbackType() { this->feedbackType_ = nullptr;};
      inline string getFeedbackType() const { DARABONBA_PTR_GET_DEFAULT(feedbackType_, "") };
      inline Data& setFeedbackType(string feedbackType) { DARABONBA_PTR_SET_VALUE(feedbackType_, feedbackType) };


      // likeValue Field Functions 
      bool hasLikeValue() const { return this->likeValue_ != nullptr;};
      void deleteLikeValue() { this->likeValue_ = nullptr;};
      inline int32_t getLikeValue() const { DARABONBA_PTR_GET_DEFAULT(likeValue_, 0) };
      inline Data& setLikeValue(int32_t likeValue) { DARABONBA_PTR_SET_VALUE(likeValue_, likeValue) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline Data& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline Data& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      shared_ptr<string> feedbackContent_ {};
      shared_ptr<string> feedbackType_ {};
      shared_ptr<int32_t> likeValue_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> targetId_ {};
      shared_ptr<string> targetType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateDataAgentFeedbackResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateDataAgentFeedbackResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateDataAgentFeedbackResponseBody::Data) };
    inline CreateDataAgentFeedbackResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateDataAgentFeedbackResponseBody::Data) };
    inline CreateDataAgentFeedbackResponseBody& setData(const CreateDataAgentFeedbackResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateDataAgentFeedbackResponseBody& setData(CreateDataAgentFeedbackResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateDataAgentFeedbackResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateDataAgentFeedbackResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateDataAgentFeedbackResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDataAgentFeedbackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateDataAgentFeedbackResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<CreateDataAgentFeedbackResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
