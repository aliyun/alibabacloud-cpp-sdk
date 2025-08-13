// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATECONFIGRULEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATECONFIGRULEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class GenerateConfigRuleReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateConfigRuleReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateConfigRuleReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    GenerateConfigRuleReportRequest() = default ;
    GenerateConfigRuleReportRequest(const GenerateConfigRuleReportRequest &) = default ;
    GenerateConfigRuleReportRequest(GenerateConfigRuleReportRequest &&) = default ;
    GenerateConfigRuleReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateConfigRuleReportRequest() = default ;
    GenerateConfigRuleReportRequest& operator=(const GenerateConfigRuleReportRequest &) = default ;
    GenerateConfigRuleReportRequest& operator=(GenerateConfigRuleReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->targetId_ != nullptr && this->targetType_ != nullptr
        && this->userType_ != nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline GenerateConfigRuleReportRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GenerateConfigRuleReportRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GenerateConfigRuleReportRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GenerateConfigRuleReportRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline GenerateConfigRuleReportRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline GenerateConfigRuleReportRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline GenerateConfigRuleReportRequest& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID. Set the value to cn-shanghai.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The ID of the object.
    std::shared_ptr<string> targetId_ = nullptr;
    // The type of the object. Valid values:
    // 
    // *   USER: the current logon account. This value is available if you use the Tag Policy feature in single-account mode.
    // *   ROOT: the Root folder in a resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    // *   FOLDER: a folder other than the Root folder in a resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    // *   ACCOUNT: a member in a resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    // 
    // >  The value of this parameter is not case-sensitive.
    std::shared_ptr<string> targetType_ = nullptr;
    // The mode of the Tag Policy feature. Valid values:
    // 
    // *   USER: single-account mode
    // *   RD: multi-account mode
    // 
    // For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
    // 
    // >  This parameter is required if the management account of your resource directory is used to enable the Tag Policy feature in both single-account mode and multi-account mode. The value of this parameter is not case-sensitive.
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
