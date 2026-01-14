// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIGHCODEDEPLOYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HIGHCODEDEPLOYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class HighCodeDeployRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HighCodeDeployRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentDesc, agentDesc_);
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(agentName, agentName_);
      DARABONBA_PTR_TO_JSON(sourceCodeName, sourceCodeName_);
      DARABONBA_PTR_TO_JSON(sourceCodeOssUrl, sourceCodeOssUrl_);
      DARABONBA_PTR_TO_JSON(telemetryEnabled, telemetryEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, HighCodeDeployRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentDesc, agentDesc_);
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(agentName, agentName_);
      DARABONBA_PTR_FROM_JSON(sourceCodeName, sourceCodeName_);
      DARABONBA_PTR_FROM_JSON(sourceCodeOssUrl, sourceCodeOssUrl_);
      DARABONBA_PTR_FROM_JSON(telemetryEnabled, telemetryEnabled_);
    };
    HighCodeDeployRequest() = default ;
    HighCodeDeployRequest(const HighCodeDeployRequest &) = default ;
    HighCodeDeployRequest(HighCodeDeployRequest &&) = default ;
    HighCodeDeployRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HighCodeDeployRequest() = default ;
    HighCodeDeployRequest& operator=(const HighCodeDeployRequest &) = default ;
    HighCodeDeployRequest& operator=(HighCodeDeployRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentDesc_ == nullptr
        && this->agentId_ == nullptr && this->agentName_ == nullptr && this->sourceCodeName_ == nullptr && this->sourceCodeOssUrl_ == nullptr && this->telemetryEnabled_ == nullptr; };
    // agentDesc Field Functions 
    bool hasAgentDesc() const { return this->agentDesc_ != nullptr;};
    void deleteAgentDesc() { this->agentDesc_ = nullptr;};
    inline string getAgentDesc() const { DARABONBA_PTR_GET_DEFAULT(agentDesc_, "") };
    inline HighCodeDeployRequest& setAgentDesc(string agentDesc) { DARABONBA_PTR_SET_VALUE(agentDesc_, agentDesc) };


    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline HighCodeDeployRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline HighCodeDeployRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // sourceCodeName Field Functions 
    bool hasSourceCodeName() const { return this->sourceCodeName_ != nullptr;};
    void deleteSourceCodeName() { this->sourceCodeName_ = nullptr;};
    inline string getSourceCodeName() const { DARABONBA_PTR_GET_DEFAULT(sourceCodeName_, "") };
    inline HighCodeDeployRequest& setSourceCodeName(string sourceCodeName) { DARABONBA_PTR_SET_VALUE(sourceCodeName_, sourceCodeName) };


    // sourceCodeOssUrl Field Functions 
    bool hasSourceCodeOssUrl() const { return this->sourceCodeOssUrl_ != nullptr;};
    void deleteSourceCodeOssUrl() { this->sourceCodeOssUrl_ = nullptr;};
    inline string getSourceCodeOssUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceCodeOssUrl_, "") };
    inline HighCodeDeployRequest& setSourceCodeOssUrl(string sourceCodeOssUrl) { DARABONBA_PTR_SET_VALUE(sourceCodeOssUrl_, sourceCodeOssUrl) };


    // telemetryEnabled Field Functions 
    bool hasTelemetryEnabled() const { return this->telemetryEnabled_ != nullptr;};
    void deleteTelemetryEnabled() { this->telemetryEnabled_ = nullptr;};
    inline bool getTelemetryEnabled() const { DARABONBA_PTR_GET_DEFAULT(telemetryEnabled_, false) };
    inline HighCodeDeployRequest& setTelemetryEnabled(bool telemetryEnabled) { DARABONBA_PTR_SET_VALUE(telemetryEnabled_, telemetryEnabled) };


  protected:
    shared_ptr<string> agentDesc_ {};
    shared_ptr<string> agentId_ {};
    shared_ptr<string> agentName_ {};
    shared_ptr<string> sourceCodeName_ {};
    shared_ptr<string> sourceCodeOssUrl_ {};
    shared_ptr<bool> telemetryEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
