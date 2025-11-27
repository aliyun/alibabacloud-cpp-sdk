// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALLOWEDIPLISTRESPONSEBODYALLOWEDLISTVPCLIST_HPP_
#define ALIBABACLOUD_MODELS_GETALLOWEDIPLISTRESPONSEBODYALLOWEDLISTVPCLIST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetAllowedIpListResponseBodyAllowedListVpcList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAllowedIpListResponseBodyAllowedListVpcList& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedIpGroup, allowedIpGroup_);
      DARABONBA_PTR_TO_JSON(AllowedIpList, allowedIpList_);
      DARABONBA_PTR_TO_JSON(BlackIPList, blackIPList_);
      DARABONBA_PTR_TO_JSON(BlackIPMap, blackIPMap_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(UserDefinedSharedSecurityGroup, userDefinedSharedSecurityGroup_);
    };
    friend void from_json(const Darabonba::Json& j, GetAllowedIpListResponseBodyAllowedListVpcList& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedIpGroup, allowedIpGroup_);
      DARABONBA_PTR_FROM_JSON(AllowedIpList, allowedIpList_);
      DARABONBA_PTR_FROM_JSON(BlackIPList, blackIPList_);
      DARABONBA_PTR_FROM_JSON(BlackIPMap, blackIPMap_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(UserDefinedSharedSecurityGroup, userDefinedSharedSecurityGroup_);
    };
    GetAllowedIpListResponseBodyAllowedListVpcList() = default ;
    GetAllowedIpListResponseBodyAllowedListVpcList(const GetAllowedIpListResponseBodyAllowedListVpcList &) = default ;
    GetAllowedIpListResponseBodyAllowedListVpcList(GetAllowedIpListResponseBodyAllowedListVpcList &&) = default ;
    GetAllowedIpListResponseBodyAllowedListVpcList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAllowedIpListResponseBodyAllowedListVpcList() = default ;
    GetAllowedIpListResponseBodyAllowedListVpcList& operator=(const GetAllowedIpListResponseBodyAllowedListVpcList &) = default ;
    GetAllowedIpListResponseBodyAllowedListVpcList& operator=(GetAllowedIpListResponseBodyAllowedListVpcList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedIpGroup_ == nullptr
        && return this->allowedIpList_ == nullptr && return this->blackIPList_ == nullptr && return this->blackIPMap_ == nullptr && return this->portRange_ == nullptr && return this->securityGroupId_ == nullptr
        && return this->userDefinedSharedSecurityGroup_ == nullptr; };
    // allowedIpGroup Field Functions 
    bool hasAllowedIpGroup() const { return this->allowedIpGroup_ != nullptr;};
    void deleteAllowedIpGroup() { this->allowedIpGroup_ = nullptr;};
    inline const map<string, string> & allowedIpGroup() const { DARABONBA_PTR_GET_CONST(allowedIpGroup_, map<string, string>) };
    inline map<string, string> allowedIpGroup() { DARABONBA_PTR_GET(allowedIpGroup_, map<string, string>) };
    inline GetAllowedIpListResponseBodyAllowedListVpcList& setAllowedIpGroup(const map<string, string> & allowedIpGroup) { DARABONBA_PTR_SET_VALUE(allowedIpGroup_, allowedIpGroup) };
    inline GetAllowedIpListResponseBodyAllowedListVpcList& setAllowedIpGroup(map<string, string> && allowedIpGroup) { DARABONBA_PTR_SET_RVALUE(allowedIpGroup_, allowedIpGroup) };


    // allowedIpList Field Functions 
    bool hasAllowedIpList() const { return this->allowedIpList_ != nullptr;};
    void deleteAllowedIpList() { this->allowedIpList_ = nullptr;};
    inline const vector<string> & allowedIpList() const { DARABONBA_PTR_GET_CONST(allowedIpList_, vector<string>) };
    inline vector<string> allowedIpList() { DARABONBA_PTR_GET(allowedIpList_, vector<string>) };
    inline GetAllowedIpListResponseBodyAllowedListVpcList& setAllowedIpList(const vector<string> & allowedIpList) { DARABONBA_PTR_SET_VALUE(allowedIpList_, allowedIpList) };
    inline GetAllowedIpListResponseBodyAllowedListVpcList& setAllowedIpList(vector<string> && allowedIpList) { DARABONBA_PTR_SET_RVALUE(allowedIpList_, allowedIpList) };


    // blackIPList Field Functions 
    bool hasBlackIPList() const { return this->blackIPList_ != nullptr;};
    void deleteBlackIPList() { this->blackIPList_ = nullptr;};
    inline const vector<string> & blackIPList() const { DARABONBA_PTR_GET_CONST(blackIPList_, vector<string>) };
    inline vector<string> blackIPList() { DARABONBA_PTR_GET(blackIPList_, vector<string>) };
    inline GetAllowedIpListResponseBodyAllowedListVpcList& setBlackIPList(const vector<string> & blackIPList) { DARABONBA_PTR_SET_VALUE(blackIPList_, blackIPList) };
    inline GetAllowedIpListResponseBodyAllowedListVpcList& setBlackIPList(vector<string> && blackIPList) { DARABONBA_PTR_SET_RVALUE(blackIPList_, blackIPList) };


    // blackIPMap Field Functions 
    bool hasBlackIPMap() const { return this->blackIPMap_ != nullptr;};
    void deleteBlackIPMap() { this->blackIPMap_ = nullptr;};
    inline const map<string, string> & blackIPMap() const { DARABONBA_PTR_GET_CONST(blackIPMap_, map<string, string>) };
    inline map<string, string> blackIPMap() { DARABONBA_PTR_GET(blackIPMap_, map<string, string>) };
    inline GetAllowedIpListResponseBodyAllowedListVpcList& setBlackIPMap(const map<string, string> & blackIPMap) { DARABONBA_PTR_SET_VALUE(blackIPMap_, blackIPMap) };
    inline GetAllowedIpListResponseBodyAllowedListVpcList& setBlackIPMap(map<string, string> && blackIPMap) { DARABONBA_PTR_SET_RVALUE(blackIPMap_, blackIPMap) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline GetAllowedIpListResponseBodyAllowedListVpcList& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GetAllowedIpListResponseBodyAllowedListVpcList& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // userDefinedSharedSecurityGroup Field Functions 
    bool hasUserDefinedSharedSecurityGroup() const { return this->userDefinedSharedSecurityGroup_ != nullptr;};
    void deleteUserDefinedSharedSecurityGroup() { this->userDefinedSharedSecurityGroup_ = nullptr;};
    inline bool userDefinedSharedSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(userDefinedSharedSecurityGroup_, false) };
    inline GetAllowedIpListResponseBodyAllowedListVpcList& setUserDefinedSharedSecurityGroup(bool userDefinedSharedSecurityGroup) { DARABONBA_PTR_SET_VALUE(userDefinedSharedSecurityGroup_, userDefinedSharedSecurityGroup) };


  protected:
    // The group to which the IP address whitelist belongs.
    std::shared_ptr<map<string, string>> allowedIpGroup_ = nullptr;
    // The information about the IP address whitelist.
    std::shared_ptr<vector<string>> allowedIpList_ = nullptr;
    std::shared_ptr<vector<string>> blackIPList_ = nullptr;
    std::shared_ptr<map<string, string>> blackIPMap_ = nullptr;
    // The port range. Valid value:
    // 
    // **9092/9092**.
    std::shared_ptr<string> portRange_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<bool> userDefinedSharedSecurityGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
