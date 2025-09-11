// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYIPLISTRESPONSEBODYDATAGROUPITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYIPLISTRESPONSEBODYDATAGROUPITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeSecurityIPListResponseBodyDataGroupItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityIPListResponseBodyDataGroupItems& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupTag, groupTag_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(SecurityIPType, securityIPType_);
      DARABONBA_PTR_TO_JSON(WhitelistNetType, whitelistNetType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityIPListResponseBodyDataGroupItems& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupTag, groupTag_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(SecurityIPType, securityIPType_);
      DARABONBA_PTR_FROM_JSON(WhitelistNetType, whitelistNetType_);
    };
    DescribeSecurityIPListResponseBodyDataGroupItems() = default ;
    DescribeSecurityIPListResponseBodyDataGroupItems(const DescribeSecurityIPListResponseBodyDataGroupItems &) = default ;
    DescribeSecurityIPListResponseBodyDataGroupItems(DescribeSecurityIPListResponseBodyDataGroupItems &&) = default ;
    DescribeSecurityIPListResponseBodyDataGroupItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityIPListResponseBodyDataGroupItems() = default ;
    DescribeSecurityIPListResponseBodyDataGroupItems& operator=(const DescribeSecurityIPListResponseBodyDataGroupItems &) = default ;
    DescribeSecurityIPListResponseBodyDataGroupItems& operator=(DescribeSecurityIPListResponseBodyDataGroupItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupName_ != nullptr
        && this->groupTag_ != nullptr && this->securityIPList_ != nullptr && this->securityIPType_ != nullptr && this->whitelistNetType_ != nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeSecurityIPListResponseBodyDataGroupItems& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupTag Field Functions 
    bool hasGroupTag() const { return this->groupTag_ != nullptr;};
    void deleteGroupTag() { this->groupTag_ = nullptr;};
    inline string groupTag() const { DARABONBA_PTR_GET_DEFAULT(groupTag_, "") };
    inline DescribeSecurityIPListResponseBodyDataGroupItems& setGroupTag(string groupTag) { DARABONBA_PTR_SET_VALUE(groupTag_, groupTag) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline DescribeSecurityIPListResponseBodyDataGroupItems& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // securityIPType Field Functions 
    bool hasSecurityIPType() const { return this->securityIPType_ != nullptr;};
    void deleteSecurityIPType() { this->securityIPType_ = nullptr;};
    inline string securityIPType() const { DARABONBA_PTR_GET_DEFAULT(securityIPType_, "") };
    inline DescribeSecurityIPListResponseBodyDataGroupItems& setSecurityIPType(string securityIPType) { DARABONBA_PTR_SET_VALUE(securityIPType_, securityIPType) };


    // whitelistNetType Field Functions 
    bool hasWhitelistNetType() const { return this->whitelistNetType_ != nullptr;};
    void deleteWhitelistNetType() { this->whitelistNetType_ = nullptr;};
    inline string whitelistNetType() const { DARABONBA_PTR_GET_DEFAULT(whitelistNetType_, "") };
    inline DescribeSecurityIPListResponseBodyDataGroupItems& setWhitelistNetType(string whitelistNetType) { DARABONBA_PTR_SET_VALUE(whitelistNetType_, whitelistNetType) };


  protected:
    // The name of the whitelist.
    std::shared_ptr<string> groupName_ = nullptr;
    // The tag of the whitelist.
    std::shared_ptr<string> groupTag_ = nullptr;
    // The IP addresses and CIDR blocks in the whitelist.
    std::shared_ptr<string> securityIPList_ = nullptr;
    // The IP address type.
    std::shared_ptr<string> securityIPType_ = nullptr;
    // The network type of the whitelist.
    std::shared_ptr<string> whitelistNetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
