// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDMESSAGETOGROUPUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDMESSAGETOGROUPUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SendMessageToGroupUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendMessageToGroupUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(OperatorUserId, operatorUserId_);
      DARABONBA_PTR_TO_JSON(ReceiverIdList, receiverIdList_);
      DARABONBA_PTR_TO_JSON(SkipAudit, skipAudit_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageToGroupUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(OperatorUserId, operatorUserId_);
      DARABONBA_PTR_FROM_JSON(ReceiverIdList, receiverIdList_);
      DARABONBA_PTR_FROM_JSON(SkipAudit, skipAudit_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SendMessageToGroupUsersRequest() = default ;
    SendMessageToGroupUsersRequest(const SendMessageToGroupUsersRequest &) = default ;
    SendMessageToGroupUsersRequest(SendMessageToGroupUsersRequest &&) = default ;
    SendMessageToGroupUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendMessageToGroupUsersRequest() = default ;
    SendMessageToGroupUsersRequest& operator=(const SendMessageToGroupUsersRequest &) = default ;
    SendMessageToGroupUsersRequest& operator=(SendMessageToGroupUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->data_ != nullptr && this->groupId_ != nullptr && this->operatorUserId_ != nullptr && this->receiverIdList_ != nullptr && this->skipAudit_ != nullptr
        && this->type_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SendMessageToGroupUsersRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline SendMessageToGroupUsersRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SendMessageToGroupUsersRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // operatorUserId Field Functions 
    bool hasOperatorUserId() const { return this->operatorUserId_ != nullptr;};
    void deleteOperatorUserId() { this->operatorUserId_ = nullptr;};
    inline string operatorUserId() const { DARABONBA_PTR_GET_DEFAULT(operatorUserId_, "") };
    inline SendMessageToGroupUsersRequest& setOperatorUserId(string operatorUserId) { DARABONBA_PTR_SET_VALUE(operatorUserId_, operatorUserId) };


    // receiverIdList Field Functions 
    bool hasReceiverIdList() const { return this->receiverIdList_ != nullptr;};
    void deleteReceiverIdList() { this->receiverIdList_ = nullptr;};
    inline const vector<string> & receiverIdList() const { DARABONBA_PTR_GET_CONST(receiverIdList_, vector<string>) };
    inline vector<string> receiverIdList() { DARABONBA_PTR_GET(receiverIdList_, vector<string>) };
    inline SendMessageToGroupUsersRequest& setReceiverIdList(const vector<string> & receiverIdList) { DARABONBA_PTR_SET_VALUE(receiverIdList_, receiverIdList) };
    inline SendMessageToGroupUsersRequest& setReceiverIdList(vector<string> && receiverIdList) { DARABONBA_PTR_SET_RVALUE(receiverIdList_, receiverIdList) };


    // skipAudit Field Functions 
    bool hasSkipAudit() const { return this->skipAudit_ != nullptr;};
    void deleteSkipAudit() { this->skipAudit_ = nullptr;};
    inline bool skipAudit() const { DARABONBA_PTR_GET_DEFAULT(skipAudit_, false) };
    inline SendMessageToGroupUsersRequest& setSkipAudit(bool skipAudit) { DARABONBA_PTR_SET_VALUE(skipAudit_, skipAudit) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline SendMessageToGroupUsersRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the interactive messaging application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The message body. The value is a JSON string.
    // 
    // This parameter is required.
    std::shared_ptr<string> data_ = nullptr;
    // The ID of the message group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the user who performs the operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> operatorUserId_ = nullptr;
    // The list of users to receive the message.
    std::shared_ptr<vector<string>> receiverIdList_ = nullptr;
    // Specifies whether the message requires Alibaba Cloud content moderation. Valid values:
    // 
    // - **true**: does not require content moderation.
    // - **false**: requires content moderation. This is the default value.
    std::shared_ptr<bool> skipAudit_ = nullptr;
    // The type of the message. A value that is less than or equal to 10000 specifies a system message. A value that is greater than 10000 specifies a custom message.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
