// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYTERRAFORMSUPPORTEDRESOURCETYPESSTACKOPERATIONRISK_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYTERRAFORMSUPPORTEDRESOURCETYPESSTACKOPERATIONRISK_HPP_
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
  class GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteStack, deleteStack_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteStack, deleteStack_);
    };
    GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk() = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk(const GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk &) = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk(GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk &&) = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk() = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk& operator=(const GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk &) = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk& operator=(GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deleteStack_ != nullptr; };
    // deleteStack Field Functions 
    bool hasDeleteStack() const { return this->deleteStack_ != nullptr;};
    void deleteDeleteStack() { this->deleteStack_ = nullptr;};
    inline const vector<string> & deleteStack() const { DARABONBA_PTR_GET_CONST(deleteStack_, vector<string>) };
    inline vector<string> deleteStack() { DARABONBA_PTR_GET(deleteStack_, vector<string>) };
    inline GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk& setDeleteStack(const vector<string> & deleteStack) { DARABONBA_PTR_SET_VALUE(deleteStack_, deleteStack) };
    inline GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk& setDeleteStack(vector<string> && deleteStack) { DARABONBA_PTR_SET_RVALUE(deleteStack_, deleteStack) };


  protected:
    // The resource types that support the risk check performed to detect risks caused by a stack deletion operation.
    std::shared_ptr<vector<string>> deleteStack_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
