// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETEMPLATEBYSCRATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATETEMPLATEBYSCRATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GenerateTemplateByScratchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTemplateByScratchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProvisionRegionId, provisionRegionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplateScratchId, templateScratchId_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTemplateByScratchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProvisionRegionId, provisionRegionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchId, templateScratchId_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    GenerateTemplateByScratchRequest() = default ;
    GenerateTemplateByScratchRequest(const GenerateTemplateByScratchRequest &) = default ;
    GenerateTemplateByScratchRequest(GenerateTemplateByScratchRequest &&) = default ;
    GenerateTemplateByScratchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTemplateByScratchRequest() = default ;
    GenerateTemplateByScratchRequest& operator=(const GenerateTemplateByScratchRequest &) = default ;
    GenerateTemplateByScratchRequest& operator=(GenerateTemplateByScratchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->provisionRegionId_ != nullptr
        && this->regionId_ != nullptr && this->templateScratchId_ != nullptr && this->templateType_ != nullptr; };
    // provisionRegionId Field Functions 
    bool hasProvisionRegionId() const { return this->provisionRegionId_ != nullptr;};
    void deleteProvisionRegionId() { this->provisionRegionId_ = nullptr;};
    inline string provisionRegionId() const { DARABONBA_PTR_GET_DEFAULT(provisionRegionId_, "") };
    inline GenerateTemplateByScratchRequest& setProvisionRegionId(string provisionRegionId) { DARABONBA_PTR_SET_VALUE(provisionRegionId_, provisionRegionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GenerateTemplateByScratchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateScratchId Field Functions 
    bool hasTemplateScratchId() const { return this->templateScratchId_ != nullptr;};
    void deleteTemplateScratchId() { this->templateScratchId_ = nullptr;};
    inline string templateScratchId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchId_, "") };
    inline GenerateTemplateByScratchRequest& setTemplateScratchId(string templateScratchId) { DARABONBA_PTR_SET_VALUE(templateScratchId_, templateScratchId) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline GenerateTemplateByScratchRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The region ID of the new node.
    std::shared_ptr<string> provisionRegionId_ = nullptr;
    // The region ID of the resource scenario.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource scenario.
    // 
    // For more information about how to query the IDs of resource scenarios, see [ListTemplateScratches](https://help.aliyun.com/document_detail/363050.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> templateScratchId_ = nullptr;
    // The type of the template that Resource Orchestration Service (ROS) generates. ROS can generate templates of the ROS and Terraform types. Default value: ROS.
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
