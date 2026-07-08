// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATEINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATEINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LogConfiguration.hpp>
#include <alibabacloud/models/NetworkConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class UpdateTemplateInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTemplateInput& obj) { 
      DARABONBA_PTR_TO_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTemplateInput& obj) { 
      DARABONBA_PTR_FROM_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
    };
    UpdateTemplateInput() = default ;
    UpdateTemplateInput(const UpdateTemplateInput &) = default ;
    UpdateTemplateInput(UpdateTemplateInput &&) = default ;
    UpdateTemplateInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTemplateInput() = default ;
    UpdateTemplateInput& operator=(const UpdateTemplateInput &) = default ;
    UpdateTemplateInput& operator=(UpdateTemplateInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logConfiguration_ == nullptr
        && this->networkConfiguration_ == nullptr; };
    // logConfiguration Field Functions 
    bool hasLogConfiguration() const { return this->logConfiguration_ != nullptr;};
    void deleteLogConfiguration() { this->logConfiguration_ = nullptr;};
    inline const LogConfiguration & getLogConfiguration() const { DARABONBA_PTR_GET_CONST(logConfiguration_, LogConfiguration) };
    inline LogConfiguration getLogConfiguration() { DARABONBA_PTR_GET(logConfiguration_, LogConfiguration) };
    inline UpdateTemplateInput& setLogConfiguration(const LogConfiguration & logConfiguration) { DARABONBA_PTR_SET_VALUE(logConfiguration_, logConfiguration) };
    inline UpdateTemplateInput& setLogConfiguration(LogConfiguration && logConfiguration) { DARABONBA_PTR_SET_RVALUE(logConfiguration_, logConfiguration) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & getNetworkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration getNetworkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline UpdateTemplateInput& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline UpdateTemplateInput& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


  protected:
    shared_ptr<LogConfiguration> logConfiguration_ {};
    shared_ptr<NetworkConfiguration> networkConfiguration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
