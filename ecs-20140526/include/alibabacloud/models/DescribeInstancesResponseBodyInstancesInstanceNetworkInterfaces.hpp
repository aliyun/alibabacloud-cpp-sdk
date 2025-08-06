// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCENETWORKINTERFACES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCENETWORKINTERFACES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterface, networkInterface_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterface, networkInterface_);
    };
    DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces() = default ;
    DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces(const DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces(DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces() = default ;
    DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces& operator=(const DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces& operator=(DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkInterface_ != nullptr; };
    // networkInterface Field Functions 
    bool hasNetworkInterface() const { return this->networkInterface_ != nullptr;};
    void deleteNetworkInterface() { this->networkInterface_ = nullptr;};
    inline const vector<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface> & networkInterface() const { DARABONBA_PTR_GET_CONST(networkInterface_, vector<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface>) };
    inline vector<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface> networkInterface() { DARABONBA_PTR_GET(networkInterface_, vector<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface>) };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces& setNetworkInterface(const vector<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface> & networkInterface) { DARABONBA_PTR_SET_VALUE(networkInterface_, networkInterface) };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces& setNetworkInterface(vector<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface> && networkInterface) { DARABONBA_PTR_SET_RVALUE(networkInterface_, networkInterface) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface>> networkInterface_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
