// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKERESOURCEPERMISSIONREQUESTREVOKECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_REVOKERESOURCEPERMISSIONREQUESTREVOKECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RevokeResourcePermissionRequestRevokeCommandResourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class RevokeResourcePermissionRequestRevokeCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeResourcePermissionRequestRevokeCommand& obj) { 
      DARABONBA_PTR_TO_JSON(OperateList, operateList_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeResourcePermissionRequestRevokeCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateList, operateList_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    RevokeResourcePermissionRequestRevokeCommand() = default ;
    RevokeResourcePermissionRequestRevokeCommand(const RevokeResourcePermissionRequestRevokeCommand &) = default ;
    RevokeResourcePermissionRequestRevokeCommand(RevokeResourcePermissionRequestRevokeCommand &&) = default ;
    RevokeResourcePermissionRequestRevokeCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeResourcePermissionRequestRevokeCommand() = default ;
    RevokeResourcePermissionRequestRevokeCommand& operator=(const RevokeResourcePermissionRequestRevokeCommand &) = default ;
    RevokeResourcePermissionRequestRevokeCommand& operator=(RevokeResourcePermissionRequestRevokeCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operateList_ != nullptr
        && this->reason_ != nullptr && this->resourceList_ != nullptr && this->resourceType_ != nullptr && this->userId_ != nullptr; };
    // operateList Field Functions 
    bool hasOperateList() const { return this->operateList_ != nullptr;};
    void deleteOperateList() { this->operateList_ = nullptr;};
    inline const vector<string> & operateList() const { DARABONBA_PTR_GET_CONST(operateList_, vector<string>) };
    inline vector<string> operateList() { DARABONBA_PTR_GET(operateList_, vector<string>) };
    inline RevokeResourcePermissionRequestRevokeCommand& setOperateList(const vector<string> & operateList) { DARABONBA_PTR_SET_VALUE(operateList_, operateList) };
    inline RevokeResourcePermissionRequestRevokeCommand& setOperateList(vector<string> && operateList) { DARABONBA_PTR_SET_RVALUE(operateList_, operateList) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline RevokeResourcePermissionRequestRevokeCommand& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const vector<Models::RevokeResourcePermissionRequestRevokeCommandResourceList> & resourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<Models::RevokeResourcePermissionRequestRevokeCommandResourceList>) };
    inline vector<Models::RevokeResourcePermissionRequestRevokeCommandResourceList> resourceList() { DARABONBA_PTR_GET(resourceList_, vector<Models::RevokeResourcePermissionRequestRevokeCommandResourceList>) };
    inline RevokeResourcePermissionRequestRevokeCommand& setResourceList(const vector<Models::RevokeResourcePermissionRequestRevokeCommandResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline RevokeResourcePermissionRequestRevokeCommand& setResourceList(vector<Models::RevokeResourcePermissionRequestRevokeCommandResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline RevokeResourcePermissionRequestRevokeCommand& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline RevokeResourcePermissionRequestRevokeCommand& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<vector<string>> operateList_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::RevokeResourcePermissionRequestRevokeCommandResourceList>> resourceList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
