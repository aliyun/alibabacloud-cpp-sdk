// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITYMARKETPLACEMETADATASPECIFICATIONMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITYMARKETPLACEMETADATASPECIFICATIONMAPPINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings& obj) { 
      DARABONBA_PTR_TO_JSON(SpecificationCode, specificationCode_);
      DARABONBA_PTR_TO_JSON(SpecificationName, specificationName_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(SpecificationCode, specificationCode_);
      DARABONBA_PTR_FROM_JSON(SpecificationName, specificationName_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings() = default ;
    GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings(const GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings &) = default ;
    GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings(GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings &&) = default ;
    GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings() = default ;
    GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings& operator=(const GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings &) = default ;
    GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings& operator=(GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->specificationCode_ != nullptr
        && this->specificationName_ != nullptr && this->templateName_ != nullptr; };
    // specificationCode Field Functions 
    bool hasSpecificationCode() const { return this->specificationCode_ != nullptr;};
    void deleteSpecificationCode() { this->specificationCode_ = nullptr;};
    inline string specificationCode() const { DARABONBA_PTR_GET_DEFAULT(specificationCode_, "") };
    inline GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings& setSpecificationCode(string specificationCode) { DARABONBA_PTR_SET_VALUE(specificationCode_, specificationCode) };


    // specificationName Field Functions 
    bool hasSpecificationName() const { return this->specificationName_ != nullptr;};
    void deleteSpecificationName() { this->specificationName_ = nullptr;};
    inline string specificationName() const { DARABONBA_PTR_GET_DEFAULT(specificationName_, "") };
    inline GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings& setSpecificationName(string specificationName) { DARABONBA_PTR_SET_VALUE(specificationName_, specificationName) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The specification code of the service in Alibaba Cloud Marketplace.
    std::shared_ptr<string> specificationCode_ = nullptr;
    // The package name.
    std::shared_ptr<string> specificationName_ = nullptr;
    // The template name.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
