// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITYMARKETPLACEMETADATA_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITYMARKETPLACEMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos.hpp>
#include <alibabacloud/models/GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityMappings.hpp>
#include <alibabacloud/models/GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceResponseBodyCommodityMarketplaceMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyCommodityMarketplaceMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(MeteringEntityExtraInfos, meteringEntityExtraInfos_);
      DARABONBA_PTR_TO_JSON(MeteringEntityMappings, meteringEntityMappings_);
      DARABONBA_PTR_TO_JSON(SpecificationMappings, specificationMappings_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyCommodityMarketplaceMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(MeteringEntityExtraInfos, meteringEntityExtraInfos_);
      DARABONBA_PTR_FROM_JSON(MeteringEntityMappings, meteringEntityMappings_);
      DARABONBA_PTR_FROM_JSON(SpecificationMappings, specificationMappings_);
    };
    GetServiceResponseBodyCommodityMarketplaceMetadata() = default ;
    GetServiceResponseBodyCommodityMarketplaceMetadata(const GetServiceResponseBodyCommodityMarketplaceMetadata &) = default ;
    GetServiceResponseBodyCommodityMarketplaceMetadata(GetServiceResponseBodyCommodityMarketplaceMetadata &&) = default ;
    GetServiceResponseBodyCommodityMarketplaceMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBodyCommodityMarketplaceMetadata() = default ;
    GetServiceResponseBodyCommodityMarketplaceMetadata& operator=(const GetServiceResponseBodyCommodityMarketplaceMetadata &) = default ;
    GetServiceResponseBodyCommodityMarketplaceMetadata& operator=(GetServiceResponseBodyCommodityMarketplaceMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->meteringEntityExtraInfos_ != nullptr
        && this->meteringEntityMappings_ != nullptr && this->specificationMappings_ != nullptr; };
    // meteringEntityExtraInfos Field Functions 
    bool hasMeteringEntityExtraInfos() const { return this->meteringEntityExtraInfos_ != nullptr;};
    void deleteMeteringEntityExtraInfos() { this->meteringEntityExtraInfos_ = nullptr;};
    inline const vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos> & meteringEntityExtraInfos() const { DARABONBA_PTR_GET_CONST(meteringEntityExtraInfos_, vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos>) };
    inline vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos> meteringEntityExtraInfos() { DARABONBA_PTR_GET(meteringEntityExtraInfos_, vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos>) };
    inline GetServiceResponseBodyCommodityMarketplaceMetadata& setMeteringEntityExtraInfos(const vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos> & meteringEntityExtraInfos) { DARABONBA_PTR_SET_VALUE(meteringEntityExtraInfos_, meteringEntityExtraInfos) };
    inline GetServiceResponseBodyCommodityMarketplaceMetadata& setMeteringEntityExtraInfos(vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos> && meteringEntityExtraInfos) { DARABONBA_PTR_SET_RVALUE(meteringEntityExtraInfos_, meteringEntityExtraInfos) };


    // meteringEntityMappings Field Functions 
    bool hasMeteringEntityMappings() const { return this->meteringEntityMappings_ != nullptr;};
    void deleteMeteringEntityMappings() { this->meteringEntityMappings_ = nullptr;};
    inline const vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityMappings> & meteringEntityMappings() const { DARABONBA_PTR_GET_CONST(meteringEntityMappings_, vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityMappings>) };
    inline vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityMappings> meteringEntityMappings() { DARABONBA_PTR_GET(meteringEntityMappings_, vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityMappings>) };
    inline GetServiceResponseBodyCommodityMarketplaceMetadata& setMeteringEntityMappings(const vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityMappings> & meteringEntityMappings) { DARABONBA_PTR_SET_VALUE(meteringEntityMappings_, meteringEntityMappings) };
    inline GetServiceResponseBodyCommodityMarketplaceMetadata& setMeteringEntityMappings(vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityMappings> && meteringEntityMappings) { DARABONBA_PTR_SET_RVALUE(meteringEntityMappings_, meteringEntityMappings) };


    // specificationMappings Field Functions 
    bool hasSpecificationMappings() const { return this->specificationMappings_ != nullptr;};
    void deleteSpecificationMappings() { this->specificationMappings_ = nullptr;};
    inline const vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings> & specificationMappings() const { DARABONBA_PTR_GET_CONST(specificationMappings_, vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings>) };
    inline vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings> specificationMappings() { DARABONBA_PTR_GET(specificationMappings_, vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings>) };
    inline GetServiceResponseBodyCommodityMarketplaceMetadata& setSpecificationMappings(const vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings> & specificationMappings) { DARABONBA_PTR_SET_VALUE(specificationMappings_, specificationMappings) };
    inline GetServiceResponseBodyCommodityMarketplaceMetadata& setSpecificationMappings(vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings> && specificationMappings) { DARABONBA_PTR_SET_RVALUE(specificationMappings_, specificationMappings) };


  protected:
    // The configurations of the billable items.
    std::shared_ptr<vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos>> meteringEntityExtraInfos_ = nullptr;
    // The billable items that are associated with the package.
    std::shared_ptr<vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityMappings>> meteringEntityMappings_ = nullptr;
    // The mappings between the service specifications and the template or package.
    std::shared_ptr<vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings>> specificationMappings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
