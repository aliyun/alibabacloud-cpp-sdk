// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARAMETERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPARAMETERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetParameterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetParameterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParameterVersion, parameterVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetParameterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParameterVersion, parameterVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    GetParameterRequest() = default ;
    GetParameterRequest(const GetParameterRequest &) = default ;
    GetParameterRequest(GetParameterRequest &&) = default ;
    GetParameterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetParameterRequest() = default ;
    GetParameterRequest& operator=(const GetParameterRequest &) = default ;
    GetParameterRequest& operator=(GetParameterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->parameterVersion_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetParameterRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parameterVersion Field Functions 
    bool hasParameterVersion() const { return this->parameterVersion_ != nullptr;};
    void deleteParameterVersion() { this->parameterVersion_ = nullptr;};
    inline int32_t parameterVersion() const { DARABONBA_PTR_GET_DEFAULT(parameterVersion_, 0) };
    inline GetParameterRequest& setParameterVersion(int32_t parameterVersion) { DARABONBA_PTR_SET_VALUE(parameterVersion_, parameterVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetParameterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetParameterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The name of the common parameter. The name can be up to 200 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The version number of the common parameter. Valid values: 1 to 100.
    std::shared_ptr<int32_t> parameterVersion_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
