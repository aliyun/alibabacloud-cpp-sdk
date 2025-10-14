// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACESRESPONSEBODYNETWORKINTERFACESETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACESRESPONSEBODYNETWORKINTERFACESETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfaceSet, networkInterfaceSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceSet, networkInterfaceSet_);
    };
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets() = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets(const DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets &) = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets(DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets &&) = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets() = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets& operator=(const DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets &) = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets& operator=(DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkInterfaceSet_ == nullptr; };
    // networkInterfaceSet Field Functions 
    bool hasNetworkInterfaceSet() const { return this->networkInterfaceSet_ != nullptr;};
    void deleteNetworkInterfaceSet() { this->networkInterfaceSet_ = nullptr;};
    inline const vector<Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet> & networkInterfaceSet() const { DARABONBA_PTR_GET_CONST(networkInterfaceSet_, vector<Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet>) };
    inline vector<Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet> networkInterfaceSet() { DARABONBA_PTR_GET(networkInterfaceSet_, vector<Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet>) };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets& setNetworkInterfaceSet(const vector<Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet> & networkInterfaceSet) { DARABONBA_PTR_SET_VALUE(networkInterfaceSet_, networkInterfaceSet) };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets& setNetworkInterfaceSet(vector<Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet> && networkInterfaceSet) { DARABONBA_PTR_SET_RVALUE(networkInterfaceSet_, networkInterfaceSet) };


  protected:
    std::shared_ptr<vector<Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet>> networkInterfaceSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
