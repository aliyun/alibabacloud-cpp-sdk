// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDLIVEMESSAGEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDLIVEMESSAGEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SendLiveMessageGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendLiveMessageGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MsgTid, msgTid_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SendLiveMessageGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MsgTid, msgTid_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SendLiveMessageGroupResponseBody() = default ;
    SendLiveMessageGroupResponseBody(const SendLiveMessageGroupResponseBody &) = default ;
    SendLiveMessageGroupResponseBody(SendLiveMessageGroupResponseBody &&) = default ;
    SendLiveMessageGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendLiveMessageGroupResponseBody() = default ;
    SendLiveMessageGroupResponseBody& operator=(const SendLiveMessageGroupResponseBody &) = default ;
    SendLiveMessageGroupResponseBody& operator=(SendLiveMessageGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->msgTid_ == nullptr
        && this->requestId_ == nullptr; };
    // msgTid Field Functions 
    bool hasMsgTid() const { return this->msgTid_ != nullptr;};
    void deleteMsgTid() { this->msgTid_ = nullptr;};
    inline string getMsgTid() const { DARABONBA_PTR_GET_DEFAULT(msgTid_, "") };
    inline SendLiveMessageGroupResponseBody& setMsgTid(string msgTid) { DARABONBA_PTR_SET_VALUE(msgTid_, msgTid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendLiveMessageGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the message, which is a unique identifier that can be used to delete the message. The ID can be up to 64 bytes in length and can contain letters and digits.
    shared_ptr<string> msgTid_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
