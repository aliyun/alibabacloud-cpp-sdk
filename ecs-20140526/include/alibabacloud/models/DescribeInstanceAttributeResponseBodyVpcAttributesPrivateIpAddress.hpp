// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODYVPCATTRIBUTESPRIVATEIPADDRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODYVPCATTRIBUTESPRIVATEIPADDRESS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress& obj) { 
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress& obj) { 
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
    };
    DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress() = default ;
    DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress(const DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress &) = default ;
    DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress(DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress &&) = default ;
    DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress() = default ;
    DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress& operator=(const DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress &) = default ;
    DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress& operator=(DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipAddress_ != nullptr; };
    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline const vector<string> & ipAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<string>) };
    inline vector<string> ipAddress() { DARABONBA_PTR_GET(ipAddress_, vector<string>) };
    inline DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress& setIpAddress(const vector<string> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
    inline DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress& setIpAddress(vector<string> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


  protected:
    std::shared_ptr<vector<string>> ipAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
