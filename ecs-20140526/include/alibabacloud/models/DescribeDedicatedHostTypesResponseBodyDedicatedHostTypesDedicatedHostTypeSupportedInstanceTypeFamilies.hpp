// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTTYPESRESPONSEBODYDEDICATEDHOSTTYPESDEDICATEDHOSTTYPESUPPORTEDINSTANCETYPEFAMILIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTTYPESRESPONSEBODYDEDICATEDHOSTTYPESDEDICATEDHOSTTYPESUPPORTEDINSTANCETYPEFAMILIES_HPP_
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
  class DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedInstanceTypeFamily, supportedInstanceTypeFamily_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedInstanceTypeFamily, supportedInstanceTypeFamily_);
    };
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies() = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies(const DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies &) = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies(DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies &&) = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies() = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies& operator=(const DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies &) = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies& operator=(DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->supportedInstanceTypeFamily_ == nullptr; };
    // supportedInstanceTypeFamily Field Functions 
    bool hasSupportedInstanceTypeFamily() const { return this->supportedInstanceTypeFamily_ != nullptr;};
    void deleteSupportedInstanceTypeFamily() { this->supportedInstanceTypeFamily_ = nullptr;};
    inline const vector<string> & supportedInstanceTypeFamily() const { DARABONBA_PTR_GET_CONST(supportedInstanceTypeFamily_, vector<string>) };
    inline vector<string> supportedInstanceTypeFamily() { DARABONBA_PTR_GET(supportedInstanceTypeFamily_, vector<string>) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies& setSupportedInstanceTypeFamily(const vector<string> & supportedInstanceTypeFamily) { DARABONBA_PTR_SET_VALUE(supportedInstanceTypeFamily_, supportedInstanceTypeFamily) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies& setSupportedInstanceTypeFamily(vector<string> && supportedInstanceTypeFamily) { DARABONBA_PTR_SET_RVALUE(supportedInstanceTypeFamily_, supportedInstanceTypeFamily) };


  protected:
    std::shared_ptr<vector<string>> supportedInstanceTypeFamily_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
