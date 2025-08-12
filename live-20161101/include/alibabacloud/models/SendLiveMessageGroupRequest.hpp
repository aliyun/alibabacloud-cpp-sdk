// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDLIVEMESSAGEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDLIVEMESSAGEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SendLiveMessageGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendLiveMessageGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MsgTid, msgTid_);
      DARABONBA_PTR_TO_JSON(MsgType, msgType_);
      DARABONBA_PTR_TO_JSON(NoCache, noCache_);
      DARABONBA_PTR_TO_JSON(NoStorage, noStorage_);
      DARABONBA_PTR_TO_JSON(SenderId, senderId_);
      DARABONBA_PTR_TO_JSON(SenderMetaInfo, senderMetaInfo_);
      DARABONBA_PTR_TO_JSON(StaticsIncrease, staticsIncrease_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, SendLiveMessageGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MsgTid, msgTid_);
      DARABONBA_PTR_FROM_JSON(MsgType, msgType_);
      DARABONBA_PTR_FROM_JSON(NoCache, noCache_);
      DARABONBA_PTR_FROM_JSON(NoStorage, noStorage_);
      DARABONBA_PTR_FROM_JSON(SenderId, senderId_);
      DARABONBA_PTR_FROM_JSON(SenderMetaInfo, senderMetaInfo_);
      DARABONBA_PTR_FROM_JSON(StaticsIncrease, staticsIncrease_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    SendLiveMessageGroupRequest() = default ;
    SendLiveMessageGroupRequest(const SendLiveMessageGroupRequest &) = default ;
    SendLiveMessageGroupRequest(SendLiveMessageGroupRequest &&) = default ;
    SendLiveMessageGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendLiveMessageGroupRequest() = default ;
    SendLiveMessageGroupRequest& operator=(const SendLiveMessageGroupRequest &) = default ;
    SendLiveMessageGroupRequest& operator=(SendLiveMessageGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->body_ != nullptr && this->dataCenter_ != nullptr && this->groupId_ != nullptr && this->msgTid_ != nullptr && this->msgType_ != nullptr
        && this->noCache_ != nullptr && this->noStorage_ != nullptr && this->senderId_ != nullptr && this->senderMetaInfo_ != nullptr && this->staticsIncrease_ != nullptr
        && this->weight_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SendLiveMessageGroupRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline SendLiveMessageGroupRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline SendLiveMessageGroupRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SendLiveMessageGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // msgTid Field Functions 
    bool hasMsgTid() const { return this->msgTid_ != nullptr;};
    void deleteMsgTid() { this->msgTid_ = nullptr;};
    inline string msgTid() const { DARABONBA_PTR_GET_DEFAULT(msgTid_, "") };
    inline SendLiveMessageGroupRequest& setMsgTid(string msgTid) { DARABONBA_PTR_SET_VALUE(msgTid_, msgTid) };


    // msgType Field Functions 
    bool hasMsgType() const { return this->msgType_ != nullptr;};
    void deleteMsgType() { this->msgType_ = nullptr;};
    inline int64_t msgType() const { DARABONBA_PTR_GET_DEFAULT(msgType_, 0L) };
    inline SendLiveMessageGroupRequest& setMsgType(int64_t msgType) { DARABONBA_PTR_SET_VALUE(msgType_, msgType) };


    // noCache Field Functions 
    bool hasNoCache() const { return this->noCache_ != nullptr;};
    void deleteNoCache() { this->noCache_ = nullptr;};
    inline bool noCache() const { DARABONBA_PTR_GET_DEFAULT(noCache_, false) };
    inline SendLiveMessageGroupRequest& setNoCache(bool noCache) { DARABONBA_PTR_SET_VALUE(noCache_, noCache) };


    // noStorage Field Functions 
    bool hasNoStorage() const { return this->noStorage_ != nullptr;};
    void deleteNoStorage() { this->noStorage_ = nullptr;};
    inline bool noStorage() const { DARABONBA_PTR_GET_DEFAULT(noStorage_, false) };
    inline SendLiveMessageGroupRequest& setNoStorage(bool noStorage) { DARABONBA_PTR_SET_VALUE(noStorage_, noStorage) };


    // senderId Field Functions 
    bool hasSenderId() const { return this->senderId_ != nullptr;};
    void deleteSenderId() { this->senderId_ = nullptr;};
    inline string senderId() const { DARABONBA_PTR_GET_DEFAULT(senderId_, "") };
    inline SendLiveMessageGroupRequest& setSenderId(string senderId) { DARABONBA_PTR_SET_VALUE(senderId_, senderId) };


    // senderMetaInfo Field Functions 
    bool hasSenderMetaInfo() const { return this->senderMetaInfo_ != nullptr;};
    void deleteSenderMetaInfo() { this->senderMetaInfo_ = nullptr;};
    inline string senderMetaInfo() const { DARABONBA_PTR_GET_DEFAULT(senderMetaInfo_, "") };
    inline SendLiveMessageGroupRequest& setSenderMetaInfo(string senderMetaInfo) { DARABONBA_PTR_SET_VALUE(senderMetaInfo_, senderMetaInfo) };


    // staticsIncrease Field Functions 
    bool hasStaticsIncrease() const { return this->staticsIncrease_ != nullptr;};
    void deleteStaticsIncrease() { this->staticsIncrease_ = nullptr;};
    inline int64_t staticsIncrease() const { DARABONBA_PTR_GET_DEFAULT(staticsIncrease_, 0L) };
    inline SendLiveMessageGroupRequest& setStaticsIncrease(int64_t staticsIncrease) { DARABONBA_PTR_SET_VALUE(staticsIncrease_, staticsIncrease) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int64_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
    inline SendLiveMessageGroupRequest& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The ID of the interactive messaging application in which the message is received.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The message body. The body can be up to 15 KB in length.
    std::shared_ptr<string> body_ = nullptr;
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The ID of the group that receives the message.
    // 
    // >  Make sure that the specified group ID exists. Otherwise, a ResourceNotExist error is returned.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the message, which is a unique identifier that can be used to delete the message. The ID can be up to 64 bytes in length and can contain letters and digits.
    std::shared_ptr<string> msgTid_ = nullptr;
    // The message type.
    std::shared_ptr<int64_t> msgType_ = nullptr;
    // Specifies whether to disable message caching. Valid values: true and false. Default value: false, which specifies that the message is cached to the recent message list of the group.
    std::shared_ptr<bool> noCache_ = nullptr;
    // Specifies whether to disable message storage. Valid values: true and false. Default value: false, which specifies that the message is stored for a validity period of 30 days. You can find the message in the response of the ListLiveMessageGroupMessages operation. If you do not want to store the message, set this parameter to true.
    std::shared_ptr<bool> noStorage_ = nullptr;
    // The ID of the user who sends the message. The ID can be up to 64 bytes in length and can contain letters and digits.
    // 
    // This parameter is required.
    std::shared_ptr<string> senderId_ = nullptr;
    // The additional information about the user who sends the message. The value can be up to 512 bytes in length.
    std::shared_ptr<string> senderMetaInfo_ = nullptr;
    // The contribution of the message to the increase in the number of messages of this type. Default value: 1.
    std::shared_ptr<int64_t> staticsIncrease_ = nullptr;
    // The weight of the message. Default value: 1. A greater value indicates a higher priority. For a message of the highest priority, you can set the weight to 1000000.
    std::shared_ptr<int64_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
