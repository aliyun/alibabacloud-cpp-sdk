// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDMESSAGETOGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDMESSAGETOGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SendMessageToGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendMessageToGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(OperatorUserId, operatorUserId_);
      DARABONBA_PTR_TO_JSON(SkipAudit, skipAudit_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageToGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(OperatorUserId, operatorUserId_);
      DARABONBA_PTR_FROM_JSON(SkipAudit, skipAudit_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SendMessageToGroupRequest() = default ;
    SendMessageToGroupRequest(const SendMessageToGroupRequest &) = default ;
    SendMessageToGroupRequest(SendMessageToGroupRequest &&) = default ;
    SendMessageToGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendMessageToGroupRequest() = default ;
    SendMessageToGroupRequest& operator=(const SendMessageToGroupRequest &) = default ;
    SendMessageToGroupRequest& operator=(SendMessageToGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->data_ == nullptr && this->groupId_ == nullptr && this->operatorUserId_ == nullptr && this->skipAudit_ == nullptr && this->type_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SendMessageToGroupRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline SendMessageToGroupRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SendMessageToGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // operatorUserId Field Functions 
    bool hasOperatorUserId() const { return this->operatorUserId_ != nullptr;};
    void deleteOperatorUserId() { this->operatorUserId_ = nullptr;};
    inline string getOperatorUserId() const { DARABONBA_PTR_GET_DEFAULT(operatorUserId_, "") };
    inline SendMessageToGroupRequest& setOperatorUserId(string operatorUserId) { DARABONBA_PTR_SET_VALUE(operatorUserId_, operatorUserId) };


    // skipAudit Field Functions 
    bool hasSkipAudit() const { return this->skipAudit_ != nullptr;};
    void deleteSkipAudit() { this->skipAudit_ = nullptr;};
    inline bool getSkipAudit() const { DARABONBA_PTR_GET_DEFAULT(skipAudit_, false) };
    inline SendMessageToGroupRequest& setSkipAudit(bool skipAudit) { DARABONBA_PTR_SET_VALUE(skipAudit_, skipAudit) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline SendMessageToGroupRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the interactive messaging application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The message body. The value is a JSON string.
    // 
    // This parameter is required.
    shared_ptr<string> data_ {};
    // The ID of the message group.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The ID of the user who performed the operation.
    // 
    // This parameter is required.
    shared_ptr<string> operatorUserId_ {};
    // Specifies whether the message requires Alibaba Cloud content moderation. Valid values:
    // 
    // - **true**: does not require content moderation.
    // - **false**: requires content moderation. This is the default value.
    shared_ptr<bool> skipAudit_ {};
    // The type of the message. A value that is less than or equal to 10000 specifies a system message. A value that is greater than 10000 specifies a custom message.
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
