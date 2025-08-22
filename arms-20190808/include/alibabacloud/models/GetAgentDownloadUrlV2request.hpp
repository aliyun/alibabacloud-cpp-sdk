// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTDOWNLOADURLV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTDOWNLOADURLV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetAgentDownloadUrlV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentDownloadUrlV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(AgentType, agentType_);
      DARABONBA_PTR_TO_JSON(ArchType, archType_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentDownloadUrlV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
      DARABONBA_PTR_FROM_JSON(ArchType, archType_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
    };
    GetAgentDownloadUrlV2Request() = default ;
    GetAgentDownloadUrlV2Request(const GetAgentDownloadUrlV2Request &) = default ;
    GetAgentDownloadUrlV2Request(GetAgentDownloadUrlV2Request &&) = default ;
    GetAgentDownloadUrlV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentDownloadUrlV2Request() = default ;
    GetAgentDownloadUrlV2Request& operator=(const GetAgentDownloadUrlV2Request &) = default ;
    GetAgentDownloadUrlV2Request& operator=(GetAgentDownloadUrlV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentType_ != nullptr
        && this->archType_ != nullptr && this->osType_ != nullptr; };
    // agentType Field Functions 
    bool hasAgentType() const { return this->agentType_ != nullptr;};
    void deleteAgentType() { this->agentType_ = nullptr;};
    inline string agentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
    inline GetAgentDownloadUrlV2Request& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


    // archType Field Functions 
    bool hasArchType() const { return this->archType_ != nullptr;};
    void deleteArchType() { this->archType_ = nullptr;};
    inline string archType() const { DARABONBA_PTR_GET_DEFAULT(archType_, "") };
    inline GetAgentDownloadUrlV2Request& setArchType(string archType) { DARABONBA_PTR_SET_VALUE(archType_, archType) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline GetAgentDownloadUrlV2Request& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


  protected:
    // The agent type.\\
    // **Valid values:**
    // 
    // *   **JavaAgent**
    // *   **Instgo**
    // 
    // This parameter is required.
    std::shared_ptr<string> agentType_ = nullptr;
    // The architecture type of the environment where the agent is installed.\\
    // This parameter is required and valid only when **AgentType** is set to **Instgo**.\\
    // **Valid values:**
    // 
    // *   **amd64**
    // *   **arm64**
    std::shared_ptr<string> archType_ = nullptr;
    // The operating system of the environment where the agent is installed.\\
    // This parameter is required and valid only when **AgentType** is set to **Instgo**.\\
    // **Valid values:**
    // 
    // *   **linux**
    // *   **darwin**
    // *   **windows**
    std::shared_ptr<string> osType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
