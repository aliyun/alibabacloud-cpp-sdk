// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYTEMPLATESCRATCH_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYTEMPLATESCRATCH_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetFeatureDetailsResponseBodyTemplateScratch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureDetailsResponseBodyTemplateScratch& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedResourceTypes, supportedResourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureDetailsResponseBodyTemplateScratch& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedResourceTypes, supportedResourceTypes_);
    };
    GetFeatureDetailsResponseBodyTemplateScratch() = default ;
    GetFeatureDetailsResponseBodyTemplateScratch(const GetFeatureDetailsResponseBodyTemplateScratch &) = default ;
    GetFeatureDetailsResponseBodyTemplateScratch(GetFeatureDetailsResponseBodyTemplateScratch &&) = default ;
    GetFeatureDetailsResponseBodyTemplateScratch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureDetailsResponseBodyTemplateScratch() = default ;
    GetFeatureDetailsResponseBodyTemplateScratch& operator=(const GetFeatureDetailsResponseBodyTemplateScratch &) = default ;
    GetFeatureDetailsResponseBodyTemplateScratch& operator=(GetFeatureDetailsResponseBodyTemplateScratch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportedResourceTypes_ != nullptr; };
    // supportedResourceTypes Field Functions 
    bool hasSupportedResourceTypes() const { return this->supportedResourceTypes_ != nullptr;};
    void deleteSupportedResourceTypes() { this->supportedResourceTypes_ = nullptr;};
    inline const vector<Models::GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes> & supportedResourceTypes() const { DARABONBA_PTR_GET_CONST(supportedResourceTypes_, vector<Models::GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes>) };
    inline vector<Models::GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes> supportedResourceTypes() { DARABONBA_PTR_GET(supportedResourceTypes_, vector<Models::GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes>) };
    inline GetFeatureDetailsResponseBodyTemplateScratch& setSupportedResourceTypes(const vector<Models::GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes> & supportedResourceTypes) { DARABONBA_PTR_SET_VALUE(supportedResourceTypes_, supportedResourceTypes) };
    inline GetFeatureDetailsResponseBodyTemplateScratch& setSupportedResourceTypes(vector<Models::GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes> && supportedResourceTypes) { DARABONBA_PTR_SET_RVALUE(supportedResourceTypes_, supportedResourceTypes) };


  protected:
    // The resource types that are supported by the scenario feature.
    std::shared_ptr<vector<Models::GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes>> supportedResourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
