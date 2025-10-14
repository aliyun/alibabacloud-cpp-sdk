// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYIPSRESPONSEBODYDATAGROUPITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYIPSRESPONSEBODYDATAGROUPITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeSecurityIpsResponseBodyDataGroupItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityIpsResponseBodyDataGroupItems& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityIpsResponseBodyDataGroupItems& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
    };
    DescribeSecurityIpsResponseBodyDataGroupItems() = default ;
    DescribeSecurityIpsResponseBodyDataGroupItems(const DescribeSecurityIpsResponseBodyDataGroupItems &) = default ;
    DescribeSecurityIpsResponseBodyDataGroupItems(DescribeSecurityIpsResponseBodyDataGroupItems &&) = default ;
    DescribeSecurityIpsResponseBodyDataGroupItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityIpsResponseBodyDataGroupItems() = default ;
    DescribeSecurityIpsResponseBodyDataGroupItems& operator=(const DescribeSecurityIpsResponseBodyDataGroupItems &) = default ;
    DescribeSecurityIpsResponseBodyDataGroupItems& operator=(DescribeSecurityIpsResponseBodyDataGroupItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && return this->securityIPList_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeSecurityIpsResponseBodyDataGroupItems& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline DescribeSecurityIpsResponseBodyDataGroupItems& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


  protected:
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> securityIPList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
