// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTRESOURCEPERMISSIONREQUESTGRANTCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_GRANTRESOURCEPERMISSIONREQUESTGRANTCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GrantResourcePermissionRequestGrantCommandResourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GrantResourcePermissionRequestGrantCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantResourcePermissionRequestGrantCommand& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveEnd, effectiveEnd_);
      DARABONBA_PTR_TO_JSON(OperateList, operateList_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(UserIdList, userIdList_);
    };
    friend void from_json(const Darabonba::Json& j, GrantResourcePermissionRequestGrantCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveEnd, effectiveEnd_);
      DARABONBA_PTR_FROM_JSON(OperateList, operateList_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(UserIdList, userIdList_);
    };
    GrantResourcePermissionRequestGrantCommand() = default ;
    GrantResourcePermissionRequestGrantCommand(const GrantResourcePermissionRequestGrantCommand &) = default ;
    GrantResourcePermissionRequestGrantCommand(GrantResourcePermissionRequestGrantCommand &&) = default ;
    GrantResourcePermissionRequestGrantCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantResourcePermissionRequestGrantCommand() = default ;
    GrantResourcePermissionRequestGrantCommand& operator=(const GrantResourcePermissionRequestGrantCommand &) = default ;
    GrantResourcePermissionRequestGrantCommand& operator=(GrantResourcePermissionRequestGrantCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->effectiveEnd_ != nullptr
        && this->operateList_ != nullptr && this->reason_ != nullptr && this->resourceList_ != nullptr && this->resourceType_ != nullptr && this->userIdList_ != nullptr; };
    // effectiveEnd Field Functions 
    bool hasEffectiveEnd() const { return this->effectiveEnd_ != nullptr;};
    void deleteEffectiveEnd() { this->effectiveEnd_ = nullptr;};
    inline string effectiveEnd() const { DARABONBA_PTR_GET_DEFAULT(effectiveEnd_, "") };
    inline GrantResourcePermissionRequestGrantCommand& setEffectiveEnd(string effectiveEnd) { DARABONBA_PTR_SET_VALUE(effectiveEnd_, effectiveEnd) };


    // operateList Field Functions 
    bool hasOperateList() const { return this->operateList_ != nullptr;};
    void deleteOperateList() { this->operateList_ = nullptr;};
    inline const vector<string> & operateList() const { DARABONBA_PTR_GET_CONST(operateList_, vector<string>) };
    inline vector<string> operateList() { DARABONBA_PTR_GET(operateList_, vector<string>) };
    inline GrantResourcePermissionRequestGrantCommand& setOperateList(const vector<string> & operateList) { DARABONBA_PTR_SET_VALUE(operateList_, operateList) };
    inline GrantResourcePermissionRequestGrantCommand& setOperateList(vector<string> && operateList) { DARABONBA_PTR_SET_RVALUE(operateList_, operateList) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GrantResourcePermissionRequestGrantCommand& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const vector<Models::GrantResourcePermissionRequestGrantCommandResourceList> & resourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<Models::GrantResourcePermissionRequestGrantCommandResourceList>) };
    inline vector<Models::GrantResourcePermissionRequestGrantCommandResourceList> resourceList() { DARABONBA_PTR_GET(resourceList_, vector<Models::GrantResourcePermissionRequestGrantCommandResourceList>) };
    inline GrantResourcePermissionRequestGrantCommand& setResourceList(const vector<Models::GrantResourcePermissionRequestGrantCommandResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline GrantResourcePermissionRequestGrantCommand& setResourceList(vector<Models::GrantResourcePermissionRequestGrantCommandResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GrantResourcePermissionRequestGrantCommand& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // userIdList Field Functions 
    bool hasUserIdList() const { return this->userIdList_ != nullptr;};
    void deleteUserIdList() { this->userIdList_ = nullptr;};
    inline const vector<string> & userIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
    inline vector<string> userIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
    inline GrantResourcePermissionRequestGrantCommand& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
    inline GrantResourcePermissionRequestGrantCommand& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> effectiveEnd_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> operateList_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::GrantResourcePermissionRequestGrantCommandResourceList>> resourceList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> userIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
