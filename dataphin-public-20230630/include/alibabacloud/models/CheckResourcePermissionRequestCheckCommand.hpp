// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKRESOURCEPERMISSIONREQUESTCHECKCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_CHECKRESOURCEPERMISSIONREQUESTCHECKCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckResourcePermissionRequestCheckCommandResourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CheckResourcePermissionRequestCheckCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckResourcePermissionRequestCheckCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Operate, operate_);
      DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckResourcePermissionRequestCheckCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Operate, operate_);
      DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CheckResourcePermissionRequestCheckCommand() = default ;
    CheckResourcePermissionRequestCheckCommand(const CheckResourcePermissionRequestCheckCommand &) = default ;
    CheckResourcePermissionRequestCheckCommand(CheckResourcePermissionRequestCheckCommand &&) = default ;
    CheckResourcePermissionRequestCheckCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckResourcePermissionRequestCheckCommand() = default ;
    CheckResourcePermissionRequestCheckCommand& operator=(const CheckResourcePermissionRequestCheckCommand &) = default ;
    CheckResourcePermissionRequestCheckCommand& operator=(CheckResourcePermissionRequestCheckCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operate_ != nullptr
        && this->resourceList_ != nullptr && this->resourceType_ != nullptr && this->userId_ != nullptr; };
    // operate Field Functions 
    bool hasOperate() const { return this->operate_ != nullptr;};
    void deleteOperate() { this->operate_ = nullptr;};
    inline string operate() const { DARABONBA_PTR_GET_DEFAULT(operate_, "") };
    inline CheckResourcePermissionRequestCheckCommand& setOperate(string operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const vector<Models::CheckResourcePermissionRequestCheckCommandResourceList> & resourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<Models::CheckResourcePermissionRequestCheckCommandResourceList>) };
    inline vector<Models::CheckResourcePermissionRequestCheckCommandResourceList> resourceList() { DARABONBA_PTR_GET(resourceList_, vector<Models::CheckResourcePermissionRequestCheckCommandResourceList>) };
    inline CheckResourcePermissionRequestCheckCommand& setResourceList(const vector<Models::CheckResourcePermissionRequestCheckCommandResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline CheckResourcePermissionRequestCheckCommand& setResourceList(vector<Models::CheckResourcePermissionRequestCheckCommandResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CheckResourcePermissionRequestCheckCommand& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CheckResourcePermissionRequestCheckCommand& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> operate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::CheckResourcePermissionRequestCheckCommandResourceList>> resourceList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
