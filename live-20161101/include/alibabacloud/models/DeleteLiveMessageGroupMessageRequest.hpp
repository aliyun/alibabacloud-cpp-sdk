// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVEMESSAGEGROUPMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVEMESSAGEGROUPMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteLiveMessageGroupMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveMessageGroupMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(DeleterId, deleterId_);
      DARABONBA_PTR_TO_JSON(DeleterInfo, deleterInfo_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveMessageGroupMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(DeleterId, deleterId_);
      DARABONBA_PTR_FROM_JSON(DeleterInfo, deleterInfo_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
    };
    DeleteLiveMessageGroupMessageRequest() = default ;
    DeleteLiveMessageGroupMessageRequest(const DeleteLiveMessageGroupMessageRequest &) = default ;
    DeleteLiveMessageGroupMessageRequest(DeleteLiveMessageGroupMessageRequest &&) = default ;
    DeleteLiveMessageGroupMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveMessageGroupMessageRequest() = default ;
    DeleteLiveMessageGroupMessageRequest& operator=(const DeleteLiveMessageGroupMessageRequest &) = default ;
    DeleteLiveMessageGroupMessageRequest& operator=(DeleteLiveMessageGroupMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->dataCenter_ == nullptr && this->deleterId_ == nullptr && this->deleterInfo_ == nullptr && this->groupId_ == nullptr && this->messageId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteLiveMessageGroupMessageRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string getDataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline DeleteLiveMessageGroupMessageRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // deleterId Field Functions 
    bool hasDeleterId() const { return this->deleterId_ != nullptr;};
    void deleteDeleterId() { this->deleterId_ = nullptr;};
    inline string getDeleterId() const { DARABONBA_PTR_GET_DEFAULT(deleterId_, "") };
    inline DeleteLiveMessageGroupMessageRequest& setDeleterId(string deleterId) { DARABONBA_PTR_SET_VALUE(deleterId_, deleterId) };


    // deleterInfo Field Functions 
    bool hasDeleterInfo() const { return this->deleterInfo_ != nullptr;};
    void deleteDeleterInfo() { this->deleterInfo_ = nullptr;};
    inline string getDeleterInfo() const { DARABONBA_PTR_GET_DEFAULT(deleterInfo_, "") };
    inline DeleteLiveMessageGroupMessageRequest& setDeleterInfo(string deleterInfo) { DARABONBA_PTR_SET_VALUE(deleterInfo_, deleterInfo) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DeleteLiveMessageGroupMessageRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline DeleteLiveMessageGroupMessageRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    shared_ptr<string> dataCenter_ {};
    // The ID of the user who deletes the message. The ID must be up to 64 bytes in length and can contain letters and digits.
    shared_ptr<string> deleterId_ {};
    // The additional information about the user who performs the deletion operation. The value can be up to 512 bytes in length.
    shared_ptr<string> deleterInfo_ {};
    // The group ID.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The ID of the message that you want to delete. Set this parameter to the value of MsgTid that you specified when you called the SendLiveMessageGroup operation. The ID must be up to 64 bytes in length and can contain letters and digits.
    // 
    // This parameter is required.
    shared_ptr<string> messageId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
