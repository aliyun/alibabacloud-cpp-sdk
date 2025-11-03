// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESRESPONSEBODYEIPADDRESSESEIPADDRESSSECURITYPROTECTIONTYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESRESPONSEBODYEIPADDRESSESEIPADDRESSSECURITYPROTECTIONTYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityProtectionType, securityProtectionType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityProtectionType, securityProtectionType_);
    };
    DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes() = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes(const DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes &) = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes(DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes &&) = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes() = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes& operator=(const DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes &) = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes& operator=(DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityProtectionType_ == nullptr; };
    // securityProtectionType Field Functions 
    bool hasSecurityProtectionType() const { return this->securityProtectionType_ != nullptr;};
    void deleteSecurityProtectionType() { this->securityProtectionType_ = nullptr;};
    inline const vector<string> & securityProtectionType() const { DARABONBA_PTR_GET_CONST(securityProtectionType_, vector<string>) };
    inline vector<string> securityProtectionType() { DARABONBA_PTR_GET(securityProtectionType_, vector<string>) };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes& setSecurityProtectionType(const vector<string> & securityProtectionType) { DARABONBA_PTR_SET_VALUE(securityProtectionType_, securityProtectionType) };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddressSecurityProtectionTypes& setSecurityProtectionType(vector<string> && securityProtectionType) { DARABONBA_PTR_SET_RVALUE(securityProtectionType_, securityProtectionType) };


  protected:
    std::shared_ptr<vector<string>> securityProtectionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
