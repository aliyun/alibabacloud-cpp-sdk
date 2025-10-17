// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESRESPONSEBODYEIPADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESRESPONSEBODYEIPADDRESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEipAddressesResponseBodyEipAddressesEipAddress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeEipAddressesResponseBodyEipAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipAddressesResponseBodyEipAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipAddressesResponseBodyEipAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
    };
    DescribeEipAddressesResponseBodyEipAddresses() = default ;
    DescribeEipAddressesResponseBodyEipAddresses(const DescribeEipAddressesResponseBodyEipAddresses &) = default ;
    DescribeEipAddressesResponseBodyEipAddresses(DescribeEipAddressesResponseBodyEipAddresses &&) = default ;
    DescribeEipAddressesResponseBodyEipAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipAddressesResponseBodyEipAddresses() = default ;
    DescribeEipAddressesResponseBodyEipAddresses& operator=(const DescribeEipAddressesResponseBodyEipAddresses &) = default ;
    DescribeEipAddressesResponseBodyEipAddresses& operator=(DescribeEipAddressesResponseBodyEipAddresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipAddress_ == nullptr; };
    // eipAddress Field Functions 
    bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
    void deleteEipAddress() { this->eipAddress_ = nullptr;};
    inline const vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddress> & eipAddress() const { DARABONBA_PTR_GET_CONST(eipAddress_, vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddress>) };
    inline vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddress> eipAddress() { DARABONBA_PTR_GET(eipAddress_, vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddress>) };
    inline DescribeEipAddressesResponseBodyEipAddresses& setEipAddress(const vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddress> & eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };
    inline DescribeEipAddressesResponseBodyEipAddresses& setEipAddress(vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddress> && eipAddress) { DARABONBA_PTR_SET_RVALUE(eipAddress_, eipAddress) };


  protected:
    std::shared_ptr<vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddress>> eipAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
