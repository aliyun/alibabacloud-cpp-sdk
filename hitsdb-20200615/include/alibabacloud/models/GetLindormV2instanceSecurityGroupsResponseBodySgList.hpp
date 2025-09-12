// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCESECURITYGROUPSRESPONSEBODYSGLIST_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCESECURITYGROUPSRESPONSEBODYSGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormV2InstanceSecurityGroupsResponseBodySgList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormV2InstanceSecurityGroupsResponseBodySgList& obj) { 
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
      DARABONBA_PTR_TO_JSON(IsAvailable, isAvailable_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormV2InstanceSecurityGroupsResponseBodySgList& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      DARABONBA_PTR_FROM_JSON(IsAvailable, isAvailable_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    GetLindormV2InstanceSecurityGroupsResponseBodySgList() = default ;
    GetLindormV2InstanceSecurityGroupsResponseBodySgList(const GetLindormV2InstanceSecurityGroupsResponseBodySgList &) = default ;
    GetLindormV2InstanceSecurityGroupsResponseBodySgList(GetLindormV2InstanceSecurityGroupsResponseBodySgList &&) = default ;
    GetLindormV2InstanceSecurityGroupsResponseBodySgList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormV2InstanceSecurityGroupsResponseBodySgList() = default ;
    GetLindormV2InstanceSecurityGroupsResponseBodySgList& operator=(const GetLindormV2InstanceSecurityGroupsResponseBodySgList &) = default ;
    GetLindormV2InstanceSecurityGroupsResponseBodySgList& operator=(GetLindormV2InstanceSecurityGroupsResponseBodySgList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gmtModified_ != nullptr
        && this->ipList_ != nullptr && this->isAvailable_ != nullptr && this->securityGroupId_ != nullptr; };
    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetLindormV2InstanceSecurityGroupsResponseBodySgList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline string ipList() const { DARABONBA_PTR_GET_DEFAULT(ipList_, "") };
    inline GetLindormV2InstanceSecurityGroupsResponseBodySgList& setIpList(string ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };


    // isAvailable Field Functions 
    bool hasIsAvailable() const { return this->isAvailable_ != nullptr;};
    void deleteIsAvailable() { this->isAvailable_ = nullptr;};
    inline bool isAvailable() const { DARABONBA_PTR_GET_DEFAULT(isAvailable_, false) };
    inline GetLindormV2InstanceSecurityGroupsResponseBodySgList& setIsAvailable(bool isAvailable) { DARABONBA_PTR_SET_VALUE(isAvailable_, isAvailable) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GetLindormV2InstanceSecurityGroupsResponseBodySgList& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> ipList_ = nullptr;
    std::shared_ptr<bool> isAvailable_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
