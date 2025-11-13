// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYIPLISTRESPONSEBODYGROUPITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYIPLISTRESPONSEBODYGROUPITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeSecurityIPListResponseBodyGroupItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityIPListResponseBodyGroupItems& obj) { 
      DARABONBA_PTR_TO_JSON(AecurityIPType, aecurityIPType_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupTag, groupTag_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(WhitelistNetType, whitelistNetType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityIPListResponseBodyGroupItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AecurityIPType, aecurityIPType_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupTag, groupTag_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(WhitelistNetType, whitelistNetType_);
    };
    DescribeSecurityIPListResponseBodyGroupItems() = default ;
    DescribeSecurityIPListResponseBodyGroupItems(const DescribeSecurityIPListResponseBodyGroupItems &) = default ;
    DescribeSecurityIPListResponseBodyGroupItems(DescribeSecurityIPListResponseBodyGroupItems &&) = default ;
    DescribeSecurityIPListResponseBodyGroupItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityIPListResponseBodyGroupItems() = default ;
    DescribeSecurityIPListResponseBodyGroupItems& operator=(const DescribeSecurityIPListResponseBodyGroupItems &) = default ;
    DescribeSecurityIPListResponseBodyGroupItems& operator=(DescribeSecurityIPListResponseBodyGroupItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aecurityIPType_ == nullptr
        && return this->groupName_ == nullptr && return this->groupTag_ == nullptr && return this->securityIPList_ == nullptr && return this->whitelistNetType_ == nullptr; };
    // aecurityIPType Field Functions 
    bool hasAecurityIPType() const { return this->aecurityIPType_ != nullptr;};
    void deleteAecurityIPType() { this->aecurityIPType_ = nullptr;};
    inline string aecurityIPType() const { DARABONBA_PTR_GET_DEFAULT(aecurityIPType_, "") };
    inline DescribeSecurityIPListResponseBodyGroupItems& setAecurityIPType(string aecurityIPType) { DARABONBA_PTR_SET_VALUE(aecurityIPType_, aecurityIPType) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeSecurityIPListResponseBodyGroupItems& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupTag Field Functions 
    bool hasGroupTag() const { return this->groupTag_ != nullptr;};
    void deleteGroupTag() { this->groupTag_ = nullptr;};
    inline string groupTag() const { DARABONBA_PTR_GET_DEFAULT(groupTag_, "") };
    inline DescribeSecurityIPListResponseBodyGroupItems& setGroupTag(string groupTag) { DARABONBA_PTR_SET_VALUE(groupTag_, groupTag) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline DescribeSecurityIPListResponseBodyGroupItems& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // whitelistNetType Field Functions 
    bool hasWhitelistNetType() const { return this->whitelistNetType_ != nullptr;};
    void deleteWhitelistNetType() { this->whitelistNetType_ = nullptr;};
    inline string whitelistNetType() const { DARABONBA_PTR_GET_DEFAULT(whitelistNetType_, "") };
    inline DescribeSecurityIPListResponseBodyGroupItems& setWhitelistNetType(string whitelistNetType) { DARABONBA_PTR_SET_VALUE(whitelistNetType_, whitelistNetType) };


  protected:
    // The IP address type. Valid values:
    // 
    // *   ipv4
    // *   ipv6 (not supported)
    std::shared_ptr<string> aecurityIPType_ = nullptr;
    // The name of the whitelist.
    std::shared_ptr<string> groupName_ = nullptr;
    // The tag of the whitelist.
    std::shared_ptr<string> groupTag_ = nullptr;
    // The IP addresses in the whitelist. Multiple IP addresses are separated by commas (,).
    std::shared_ptr<string> securityIPList_ = nullptr;
    // The network type of the whitelist.
    std::shared_ptr<string> whitelistNetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
