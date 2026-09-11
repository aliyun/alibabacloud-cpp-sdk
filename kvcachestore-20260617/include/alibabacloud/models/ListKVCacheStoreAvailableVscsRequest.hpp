// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKVCACHESTOREAVAILABLEVSCSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKVCACHESTOREAVAILABLEVSCSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kvcachestore20260617
{
namespace Models
{
  class ListKVCacheStoreAvailableVscsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKVCacheStoreAvailableVscsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Arns, arns_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(KvcsId, kvcsId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKVCacheStoreAvailableVscsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Arns, arns_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(KvcsId, kvcsId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListKVCacheStoreAvailableVscsRequest() = default ;
    ListKVCacheStoreAvailableVscsRequest(const ListKVCacheStoreAvailableVscsRequest &) = default ;
    ListKVCacheStoreAvailableVscsRequest(ListKVCacheStoreAvailableVscsRequest &&) = default ;
    ListKVCacheStoreAvailableVscsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKVCacheStoreAvailableVscsRequest() = default ;
    ListKVCacheStoreAvailableVscsRequest& operator=(const ListKVCacheStoreAvailableVscsRequest &) = default ;
    ListKVCacheStoreAvailableVscsRequest& operator=(ListKVCacheStoreAvailableVscsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Arns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Arns& obj) { 
        DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
        DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
        DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      };
      friend void from_json(const Darabonba::Json& j, Arns& obj) { 
        DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
        DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
        DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      };
      Arns() = default ;
      Arns(const Arns &) = default ;
      Arns(Arns &&) = default ;
      Arns(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Arns() = default ;
      Arns& operator=(const Arns &) = default ;
      Arns& operator=(Arns &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assumeRoleFor_ == nullptr
        && this->roleArn_ == nullptr && this->roleType_ == nullptr; };
      // assumeRoleFor Field Functions 
      bool hasAssumeRoleFor() const { return this->assumeRoleFor_ != nullptr;};
      void deleteAssumeRoleFor() { this->assumeRoleFor_ = nullptr;};
      inline string getAssumeRoleFor() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleFor_, "") };
      inline Arns& setAssumeRoleFor(string assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


      // roleArn Field Functions 
      bool hasRoleArn() const { return this->roleArn_ != nullptr;};
      void deleteRoleArn() { this->roleArn_ = nullptr;};
      inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
      inline Arns& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


      // roleType Field Functions 
      bool hasRoleType() const { return this->roleType_ != nullptr;};
      void deleteRoleType() { this->roleType_ = nullptr;};
      inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
      inline Arns& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    protected:
      // The target UID for role assumption.
      // 
      // This parameter is required.
      shared_ptr<string> assumeRoleFor_ {};
      // The Alibaba Cloud Resource Name (ARN) of the RAM role.
      // 
      // This parameter is required.
      shared_ptr<string> roleArn_ {};
      // The role type. Valid values:
      // - service
      // - user
      // 
      // This parameter is required.
      shared_ptr<string> roleType_ {};
    };

    virtual bool empty() const override { return this->arns_ == nullptr
        && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->kvcsId_ == nullptr && this->regionId_ == nullptr; };
    // arns Field Functions 
    bool hasArns() const { return this->arns_ != nullptr;};
    void deleteArns() { this->arns_ = nullptr;};
    inline const vector<ListKVCacheStoreAvailableVscsRequest::Arns> & getArns() const { DARABONBA_PTR_GET_CONST(arns_, vector<ListKVCacheStoreAvailableVscsRequest::Arns>) };
    inline vector<ListKVCacheStoreAvailableVscsRequest::Arns> getArns() { DARABONBA_PTR_GET(arns_, vector<ListKVCacheStoreAvailableVscsRequest::Arns>) };
    inline ListKVCacheStoreAvailableVscsRequest& setArns(const vector<ListKVCacheStoreAvailableVscsRequest::Arns> & arns) { DARABONBA_PTR_SET_VALUE(arns_, arns) };
    inline ListKVCacheStoreAvailableVscsRequest& setArns(vector<ListKVCacheStoreAvailableVscsRequest::Arns> && arns) { DARABONBA_PTR_SET_RVALUE(arns_, arns) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListKVCacheStoreAvailableVscsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListKVCacheStoreAvailableVscsRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // kvcsId Field Functions 
    bool hasKvcsId() const { return this->kvcsId_ != nullptr;};
    void deleteKvcsId() { this->kvcsId_ = nullptr;};
    inline string getKvcsId() const { DARABONBA_PTR_GET_DEFAULT(kvcsId_, "") };
    inline ListKVCacheStoreAvailableVscsRequest& setKvcsId(string kvcsId) { DARABONBA_PTR_SET_VALUE(kvcsId_, kvcsId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListKVCacheStoreAvailableVscsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cross-account authorization role chain, used for cross-account VSC queries in ECS or EFLO scenarios.
    shared_ptr<vector<ListKVCacheStoreAvailableVscsRequest::Arns>> arns_ {};
    // The compute instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The compute instance type. Valid values:
    // - ECS
    // - EFLO
    // 
    // This parameter is required.
    shared_ptr<string> instanceType_ {};
    // The KVCacheStore instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> kvcsId_ {};
    // The region ID, such as cn-hangzhou.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kvcachestore20260617
#endif
