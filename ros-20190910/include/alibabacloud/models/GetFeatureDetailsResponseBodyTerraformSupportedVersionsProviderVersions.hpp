// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYTERRAFORMSUPPORTEDVERSIONSPROVIDERVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYTERRAFORMSUPPORTEDVERSIONSPROVIDERVERSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions& obj) { 
      DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
      DARABONBA_PTR_TO_JSON(SupportedVersions, supportedVersions_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
      DARABONBA_PTR_FROM_JSON(SupportedVersions, supportedVersions_);
    };
    GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions() = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions(const GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions &) = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions(GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions &&) = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions() = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions& operator=(const GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions &) = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions& operator=(GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->providerName_ != nullptr
        && this->supportedVersions_ != nullptr; };
    // providerName Field Functions 
    bool hasProviderName() const { return this->providerName_ != nullptr;};
    void deleteProviderName() { this->providerName_ = nullptr;};
    inline string providerName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
    inline GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


    // supportedVersions Field Functions 
    bool hasSupportedVersions() const { return this->supportedVersions_ != nullptr;};
    void deleteSupportedVersions() { this->supportedVersions_ = nullptr;};
    inline const vector<string> & supportedVersions() const { DARABONBA_PTR_GET_CONST(supportedVersions_, vector<string>) };
    inline vector<string> supportedVersions() { DARABONBA_PTR_GET(supportedVersions_, vector<string>) };
    inline GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions& setSupportedVersions(const vector<string> & supportedVersions) { DARABONBA_PTR_SET_VALUE(supportedVersions_, supportedVersions) };
    inline GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions& setSupportedVersions(vector<string> && supportedVersions) { DARABONBA_PTR_SET_RVALUE(supportedVersions_, supportedVersions) };


  protected:
    // The name of the provider.
    std::shared_ptr<string> providerName_ = nullptr;
    // The provider versions.
    std::shared_ptr<vector<string>> supportedVersions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
