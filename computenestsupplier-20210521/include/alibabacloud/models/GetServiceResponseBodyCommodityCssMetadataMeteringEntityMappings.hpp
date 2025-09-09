// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITYCSSMETADATAMETERINGENTITYMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITYCSSMETADATAMETERINGENTITYMAPPINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings& obj) { 
      DARABONBA_PTR_TO_JSON(EntityIds, entityIds_);
      DARABONBA_PTR_TO_JSON(SpecificationName, specificationName_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityIds, entityIds_);
      DARABONBA_PTR_FROM_JSON(SpecificationName, specificationName_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings() = default ;
    GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings(const GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings &) = default ;
    GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings(GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings &&) = default ;
    GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings() = default ;
    GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings& operator=(const GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings &) = default ;
    GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings& operator=(GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityIds_ != nullptr
        && this->specificationName_ != nullptr && this->templateName_ != nullptr; };
    // entityIds Field Functions 
    bool hasEntityIds() const { return this->entityIds_ != nullptr;};
    void deleteEntityIds() { this->entityIds_ = nullptr;};
    inline string entityIds() const { DARABONBA_PTR_GET_DEFAULT(entityIds_, "") };
    inline GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings& setEntityIds(string entityIds) { DARABONBA_PTR_SET_VALUE(entityIds_, entityIds) };


    // specificationName Field Functions 
    bool hasSpecificationName() const { return this->specificationName_ != nullptr;};
    void deleteSpecificationName() { this->specificationName_ = nullptr;};
    inline string specificationName() const { DARABONBA_PTR_GET_DEFAULT(specificationName_, "") };
    inline GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings& setSpecificationName(string specificationName) { DARABONBA_PTR_SET_VALUE(specificationName_, specificationName) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The ID of the entity.
    std::shared_ptr<string> entityIds_ = nullptr;
    // The package name.
    std::shared_ptr<string> specificationName_ = nullptr;
    // The template name.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
