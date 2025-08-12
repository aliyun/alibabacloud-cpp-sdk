// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDLIVEMESSAGEUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDLIVEMESSAGEUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SendLiveMessageUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendLiveMessageUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MsgTid, msgTid_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SendLiveMessageUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MsgTid, msgTid_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SendLiveMessageUserResponseBody() = default ;
    SendLiveMessageUserResponseBody(const SendLiveMessageUserResponseBody &) = default ;
    SendLiveMessageUserResponseBody(SendLiveMessageUserResponseBody &&) = default ;
    SendLiveMessageUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendLiveMessageUserResponseBody() = default ;
    SendLiveMessageUserResponseBody& operator=(const SendLiveMessageUserResponseBody &) = default ;
    SendLiveMessageUserResponseBody& operator=(SendLiveMessageUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->msgTid_ != nullptr
        && this->requestId_ != nullptr; };
    // msgTid Field Functions 
    bool hasMsgTid() const { return this->msgTid_ != nullptr;};
    void deleteMsgTid() { this->msgTid_ = nullptr;};
    inline string msgTid() const { DARABONBA_PTR_GET_DEFAULT(msgTid_, "") };
    inline SendLiveMessageUserResponseBody& setMsgTid(string msgTid) { DARABONBA_PTR_SET_VALUE(msgTid_, msgTid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendLiveMessageUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the message, which is a unique identifier that can be used to delete the message. The ID can be up to 64 bytes in length and can contain letters and digits.
    std::shared_ptr<string> msgTid_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
