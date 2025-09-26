// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIFALLBACKSERVICECONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIFALLBACKSERVICECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class AiFallbackServiceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiFallbackServiceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(passThroughModelName, passThroughModelName_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      DARABONBA_PTR_TO_JSON(targetModelName, targetModelName_);
    };
    friend void from_json(const Darabonba::Json& j, AiFallbackServiceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(passThroughModelName, passThroughModelName_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(targetModelName, targetModelName_);
    };
    AiFallbackServiceConfig() = default ;
    AiFallbackServiceConfig(const AiFallbackServiceConfig &) = default ;
    AiFallbackServiceConfig(AiFallbackServiceConfig &&) = default ;
    AiFallbackServiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiFallbackServiceConfig() = default ;
    AiFallbackServiceConfig& operator=(const AiFallbackServiceConfig &) = default ;
    AiFallbackServiceConfig& operator=(AiFallbackServiceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passThroughModelName_ != nullptr
        && this->serviceId_ != nullptr && this->targetModelName_ != nullptr; };
    // passThroughModelName Field Functions 
    bool hasPassThroughModelName() const { return this->passThroughModelName_ != nullptr;};
    void deletePassThroughModelName() { this->passThroughModelName_ = nullptr;};
    inline bool passThroughModelName() const { DARABONBA_PTR_GET_DEFAULT(passThroughModelName_, false) };
    inline AiFallbackServiceConfig& setPassThroughModelName(bool passThroughModelName) { DARABONBA_PTR_SET_VALUE(passThroughModelName_, passThroughModelName) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline AiFallbackServiceConfig& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // targetModelName Field Functions 
    bool hasTargetModelName() const { return this->targetModelName_ != nullptr;};
    void deleteTargetModelName() { this->targetModelName_ = nullptr;};
    inline string targetModelName() const { DARABONBA_PTR_GET_DEFAULT(targetModelName_, "") };
    inline AiFallbackServiceConfig& setTargetModelName(string targetModelName) { DARABONBA_PTR_SET_VALUE(targetModelName_, targetModelName) };


  protected:
    std::shared_ptr<bool> passThroughModelName_ = nullptr;
    std::shared_ptr<string> serviceId_ = nullptr;
    std::shared_ptr<string> targetModelName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
