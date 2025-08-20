// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYRESOURCECLEANER_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYRESOURCECLEANER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetFeatureDetailsResponseBodyResourceCleaner : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureDetailsResponseBodyResourceCleaner& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedResourceTypes, supportedResourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureDetailsResponseBodyResourceCleaner& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedResourceTypes, supportedResourceTypes_);
    };
    GetFeatureDetailsResponseBodyResourceCleaner() = default ;
    GetFeatureDetailsResponseBodyResourceCleaner(const GetFeatureDetailsResponseBodyResourceCleaner &) = default ;
    GetFeatureDetailsResponseBodyResourceCleaner(GetFeatureDetailsResponseBodyResourceCleaner &&) = default ;
    GetFeatureDetailsResponseBodyResourceCleaner(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureDetailsResponseBodyResourceCleaner() = default ;
    GetFeatureDetailsResponseBodyResourceCleaner& operator=(const GetFeatureDetailsResponseBodyResourceCleaner &) = default ;
    GetFeatureDetailsResponseBodyResourceCleaner& operator=(GetFeatureDetailsResponseBodyResourceCleaner &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportedResourceTypes_ != nullptr; };
    // supportedResourceTypes Field Functions 
    bool hasSupportedResourceTypes() const { return this->supportedResourceTypes_ != nullptr;};
    void deleteSupportedResourceTypes() { this->supportedResourceTypes_ = nullptr;};
    inline const vector<Models::GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes> & supportedResourceTypes() const { DARABONBA_PTR_GET_CONST(supportedResourceTypes_, vector<Models::GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes>) };
    inline vector<Models::GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes> supportedResourceTypes() { DARABONBA_PTR_GET(supportedResourceTypes_, vector<Models::GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes>) };
    inline GetFeatureDetailsResponseBodyResourceCleaner& setSupportedResourceTypes(const vector<Models::GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes> & supportedResourceTypes) { DARABONBA_PTR_SET_VALUE(supportedResourceTypes_, supportedResourceTypes) };
    inline GetFeatureDetailsResponseBodyResourceCleaner& setSupportedResourceTypes(vector<Models::GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes> && supportedResourceTypes) { DARABONBA_PTR_SET_RVALUE(supportedResourceTypes_, supportedResourceTypes) };


  protected:
    // The resource types that can be cleaned up.
    std::shared_ptr<vector<Models::GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes>> supportedResourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
