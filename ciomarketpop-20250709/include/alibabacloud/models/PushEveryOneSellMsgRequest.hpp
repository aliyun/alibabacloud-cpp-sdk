// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHEVERYONESELLMSGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHEVERYONESELLMSGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CioMarketPop20250709
{
namespace Models
{
  class PushEveryOneSellMsgRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushEveryOneSellMsgRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DingIdList, dingIdList_);
      DARABONBA_PTR_TO_JSON(PushMsg, pushMsg_);
      DARABONBA_PTR_TO_JSON(PushType, pushType_);
    };
    friend void from_json(const Darabonba::Json& j, PushEveryOneSellMsgRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DingIdList, dingIdList_);
      DARABONBA_PTR_FROM_JSON(PushMsg, pushMsg_);
      DARABONBA_PTR_FROM_JSON(PushType, pushType_);
    };
    PushEveryOneSellMsgRequest() = default ;
    PushEveryOneSellMsgRequest(const PushEveryOneSellMsgRequest &) = default ;
    PushEveryOneSellMsgRequest(PushEveryOneSellMsgRequest &&) = default ;
    PushEveryOneSellMsgRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushEveryOneSellMsgRequest() = default ;
    PushEveryOneSellMsgRequest& operator=(const PushEveryOneSellMsgRequest &) = default ;
    PushEveryOneSellMsgRequest& operator=(PushEveryOneSellMsgRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dingIdList_ == nullptr
        && return this->pushMsg_ == nullptr && return this->pushType_ == nullptr; };
    // dingIdList Field Functions 
    bool hasDingIdList() const { return this->dingIdList_ != nullptr;};
    void deleteDingIdList() { this->dingIdList_ = nullptr;};
    inline const vector<string> & dingIdList() const { DARABONBA_PTR_GET_CONST(dingIdList_, vector<string>) };
    inline vector<string> dingIdList() { DARABONBA_PTR_GET(dingIdList_, vector<string>) };
    inline PushEveryOneSellMsgRequest& setDingIdList(const vector<string> & dingIdList) { DARABONBA_PTR_SET_VALUE(dingIdList_, dingIdList) };
    inline PushEveryOneSellMsgRequest& setDingIdList(vector<string> && dingIdList) { DARABONBA_PTR_SET_RVALUE(dingIdList_, dingIdList) };


    // pushMsg Field Functions 
    bool hasPushMsg() const { return this->pushMsg_ != nullptr;};
    void deletePushMsg() { this->pushMsg_ = nullptr;};
    inline string pushMsg() const { DARABONBA_PTR_GET_DEFAULT(pushMsg_, "") };
    inline PushEveryOneSellMsgRequest& setPushMsg(string pushMsg) { DARABONBA_PTR_SET_VALUE(pushMsg_, pushMsg) };


    // pushType Field Functions 
    bool hasPushType() const { return this->pushType_ != nullptr;};
    void deletePushType() { this->pushType_ = nullptr;};
    inline string pushType() const { DARABONBA_PTR_GET_DEFAULT(pushType_, "") };
    inline PushEveryOneSellMsgRequest& setPushType(string pushType) { DARABONBA_PTR_SET_VALUE(pushType_, pushType) };


  protected:
    std::shared_ptr<vector<string>> dingIdList_ = nullptr;
    std::shared_ptr<string> pushMsg_ = nullptr;
    std::shared_ptr<string> pushType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CioMarketPop20250709
#endif
