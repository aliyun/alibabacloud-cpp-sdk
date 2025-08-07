// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITYMARKETPLACEMETADATA_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITYMARKETPLACEMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceResponseBodyCommodityMarketplaceMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyCommodityMarketplaceMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(SpecificationMappings, specificationMappings_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyCommodityMarketplaceMetadata& obj) { 
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
    virtual bool empty() const override { this->specificationMappings_ != nullptr; };
    // specificationMappings Field Functions 
    bool hasSpecificationMappings() const { return this->specificationMappings_ != nullptr;};
    void deleteSpecificationMappings() { this->specificationMappings_ = nullptr;};
    inline const vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings> & specificationMappings() const { DARABONBA_PTR_GET_CONST(specificationMappings_, vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings>) };
    inline vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings> specificationMappings() { DARABONBA_PTR_GET(specificationMappings_, vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings>) };
    inline GetServiceResponseBodyCommodityMarketplaceMetadata& setSpecificationMappings(const vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings> & specificationMappings) { DARABONBA_PTR_SET_VALUE(specificationMappings_, specificationMappings) };
    inline GetServiceResponseBodyCommodityMarketplaceMetadata& setSpecificationMappings(vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings> && specificationMappings) { DARABONBA_PTR_SET_RVALUE(specificationMappings_, specificationMappings) };


  protected:
    // The mappings between the service specifications and the template or package.
    std::shared_ptr<vector<Models::GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings>> specificationMappings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
