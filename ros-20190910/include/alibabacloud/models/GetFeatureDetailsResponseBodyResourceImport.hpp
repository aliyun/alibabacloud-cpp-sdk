// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYRESOURCEIMPORT_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYRESOURCEIMPORT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetFeatureDetailsResponseBodyResourceImport : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureDetailsResponseBodyResourceImport& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedResourceTypes, supportedResourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureDetailsResponseBodyResourceImport& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedResourceTypes, supportedResourceTypes_);
    };
    GetFeatureDetailsResponseBodyResourceImport() = default ;
    GetFeatureDetailsResponseBodyResourceImport(const GetFeatureDetailsResponseBodyResourceImport &) = default ;
    GetFeatureDetailsResponseBodyResourceImport(GetFeatureDetailsResponseBodyResourceImport &&) = default ;
    GetFeatureDetailsResponseBodyResourceImport(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureDetailsResponseBodyResourceImport() = default ;
    GetFeatureDetailsResponseBodyResourceImport& operator=(const GetFeatureDetailsResponseBodyResourceImport &) = default ;
    GetFeatureDetailsResponseBodyResourceImport& operator=(GetFeatureDetailsResponseBodyResourceImport &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportedResourceTypes_ != nullptr; };
    // supportedResourceTypes Field Functions 
    bool hasSupportedResourceTypes() const { return this->supportedResourceTypes_ != nullptr;};
    void deleteSupportedResourceTypes() { this->supportedResourceTypes_ = nullptr;};
    inline const vector<Models::GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes> & supportedResourceTypes() const { DARABONBA_PTR_GET_CONST(supportedResourceTypes_, vector<Models::GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes>) };
    inline vector<Models::GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes> supportedResourceTypes() { DARABONBA_PTR_GET(supportedResourceTypes_, vector<Models::GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes>) };
    inline GetFeatureDetailsResponseBodyResourceImport& setSupportedResourceTypes(const vector<Models::GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes> & supportedResourceTypes) { DARABONBA_PTR_SET_VALUE(supportedResourceTypes_, supportedResourceTypes) };
    inline GetFeatureDetailsResponseBodyResourceImport& setSupportedResourceTypes(vector<Models::GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes> && supportedResourceTypes) { DARABONBA_PTR_SET_RVALUE(supportedResourceTypes_, supportedResourceTypes) };


  protected:
    // The resource types that are supported by the resource import feature.
    std::shared_ptr<vector<Models::GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes>> supportedResourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
