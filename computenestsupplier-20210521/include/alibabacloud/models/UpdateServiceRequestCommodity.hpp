// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEREQUESTCOMMODITY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEREQUESTCOMMODITY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateServiceRequestCommodityComponentsMappings.hpp>
#include <alibabacloud/models/UpdateServiceRequestCommodityMeteringEntityExtraInfos.hpp>
#include <alibabacloud/models/UpdateServiceRequestCommodityMeteringEntityMappings.hpp>
#include <alibabacloud/models/UpdateServiceRequestCommoditySpecificationMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateServiceRequestCommodity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceRequestCommodity& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentsMappings, componentsMappings_);
      DARABONBA_PTR_TO_JSON(MeteringEntityExtraInfos, meteringEntityExtraInfos_);
      DARABONBA_PTR_TO_JSON(MeteringEntityMappings, meteringEntityMappings_);
      DARABONBA_PTR_TO_JSON(SaasBoostConfig, saasBoostConfig_);
      DARABONBA_PTR_TO_JSON(SpecificationMappings, specificationMappings_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceRequestCommodity& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentsMappings, componentsMappings_);
      DARABONBA_PTR_FROM_JSON(MeteringEntityExtraInfos, meteringEntityExtraInfos_);
      DARABONBA_PTR_FROM_JSON(MeteringEntityMappings, meteringEntityMappings_);
      DARABONBA_PTR_FROM_JSON(SaasBoostConfig, saasBoostConfig_);
      DARABONBA_PTR_FROM_JSON(SpecificationMappings, specificationMappings_);
    };
    UpdateServiceRequestCommodity() = default ;
    UpdateServiceRequestCommodity(const UpdateServiceRequestCommodity &) = default ;
    UpdateServiceRequestCommodity(UpdateServiceRequestCommodity &&) = default ;
    UpdateServiceRequestCommodity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceRequestCommodity() = default ;
    UpdateServiceRequestCommodity& operator=(const UpdateServiceRequestCommodity &) = default ;
    UpdateServiceRequestCommodity& operator=(UpdateServiceRequestCommodity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentsMappings_ != nullptr
        && this->meteringEntityExtraInfos_ != nullptr && this->meteringEntityMappings_ != nullptr && this->saasBoostConfig_ != nullptr && this->specificationMappings_ != nullptr; };
    // componentsMappings Field Functions 
    bool hasComponentsMappings() const { return this->componentsMappings_ != nullptr;};
    void deleteComponentsMappings() { this->componentsMappings_ = nullptr;};
    inline const vector<Models::UpdateServiceRequestCommodityComponentsMappings> & componentsMappings() const { DARABONBA_PTR_GET_CONST(componentsMappings_, vector<Models::UpdateServiceRequestCommodityComponentsMappings>) };
    inline vector<Models::UpdateServiceRequestCommodityComponentsMappings> componentsMappings() { DARABONBA_PTR_GET(componentsMappings_, vector<Models::UpdateServiceRequestCommodityComponentsMappings>) };
    inline UpdateServiceRequestCommodity& setComponentsMappings(const vector<Models::UpdateServiceRequestCommodityComponentsMappings> & componentsMappings) { DARABONBA_PTR_SET_VALUE(componentsMappings_, componentsMappings) };
    inline UpdateServiceRequestCommodity& setComponentsMappings(vector<Models::UpdateServiceRequestCommodityComponentsMappings> && componentsMappings) { DARABONBA_PTR_SET_RVALUE(componentsMappings_, componentsMappings) };


    // meteringEntityExtraInfos Field Functions 
    bool hasMeteringEntityExtraInfos() const { return this->meteringEntityExtraInfos_ != nullptr;};
    void deleteMeteringEntityExtraInfos() { this->meteringEntityExtraInfos_ = nullptr;};
    inline const vector<Models::UpdateServiceRequestCommodityMeteringEntityExtraInfos> & meteringEntityExtraInfos() const { DARABONBA_PTR_GET_CONST(meteringEntityExtraInfos_, vector<Models::UpdateServiceRequestCommodityMeteringEntityExtraInfos>) };
    inline vector<Models::UpdateServiceRequestCommodityMeteringEntityExtraInfos> meteringEntityExtraInfos() { DARABONBA_PTR_GET(meteringEntityExtraInfos_, vector<Models::UpdateServiceRequestCommodityMeteringEntityExtraInfos>) };
    inline UpdateServiceRequestCommodity& setMeteringEntityExtraInfos(const vector<Models::UpdateServiceRequestCommodityMeteringEntityExtraInfos> & meteringEntityExtraInfos) { DARABONBA_PTR_SET_VALUE(meteringEntityExtraInfos_, meteringEntityExtraInfos) };
    inline UpdateServiceRequestCommodity& setMeteringEntityExtraInfos(vector<Models::UpdateServiceRequestCommodityMeteringEntityExtraInfos> && meteringEntityExtraInfos) { DARABONBA_PTR_SET_RVALUE(meteringEntityExtraInfos_, meteringEntityExtraInfos) };


    // meteringEntityMappings Field Functions 
    bool hasMeteringEntityMappings() const { return this->meteringEntityMappings_ != nullptr;};
    void deleteMeteringEntityMappings() { this->meteringEntityMappings_ = nullptr;};
    inline const vector<Models::UpdateServiceRequestCommodityMeteringEntityMappings> & meteringEntityMappings() const { DARABONBA_PTR_GET_CONST(meteringEntityMappings_, vector<Models::UpdateServiceRequestCommodityMeteringEntityMappings>) };
    inline vector<Models::UpdateServiceRequestCommodityMeteringEntityMappings> meteringEntityMappings() { DARABONBA_PTR_GET(meteringEntityMappings_, vector<Models::UpdateServiceRequestCommodityMeteringEntityMappings>) };
    inline UpdateServiceRequestCommodity& setMeteringEntityMappings(const vector<Models::UpdateServiceRequestCommodityMeteringEntityMappings> & meteringEntityMappings) { DARABONBA_PTR_SET_VALUE(meteringEntityMappings_, meteringEntityMappings) };
    inline UpdateServiceRequestCommodity& setMeteringEntityMappings(vector<Models::UpdateServiceRequestCommodityMeteringEntityMappings> && meteringEntityMappings) { DARABONBA_PTR_SET_RVALUE(meteringEntityMappings_, meteringEntityMappings) };


    // saasBoostConfig Field Functions 
    bool hasSaasBoostConfig() const { return this->saasBoostConfig_ != nullptr;};
    void deleteSaasBoostConfig() { this->saasBoostConfig_ = nullptr;};
    inline string saasBoostConfig() const { DARABONBA_PTR_GET_DEFAULT(saasBoostConfig_, "") };
    inline UpdateServiceRequestCommodity& setSaasBoostConfig(string saasBoostConfig) { DARABONBA_PTR_SET_VALUE(saasBoostConfig_, saasBoostConfig) };


    // specificationMappings Field Functions 
    bool hasSpecificationMappings() const { return this->specificationMappings_ != nullptr;};
    void deleteSpecificationMappings() { this->specificationMappings_ = nullptr;};
    inline const vector<Models::UpdateServiceRequestCommoditySpecificationMappings> & specificationMappings() const { DARABONBA_PTR_GET_CONST(specificationMappings_, vector<Models::UpdateServiceRequestCommoditySpecificationMappings>) };
    inline vector<Models::UpdateServiceRequestCommoditySpecificationMappings> specificationMappings() { DARABONBA_PTR_GET(specificationMappings_, vector<Models::UpdateServiceRequestCommoditySpecificationMappings>) };
    inline UpdateServiceRequestCommodity& setSpecificationMappings(const vector<Models::UpdateServiceRequestCommoditySpecificationMappings> & specificationMappings) { DARABONBA_PTR_SET_VALUE(specificationMappings_, specificationMappings) };
    inline UpdateServiceRequestCommodity& setSpecificationMappings(vector<Models::UpdateServiceRequestCommoditySpecificationMappings> && specificationMappings) { DARABONBA_PTR_SET_RVALUE(specificationMappings_, specificationMappings) };


  protected:
    // This parameter is not available to the public.
    std::shared_ptr<vector<Models::UpdateServiceRequestCommodityComponentsMappings>> componentsMappings_ = nullptr;
    // Metering entity extra information.
    std::shared_ptr<vector<Models::UpdateServiceRequestCommodityMeteringEntityExtraInfos>> meteringEntityExtraInfos_ = nullptr;
    // Binding relationship between templates/specifications and metering dimensions (marketplace - PayAsYouGo)
    std::shared_ptr<vector<Models::UpdateServiceRequestCommodityMeteringEntityMappings>> meteringEntityMappings_ = nullptr;
    // SaaS Boost configuration.
    std::shared_ptr<string> saasBoostConfig_ = nullptr;
    // Product specifications and template/package mappings (Used in marketplace - subscription scenario)
    std::shared_ptr<vector<Models::UpdateServiceRequestCommoditySpecificationMappings>> specificationMappings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
