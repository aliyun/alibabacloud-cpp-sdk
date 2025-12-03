// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEATTRIBUTENETWORKINTERFACEATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEATTRIBUTENETWORKINTERFACEATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfaceAttribute, networkInterfaceAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceAttribute, networkInterfaceAttribute_);
    };
    DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes() = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes(const DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes(DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes() = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes& operator=(const DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes& operator=(DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkInterfaceAttribute_ == nullptr; };
    // networkInterfaceAttribute Field Functions 
    bool hasNetworkInterfaceAttribute() const { return this->networkInterfaceAttribute_ != nullptr;};
    void deleteNetworkInterfaceAttribute() { this->networkInterfaceAttribute_ = nullptr;};
    inline const vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute> & networkInterfaceAttribute() const { DARABONBA_PTR_GET_CONST(networkInterfaceAttribute_, vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute>) };
    inline vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute> networkInterfaceAttribute() { DARABONBA_PTR_GET(networkInterfaceAttribute_, vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute>) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes& setNetworkInterfaceAttribute(const vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute> & networkInterfaceAttribute) { DARABONBA_PTR_SET_VALUE(networkInterfaceAttribute_, networkInterfaceAttribute) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributes& setNetworkInterfaceAttribute(vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute> && networkInterfaceAttribute) { DARABONBA_PTR_SET_RVALUE(networkInterfaceAttribute_, networkInterfaceAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute>> networkInterfaceAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
