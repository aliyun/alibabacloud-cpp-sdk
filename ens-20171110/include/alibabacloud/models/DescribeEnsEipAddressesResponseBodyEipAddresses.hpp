// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSEIPADDRESSESRESPONSEBODYEIPADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSEIPADDRESSESRESPONSEBODYEIPADDRESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsEipAddressesResponseBodyEipAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsEipAddressesResponseBodyEipAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsEipAddressesResponseBodyEipAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
    };
    DescribeEnsEipAddressesResponseBodyEipAddresses() = default ;
    DescribeEnsEipAddressesResponseBodyEipAddresses(const DescribeEnsEipAddressesResponseBodyEipAddresses &) = default ;
    DescribeEnsEipAddressesResponseBodyEipAddresses(DescribeEnsEipAddressesResponseBodyEipAddresses &&) = default ;
    DescribeEnsEipAddressesResponseBodyEipAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsEipAddressesResponseBodyEipAddresses() = default ;
    DescribeEnsEipAddressesResponseBodyEipAddresses& operator=(const DescribeEnsEipAddressesResponseBodyEipAddresses &) = default ;
    DescribeEnsEipAddressesResponseBodyEipAddresses& operator=(DescribeEnsEipAddressesResponseBodyEipAddresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipAddress_ == nullptr; };
    // eipAddress Field Functions 
    bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
    void deleteEipAddress() { this->eipAddress_ = nullptr;};
    inline const vector<Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress> & eipAddress() const { DARABONBA_PTR_GET_CONST(eipAddress_, vector<Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress>) };
    inline vector<Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress> eipAddress() { DARABONBA_PTR_GET(eipAddress_, vector<Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress>) };
    inline DescribeEnsEipAddressesResponseBodyEipAddresses& setEipAddress(const vector<Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress> & eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };
    inline DescribeEnsEipAddressesResponseBodyEipAddresses& setEipAddress(vector<Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress> && eipAddress) { DARABONBA_PTR_SET_RVALUE(eipAddress_, eipAddress) };


  protected:
    std::shared_ptr<vector<Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress>> eipAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
