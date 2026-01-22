// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCESECURITYGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCESECURITYGROUPSRESPONSEBODY_HPP_
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
  class GetLindormV2InstanceSecurityGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormV2InstanceSecurityGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SgList, sgList_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormV2InstanceSecurityGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SgList, sgList_);
    };
    GetLindormV2InstanceSecurityGroupsResponseBody() = default ;
    GetLindormV2InstanceSecurityGroupsResponseBody(const GetLindormV2InstanceSecurityGroupsResponseBody &) = default ;
    GetLindormV2InstanceSecurityGroupsResponseBody(GetLindormV2InstanceSecurityGroupsResponseBody &&) = default ;
    GetLindormV2InstanceSecurityGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormV2InstanceSecurityGroupsResponseBody() = default ;
    GetLindormV2InstanceSecurityGroupsResponseBody& operator=(const GetLindormV2InstanceSecurityGroupsResponseBody &) = default ;
    GetLindormV2InstanceSecurityGroupsResponseBody& operator=(GetLindormV2InstanceSecurityGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SgList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SgList& obj) { 
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(IpList, ipList_);
        DARABONBA_PTR_TO_JSON(IsAvailable, isAvailable_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, SgList& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(IpList, ipList_);
        DARABONBA_PTR_FROM_JSON(IsAvailable, isAvailable_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      };
      SgList() = default ;
      SgList(const SgList &) = default ;
      SgList(SgList &&) = default ;
      SgList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SgList() = default ;
      SgList& operator=(const SgList &) = default ;
      SgList& operator=(SgList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtModified_ == nullptr
        && this->ipList_ == nullptr && this->isAvailable_ == nullptr && this->securityGroupId_ == nullptr; };
      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline SgList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // ipList Field Functions 
      bool hasIpList() const { return this->ipList_ != nullptr;};
      void deleteIpList() { this->ipList_ = nullptr;};
      inline string getIpList() const { DARABONBA_PTR_GET_DEFAULT(ipList_, "") };
      inline SgList& setIpList(string ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };


      // isAvailable Field Functions 
      bool hasIsAvailable() const { return this->isAvailable_ != nullptr;};
      void deleteIsAvailable() { this->isAvailable_ = nullptr;};
      inline bool getIsAvailable() const { DARABONBA_PTR_GET_DEFAULT(isAvailable_, false) };
      inline SgList& setIsAvailable(bool isAvailable) { DARABONBA_PTR_SET_VALUE(isAvailable_, isAvailable) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline SgList& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    protected:
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> ipList_ {};
      shared_ptr<bool> isAvailable_ {};
      shared_ptr<string> securityGroupId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->instanceId_ == nullptr && this->requestId_ == nullptr && this->sgList_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetLindormV2InstanceSecurityGroupsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetLindormV2InstanceSecurityGroupsResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLindormV2InstanceSecurityGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sgList Field Functions 
    bool hasSgList() const { return this->sgList_ != nullptr;};
    void deleteSgList() { this->sgList_ = nullptr;};
    inline const vector<GetLindormV2InstanceSecurityGroupsResponseBody::SgList> & getSgList() const { DARABONBA_PTR_GET_CONST(sgList_, vector<GetLindormV2InstanceSecurityGroupsResponseBody::SgList>) };
    inline vector<GetLindormV2InstanceSecurityGroupsResponseBody::SgList> getSgList() { DARABONBA_PTR_GET(sgList_, vector<GetLindormV2InstanceSecurityGroupsResponseBody::SgList>) };
    inline GetLindormV2InstanceSecurityGroupsResponseBody& setSgList(const vector<GetLindormV2InstanceSecurityGroupsResponseBody::SgList> & sgList) { DARABONBA_PTR_SET_VALUE(sgList_, sgList) };
    inline GetLindormV2InstanceSecurityGroupsResponseBody& setSgList(vector<GetLindormV2InstanceSecurityGroupsResponseBody::SgList> && sgList) { DARABONBA_PTR_SET_RVALUE(sgList_, sgList) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetLindormV2InstanceSecurityGroupsResponseBody::SgList>> sgList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
