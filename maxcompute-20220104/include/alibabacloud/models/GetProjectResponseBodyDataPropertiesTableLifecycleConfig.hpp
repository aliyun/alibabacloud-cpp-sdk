// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATAPROPERTIESTABLELIFECYCLECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATAPROPERTIESTABLELIFECYCLECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm.hpp>
#include <alibabacloud/models/GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLowFrequency.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetProjectResponseBodyDataPropertiesTableLifecycleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectResponseBodyDataPropertiesTableLifecycleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(TierToLongterm, tierToLongterm_);
      DARABONBA_PTR_TO_JSON(TierToLowFrequency, tierToLowFrequency_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectResponseBodyDataPropertiesTableLifecycleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(TierToLongterm, tierToLongterm_);
      DARABONBA_PTR_FROM_JSON(TierToLowFrequency, tierToLowFrequency_);
    };
    GetProjectResponseBodyDataPropertiesTableLifecycleConfig() = default ;
    GetProjectResponseBodyDataPropertiesTableLifecycleConfig(const GetProjectResponseBodyDataPropertiesTableLifecycleConfig &) = default ;
    GetProjectResponseBodyDataPropertiesTableLifecycleConfig(GetProjectResponseBodyDataPropertiesTableLifecycleConfig &&) = default ;
    GetProjectResponseBodyDataPropertiesTableLifecycleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectResponseBodyDataPropertiesTableLifecycleConfig() = default ;
    GetProjectResponseBodyDataPropertiesTableLifecycleConfig& operator=(const GetProjectResponseBodyDataPropertiesTableLifecycleConfig &) = default ;
    GetProjectResponseBodyDataPropertiesTableLifecycleConfig& operator=(GetProjectResponseBodyDataPropertiesTableLifecycleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tierToLongterm_ != nullptr
        && this->tierToLowFrequency_ != nullptr; };
    // tierToLongterm Field Functions 
    bool hasTierToLongterm() const { return this->tierToLongterm_ != nullptr;};
    void deleteTierToLongterm() { this->tierToLongterm_ = nullptr;};
    inline const Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm & tierToLongterm() const { DARABONBA_PTR_GET_CONST(tierToLongterm_, Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm) };
    inline Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm tierToLongterm() { DARABONBA_PTR_GET(tierToLongterm_, Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm) };
    inline GetProjectResponseBodyDataPropertiesTableLifecycleConfig& setTierToLongterm(const Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm & tierToLongterm) { DARABONBA_PTR_SET_VALUE(tierToLongterm_, tierToLongterm) };
    inline GetProjectResponseBodyDataPropertiesTableLifecycleConfig& setTierToLongterm(Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm && tierToLongterm) { DARABONBA_PTR_SET_RVALUE(tierToLongterm_, tierToLongterm) };


    // tierToLowFrequency Field Functions 
    bool hasTierToLowFrequency() const { return this->tierToLowFrequency_ != nullptr;};
    void deleteTierToLowFrequency() { this->tierToLowFrequency_ = nullptr;};
    inline const Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLowFrequency & tierToLowFrequency() const { DARABONBA_PTR_GET_CONST(tierToLowFrequency_, Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLowFrequency) };
    inline Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLowFrequency tierToLowFrequency() { DARABONBA_PTR_GET(tierToLowFrequency_, Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLowFrequency) };
    inline GetProjectResponseBodyDataPropertiesTableLifecycleConfig& setTierToLowFrequency(const Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLowFrequency & tierToLowFrequency) { DARABONBA_PTR_SET_VALUE(tierToLowFrequency_, tierToLowFrequency) };
    inline GetProjectResponseBodyDataPropertiesTableLifecycleConfig& setTierToLowFrequency(Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLowFrequency && tierToLowFrequency) { DARABONBA_PTR_SET_RVALUE(tierToLowFrequency_, tierToLowFrequency) };


  protected:
    // The information about the long-term storage tier.
    std::shared_ptr<Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm> tierToLongterm_ = nullptr;
    // The information about the IA storage tier.
    std::shared_ptr<Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLowFrequency> tierToLowFrequency_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
