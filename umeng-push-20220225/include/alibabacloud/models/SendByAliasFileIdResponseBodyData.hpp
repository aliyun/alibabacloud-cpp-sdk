// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDBYALIASFILEIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SENDBYALIASFILEIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class SendByAliasFileIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendByAliasFileIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MsgId, msgId_);
    };
    friend void from_json(const Darabonba::Json& j, SendByAliasFileIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
    };
    SendByAliasFileIdResponseBodyData() = default ;
    SendByAliasFileIdResponseBodyData(const SendByAliasFileIdResponseBodyData &) = default ;
    SendByAliasFileIdResponseBodyData(SendByAliasFileIdResponseBodyData &&) = default ;
    SendByAliasFileIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendByAliasFileIdResponseBodyData() = default ;
    SendByAliasFileIdResponseBodyData& operator=(const SendByAliasFileIdResponseBodyData &) = default ;
    SendByAliasFileIdResponseBodyData& operator=(SendByAliasFileIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->msgId_ == nullptr; };
    // msgId Field Functions 
    bool hasMsgId() const { return this->msgId_ != nullptr;};
    void deleteMsgId() { this->msgId_ = nullptr;};
    inline string msgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
    inline SendByAliasFileIdResponseBodyData& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


  protected:
    std::shared_ptr<string> msgId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
