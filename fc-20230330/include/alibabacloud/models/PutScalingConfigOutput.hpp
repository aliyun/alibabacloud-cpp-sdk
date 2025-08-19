// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTSCALINGCONFIGOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_PUTSCALINGCONFIGOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResidentConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class PutScalingConfigOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutScalingConfigOutput& obj) { 
      DARABONBA_PTR_TO_JSON(functionName, functionName_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(residentConfig, residentConfig_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, PutScalingConfigOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(residentConfig, residentConfig_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    PutScalingConfigOutput() = default ;
    PutScalingConfigOutput(const PutScalingConfigOutput &) = default ;
    PutScalingConfigOutput(PutScalingConfigOutput &&) = default ;
    PutScalingConfigOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutScalingConfigOutput() = default ;
    PutScalingConfigOutput& operator=(const PutScalingConfigOutput &) = default ;
    PutScalingConfigOutput& operator=(PutScalingConfigOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->functionName_ != nullptr
        && this->qualifier_ != nullptr && this->residentConfig_ != nullptr && this->resourceType_ != nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline PutScalingConfigOutput& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline PutScalingConfigOutput& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // residentConfig Field Functions 
    bool hasResidentConfig() const { return this->residentConfig_ != nullptr;};
    void deleteResidentConfig() { this->residentConfig_ = nullptr;};
    inline const ResidentConfig & residentConfig() const { DARABONBA_PTR_GET_CONST(residentConfig_, ResidentConfig) };
    inline ResidentConfig residentConfig() { DARABONBA_PTR_GET(residentConfig_, ResidentConfig) };
    inline PutScalingConfigOutput& setResidentConfig(const ResidentConfig & residentConfig) { DARABONBA_PTR_SET_VALUE(residentConfig_, residentConfig) };
    inline PutScalingConfigOutput& setResidentConfig(ResidentConfig && residentConfig) { DARABONBA_PTR_SET_RVALUE(residentConfig_, residentConfig) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline PutScalingConfigOutput& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<string> functionName_ = nullptr;
    std::shared_ptr<string> qualifier_ = nullptr;
    std::shared_ptr<ResidentConfig> residentConfig_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
