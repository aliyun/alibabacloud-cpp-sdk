// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSDLQMESSAGERESENDBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSDLQMESSAGERESENDBYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsDLQMessageResendByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsDLQMessageResendByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsDLQMessageResendByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OnsDLQMessageResendByIdResponseBody() = default ;
    OnsDLQMessageResendByIdResponseBody(const OnsDLQMessageResendByIdResponseBody &) = default ;
    OnsDLQMessageResendByIdResponseBody(OnsDLQMessageResendByIdResponseBody &&) = default ;
    OnsDLQMessageResendByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsDLQMessageResendByIdResponseBody() = default ;
    OnsDLQMessageResendByIdResponseBody& operator=(const OnsDLQMessageResendByIdResponseBody &) = default ;
    OnsDLQMessageResendByIdResponseBody& operator=(OnsDLQMessageResendByIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MsgId, msgId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->msgId_ == nullptr; };
      // msgId Field Functions 
      bool hasMsgId() const { return this->msgId_ != nullptr;};
      void deleteMsgId() { this->msgId_ = nullptr;};
      inline const vector<string> & getMsgId() const { DARABONBA_PTR_GET_CONST(msgId_, vector<string>) };
      inline vector<string> getMsgId() { DARABONBA_PTR_GET(msgId_, vector<string>) };
      inline Data& setMsgId(const vector<string> & msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };
      inline Data& setMsgId(vector<string> && msgId) { DARABONBA_PTR_SET_RVALUE(msgId_, msgId) };


    protected:
      shared_ptr<vector<string>> msgId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OnsDLQMessageResendByIdResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OnsDLQMessageResendByIdResponseBody::Data) };
    inline OnsDLQMessageResendByIdResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OnsDLQMessageResendByIdResponseBody::Data) };
    inline OnsDLQMessageResendByIdResponseBody& setData(const OnsDLQMessageResendByIdResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OnsDLQMessageResendByIdResponseBody& setData(OnsDLQMessageResendByIdResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsDLQMessageResendByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<OnsDLQMessageResendByIdResponseBody::Data> data_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
