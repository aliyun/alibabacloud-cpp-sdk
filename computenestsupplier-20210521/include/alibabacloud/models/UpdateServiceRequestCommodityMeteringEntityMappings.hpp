// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEREQUESTCOMMODITYMETERINGENTITYMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEREQUESTCOMMODITYMETERINGENTITYMAPPINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateServiceRequestCommodityMeteringEntityMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceRequestCommodityMeteringEntityMappings& obj) { 
      DARABONBA_PTR_TO_JSON(EntityIds, entityIds_);
      DARABONBA_PTR_TO_JSON(SpecificationName, specificationName_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceRequestCommodityMeteringEntityMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityIds, entityIds_);
      DARABONBA_PTR_FROM_JSON(SpecificationName, specificationName_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    UpdateServiceRequestCommodityMeteringEntityMappings() = default ;
    UpdateServiceRequestCommodityMeteringEntityMappings(const UpdateServiceRequestCommodityMeteringEntityMappings &) = default ;
    UpdateServiceRequestCommodityMeteringEntityMappings(UpdateServiceRequestCommodityMeteringEntityMappings &&) = default ;
    UpdateServiceRequestCommodityMeteringEntityMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceRequestCommodityMeteringEntityMappings() = default ;
    UpdateServiceRequestCommodityMeteringEntityMappings& operator=(const UpdateServiceRequestCommodityMeteringEntityMappings &) = default ;
    UpdateServiceRequestCommodityMeteringEntityMappings& operator=(UpdateServiceRequestCommodityMeteringEntityMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityIds_ != nullptr
        && this->specificationName_ != nullptr && this->templateName_ != nullptr; };
    // entityIds Field Functions 
    bool hasEntityIds() const { return this->entityIds_ != nullptr;};
    void deleteEntityIds() { this->entityIds_ = nullptr;};
    inline const vector<string> & entityIds() const { DARABONBA_PTR_GET_CONST(entityIds_, vector<string>) };
    inline vector<string> entityIds() { DARABONBA_PTR_GET(entityIds_, vector<string>) };
    inline UpdateServiceRequestCommodityMeteringEntityMappings& setEntityIds(const vector<string> & entityIds) { DARABONBA_PTR_SET_VALUE(entityIds_, entityIds) };
    inline UpdateServiceRequestCommodityMeteringEntityMappings& setEntityIds(vector<string> && entityIds) { DARABONBA_PTR_SET_RVALUE(entityIds_, entityIds) };


    // specificationName Field Functions 
    bool hasSpecificationName() const { return this->specificationName_ != nullptr;};
    void deleteSpecificationName() { this->specificationName_ = nullptr;};
    inline string specificationName() const { DARABONBA_PTR_GET_DEFAULT(specificationName_, "") };
    inline UpdateServiceRequestCommodityMeteringEntityMappings& setSpecificationName(string specificationName) { DARABONBA_PTR_SET_VALUE(specificationName_, specificationName) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline UpdateServiceRequestCommodityMeteringEntityMappings& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // Metering entity IDs.
    std::shared_ptr<vector<string>> entityIds_ = nullptr;
    // The specification name.
    std::shared_ptr<string> specificationName_ = nullptr;
    // The template name.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
