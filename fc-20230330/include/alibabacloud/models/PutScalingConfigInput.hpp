// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTSCALINGCONFIGINPUT_HPP_
#define ALIBABACLOUD_MODELS_PUTSCALINGCONFIGINPUT_HPP_
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
  class PutScalingConfigInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutScalingConfigInput& obj) { 
      DARABONBA_PTR_TO_JSON(residentConfig, residentConfig_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, PutScalingConfigInput& obj) { 
      DARABONBA_PTR_FROM_JSON(residentConfig, residentConfig_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    PutScalingConfigInput() = default ;
    PutScalingConfigInput(const PutScalingConfigInput &) = default ;
    PutScalingConfigInput(PutScalingConfigInput &&) = default ;
    PutScalingConfigInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutScalingConfigInput() = default ;
    PutScalingConfigInput& operator=(const PutScalingConfigInput &) = default ;
    PutScalingConfigInput& operator=(PutScalingConfigInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->residentConfig_ != nullptr
        && this->resourceType_ != nullptr; };
    // residentConfig Field Functions 
    bool hasResidentConfig() const { return this->residentConfig_ != nullptr;};
    void deleteResidentConfig() { this->residentConfig_ = nullptr;};
    inline const ResidentConfig & residentConfig() const { DARABONBA_PTR_GET_CONST(residentConfig_, ResidentConfig) };
    inline ResidentConfig residentConfig() { DARABONBA_PTR_GET(residentConfig_, ResidentConfig) };
    inline PutScalingConfigInput& setResidentConfig(const ResidentConfig & residentConfig) { DARABONBA_PTR_SET_VALUE(residentConfig_, residentConfig) };
    inline PutScalingConfigInput& setResidentConfig(ResidentConfig && residentConfig) { DARABONBA_PTR_SET_RVALUE(residentConfig_, residentConfig) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline PutScalingConfigInput& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<ResidentConfig> residentConfig_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
