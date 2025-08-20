// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYTEMPLATEPARAMETERCONSTRAINTS_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYTEMPLATEPARAMETERCONSTRAINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetFeatureDetailsResponseBodyTemplateParameterConstraints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureDetailsResponseBodyTemplateParameterConstraints& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedResourceTypes, supportedResourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureDetailsResponseBodyTemplateParameterConstraints& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedResourceTypes, supportedResourceTypes_);
    };
    GetFeatureDetailsResponseBodyTemplateParameterConstraints() = default ;
    GetFeatureDetailsResponseBodyTemplateParameterConstraints(const GetFeatureDetailsResponseBodyTemplateParameterConstraints &) = default ;
    GetFeatureDetailsResponseBodyTemplateParameterConstraints(GetFeatureDetailsResponseBodyTemplateParameterConstraints &&) = default ;
    GetFeatureDetailsResponseBodyTemplateParameterConstraints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureDetailsResponseBodyTemplateParameterConstraints() = default ;
    GetFeatureDetailsResponseBodyTemplateParameterConstraints& operator=(const GetFeatureDetailsResponseBodyTemplateParameterConstraints &) = default ;
    GetFeatureDetailsResponseBodyTemplateParameterConstraints& operator=(GetFeatureDetailsResponseBodyTemplateParameterConstraints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportedResourceTypes_ != nullptr; };
    // supportedResourceTypes Field Functions 
    bool hasSupportedResourceTypes() const { return this->supportedResourceTypes_ != nullptr;};
    void deleteSupportedResourceTypes() { this->supportedResourceTypes_ = nullptr;};
    inline const vector<Models::GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes> & supportedResourceTypes() const { DARABONBA_PTR_GET_CONST(supportedResourceTypes_, vector<Models::GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes>) };
    inline vector<Models::GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes> supportedResourceTypes() { DARABONBA_PTR_GET(supportedResourceTypes_, vector<Models::GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes>) };
    inline GetFeatureDetailsResponseBodyTemplateParameterConstraints& setSupportedResourceTypes(const vector<Models::GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes> & supportedResourceTypes) { DARABONBA_PTR_SET_VALUE(supportedResourceTypes_, supportedResourceTypes) };
    inline GetFeatureDetailsResponseBodyTemplateParameterConstraints& setSupportedResourceTypes(vector<Models::GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes> && supportedResourceTypes) { DARABONBA_PTR_SET_RVALUE(supportedResourceTypes_, supportedResourceTypes) };


  protected:
    // The resource types that support the template parameter constraint feature.
    std::shared_ptr<vector<Models::GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes>> supportedResourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
