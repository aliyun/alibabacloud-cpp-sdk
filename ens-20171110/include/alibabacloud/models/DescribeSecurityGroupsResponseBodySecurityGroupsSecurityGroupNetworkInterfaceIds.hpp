// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPSRESPONSEBODYSECURITYGROUPSSECURITYGROUPNETWORKINTERFACEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPSRESPONSEBODYSECURITYGROUPSSECURITYGROUPNETWORKINTERFACEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
    };
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds() = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds(const DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds &) = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds(DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds &&) = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds() = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds& operator=(const DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds &) = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds& operator=(DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkInterfaceId_ == nullptr; };
    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline const vector<string> & networkInterfaceId() const { DARABONBA_PTR_GET_CONST(networkInterfaceId_, vector<string>) };
    inline vector<string> networkInterfaceId() { DARABONBA_PTR_GET(networkInterfaceId_, vector<string>) };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds& setNetworkInterfaceId(const vector<string> & networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds& setNetworkInterfaceId(vector<string> && networkInterfaceId) { DARABONBA_PTR_SET_RVALUE(networkInterfaceId_, networkInterfaceId) };


  protected:
    std::shared_ptr<vector<string>> networkInterfaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
