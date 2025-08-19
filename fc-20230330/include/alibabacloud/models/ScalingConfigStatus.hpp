// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGCONFIGSTATUS_HPP_
#define ALIBABACLOUD_MODELS_SCALINGCONFIGSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResidentConfig.hpp>
#include <alibabacloud/models/ScalingStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ScalingConfigStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingConfigStatus& obj) { 
      DARABONBA_PTR_TO_JSON(functionName, functionName_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(residentConfig, residentConfig_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(scalingStatus, scalingStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingConfigStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(residentConfig, residentConfig_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(scalingStatus, scalingStatus_);
    };
    ScalingConfigStatus() = default ;
    ScalingConfigStatus(const ScalingConfigStatus &) = default ;
    ScalingConfigStatus(ScalingConfigStatus &&) = default ;
    ScalingConfigStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingConfigStatus() = default ;
    ScalingConfigStatus& operator=(const ScalingConfigStatus &) = default ;
    ScalingConfigStatus& operator=(ScalingConfigStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->functionName_ != nullptr
        && this->qualifier_ != nullptr && this->residentConfig_ != nullptr && this->resourceType_ != nullptr && this->scalingStatus_ != nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline ScalingConfigStatus& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline ScalingConfigStatus& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // residentConfig Field Functions 
    bool hasResidentConfig() const { return this->residentConfig_ != nullptr;};
    void deleteResidentConfig() { this->residentConfig_ = nullptr;};
    inline const ResidentConfig & residentConfig() const { DARABONBA_PTR_GET_CONST(residentConfig_, ResidentConfig) };
    inline ResidentConfig residentConfig() { DARABONBA_PTR_GET(residentConfig_, ResidentConfig) };
    inline ScalingConfigStatus& setResidentConfig(const ResidentConfig & residentConfig) { DARABONBA_PTR_SET_VALUE(residentConfig_, residentConfig) };
    inline ScalingConfigStatus& setResidentConfig(ResidentConfig && residentConfig) { DARABONBA_PTR_SET_RVALUE(residentConfig_, residentConfig) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ScalingConfigStatus& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // scalingStatus Field Functions 
    bool hasScalingStatus() const { return this->scalingStatus_ != nullptr;};
    void deleteScalingStatus() { this->scalingStatus_ = nullptr;};
    inline const ScalingStatus & scalingStatus() const { DARABONBA_PTR_GET_CONST(scalingStatus_, ScalingStatus) };
    inline ScalingStatus scalingStatus() { DARABONBA_PTR_GET(scalingStatus_, ScalingStatus) };
    inline ScalingConfigStatus& setScalingStatus(const ScalingStatus & scalingStatus) { DARABONBA_PTR_SET_VALUE(scalingStatus_, scalingStatus) };
    inline ScalingConfigStatus& setScalingStatus(ScalingStatus && scalingStatus) { DARABONBA_PTR_SET_RVALUE(scalingStatus_, scalingStatus) };


  protected:
    std::shared_ptr<string> functionName_ = nullptr;
    std::shared_ptr<string> qualifier_ = nullptr;
    std::shared_ptr<ResidentConfig> residentConfig_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<ScalingStatus> scalingStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
