// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPDNSUDPIPSEGMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPDNSUDPIPSEGMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class CreatePdnsUdpIpSegmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePdnsUdpIpSegmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ValidMessage, validMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePdnsUdpIpSegmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ValidMessage, validMessage_);
    };
    CreatePdnsUdpIpSegmentResponseBody() = default ;
    CreatePdnsUdpIpSegmentResponseBody(const CreatePdnsUdpIpSegmentResponseBody &) = default ;
    CreatePdnsUdpIpSegmentResponseBody(CreatePdnsUdpIpSegmentResponseBody &&) = default ;
    CreatePdnsUdpIpSegmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePdnsUdpIpSegmentResponseBody() = default ;
    CreatePdnsUdpIpSegmentResponseBody& operator=(const CreatePdnsUdpIpSegmentResponseBody &) = default ;
    CreatePdnsUdpIpSegmentResponseBody& operator=(CreatePdnsUdpIpSegmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->validMessage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePdnsUdpIpSegmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // validMessage Field Functions 
    bool hasValidMessage() const { return this->validMessage_ != nullptr;};
    void deleteValidMessage() { this->validMessage_ = nullptr;};
    inline string getValidMessage() const { DARABONBA_PTR_GET_DEFAULT(validMessage_, "") };
    inline CreatePdnsUdpIpSegmentResponseBody& setValidMessage(string validMessage) { DARABONBA_PTR_SET_VALUE(validMessage_, validMessage) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> validMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
