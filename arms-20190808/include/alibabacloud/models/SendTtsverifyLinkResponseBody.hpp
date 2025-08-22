// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDTTSVERIFYLINKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDTTSVERIFYLINKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SendTTSVerifyLinkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendTTSVerifyLinkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SendTTSVerifyLinkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SendTTSVerifyLinkResponseBody() = default ;
    SendTTSVerifyLinkResponseBody(const SendTTSVerifyLinkResponseBody &) = default ;
    SendTTSVerifyLinkResponseBody(SendTTSVerifyLinkResponseBody &&) = default ;
    SendTTSVerifyLinkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendTTSVerifyLinkResponseBody() = default ;
    SendTTSVerifyLinkResponseBody& operator=(const SendTTSVerifyLinkResponseBody &) = default ;
    SendTTSVerifyLinkResponseBody& operator=(SendTTSVerifyLinkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isSuccess_ != nullptr
        && this->requestId_ != nullptr; };
    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline SendTTSVerifyLinkResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendTTSVerifyLinkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the text message was sent.
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
