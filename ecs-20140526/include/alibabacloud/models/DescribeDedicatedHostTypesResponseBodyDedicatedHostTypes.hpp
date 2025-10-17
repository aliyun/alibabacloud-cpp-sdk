// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTTYPESRESPONSEBODYDEDICATEDHOSTTYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTTYPESRESPONSEBODYDEDICATEDHOSTTYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostType, dedicatedHostType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostType, dedicatedHostType_);
    };
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes() = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes(const DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes &) = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes(DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes &&) = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes() = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes& operator=(const DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes &) = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes& operator=(DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedHostType_ == nullptr; };
    // dedicatedHostType Field Functions 
    bool hasDedicatedHostType() const { return this->dedicatedHostType_ != nullptr;};
    void deleteDedicatedHostType() { this->dedicatedHostType_ = nullptr;};
    inline const vector<Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType> & dedicatedHostType() const { DARABONBA_PTR_GET_CONST(dedicatedHostType_, vector<Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType>) };
    inline vector<Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType> dedicatedHostType() { DARABONBA_PTR_GET(dedicatedHostType_, vector<Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType>) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes& setDedicatedHostType(const vector<Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType> & dedicatedHostType) { DARABONBA_PTR_SET_VALUE(dedicatedHostType_, dedicatedHostType) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypes& setDedicatedHostType(vector<Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType> && dedicatedHostType) { DARABONBA_PTR_SET_RVALUE(dedicatedHostType_, dedicatedHostType) };


  protected:
    std::shared_ptr<vector<Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType>> dedicatedHostType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
