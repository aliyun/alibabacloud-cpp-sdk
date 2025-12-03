// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDNOTIFICATIONFORPARTNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDNOTIFICATIONFORPARTNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mseap20210118
{
namespace Models
{
  class SendNotificationForPartnerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendNotificationForPartnerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(MsgId, msgId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SendNotificationForPartnerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SendNotificationForPartnerResponseBody() = default ;
    SendNotificationForPartnerResponseBody(const SendNotificationForPartnerResponseBody &) = default ;
    SendNotificationForPartnerResponseBody(SendNotificationForPartnerResponseBody &&) = default ;
    SendNotificationForPartnerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendNotificationForPartnerResponseBody() = default ;
    SendNotificationForPartnerResponseBody& operator=(const SendNotificationForPartnerResponseBody &) = default ;
    SendNotificationForPartnerResponseBody& operator=(SendNotificationForPartnerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMsg_ == nullptr
        && return this->msgId_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline SendNotificationForPartnerResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // msgId Field Functions 
    bool hasMsgId() const { return this->msgId_ != nullptr;};
    void deleteMsgId() { this->msgId_ = nullptr;};
    inline string msgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
    inline SendNotificationForPartnerResponseBody& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendNotificationForPartnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SendNotificationForPartnerResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> msgId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mseap20210118
#endif
