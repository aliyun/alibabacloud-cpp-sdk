// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEDEDICATEDHOSTGENERATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEDEDICATEDHOSTGENERATIONS_HPP_
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
  class DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostGeneration, dedicatedHostGeneration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostGeneration, dedicatedHostGeneration_);
    };
    DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations() = default ;
    DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations(const DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations &) = default ;
    DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations(DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations &&) = default ;
    DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations() = default ;
    DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations& operator=(const DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations &) = default ;
    DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations& operator=(DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedHostGeneration_ == nullptr; };
    // dedicatedHostGeneration Field Functions 
    bool hasDedicatedHostGeneration() const { return this->dedicatedHostGeneration_ != nullptr;};
    void deleteDedicatedHostGeneration() { this->dedicatedHostGeneration_ = nullptr;};
    inline const vector<string> & dedicatedHostGeneration() const { DARABONBA_PTR_GET_CONST(dedicatedHostGeneration_, vector<string>) };
    inline vector<string> dedicatedHostGeneration() { DARABONBA_PTR_GET(dedicatedHostGeneration_, vector<string>) };
    inline DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations& setDedicatedHostGeneration(const vector<string> & dedicatedHostGeneration) { DARABONBA_PTR_SET_VALUE(dedicatedHostGeneration_, dedicatedHostGeneration) };
    inline DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations& setDedicatedHostGeneration(vector<string> && dedicatedHostGeneration) { DARABONBA_PTR_SET_RVALUE(dedicatedHostGeneration_, dedicatedHostGeneration) };


  protected:
    std::shared_ptr<vector<string>> dedicatedHostGeneration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
