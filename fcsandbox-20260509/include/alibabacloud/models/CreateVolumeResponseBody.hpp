// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVOLUMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVOLUMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/E2BVolume.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class CreateVolumeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVolumeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVolumeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(volume, volume_);
    };
    CreateVolumeResponseBody() = default ;
    CreateVolumeResponseBody(const CreateVolumeResponseBody &) = default ;
    CreateVolumeResponseBody(CreateVolumeResponseBody &&) = default ;
    CreateVolumeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVolumeResponseBody() = default ;
    CreateVolumeResponseBody& operator=(const CreateVolumeResponseBody &) = default ;
    CreateVolumeResponseBody& operator=(CreateVolumeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->volume_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateVolumeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateVolumeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVolumeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline const E2BVolume & getVolume() const { DARABONBA_PTR_GET_CONST(volume_, E2BVolume) };
    inline E2BVolume getVolume() { DARABONBA_PTR_GET(volume_, E2BVolume) };
    inline CreateVolumeResponseBody& setVolume(const E2BVolume & volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };
    inline CreateVolumeResponseBody& setVolume(E2BVolume && volume) { DARABONBA_PTR_SET_RVALUE(volume_, volume) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The storage configuration.
    shared_ptr<E2BVolume> volume_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
