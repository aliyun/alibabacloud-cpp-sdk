// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESHAREDACCOUNTSRESPONSEBODYSHAREACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESHAREDACCOUNTSRESPONSEBODYSHAREACCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceSharedAccountsResponseBodyShareAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceSharedAccountsResponseBodyShareAccount& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Logo, logo_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Permission, permission_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserAliUid, userAliUid_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceSharedAccountsResponseBodyShareAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Logo, logo_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserAliUid, userAliUid_);
    };
    ListServiceSharedAccountsResponseBodyShareAccount() = default ;
    ListServiceSharedAccountsResponseBodyShareAccount(const ListServiceSharedAccountsResponseBodyShareAccount &) = default ;
    ListServiceSharedAccountsResponseBodyShareAccount(ListServiceSharedAccountsResponseBodyShareAccount &&) = default ;
    ListServiceSharedAccountsResponseBodyShareAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceSharedAccountsResponseBodyShareAccount() = default ;
    ListServiceSharedAccountsResponseBodyShareAccount& operator=(const ListServiceSharedAccountsResponseBodyShareAccount &) = default ;
    ListServiceSharedAccountsResponseBodyShareAccount& operator=(ListServiceSharedAccountsResponseBodyShareAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->logo_ != nullptr && this->name_ != nullptr && this->permission_ != nullptr && this->serviceId_ != nullptr && this->updateTime_ != nullptr
        && this->userAliUid_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListServiceSharedAccountsResponseBodyShareAccount& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // logo Field Functions 
    bool hasLogo() const { return this->logo_ != nullptr;};
    void deleteLogo() { this->logo_ = nullptr;};
    inline string logo() const { DARABONBA_PTR_GET_DEFAULT(logo_, "") };
    inline ListServiceSharedAccountsResponseBodyShareAccount& setLogo(string logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListServiceSharedAccountsResponseBodyShareAccount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string permission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline ListServiceSharedAccountsResponseBodyShareAccount& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ListServiceSharedAccountsResponseBodyShareAccount& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListServiceSharedAccountsResponseBodyShareAccount& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userAliUid Field Functions 
    bool hasUserAliUid() const { return this->userAliUid_ != nullptr;};
    void deleteUserAliUid() { this->userAliUid_ = nullptr;};
    inline string userAliUid() const { DARABONBA_PTR_GET_DEFAULT(userAliUid_, "") };
    inline ListServiceSharedAccountsResponseBodyShareAccount& setUserAliUid(string userAliUid) { DARABONBA_PTR_SET_VALUE(userAliUid_, userAliUid) };


  protected:
    // The time when the service was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Service logo.
    std::shared_ptr<string> logo_ = nullptr;
    // The name of the service instance. The value must meet the following requirements:
    // 
    // *   The name cannot exceed 64 characters in length.
    // *   It can contain digits, letters, hyphens (-), and underscores (_). It must start with a digit or a letter.
    std::shared_ptr<string> name_ = nullptr;
    // The permissions on the service. Valid values:
    // 
    // *   Deployable: Permissions to deploy the service.
    // *   Accessible: Permissions to access the service.
    std::shared_ptr<string> permission_ = nullptr;
    // The service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The time when the service was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The user aliUid.
    std::shared_ptr<string> userAliUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
