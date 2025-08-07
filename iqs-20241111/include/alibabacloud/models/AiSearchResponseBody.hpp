// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISEARCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_AISEARCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AiSearchResponseBodyHeader.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class AiSearchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiSearchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AiSearchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    AiSearchResponseBody() = default ;
    AiSearchResponseBody(const AiSearchResponseBody &) = default ;
    AiSearchResponseBody(AiSearchResponseBody &&) = default ;
    AiSearchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiSearchResponseBody() = default ;
    AiSearchResponseBody& operator=(const AiSearchResponseBody &) = default ;
    AiSearchResponseBody& operator=(AiSearchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->header_ != nullptr
        && this->payload_ != nullptr && this->requestId_ != nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const AiSearchResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, AiSearchResponseBodyHeader) };
    inline AiSearchResponseBodyHeader header() { DARABONBA_PTR_GET(header_, AiSearchResponseBodyHeader) };
    inline AiSearchResponseBody& setHeader(const AiSearchResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline AiSearchResponseBody& setHeader(AiSearchResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline string payload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
    inline AiSearchResponseBody& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AiSearchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<AiSearchResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<string> payload_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
