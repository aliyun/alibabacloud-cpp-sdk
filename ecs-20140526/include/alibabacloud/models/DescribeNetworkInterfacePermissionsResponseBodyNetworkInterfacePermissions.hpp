// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEPERMISSIONSRESPONSEBODYNETWORKINTERFACEPERMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEPERMISSIONSRESPONSEBODYNETWORKINTERFACEPERMISSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissionsNetworkInterfacePermission.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissions& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfacePermission, networkInterfacePermission_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissions& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfacePermission, networkInterfacePermission_);
    };
    DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissions() = default ;
    DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissions(const DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissions &) = default ;
    DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissions(DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissions &&) = default ;
    DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissions() = default ;
    DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissions& operator=(const DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissions &) = default ;
    DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissions& operator=(DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkInterfacePermission_ != nullptr; };
    // networkInterfacePermission Field Functions 
    bool hasNetworkInterfacePermission() const { return this->networkInterfacePermission_ != nullptr;};
    void deleteNetworkInterfacePermission() { this->networkInterfacePermission_ = nullptr;};
    inline const vector<Models::DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissionsNetworkInterfacePermission> & networkInterfacePermission() const { DARABONBA_PTR_GET_CONST(networkInterfacePermission_, vector<Models::DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissionsNetworkInterfacePermission>) };
    inline vector<Models::DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissionsNetworkInterfacePermission> networkInterfacePermission() { DARABONBA_PTR_GET(networkInterfacePermission_, vector<Models::DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissionsNetworkInterfacePermission>) };
    inline DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissions& setNetworkInterfacePermission(const vector<Models::DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissionsNetworkInterfacePermission> & networkInterfacePermission) { DARABONBA_PTR_SET_VALUE(networkInterfacePermission_, networkInterfacePermission) };
    inline DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissions& setNetworkInterfacePermission(vector<Models::DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissionsNetworkInterfacePermission> && networkInterfacePermission) { DARABONBA_PTR_SET_RVALUE(networkInterfacePermission_, networkInterfacePermission) };


  protected:
    std::shared_ptr<vector<Models::DescribeNetworkInterfacePermissionsResponseBodyNetworkInterfacePermissionsNetworkInterfacePermission>> networkInterfacePermission_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
