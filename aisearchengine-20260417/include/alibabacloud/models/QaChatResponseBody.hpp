// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QACHATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QACHATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiSearchEngine20260417
{
namespace Models
{
  class QaChatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QaChatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(event, event_);
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, QaChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(event, event_);
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    QaChatResponseBody() = default ;
    QaChatResponseBody(const QaChatResponseBody &) = default ;
    QaChatResponseBody(QaChatResponseBody &&) = default ;
    QaChatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QaChatResponseBody() = default ;
    QaChatResponseBody& operator=(const QaChatResponseBody &) = default ;
    QaChatResponseBody& operator=(QaChatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(data, data_);
        DARABONBA_PTR_TO_JSON(delta, delta_);
        DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(errorText, errorText_);
        DARABONBA_PTR_TO_JSON(finishReason, finishReason_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
        DARABONBA_PTR_TO_JSON(retryable, retryable_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(data, data_);
        DARABONBA_PTR_FROM_JSON(delta, delta_);
        DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(errorText, errorText_);
        DARABONBA_PTR_FROM_JSON(finishReason, finishReason_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
        DARABONBA_PTR_FROM_JSON(retryable, retryable_);
        DARABONBA_PTR_FROM_JSON(type, type_);
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
      virtual bool empty() const override { return this->data_ == nullptr
        && this->delta_ == nullptr && this->errorCode_ == nullptr && this->errorText_ == nullptr && this->finishReason_ == nullptr && this->id_ == nullptr
        && this->requestId_ == nullptr && this->retryable_ == nullptr && this->type_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
      inline Data& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


      // delta Field Functions 
      bool hasDelta() const { return this->delta_ != nullptr;};
      void deleteDelta() { this->delta_ = nullptr;};
      inline string getDelta() const { DARABONBA_PTR_GET_DEFAULT(delta_, "") };
      inline Data& setDelta(string delta) { DARABONBA_PTR_SET_VALUE(delta_, delta) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorText Field Functions 
      bool hasErrorText() const { return this->errorText_ != nullptr;};
      void deleteErrorText() { this->errorText_ = nullptr;};
      inline string getErrorText() const { DARABONBA_PTR_GET_DEFAULT(errorText_, "") };
      inline Data& setErrorText(string errorText) { DARABONBA_PTR_SET_VALUE(errorText_, errorText) };


      // finishReason Field Functions 
      bool hasFinishReason() const { return this->finishReason_ != nullptr;};
      void deleteFinishReason() { this->finishReason_ = nullptr;};
      inline string getFinishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
      inline Data& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // retryable Field Functions 
      bool hasRetryable() const { return this->retryable_ != nullptr;};
      void deleteRetryable() { this->retryable_ = nullptr;};
      inline bool getRetryable() const { DARABONBA_PTR_GET_DEFAULT(retryable_, false) };
      inline Data& setRetryable(bool retryable) { DARABONBA_PTR_SET_VALUE(retryable_, retryable) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Structured response data
      shared_ptr<string> data_ {};
      // Incremental text output
      shared_ptr<string> delta_ {};
      // See error code list
      shared_ptr<string> errorCode_ {};
      // See error code list
      shared_ptr<string> errorText_ {};
      // Completion reason. When the value is stop, it indicates output is complete; on error, the output is the error reason.
      shared_ptr<string> finishReason_ {};
      // Unique identifier. For multi-segment text, different segments use different ids, while the id remains consistent within a text segment
      shared_ptr<string> id_ {};
      // Request ID
      shared_ptr<string> requestId_ {};
      // Whether the error is retryable, defaults to true
      shared_ptr<bool> retryable_ {};
      // Same as event
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->event_ == nullptr && this->id_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QaChatResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QaChatResponseBody::Data) };
    inline QaChatResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QaChatResponseBody::Data) };
    inline QaChatResponseBody& setData(const QaChatResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QaChatResponseBody& setData(QaChatResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline QaChatResponseBody& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QaChatResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // Protocol data
    shared_ptr<QaChatResponseBody::Data> data_ {};
    // Event type description:
    // 
    // 1. Lifecycle
    //    - start / finish
    //    - Marks the beginning and end of a message
    // 
    // 2. Text content
    //    - text-start / text-delta / text-end
    //    - Markdown text streaming output
    // 
    // 3. Inline media
    //    - data-image-info / data-video-info
    //    - Media cards in text-image/text-video mixed content
    // 
    // 4. Source references
    //    - data-reference
    //    - Unified source list (web / document / image / video)
    // 
    // 5. Inline references
    //    - data-document-ref
    //    - Perplexity-style inline document references
    // 
    // 6. Template video
    //    - data-template-video
    //    - Video cards output by AV template agent
    // 
    // 7. Template analysis
    //    - data-video-info / data-template-info / data-template-video-content
    //    - Analysis result data from AV template agent
    //    - Table-type templates such as "Speech Transcription", "Video Outline", and "Video-to-Script" are delivered at once via data-template-video-content
    // 
    // 8. Streaming JSON
    //    - json-start / json-delta / json-end
    //    - Incremental delta-only JSON streaming protocol
    //    - Used for structured JSON template analysis output such as "Action Expression"
    shared_ptr<string> event_ {};
    // Request ID, same as requestId
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiSearchEngine20260417
#endif
