// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VOICEMODERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VOICEMODERATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VoiceModerationResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class VoiceModerationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VoiceModerationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, VoiceModerationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    VoiceModerationResponseBody() = default ;
    VoiceModerationResponseBody(const VoiceModerationResponseBody &) = default ;
    VoiceModerationResponseBody(VoiceModerationResponseBody &&) = default ;
    VoiceModerationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VoiceModerationResponseBody() = default ;
    VoiceModerationResponseBody& operator=(const VoiceModerationResponseBody &) = default ;
    VoiceModerationResponseBody& operator=(VoiceModerationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline VoiceModerationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const VoiceModerationResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, VoiceModerationResponseBodyData) };
    inline VoiceModerationResponseBodyData data() { DARABONBA_PTR_GET(data_, VoiceModerationResponseBodyData) };
    inline VoiceModerationResponseBody& setData(const VoiceModerationResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline VoiceModerationResponseBody& setData(VoiceModerationResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VoiceModerationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VoiceModerationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned HTTP status code.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The data returned.
    std::shared_ptr<VoiceModerationResponseBodyData> data_ = nullptr;
    // The message that is returned in response to the request.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
