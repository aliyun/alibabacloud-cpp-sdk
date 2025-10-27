// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCESECURITYGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCESECURITYGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLindormV2InstanceSecurityGroupsResponseBodySgList.hpp>
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
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->instanceId_ == nullptr && return this->requestId_ == nullptr && return this->sgList_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetLindormV2InstanceSecurityGroupsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetLindormV2InstanceSecurityGroupsResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLindormV2InstanceSecurityGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sgList Field Functions 
    bool hasSgList() const { return this->sgList_ != nullptr;};
    void deleteSgList() { this->sgList_ = nullptr;};
    inline const vector<GetLindormV2InstanceSecurityGroupsResponseBodySgList> & sgList() const { DARABONBA_PTR_GET_CONST(sgList_, vector<GetLindormV2InstanceSecurityGroupsResponseBodySgList>) };
    inline vector<GetLindormV2InstanceSecurityGroupsResponseBodySgList> sgList() { DARABONBA_PTR_GET(sgList_, vector<GetLindormV2InstanceSecurityGroupsResponseBodySgList>) };
    inline GetLindormV2InstanceSecurityGroupsResponseBody& setSgList(const vector<GetLindormV2InstanceSecurityGroupsResponseBodySgList> & sgList) { DARABONBA_PTR_SET_VALUE(sgList_, sgList) };
    inline GetLindormV2InstanceSecurityGroupsResponseBody& setSgList(vector<GetLindormV2InstanceSecurityGroupsResponseBodySgList> && sgList) { DARABONBA_PTR_SET_RVALUE(sgList_, sgList) };


  protected:
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetLindormV2InstanceSecurityGroupsResponseBodySgList>> sgList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
