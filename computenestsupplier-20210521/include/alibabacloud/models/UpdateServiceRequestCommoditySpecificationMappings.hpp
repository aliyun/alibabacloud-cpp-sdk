// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEREQUESTCOMMODITYSPECIFICATIONMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEREQUESTCOMMODITYSPECIFICATIONMAPPINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateServiceRequestCommoditySpecificationMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceRequestCommoditySpecificationMappings& obj) { 
      DARABONBA_PTR_TO_JSON(SpecificationCode, specificationCode_);
      DARABONBA_PTR_TO_JSON(SpecificationName, specificationName_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceRequestCommoditySpecificationMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(SpecificationCode, specificationCode_);
      DARABONBA_PTR_FROM_JSON(SpecificationName, specificationName_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    UpdateServiceRequestCommoditySpecificationMappings() = default ;
    UpdateServiceRequestCommoditySpecificationMappings(const UpdateServiceRequestCommoditySpecificationMappings &) = default ;
    UpdateServiceRequestCommoditySpecificationMappings(UpdateServiceRequestCommoditySpecificationMappings &&) = default ;
    UpdateServiceRequestCommoditySpecificationMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceRequestCommoditySpecificationMappings() = default ;
    UpdateServiceRequestCommoditySpecificationMappings& operator=(const UpdateServiceRequestCommoditySpecificationMappings &) = default ;
    UpdateServiceRequestCommoditySpecificationMappings& operator=(UpdateServiceRequestCommoditySpecificationMappings &&) = default ;
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
    inline UpdateServiceRequestCommoditySpecificationMappings& setSpecificationCode(string specificationCode) { DARABONBA_PTR_SET_VALUE(specificationCode_, specificationCode) };


    // specificationName Field Functions 
    bool hasSpecificationName() const { return this->specificationName_ != nullptr;};
    void deleteSpecificationName() { this->specificationName_ = nullptr;};
    inline string specificationName() const { DARABONBA_PTR_GET_DEFAULT(specificationName_, "") };
    inline UpdateServiceRequestCommoditySpecificationMappings& setSpecificationName(string specificationName) { DARABONBA_PTR_SET_VALUE(specificationName_, specificationName) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline UpdateServiceRequestCommoditySpecificationMappings& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // Specification code.
    std::shared_ptr<string> specificationCode_ = nullptr;
    // The name of the package specification.
    std::shared_ptr<string> specificationName_ = nullptr;
    // The template name.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
