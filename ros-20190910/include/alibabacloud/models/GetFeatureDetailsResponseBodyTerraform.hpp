// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYTERRAFORM_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYTERRAFORM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes.hpp>
#include <vector>
#include <alibabacloud/models/GetFeatureDetailsResponseBodyTerraformSupportedVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetFeatureDetailsResponseBodyTerraform : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureDetailsResponseBodyTerraform& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedResourceTypes, supportedResourceTypes_);
      DARABONBA_PTR_TO_JSON(SupportedVersions, supportedVersions_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureDetailsResponseBodyTerraform& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedResourceTypes, supportedResourceTypes_);
      DARABONBA_PTR_FROM_JSON(SupportedVersions, supportedVersions_);
    };
    GetFeatureDetailsResponseBodyTerraform() = default ;
    GetFeatureDetailsResponseBodyTerraform(const GetFeatureDetailsResponseBodyTerraform &) = default ;
    GetFeatureDetailsResponseBodyTerraform(GetFeatureDetailsResponseBodyTerraform &&) = default ;
    GetFeatureDetailsResponseBodyTerraform(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureDetailsResponseBodyTerraform() = default ;
    GetFeatureDetailsResponseBodyTerraform& operator=(const GetFeatureDetailsResponseBodyTerraform &) = default ;
    GetFeatureDetailsResponseBodyTerraform& operator=(GetFeatureDetailsResponseBodyTerraform &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportedResourceTypes_ != nullptr
        && this->supportedVersions_ != nullptr; };
    // supportedResourceTypes Field Functions 
    bool hasSupportedResourceTypes() const { return this->supportedResourceTypes_ != nullptr;};
    void deleteSupportedResourceTypes() { this->supportedResourceTypes_ = nullptr;};
    inline const Models::GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes & supportedResourceTypes() const { DARABONBA_PTR_GET_CONST(supportedResourceTypes_, Models::GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes) };
    inline Models::GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes supportedResourceTypes() { DARABONBA_PTR_GET(supportedResourceTypes_, Models::GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes) };
    inline GetFeatureDetailsResponseBodyTerraform& setSupportedResourceTypes(const Models::GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes & supportedResourceTypes) { DARABONBA_PTR_SET_VALUE(supportedResourceTypes_, supportedResourceTypes) };
    inline GetFeatureDetailsResponseBodyTerraform& setSupportedResourceTypes(Models::GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes && supportedResourceTypes) { DARABONBA_PTR_SET_RVALUE(supportedResourceTypes_, supportedResourceTypes) };


    // supportedVersions Field Functions 
    bool hasSupportedVersions() const { return this->supportedVersions_ != nullptr;};
    void deleteSupportedVersions() { this->supportedVersions_ = nullptr;};
    inline const vector<Models::GetFeatureDetailsResponseBodyTerraformSupportedVersions> & supportedVersions() const { DARABONBA_PTR_GET_CONST(supportedVersions_, vector<Models::GetFeatureDetailsResponseBodyTerraformSupportedVersions>) };
    inline vector<Models::GetFeatureDetailsResponseBodyTerraformSupportedVersions> supportedVersions() { DARABONBA_PTR_GET(supportedVersions_, vector<Models::GetFeatureDetailsResponseBodyTerraformSupportedVersions>) };
    inline GetFeatureDetailsResponseBodyTerraform& setSupportedVersions(const vector<Models::GetFeatureDetailsResponseBodyTerraformSupportedVersions> & supportedVersions) { DARABONBA_PTR_SET_VALUE(supportedVersions_, supportedVersions) };
    inline GetFeatureDetailsResponseBodyTerraform& setSupportedVersions(vector<Models::GetFeatureDetailsResponseBodyTerraformSupportedVersions> && supportedVersions) { DARABONBA_PTR_SET_RVALUE(supportedVersions_, supportedVersions) };


  protected:
    // The resource types that support the scenario feature.
    std::shared_ptr<Models::GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes> supportedResourceTypes_ = nullptr;
    // The Terraform versions.
    std::shared_ptr<vector<Models::GetFeatureDetailsResponseBodyTerraformSupportedVersions>> supportedVersions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
