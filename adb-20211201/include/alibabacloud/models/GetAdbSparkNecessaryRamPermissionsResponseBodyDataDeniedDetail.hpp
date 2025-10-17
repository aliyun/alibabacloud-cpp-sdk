// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADBSPARKNECESSARYRAMPERMISSIONSRESPONSEBODYDATADENIEDDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETADBSPARKNECESSARYRAMPERMISSIONSRESPONSEBODYDATADENIEDDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
      DARABONBA_PTR_TO_JSON(ResourceAuthTargetInfo, resourceAuthTargetInfo_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
      DARABONBA_PTR_FROM_JSON(ResourceAuthTargetInfo, resourceAuthTargetInfo_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail() = default ;
    GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail(const GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail &) = default ;
    GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail(GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail &&) = default ;
    GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail() = default ;
    GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail& operator=(const GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail &) = default ;
    GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail& operator=(GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->noPermissionType_ == nullptr && return this->policyType_ == nullptr && return this->principalType_ == nullptr && return this->resourceAuthTargetInfo_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // noPermissionType Field Functions 
    bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
    void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
    inline string noPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
    inline GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // principalType Field Functions 
    bool hasPrincipalType() const { return this->principalType_ != nullptr;};
    void deletePrincipalType() { this->principalType_ = nullptr;};
    inline string principalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
    inline GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


    // resourceAuthTargetInfo Field Functions 
    bool hasResourceAuthTargetInfo() const { return this->resourceAuthTargetInfo_ != nullptr;};
    void deleteResourceAuthTargetInfo() { this->resourceAuthTargetInfo_ = nullptr;};
    inline string resourceAuthTargetInfo() const { DARABONBA_PTR_GET_DEFAULT(resourceAuthTargetInfo_, "") };
    inline GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail& setResourceAuthTargetInfo(string resourceAuthTargetInfo) { DARABONBA_PTR_SET_VALUE(resourceAuthTargetInfo_, resourceAuthTargetInfo) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline string resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
    inline GetADBSparkNecessaryRAMPermissionsResponseBodyDataDeniedDetail& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> noPermissionType_ = nullptr;
    std::shared_ptr<string> policyType_ = nullptr;
    std::shared_ptr<string> principalType_ = nullptr;
    std::shared_ptr<string> resourceAuthTargetInfo_ = nullptr;
    std::shared_ptr<string> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
