// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCENETWORKINTERFACES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCENETWORKINTERFACES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfaces, networkInterfaces_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfaces, networkInterfaces_);
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
    virtual bool empty() const override { this->networkInterfaces_ != nullptr; };
    // networkInterfaces Field Functions 
    bool hasNetworkInterfaces() const { return this->networkInterfaces_ != nullptr;};
    void deleteNetworkInterfaces() { this->networkInterfaces_ = nullptr;};
    inline const vector<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaces> & networkInterfaces() const { DARABONBA_PTR_GET_CONST(networkInterfaces_, vector<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaces>) };
    inline vector<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaces> networkInterfaces() { DARABONBA_PTR_GET(networkInterfaces_, vector<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaces>) };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces& setNetworkInterfaces(const vector<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaces> & networkInterfaces) { DARABONBA_PTR_SET_VALUE(networkInterfaces_, networkInterfaces) };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces& setNetworkInterfaces(vector<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaces> && networkInterfaces) { DARABONBA_PTR_SET_RVALUE(networkInterfaces_, networkInterfaces) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaces>> networkInterfaces_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
