// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEIPWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEIPWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetInstanceIpWhiteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceIpWhiteListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(GroupList, groupList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceIpWhiteListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(GroupList, groupList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceIpWhiteListResponseBody() = default ;
    GetInstanceIpWhiteListResponseBody(const GetInstanceIpWhiteListResponseBody &) = default ;
    GetInstanceIpWhiteListResponseBody(GetInstanceIpWhiteListResponseBody &&) = default ;
    GetInstanceIpWhiteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceIpWhiteListResponseBody() = default ;
    GetInstanceIpWhiteListResponseBody& operator=(const GetInstanceIpWhiteListResponseBody &) = default ;
    GetInstanceIpWhiteListResponseBody& operator=(GetInstanceIpWhiteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupList& obj) { 
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(SecurityIpList, securityIpList_);
      };
      friend void from_json(const Darabonba::Json& j, GroupList& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(SecurityIpList, securityIpList_);
      };
      GroupList() = default ;
      GroupList(const GroupList &) = default ;
      GroupList(GroupList &&) = default ;
      GroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupList() = default ;
      GroupList& operator=(const GroupList &) = default ;
      GroupList& operator=(GroupList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupName_ == nullptr
        && this->securityIpList_ == nullptr; };
      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline GroupList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // securityIpList Field Functions 
      bool hasSecurityIpList() const { return this->securityIpList_ != nullptr;};
      void deleteSecurityIpList() { this->securityIpList_ = nullptr;};
      inline string getSecurityIpList() const { DARABONBA_PTR_GET_DEFAULT(securityIpList_, "") };
      inline GroupList& setSecurityIpList(string securityIpList) { DARABONBA_PTR_SET_VALUE(securityIpList_, securityIpList) };


    protected:
      // The name of the IP address whitelist.
      shared_ptr<string> groupName_ {};
      // The IP addresses in the whitelist.
      shared_ptr<string> securityIpList_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->groupList_ == nullptr && this->instanceId_ == nullptr && this->ipList_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetInstanceIpWhiteListResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // groupList Field Functions 
    bool hasGroupList() const { return this->groupList_ != nullptr;};
    void deleteGroupList() { this->groupList_ = nullptr;};
    inline const vector<GetInstanceIpWhiteListResponseBody::GroupList> & getGroupList() const { DARABONBA_PTR_GET_CONST(groupList_, vector<GetInstanceIpWhiteListResponseBody::GroupList>) };
    inline vector<GetInstanceIpWhiteListResponseBody::GroupList> getGroupList() { DARABONBA_PTR_GET(groupList_, vector<GetInstanceIpWhiteListResponseBody::GroupList>) };
    inline GetInstanceIpWhiteListResponseBody& setGroupList(const vector<GetInstanceIpWhiteListResponseBody::GroupList> & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
    inline GetInstanceIpWhiteListResponseBody& setGroupList(vector<GetInstanceIpWhiteListResponseBody::GroupList> && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceIpWhiteListResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline const vector<string> & getIpList() const { DARABONBA_PTR_GET_CONST(ipList_, vector<string>) };
    inline vector<string> getIpList() { DARABONBA_PTR_GET(ipList_, vector<string>) };
    inline GetInstanceIpWhiteListResponseBody& setIpList(const vector<string> & ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };
    inline GetInstanceIpWhiteListResponseBody& setIpList(vector<string> && ipList) { DARABONBA_PTR_SET_RVALUE(ipList_, ipList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceIpWhiteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The details about the IP address whitelists.
    shared_ptr<vector<GetInstanceIpWhiteListResponseBody::GroupList>> groupList_ {};
    // The ID of the Lindorm instance.
    shared_ptr<string> instanceId_ {};
    // The list of IP addresses in the whitelist of the instance.
    shared_ptr<vector<string>> ipList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
