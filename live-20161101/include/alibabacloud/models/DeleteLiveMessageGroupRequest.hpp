// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVEMESSAGEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVEMESSAGEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteLiveMessageGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveMessageGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(OperatorId, operatorId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveMessageGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(OperatorId, operatorId_);
    };
    DeleteLiveMessageGroupRequest() = default ;
    DeleteLiveMessageGroupRequest(const DeleteLiveMessageGroupRequest &) = default ;
    DeleteLiveMessageGroupRequest(DeleteLiveMessageGroupRequest &&) = default ;
    DeleteLiveMessageGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveMessageGroupRequest() = default ;
    DeleteLiveMessageGroupRequest& operator=(const DeleteLiveMessageGroupRequest &) = default ;
    DeleteLiveMessageGroupRequest& operator=(DeleteLiveMessageGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->dataCenter_ == nullptr && return this->groupId_ == nullptr && return this->operatorId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteLiveMessageGroupRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline DeleteLiveMessageGroupRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DeleteLiveMessageGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string operatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline DeleteLiveMessageGroupRequest& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The ID of the group that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the user who performs the deletion operation. The ID can be up to 64 bytes in length and can contain only letters and digits.
    std::shared_ptr<string> operatorId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
