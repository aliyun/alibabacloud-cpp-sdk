// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetApplicationResponseBodyDataChecklist.hpp>
#include <alibabacloud/models/GetApplicationResponseBodyDataComplianceList.hpp>
#include <alibabacloud/models/GetApplicationResponseBodyDataPriceList.hpp>
#include <alibabacloud/models/GetApplicationResponseBodyDataResourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetApplicationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Checklist, checklist_);
      DARABONBA_PTR_TO_JSON(ComplianceList, complianceList_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DeployPercent, deployPercent_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PriceList, priceList_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Checklist, checklist_);
      DARABONBA_PTR_FROM_JSON(ComplianceList, complianceList_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DeployPercent, deployPercent_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PriceList, priceList_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    GetApplicationResponseBodyData() = default ;
    GetApplicationResponseBodyData(const GetApplicationResponseBodyData &) = default ;
    GetApplicationResponseBodyData(GetApplicationResponseBodyData &&) = default ;
    GetApplicationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBodyData() = default ;
    GetApplicationResponseBodyData& operator=(const GetApplicationResponseBodyData &) = default ;
    GetApplicationResponseBodyData& operator=(GetApplicationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->checklist_ != nullptr && this->complianceList_ != nullptr && this->createTime_ != nullptr && this->deployPercent_ != nullptr && this->description_ != nullptr
        && this->error_ != nullptr && this->imageURL_ != nullptr && this->name_ != nullptr && this->priceList_ != nullptr && this->resourceGroupId_ != nullptr
        && this->resourceList_ != nullptr && this->status_ != nullptr && this->templateId_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline GetApplicationResponseBodyData& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // checklist Field Functions 
    bool hasChecklist() const { return this->checklist_ != nullptr;};
    void deleteChecklist() { this->checklist_ = nullptr;};
    inline const vector<Models::GetApplicationResponseBodyDataChecklist> & checklist() const { DARABONBA_PTR_GET_CONST(checklist_, vector<Models::GetApplicationResponseBodyDataChecklist>) };
    inline vector<Models::GetApplicationResponseBodyDataChecklist> checklist() { DARABONBA_PTR_GET(checklist_, vector<Models::GetApplicationResponseBodyDataChecklist>) };
    inline GetApplicationResponseBodyData& setChecklist(const vector<Models::GetApplicationResponseBodyDataChecklist> & checklist) { DARABONBA_PTR_SET_VALUE(checklist_, checklist) };
    inline GetApplicationResponseBodyData& setChecklist(vector<Models::GetApplicationResponseBodyDataChecklist> && checklist) { DARABONBA_PTR_SET_RVALUE(checklist_, checklist) };


    // complianceList Field Functions 
    bool hasComplianceList() const { return this->complianceList_ != nullptr;};
    void deleteComplianceList() { this->complianceList_ = nullptr;};
    inline const vector<Models::GetApplicationResponseBodyDataComplianceList> & complianceList() const { DARABONBA_PTR_GET_CONST(complianceList_, vector<Models::GetApplicationResponseBodyDataComplianceList>) };
    inline vector<Models::GetApplicationResponseBodyDataComplianceList> complianceList() { DARABONBA_PTR_GET(complianceList_, vector<Models::GetApplicationResponseBodyDataComplianceList>) };
    inline GetApplicationResponseBodyData& setComplianceList(const vector<Models::GetApplicationResponseBodyDataComplianceList> & complianceList) { DARABONBA_PTR_SET_VALUE(complianceList_, complianceList) };
    inline GetApplicationResponseBodyData& setComplianceList(vector<Models::GetApplicationResponseBodyDataComplianceList> && complianceList) { DARABONBA_PTR_SET_RVALUE(complianceList_, complianceList) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetApplicationResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deployPercent Field Functions 
    bool hasDeployPercent() const { return this->deployPercent_ != nullptr;};
    void deleteDeployPercent() { this->deployPercent_ = nullptr;};
    inline double deployPercent() const { DARABONBA_PTR_GET_DEFAULT(deployPercent_, 0.0) };
    inline GetApplicationResponseBodyData& setDeployPercent(double deployPercent) { DARABONBA_PTR_SET_VALUE(deployPercent_, deployPercent) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetApplicationResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline GetApplicationResponseBodyData& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline GetApplicationResponseBodyData& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetApplicationResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priceList Field Functions 
    bool hasPriceList() const { return this->priceList_ != nullptr;};
    void deletePriceList() { this->priceList_ = nullptr;};
    inline const vector<Models::GetApplicationResponseBodyDataPriceList> & priceList() const { DARABONBA_PTR_GET_CONST(priceList_, vector<Models::GetApplicationResponseBodyDataPriceList>) };
    inline vector<Models::GetApplicationResponseBodyDataPriceList> priceList() { DARABONBA_PTR_GET(priceList_, vector<Models::GetApplicationResponseBodyDataPriceList>) };
    inline GetApplicationResponseBodyData& setPriceList(const vector<Models::GetApplicationResponseBodyDataPriceList> & priceList) { DARABONBA_PTR_SET_VALUE(priceList_, priceList) };
    inline GetApplicationResponseBodyData& setPriceList(vector<Models::GetApplicationResponseBodyDataPriceList> && priceList) { DARABONBA_PTR_SET_RVALUE(priceList_, priceList) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetApplicationResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const vector<Models::GetApplicationResponseBodyDataResourceList> & resourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<Models::GetApplicationResponseBodyDataResourceList>) };
    inline vector<Models::GetApplicationResponseBodyDataResourceList> resourceList() { DARABONBA_PTR_GET(resourceList_, vector<Models::GetApplicationResponseBodyDataResourceList>) };
    inline GetApplicationResponseBodyData& setResourceList(const vector<Models::GetApplicationResponseBodyDataResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline GetApplicationResponseBodyData& setResourceList(vector<Models::GetApplicationResponseBodyDataResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetApplicationResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetApplicationResponseBodyData& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // App ID
    std::shared_ptr<string> applicationId_ = nullptr;
    // The resource tag.
    std::shared_ptr<vector<Models::GetApplicationResponseBodyDataChecklist>> checklist_ = nullptr;
    std::shared_ptr<vector<Models::GetApplicationResponseBodyDataComplianceList>> complianceList_ = nullptr;
    // The time when the app was created
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<double> deployPercent_ = nullptr;
    // Application description
    std::shared_ptr<string> description_ = nullptr;
    // The resource type.
    std::shared_ptr<string> error_ = nullptr;
    // The URL of the image in the database.
    std::shared_ptr<string> imageURL_ = nullptr;
    // App name
    std::shared_ptr<string> name_ = nullptr;
    // The billing results.
    std::shared_ptr<vector<Models::GetApplicationResponseBodyDataPriceList>> priceList_ = nullptr;
    // The ID of the resource group to which the app belongs
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The resource specification.
    std::shared_ptr<vector<Models::GetApplicationResponseBodyDataResourceList>> resourceList_ = nullptr;
    // Verification passed
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the template associated with the application
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
