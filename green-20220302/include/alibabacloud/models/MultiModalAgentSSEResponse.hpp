// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALAGENTSSERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALAGENTSSERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/MultiModalAgentSSEResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class MultiModalAgentSSEResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultiModalAgentSSEResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(event, event_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, MultiModalAgentSSEResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(event, event_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    MultiModalAgentSSEResponse() = default ;
    MultiModalAgentSSEResponse(const MultiModalAgentSSEResponse &) = default ;
    MultiModalAgentSSEResponse(MultiModalAgentSSEResponse &&) = default ;
    MultiModalAgentSSEResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultiModalAgentSSEResponse() = default ;
    MultiModalAgentSSEResponse& operator=(const MultiModalAgentSSEResponse &) = default ;
    MultiModalAgentSSEResponse& operator=(MultiModalAgentSSEResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->id_ == nullptr && this->event_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline MultiModalAgentSSEResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline MultiModalAgentSSEResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline MultiModalAgentSSEResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline MultiModalAgentSSEResponse& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline MultiModalAgentSSEResponse& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const MultiModalAgentSSEResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, MultiModalAgentSSEResponseBody) };
    inline MultiModalAgentSSEResponseBody getBody() { DARABONBA_PTR_GET(body_, MultiModalAgentSSEResponseBody) };
    inline MultiModalAgentSSEResponse& setBody(const MultiModalAgentSSEResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline MultiModalAgentSSEResponse& setBody(MultiModalAgentSSEResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> event_ {};
    shared_ptr<MultiModalAgentSSEResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
