// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYTERRAFORMSUPPORTEDVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYTERRAFORMSUPPORTEDVERSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetFeatureDetailsResponseBodyTerraformSupportedVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureDetailsResponseBodyTerraformSupportedVersions& obj) { 
      DARABONBA_PTR_TO_JSON(ProviderVersions, providerVersions_);
      DARABONBA_PTR_TO_JSON(TerraformVersion, terraformVersion_);
      DARABONBA_PTR_TO_JSON(Transform, transform_);
      DARABONBA_PTR_TO_JSON(UpdateAllowedTransforms, updateAllowedTransforms_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureDetailsResponseBodyTerraformSupportedVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(ProviderVersions, providerVersions_);
      DARABONBA_PTR_FROM_JSON(TerraformVersion, terraformVersion_);
      DARABONBA_PTR_FROM_JSON(Transform, transform_);
      DARABONBA_PTR_FROM_JSON(UpdateAllowedTransforms, updateAllowedTransforms_);
    };
    GetFeatureDetailsResponseBodyTerraformSupportedVersions() = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedVersions(const GetFeatureDetailsResponseBodyTerraformSupportedVersions &) = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedVersions(GetFeatureDetailsResponseBodyTerraformSupportedVersions &&) = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureDetailsResponseBodyTerraformSupportedVersions() = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedVersions& operator=(const GetFeatureDetailsResponseBodyTerraformSupportedVersions &) = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedVersions& operator=(GetFeatureDetailsResponseBodyTerraformSupportedVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->providerVersions_ != nullptr
        && this->terraformVersion_ != nullptr && this->transform_ != nullptr && this->updateAllowedTransforms_ != nullptr; };
    // providerVersions Field Functions 
    bool hasProviderVersions() const { return this->providerVersions_ != nullptr;};
    void deleteProviderVersions() { this->providerVersions_ = nullptr;};
    inline const vector<Models::GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions> & providerVersions() const { DARABONBA_PTR_GET_CONST(providerVersions_, vector<Models::GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions>) };
    inline vector<Models::GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions> providerVersions() { DARABONBA_PTR_GET(providerVersions_, vector<Models::GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions>) };
    inline GetFeatureDetailsResponseBodyTerraformSupportedVersions& setProviderVersions(const vector<Models::GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions> & providerVersions) { DARABONBA_PTR_SET_VALUE(providerVersions_, providerVersions) };
    inline GetFeatureDetailsResponseBodyTerraformSupportedVersions& setProviderVersions(vector<Models::GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions> && providerVersions) { DARABONBA_PTR_SET_RVALUE(providerVersions_, providerVersions) };


    // terraformVersion Field Functions 
    bool hasTerraformVersion() const { return this->terraformVersion_ != nullptr;};
    void deleteTerraformVersion() { this->terraformVersion_ = nullptr;};
    inline string terraformVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformVersion_, "") };
    inline GetFeatureDetailsResponseBodyTerraformSupportedVersions& setTerraformVersion(string terraformVersion) { DARABONBA_PTR_SET_VALUE(terraformVersion_, terraformVersion) };


    // transform Field Functions 
    bool hasTransform() const { return this->transform_ != nullptr;};
    void deleteTransform() { this->transform_ = nullptr;};
    inline string transform() const { DARABONBA_PTR_GET_DEFAULT(transform_, "") };
    inline GetFeatureDetailsResponseBodyTerraformSupportedVersions& setTransform(string transform) { DARABONBA_PTR_SET_VALUE(transform_, transform) };


    // updateAllowedTransforms Field Functions 
    bool hasUpdateAllowedTransforms() const { return this->updateAllowedTransforms_ != nullptr;};
    void deleteUpdateAllowedTransforms() { this->updateAllowedTransforms_ = nullptr;};
    inline const vector<string> & updateAllowedTransforms() const { DARABONBA_PTR_GET_CONST(updateAllowedTransforms_, vector<string>) };
    inline vector<string> updateAllowedTransforms() { DARABONBA_PTR_GET(updateAllowedTransforms_, vector<string>) };
    inline GetFeatureDetailsResponseBodyTerraformSupportedVersions& setUpdateAllowedTransforms(const vector<string> & updateAllowedTransforms) { DARABONBA_PTR_SET_VALUE(updateAllowedTransforms_, updateAllowedTransforms) };
    inline GetFeatureDetailsResponseBodyTerraformSupportedVersions& setUpdateAllowedTransforms(vector<string> && updateAllowedTransforms) { DARABONBA_PTR_SET_RVALUE(updateAllowedTransforms_, updateAllowedTransforms) };


  protected:
    // The names and versions of the providers that correspond to the Terraform versions.
    std::shared_ptr<vector<Models::GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions>> providerVersions_ = nullptr;
    // The Terraform version.
    std::shared_ptr<string> terraformVersion_ = nullptr;
    // The Terraform version that is supported by ROS. The parameter value is the same as the value of the Transform parameter in a Terraform template.
    std::shared_ptr<string> transform_ = nullptr;
    // The Terraform versions that can be updated in ROS.
    std::shared_ptr<vector<string>> updateAllowedTransforms_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
