// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MCPAPICONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_MCPAPICONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class MCPAPIConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MCPAPIConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(exposedUriPath, exposedUriPath_);
      DARABONBA_PTR_TO_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(toolId, toolId_);
    };
    friend void from_json(const Darabonba::Json& j, MCPAPIConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(exposedUriPath, exposedUriPath_);
      DARABONBA_PTR_FROM_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(toolId, toolId_);
    };
    MCPAPIConfiguration() = default ;
    MCPAPIConfiguration(const MCPAPIConfiguration &) = default ;
    MCPAPIConfiguration(MCPAPIConfiguration &&) = default ;
    MCPAPIConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MCPAPIConfiguration() = default ;
    MCPAPIConfiguration& operator=(const MCPAPIConfiguration &) = default ;
    MCPAPIConfiguration& operator=(MCPAPIConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->exposedUriPath_ != nullptr && this->mcpStatisticsEnable_ != nullptr && this->protocol_ != nullptr && this->toolId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline MCPAPIConfiguration& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // exposedUriPath Field Functions 
    bool hasExposedUriPath() const { return this->exposedUriPath_ != nullptr;};
    void deleteExposedUriPath() { this->exposedUriPath_ = nullptr;};
    inline string exposedUriPath() const { DARABONBA_PTR_GET_DEFAULT(exposedUriPath_, "") };
    inline MCPAPIConfiguration& setExposedUriPath(string exposedUriPath) { DARABONBA_PTR_SET_VALUE(exposedUriPath_, exposedUriPath) };


    // mcpStatisticsEnable Field Functions 
    bool hasMcpStatisticsEnable() const { return this->mcpStatisticsEnable_ != nullptr;};
    void deleteMcpStatisticsEnable() { this->mcpStatisticsEnable_ = nullptr;};
    inline bool mcpStatisticsEnable() const { DARABONBA_PTR_GET_DEFAULT(mcpStatisticsEnable_, false) };
    inline MCPAPIConfiguration& setMcpStatisticsEnable(bool mcpStatisticsEnable) { DARABONBA_PTR_SET_VALUE(mcpStatisticsEnable_, mcpStatisticsEnable) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline MCPAPIConfiguration& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // toolId Field Functions 
    bool hasToolId() const { return this->toolId_ != nullptr;};
    void deleteToolId() { this->toolId_ = nullptr;};
    inline string toolId() const { DARABONBA_PTR_GET_DEFAULT(toolId_, "") };
    inline MCPAPIConfiguration& setToolId(string toolId) { DARABONBA_PTR_SET_VALUE(toolId_, toolId) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> exposedUriPath_ = nullptr;
    std::shared_ptr<bool> mcpStatisticsEnable_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> toolId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
