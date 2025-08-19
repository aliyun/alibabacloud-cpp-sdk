// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCALINGCONFIGSTATUSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_GETSCALINGCONFIGSTATUSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ScalingConfigStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class GetScalingConfigStatusOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScalingConfigStatusOutput& obj) { 
      DARABONBA_PTR_TO_JSON(scalingConfigStatus, scalingConfigStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetScalingConfigStatusOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(scalingConfigStatus, scalingConfigStatus_);
    };
    GetScalingConfigStatusOutput() = default ;
    GetScalingConfigStatusOutput(const GetScalingConfigStatusOutput &) = default ;
    GetScalingConfigStatusOutput(GetScalingConfigStatusOutput &&) = default ;
    GetScalingConfigStatusOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScalingConfigStatusOutput() = default ;
    GetScalingConfigStatusOutput& operator=(const GetScalingConfigStatusOutput &) = default ;
    GetScalingConfigStatusOutput& operator=(GetScalingConfigStatusOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scalingConfigStatus_ != nullptr; };
    // scalingConfigStatus Field Functions 
    bool hasScalingConfigStatus() const { return this->scalingConfigStatus_ != nullptr;};
    void deleteScalingConfigStatus() { this->scalingConfigStatus_ = nullptr;};
    inline const ScalingConfigStatus & scalingConfigStatus() const { DARABONBA_PTR_GET_CONST(scalingConfigStatus_, ScalingConfigStatus) };
    inline ScalingConfigStatus scalingConfigStatus() { DARABONBA_PTR_GET(scalingConfigStatus_, ScalingConfigStatus) };
    inline GetScalingConfigStatusOutput& setScalingConfigStatus(const ScalingConfigStatus & scalingConfigStatus) { DARABONBA_PTR_SET_VALUE(scalingConfigStatus_, scalingConfigStatus) };
    inline GetScalingConfigStatusOutput& setScalingConfigStatus(ScalingConfigStatus && scalingConfigStatus) { DARABONBA_PTR_SET_RVALUE(scalingConfigStatus_, scalingConfigStatus) };


  protected:
    std::shared_ptr<ScalingConfigStatus> scalingConfigStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
