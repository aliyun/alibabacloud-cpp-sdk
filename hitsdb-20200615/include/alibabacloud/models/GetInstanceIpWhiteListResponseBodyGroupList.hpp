// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEIPWHITELISTRESPONSEBODYGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEIPWHITELISTRESPONSEBODYGROUPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetInstanceIpWhiteListResponseBodyGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceIpWhiteListResponseBodyGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(SecurityIpList, securityIpList_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceIpWhiteListResponseBodyGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(SecurityIpList, securityIpList_);
    };
    GetInstanceIpWhiteListResponseBodyGroupList() = default ;
    GetInstanceIpWhiteListResponseBodyGroupList(const GetInstanceIpWhiteListResponseBodyGroupList &) = default ;
    GetInstanceIpWhiteListResponseBodyGroupList(GetInstanceIpWhiteListResponseBodyGroupList &&) = default ;
    GetInstanceIpWhiteListResponseBodyGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceIpWhiteListResponseBodyGroupList() = default ;
    GetInstanceIpWhiteListResponseBodyGroupList& operator=(const GetInstanceIpWhiteListResponseBodyGroupList &) = default ;
    GetInstanceIpWhiteListResponseBodyGroupList& operator=(GetInstanceIpWhiteListResponseBodyGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && return this->securityIpList_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetInstanceIpWhiteListResponseBodyGroupList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // securityIpList Field Functions 
    bool hasSecurityIpList() const { return this->securityIpList_ != nullptr;};
    void deleteSecurityIpList() { this->securityIpList_ = nullptr;};
    inline string securityIpList() const { DARABONBA_PTR_GET_DEFAULT(securityIpList_, "") };
    inline GetInstanceIpWhiteListResponseBodyGroupList& setSecurityIpList(string securityIpList) { DARABONBA_PTR_SET_VALUE(securityIpList_, securityIpList) };


  protected:
    // The name of the IP address whitelist.
    std::shared_ptr<string> groupName_ = nullptr;
    // The IP addresses in the whitelist.
    std::shared_ptr<string> securityIpList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
