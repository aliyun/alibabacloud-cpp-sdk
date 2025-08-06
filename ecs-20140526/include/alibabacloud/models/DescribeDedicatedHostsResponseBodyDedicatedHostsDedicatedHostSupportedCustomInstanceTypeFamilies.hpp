// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOSTSUPPORTEDCUSTOMINSTANCETYPEFAMILIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOSTSUPPORTEDCUSTOMINSTANCETYPEFAMILIES_HPP_
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
  class DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedCustomInstanceTypeFamily, supportedCustomInstanceTypeFamily_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedCustomInstanceTypeFamily, supportedCustomInstanceTypeFamily_);
    };
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies &&) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies& operator=(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies& operator=(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportedCustomInstanceTypeFamily_ != nullptr; };
    // supportedCustomInstanceTypeFamily Field Functions 
    bool hasSupportedCustomInstanceTypeFamily() const { return this->supportedCustomInstanceTypeFamily_ != nullptr;};
    void deleteSupportedCustomInstanceTypeFamily() { this->supportedCustomInstanceTypeFamily_ = nullptr;};
    inline const vector<string> & supportedCustomInstanceTypeFamily() const { DARABONBA_PTR_GET_CONST(supportedCustomInstanceTypeFamily_, vector<string>) };
    inline vector<string> supportedCustomInstanceTypeFamily() { DARABONBA_PTR_GET(supportedCustomInstanceTypeFamily_, vector<string>) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies& setSupportedCustomInstanceTypeFamily(const vector<string> & supportedCustomInstanceTypeFamily) { DARABONBA_PTR_SET_VALUE(supportedCustomInstanceTypeFamily_, supportedCustomInstanceTypeFamily) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies& setSupportedCustomInstanceTypeFamily(vector<string> && supportedCustomInstanceTypeFamily) { DARABONBA_PTR_SET_RVALUE(supportedCustomInstanceTypeFamily_, supportedCustomInstanceTypeFamily) };


  protected:
    std::shared_ptr<vector<string>> supportedCustomInstanceTypeFamily_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
