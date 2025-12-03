// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDBYDEVICEFILEIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SENDBYDEVICEFILEIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class SendByDeviceFileIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendByDeviceFileIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MsgId, msgId_);
    };
    friend void from_json(const Darabonba::Json& j, SendByDeviceFileIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
    };
    SendByDeviceFileIdResponseBodyData() = default ;
    SendByDeviceFileIdResponseBodyData(const SendByDeviceFileIdResponseBodyData &) = default ;
    SendByDeviceFileIdResponseBodyData(SendByDeviceFileIdResponseBodyData &&) = default ;
    SendByDeviceFileIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendByDeviceFileIdResponseBodyData() = default ;
    SendByDeviceFileIdResponseBodyData& operator=(const SendByDeviceFileIdResponseBodyData &) = default ;
    SendByDeviceFileIdResponseBodyData& operator=(SendByDeviceFileIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->msgId_ == nullptr; };
    // msgId Field Functions 
    bool hasMsgId() const { return this->msgId_ != nullptr;};
    void deleteMsgId() { this->msgId_ = nullptr;};
    inline string msgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
    inline SendByDeviceFileIdResponseBodyData& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


  protected:
    std::shared_ptr<string> msgId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
