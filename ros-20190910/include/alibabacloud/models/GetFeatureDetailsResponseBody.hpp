// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFeatureDetailsResponseBodyDriftDetection.hpp>
#include <alibabacloud/models/GetFeatureDetailsResponseBodyResourceCleaner.hpp>
#include <alibabacloud/models/GetFeatureDetailsResponseBodyResourceImport.hpp>
#include <alibabacloud/models/GetFeatureDetailsResponseBodyTemplateParameterConstraints.hpp>
#include <alibabacloud/models/GetFeatureDetailsResponseBodyTemplateScratch.hpp>
#include <alibabacloud/models/GetFeatureDetailsResponseBodyTerraform.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetFeatureDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DriftDetection, driftDetection_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceCleaner, resourceCleaner_);
      DARABONBA_PTR_TO_JSON(ResourceImport, resourceImport_);
      DARABONBA_PTR_TO_JSON(TemplateParameterConstraints, templateParameterConstraints_);
      DARABONBA_PTR_TO_JSON(TemplateScratch, templateScratch_);
      DARABONBA_PTR_TO_JSON(Terraform, terraform_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DriftDetection, driftDetection_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceCleaner, resourceCleaner_);
      DARABONBA_PTR_FROM_JSON(ResourceImport, resourceImport_);
      DARABONBA_PTR_FROM_JSON(TemplateParameterConstraints, templateParameterConstraints_);
      DARABONBA_PTR_FROM_JSON(TemplateScratch, templateScratch_);
      DARABONBA_PTR_FROM_JSON(Terraform, terraform_);
    };
    GetFeatureDetailsResponseBody() = default ;
    GetFeatureDetailsResponseBody(const GetFeatureDetailsResponseBody &) = default ;
    GetFeatureDetailsResponseBody(GetFeatureDetailsResponseBody &&) = default ;
    GetFeatureDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureDetailsResponseBody() = default ;
    GetFeatureDetailsResponseBody& operator=(const GetFeatureDetailsResponseBody &) = default ;
    GetFeatureDetailsResponseBody& operator=(GetFeatureDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->driftDetection_ != nullptr
        && this->requestId_ != nullptr && this->resourceCleaner_ != nullptr && this->resourceImport_ != nullptr && this->templateParameterConstraints_ != nullptr && this->templateScratch_ != nullptr
        && this->terraform_ != nullptr; };
    // driftDetection Field Functions 
    bool hasDriftDetection() const { return this->driftDetection_ != nullptr;};
    void deleteDriftDetection() { this->driftDetection_ = nullptr;};
    inline const GetFeatureDetailsResponseBodyDriftDetection & driftDetection() const { DARABONBA_PTR_GET_CONST(driftDetection_, GetFeatureDetailsResponseBodyDriftDetection) };
    inline GetFeatureDetailsResponseBodyDriftDetection driftDetection() { DARABONBA_PTR_GET(driftDetection_, GetFeatureDetailsResponseBodyDriftDetection) };
    inline GetFeatureDetailsResponseBody& setDriftDetection(const GetFeatureDetailsResponseBodyDriftDetection & driftDetection) { DARABONBA_PTR_SET_VALUE(driftDetection_, driftDetection) };
    inline GetFeatureDetailsResponseBody& setDriftDetection(GetFeatureDetailsResponseBodyDriftDetection && driftDetection) { DARABONBA_PTR_SET_RVALUE(driftDetection_, driftDetection) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFeatureDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceCleaner Field Functions 
    bool hasResourceCleaner() const { return this->resourceCleaner_ != nullptr;};
    void deleteResourceCleaner() { this->resourceCleaner_ = nullptr;};
    inline const GetFeatureDetailsResponseBodyResourceCleaner & resourceCleaner() const { DARABONBA_PTR_GET_CONST(resourceCleaner_, GetFeatureDetailsResponseBodyResourceCleaner) };
    inline GetFeatureDetailsResponseBodyResourceCleaner resourceCleaner() { DARABONBA_PTR_GET(resourceCleaner_, GetFeatureDetailsResponseBodyResourceCleaner) };
    inline GetFeatureDetailsResponseBody& setResourceCleaner(const GetFeatureDetailsResponseBodyResourceCleaner & resourceCleaner) { DARABONBA_PTR_SET_VALUE(resourceCleaner_, resourceCleaner) };
    inline GetFeatureDetailsResponseBody& setResourceCleaner(GetFeatureDetailsResponseBodyResourceCleaner && resourceCleaner) { DARABONBA_PTR_SET_RVALUE(resourceCleaner_, resourceCleaner) };


    // resourceImport Field Functions 
    bool hasResourceImport() const { return this->resourceImport_ != nullptr;};
    void deleteResourceImport() { this->resourceImport_ = nullptr;};
    inline const GetFeatureDetailsResponseBodyResourceImport & resourceImport() const { DARABONBA_PTR_GET_CONST(resourceImport_, GetFeatureDetailsResponseBodyResourceImport) };
    inline GetFeatureDetailsResponseBodyResourceImport resourceImport() { DARABONBA_PTR_GET(resourceImport_, GetFeatureDetailsResponseBodyResourceImport) };
    inline GetFeatureDetailsResponseBody& setResourceImport(const GetFeatureDetailsResponseBodyResourceImport & resourceImport) { DARABONBA_PTR_SET_VALUE(resourceImport_, resourceImport) };
    inline GetFeatureDetailsResponseBody& setResourceImport(GetFeatureDetailsResponseBodyResourceImport && resourceImport) { DARABONBA_PTR_SET_RVALUE(resourceImport_, resourceImport) };


    // templateParameterConstraints Field Functions 
    bool hasTemplateParameterConstraints() const { return this->templateParameterConstraints_ != nullptr;};
    void deleteTemplateParameterConstraints() { this->templateParameterConstraints_ = nullptr;};
    inline const GetFeatureDetailsResponseBodyTemplateParameterConstraints & templateParameterConstraints() const { DARABONBA_PTR_GET_CONST(templateParameterConstraints_, GetFeatureDetailsResponseBodyTemplateParameterConstraints) };
    inline GetFeatureDetailsResponseBodyTemplateParameterConstraints templateParameterConstraints() { DARABONBA_PTR_GET(templateParameterConstraints_, GetFeatureDetailsResponseBodyTemplateParameterConstraints) };
    inline GetFeatureDetailsResponseBody& setTemplateParameterConstraints(const GetFeatureDetailsResponseBodyTemplateParameterConstraints & templateParameterConstraints) { DARABONBA_PTR_SET_VALUE(templateParameterConstraints_, templateParameterConstraints) };
    inline GetFeatureDetailsResponseBody& setTemplateParameterConstraints(GetFeatureDetailsResponseBodyTemplateParameterConstraints && templateParameterConstraints) { DARABONBA_PTR_SET_RVALUE(templateParameterConstraints_, templateParameterConstraints) };


    // templateScratch Field Functions 
    bool hasTemplateScratch() const { return this->templateScratch_ != nullptr;};
    void deleteTemplateScratch() { this->templateScratch_ = nullptr;};
    inline const GetFeatureDetailsResponseBodyTemplateScratch & templateScratch() const { DARABONBA_PTR_GET_CONST(templateScratch_, GetFeatureDetailsResponseBodyTemplateScratch) };
    inline GetFeatureDetailsResponseBodyTemplateScratch templateScratch() { DARABONBA_PTR_GET(templateScratch_, GetFeatureDetailsResponseBodyTemplateScratch) };
    inline GetFeatureDetailsResponseBody& setTemplateScratch(const GetFeatureDetailsResponseBodyTemplateScratch & templateScratch) { DARABONBA_PTR_SET_VALUE(templateScratch_, templateScratch) };
    inline GetFeatureDetailsResponseBody& setTemplateScratch(GetFeatureDetailsResponseBodyTemplateScratch && templateScratch) { DARABONBA_PTR_SET_RVALUE(templateScratch_, templateScratch) };


    // terraform Field Functions 
    bool hasTerraform() const { return this->terraform_ != nullptr;};
    void deleteTerraform() { this->terraform_ = nullptr;};
    inline const GetFeatureDetailsResponseBodyTerraform & terraform() const { DARABONBA_PTR_GET_CONST(terraform_, GetFeatureDetailsResponseBodyTerraform) };
    inline GetFeatureDetailsResponseBodyTerraform terraform() { DARABONBA_PTR_GET(terraform_, GetFeatureDetailsResponseBodyTerraform) };
    inline GetFeatureDetailsResponseBody& setTerraform(const GetFeatureDetailsResponseBodyTerraform & terraform) { DARABONBA_PTR_SET_VALUE(terraform_, terraform) };
    inline GetFeatureDetailsResponseBody& setTerraform(GetFeatureDetailsResponseBodyTerraform && terraform) { DARABONBA_PTR_SET_RVALUE(terraform_, terraform) };


  protected:
    // Details of the drift detection feature.
    std::shared_ptr<GetFeatureDetailsResponseBodyDriftDetection> driftDetection_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Details of the resource cleaner feature.
    std::shared_ptr<GetFeatureDetailsResponseBodyResourceCleaner> resourceCleaner_ = nullptr;
    // Details of the resource import feature.
    std::shared_ptr<GetFeatureDetailsResponseBodyResourceImport> resourceImport_ = nullptr;
    // Details of the template parameter constraint feature.
    std::shared_ptr<GetFeatureDetailsResponseBodyTemplateParameterConstraints> templateParameterConstraints_ = nullptr;
    // Details of the scenario feature.
    std::shared_ptr<GetFeatureDetailsResponseBodyTemplateScratch> templateScratch_ = nullptr;
    // Details of the Terraform hosting feature.
    std::shared_ptr<GetFeatureDetailsResponseBodyTerraform> terraform_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
