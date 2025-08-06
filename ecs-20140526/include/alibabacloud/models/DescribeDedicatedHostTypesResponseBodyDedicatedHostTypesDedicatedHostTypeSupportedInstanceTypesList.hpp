// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTTYPESRESPONSEBODYDEDICATEDHOSTTYPESDEDICATEDHOSTTYPESUPPORTEDINSTANCETYPESLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTTYPESRESPONSEBODYDEDICATEDHOSTTYPESDEDICATEDHOSTTYPESUPPORTEDINSTANCETYPESLIST_HPP_
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
  class DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedInstanceTypesList, supportedInstanceTypesList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedInstanceTypesList, supportedInstanceTypesList_);
    };
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList() = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList(const DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList &) = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList(DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList &&) = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList() = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList& operator=(const DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList &) = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList& operator=(DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportedInstanceTypesList_ != nullptr; };
    // supportedInstanceTypesList Field Functions 
    bool hasSupportedInstanceTypesList() const { return this->supportedInstanceTypesList_ != nullptr;};
    void deleteSupportedInstanceTypesList() { this->supportedInstanceTypesList_ = nullptr;};
    inline const vector<string> & supportedInstanceTypesList() const { DARABONBA_PTR_GET_CONST(supportedInstanceTypesList_, vector<string>) };
    inline vector<string> supportedInstanceTypesList() { DARABONBA_PTR_GET(supportedInstanceTypesList_, vector<string>) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList& setSupportedInstanceTypesList(const vector<string> & supportedInstanceTypesList) { DARABONBA_PTR_SET_VALUE(supportedInstanceTypesList_, supportedInstanceTypesList) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList& setSupportedInstanceTypesList(vector<string> && supportedInstanceTypesList) { DARABONBA_PTR_SET_RVALUE(supportedInstanceTypesList_, supportedInstanceTypesList) };


  protected:
    std::shared_ptr<vector<string>> supportedInstanceTypesList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
