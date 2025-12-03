// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELBYMSGIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELBYMSGIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class CancelByMsgIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelByMsgIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MsgId, msgId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelByMsgIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
    };
    CancelByMsgIdRequest() = default ;
    CancelByMsgIdRequest(const CancelByMsgIdRequest &) = default ;
    CancelByMsgIdRequest(CancelByMsgIdRequest &&) = default ;
    CancelByMsgIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelByMsgIdRequest() = default ;
    CancelByMsgIdRequest& operator=(const CancelByMsgIdRequest &) = default ;
    CancelByMsgIdRequest& operator=(CancelByMsgIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->msgId_ == nullptr; };
    // msgId Field Functions 
    bool hasMsgId() const { return this->msgId_ != nullptr;};
    void deleteMsgId() { this->msgId_ = nullptr;};
    inline string msgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
    inline CancelByMsgIdRequest& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


  protected:
    std::shared_ptr<string> msgId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
