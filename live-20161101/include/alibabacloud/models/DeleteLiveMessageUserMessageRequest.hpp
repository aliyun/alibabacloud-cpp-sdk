// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVEMESSAGEUSERMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVEMESSAGEUSERMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteLiveMessageUserMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveMessageUserMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(DeleterId, deleterId_);
      DARABONBA_PTR_TO_JSON(DeleterInfo, deleterInfo_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(ReceiverId, receiverId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveMessageUserMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(DeleterId, deleterId_);
      DARABONBA_PTR_FROM_JSON(DeleterInfo, deleterInfo_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(ReceiverId, receiverId_);
    };
    DeleteLiveMessageUserMessageRequest() = default ;
    DeleteLiveMessageUserMessageRequest(const DeleteLiveMessageUserMessageRequest &) = default ;
    DeleteLiveMessageUserMessageRequest(DeleteLiveMessageUserMessageRequest &&) = default ;
    DeleteLiveMessageUserMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveMessageUserMessageRequest() = default ;
    DeleteLiveMessageUserMessageRequest& operator=(const DeleteLiveMessageUserMessageRequest &) = default ;
    DeleteLiveMessageUserMessageRequest& operator=(DeleteLiveMessageUserMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->dataCenter_ != nullptr && this->deleterId_ != nullptr && this->deleterInfo_ != nullptr && this->messageId_ != nullptr && this->receiverId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteLiveMessageUserMessageRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline DeleteLiveMessageUserMessageRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // deleterId Field Functions 
    bool hasDeleterId() const { return this->deleterId_ != nullptr;};
    void deleteDeleterId() { this->deleterId_ = nullptr;};
    inline string deleterId() const { DARABONBA_PTR_GET_DEFAULT(deleterId_, "") };
    inline DeleteLiveMessageUserMessageRequest& setDeleterId(string deleterId) { DARABONBA_PTR_SET_VALUE(deleterId_, deleterId) };


    // deleterInfo Field Functions 
    bool hasDeleterInfo() const { return this->deleterInfo_ != nullptr;};
    void deleteDeleterInfo() { this->deleterInfo_ = nullptr;};
    inline string deleterInfo() const { DARABONBA_PTR_GET_DEFAULT(deleterInfo_, "") };
    inline DeleteLiveMessageUserMessageRequest& setDeleterInfo(string deleterInfo) { DARABONBA_PTR_SET_VALUE(deleterInfo_, deleterInfo) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline DeleteLiveMessageUserMessageRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // receiverId Field Functions 
    bool hasReceiverId() const { return this->receiverId_ != nullptr;};
    void deleteReceiverId() { this->receiverId_ = nullptr;};
    inline string receiverId() const { DARABONBA_PTR_GET_DEFAULT(receiverId_, "") };
    inline DeleteLiveMessageUserMessageRequest& setReceiverId(string receiverId) { DARABONBA_PTR_SET_VALUE(receiverId_, receiverId) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The data center where the interactive messaging application is deployed. Set this parameter to the value of DataCenter that you specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2593195.html) operation. Valid values: cn-shanghai (Shanghai) and ap-southeast-1 (Singapore).
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The ID of the user who performs the deletion operation. The ID can contain only letters and digits and can be up to 64 bytes in length.
    std::shared_ptr<string> deleterId_ = nullptr;
    // The additional information about the user who performs the deletion operation. The value can be up to 512 bytes in length.
    std::shared_ptr<string> deleterInfo_ = nullptr;
    // The ID of the message that you want to delete. Set this parameter to the value of MsgTid that you specified when you called the SendLiveMessageUser operation. The ID can contain only letters and digits and can be up to 64 bytes in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> messageId_ = nullptr;
    // The ID of the user who received the message to delete. The ID can contain only letters and digits and can be up to 64 bytes in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> receiverId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
