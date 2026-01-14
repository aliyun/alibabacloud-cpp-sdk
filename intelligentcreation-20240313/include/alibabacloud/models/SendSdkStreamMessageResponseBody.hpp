// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDSDKSTREAMMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDSDKSTREAMMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SendSdkStreamMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendSdkStreamMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(commonStreamMessage, commonStreamMessage_);
    };
    friend void from_json(const Darabonba::Json& j, SendSdkStreamMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(commonStreamMessage, commonStreamMessage_);
    };
    SendSdkStreamMessageResponseBody() = default ;
    SendSdkStreamMessageResponseBody(const SendSdkStreamMessageResponseBody &) = default ;
    SendSdkStreamMessageResponseBody(SendSdkStreamMessageResponseBody &&) = default ;
    SendSdkStreamMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendSdkStreamMessageResponseBody() = default ;
    SendSdkStreamMessageResponseBody& operator=(const SendSdkStreamMessageResponseBody &) = default ;
    SendSdkStreamMessageResponseBody& operator=(SendSdkStreamMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonStreamMessage_ == nullptr; };
    // commonStreamMessage Field Functions 
    bool hasCommonStreamMessage() const { return this->commonStreamMessage_ != nullptr;};
    void deleteCommonStreamMessage() { this->commonStreamMessage_ = nullptr;};
    inline string getCommonStreamMessage() const { DARABONBA_PTR_GET_DEFAULT(commonStreamMessage_, "") };
    inline SendSdkStreamMessageResponseBody& setCommonStreamMessage(string commonStreamMessage) { DARABONBA_PTR_SET_VALUE(commonStreamMessage_, commonStreamMessage) };


  protected:
    shared_ptr<string> commonStreamMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
