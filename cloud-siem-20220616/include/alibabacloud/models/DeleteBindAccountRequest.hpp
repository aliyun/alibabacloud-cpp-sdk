// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBINDACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBINDACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DeleteBindAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBindAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessId, accessId_);
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(BindId, bindId_);
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBindAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(BindId, bindId_);
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    DeleteBindAccountRequest() = default ;
    DeleteBindAccountRequest(const DeleteBindAccountRequest &) = default ;
    DeleteBindAccountRequest(DeleteBindAccountRequest &&) = default ;
    DeleteBindAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBindAccountRequest() = default ;
    DeleteBindAccountRequest& operator=(const DeleteBindAccountRequest &) = default ;
    DeleteBindAccountRequest& operator=(DeleteBindAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessId_ != nullptr
        && this->accountId_ != nullptr && this->bindId_ != nullptr && this->cloudCode_ != nullptr && this->regionId_ != nullptr && this->roleFor_ != nullptr
        && this->roleType_ != nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string accessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline DeleteBindAccountRequest& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DeleteBindAccountRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // bindId Field Functions 
    bool hasBindId() const { return this->bindId_ != nullptr;};
    void deleteBindId() { this->bindId_ = nullptr;};
    inline int64_t bindId() const { DARABONBA_PTR_GET_DEFAULT(bindId_, 0L) };
    inline DeleteBindAccountRequest& setBindId(int64_t bindId) { DARABONBA_PTR_SET_VALUE(bindId_, bindId) };


    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline DeleteBindAccountRequest& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteBindAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DeleteBindAccountRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline DeleteBindAccountRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The AccessKey ID of the cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessId_ = nullptr;
    // The ID of the cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
    // The ID generated when the account is added to the threat analysis feature. You can call the [ListBindAccount](https://api.aliyun-inc.com/#/publishment/document/cloud-siem/863fdf54478f4cc5877e27c2a5fe9e44?tenantUuid=f382fccd88b94c5c8c864def6815b854\\&activeTabKey=api%7CListBindAccount) operation to query the ID.
    std::shared_ptr<int64_t> bindId_ = nullptr;
    // The code of the cloud service provider. Valid values:
    // 
    // *   qcloud: Tencent Cloud
    // *   aliyun: Alibaba Cloud
    // *   hcloud: Huawei Cloud
    // 
    // This parameter is required.
    std::shared_ptr<string> cloudCode_ = nullptr;
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    std::shared_ptr<int32_t> roleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
