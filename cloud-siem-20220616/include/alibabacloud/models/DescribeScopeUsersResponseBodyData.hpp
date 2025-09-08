// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCOPEUSERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCOPEUSERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeScopeUsersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScopeUsersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScopeUsersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DescribeScopeUsersResponseBodyData() = default ;
    DescribeScopeUsersResponseBodyData(const DescribeScopeUsersResponseBodyData &) = default ;
    DescribeScopeUsersResponseBodyData(DescribeScopeUsersResponseBodyData &&) = default ;
    DescribeScopeUsersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScopeUsersResponseBodyData() = default ;
    DescribeScopeUsersResponseBodyData& operator=(const DescribeScopeUsersResponseBodyData &) = default ;
    DescribeScopeUsersResponseBodyData& operator=(DescribeScopeUsersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->cloudCode_ != nullptr && this->domains_ != nullptr && this->instanceId_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeScopeUsersResponseBodyData& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline DescribeScopeUsersResponseBodyData& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<string> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
    inline vector<string> domains() { DARABONBA_PTR_GET(domains_, vector<string>) };
    inline DescribeScopeUsersResponseBodyData& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeScopeUsersResponseBodyData& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeScopeUsersResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeScopeUsersResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeScopeUsersResponseBodyData& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The ID of the security information and event management (SIEM) user.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // 云code。  取值：
    // - qcloud：腾讯云
    // - hcloud：华为云
    std::shared_ptr<string> cloudCode_ = nullptr;
    // An array consisting of the domain names that are protected by the WAF instance.
    std::shared_ptr<vector<string>> domains_ = nullptr;
    // The ID of the Web Application Firewall (WAF) instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 多云用户ID。
    std::shared_ptr<string> userId_ = nullptr;
    // The username.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
