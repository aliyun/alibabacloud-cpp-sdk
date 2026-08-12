// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATEINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATEINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ContainerConfiguration.hpp>
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
      DARABONBA_PTR_TO_JSON(containerConfiguration, containerConfiguration_);
      DARABONBA_PTR_TO_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTemplateInput& obj) { 
      DARABONBA_PTR_FROM_JSON(containerConfiguration, containerConfiguration_);
      DARABONBA_PTR_FROM_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
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
    virtual bool empty() const override { return this->containerConfiguration_ == nullptr
        && this->logConfiguration_ == nullptr && this->networkConfiguration_ == nullptr && this->teamID_ == nullptr; };
    // containerConfiguration Field Functions 
    bool hasContainerConfiguration() const { return this->containerConfiguration_ != nullptr;};
    void deleteContainerConfiguration() { this->containerConfiguration_ = nullptr;};
    inline const ContainerConfiguration & getContainerConfiguration() const { DARABONBA_PTR_GET_CONST(containerConfiguration_, ContainerConfiguration) };
    inline ContainerConfiguration getContainerConfiguration() { DARABONBA_PTR_GET(containerConfiguration_, ContainerConfiguration) };
    inline UpdateTemplateInput& setContainerConfiguration(const ContainerConfiguration & containerConfiguration) { DARABONBA_PTR_SET_VALUE(containerConfiguration_, containerConfiguration) };
    inline UpdateTemplateInput& setContainerConfiguration(ContainerConfiguration && containerConfiguration) { DARABONBA_PTR_SET_RVALUE(containerConfiguration_, containerConfiguration) };


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


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline UpdateTemplateInput& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


  protected:
    shared_ptr<ContainerConfiguration> containerConfiguration_ {};
    shared_ptr<LogConfiguration> logConfiguration_ {};
    shared_ptr<NetworkConfiguration> networkConfiguration_ {};
    shared_ptr<string> teamID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
