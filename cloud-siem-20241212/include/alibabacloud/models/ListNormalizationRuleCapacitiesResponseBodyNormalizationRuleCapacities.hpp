// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULECAPACITIESRESPONSEBODYNORMALIZATIONRULECAPACITIES_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULECAPACITIESRESPONSEBODYNORMALIZATIONRULECAPACITIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities& obj) { 
      DARABONBA_PTR_TO_JSON(Capacities, capacities_);
      DARABONBA_PTR_TO_JSON(CapacityType, capacityType_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleId, normalizationRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacities, capacities_);
      DARABONBA_PTR_FROM_JSON(CapacityType, capacityType_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleId, normalizationRuleId_);
    };
    ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities() = default ;
    ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities(const ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities &) = default ;
    ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities(ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities &&) = default ;
    ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities() = default ;
    ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities& operator=(const ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities &) = default ;
    ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities& operator=(ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacities_ == nullptr
        && return this->capacityType_ == nullptr && return this->normalizationRuleId_ == nullptr; };
    // capacities Field Functions 
    bool hasCapacities() const { return this->capacities_ != nullptr;};
    void deleteCapacities() { this->capacities_ = nullptr;};
    inline const vector<string> & capacities() const { DARABONBA_PTR_GET_CONST(capacities_, vector<string>) };
    inline vector<string> capacities() { DARABONBA_PTR_GET(capacities_, vector<string>) };
    inline ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities& setCapacities(const vector<string> & capacities) { DARABONBA_PTR_SET_VALUE(capacities_, capacities) };
    inline ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities& setCapacities(vector<string> && capacities) { DARABONBA_PTR_SET_RVALUE(capacities_, capacities) };


    // capacityType Field Functions 
    bool hasCapacityType() const { return this->capacityType_ != nullptr;};
    void deleteCapacityType() { this->capacityType_ = nullptr;};
    inline string capacityType() const { DARABONBA_PTR_GET_DEFAULT(capacityType_, "") };
    inline ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities& setCapacityType(string capacityType) { DARABONBA_PTR_SET_VALUE(capacityType_, capacityType) };


    // normalizationRuleId Field Functions 
    bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
    void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
    inline string normalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
    inline ListNormalizationRuleCapacitiesResponseBodyNormalizationRuleCapacities& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


  protected:
    std::shared_ptr<vector<string>> capacities_ = nullptr;
    std::shared_ptr<string> capacityType_ = nullptr;
    std::shared_ptr<string> normalizationRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
