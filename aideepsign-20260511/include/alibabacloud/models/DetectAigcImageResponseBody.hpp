// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTAIGCIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTAIGCIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class DetectAigcImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectAigcImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DetectAigcImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DetectAigcImageResponseBody() = default ;
    DetectAigcImageResponseBody(const DetectAigcImageResponseBody &) = default ;
    DetectAigcImageResponseBody(DetectAigcImageResponseBody &&) = default ;
    DetectAigcImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectAigcImageResponseBody() = default ;
    DetectAigcImageResponseBody& operator=(const DetectAigcImageResponseBody &) = default ;
    DetectAigcImageResponseBody& operator=(DetectAigcImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(Confidence, confidence_);
        DARABONBA_PTR_TO_JSON(Label, label_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
        DARABONBA_PTR_FROM_JSON(Label, label_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->confidence_ == nullptr
        && this->label_ == nullptr; };
      // confidence Field Functions 
      bool hasConfidence() const { return this->confidence_ != nullptr;};
      void deleteConfidence() { this->confidence_ = nullptr;};
      inline string getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, "") };
      inline Body& setConfidence(string confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Body& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    protected:
      // The confidence level. Value range: 0 to 1. A higher value indicates a higher probability.
      shared_ptr<string> confidence_ {};
      // The detection label. Valid values:
      // - `ai_generated`: AI-generated.
      // - `non_ai_generated`: Not AI-generated.
      shared_ptr<string> label_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<DetectAigcImageResponseBody::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<DetectAigcImageResponseBody::Body>) };
    inline vector<DetectAigcImageResponseBody::Body> getBody() { DARABONBA_PTR_GET(body_, vector<DetectAigcImageResponseBody::Body>) };
    inline DetectAigcImageResponseBody& setBody(const vector<DetectAigcImageResponseBody::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DetectAigcImageResponseBody& setBody(vector<DetectAigcImageResponseBody::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DetectAigcImageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DetectAigcImageResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DetectAigcImageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectAigcImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DetectAigcImageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of AIGC detection result labels.
    shared_ptr<vector<DetectAigcImageResponseBody::Body>> body_ {};
    // The business error code. The value `OK` is returned if the request was successful.
    shared_ptr<string> code_ {};
    // The HTTP status code. The value `200` is returned if the request was successful.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The additional information. The value `success` is returned if the request was successful.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - true: The call was successful.
    // - false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
