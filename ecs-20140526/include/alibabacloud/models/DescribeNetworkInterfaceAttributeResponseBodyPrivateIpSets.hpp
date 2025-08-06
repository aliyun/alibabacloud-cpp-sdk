// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYPRIVATEIPSETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYPRIVATEIPSETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets& obj) { 
      DARABONBA_PTR_TO_JSON(PrivateIpSet, privateIpSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivateIpSet, privateIpSet_);
    };
    DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets(const DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets(DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets &&) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets& operator=(const DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets& operator=(DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->privateIpSet_ != nullptr; };
    // privateIpSet Field Functions 
    bool hasPrivateIpSet() const { return this->privateIpSet_ != nullptr;};
    void deletePrivateIpSet() { this->privateIpSet_ = nullptr;};
    inline const vector<Models::DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet> & privateIpSet() const { DARABONBA_PTR_GET_CONST(privateIpSet_, vector<Models::DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet>) };
    inline vector<Models::DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet> privateIpSet() { DARABONBA_PTR_GET(privateIpSet_, vector<Models::DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet>) };
    inline DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets& setPrivateIpSet(const vector<Models::DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet> & privateIpSet) { DARABONBA_PTR_SET_VALUE(privateIpSet_, privateIpSet) };
    inline DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets& setPrivateIpSet(vector<Models::DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet> && privateIpSet) { DARABONBA_PTR_SET_RVALUE(privateIpSet_, privateIpSet) };


  protected:
    std::shared_ptr<vector<Models::DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSetsPrivateIpSet>> privateIpSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
