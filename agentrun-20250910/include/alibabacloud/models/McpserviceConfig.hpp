// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MCPSERVICECONFIG_HPP_
#define ALIBABACLOUD_MODELS_MCPSERVICECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class MCPServiceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MCPServiceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, MCPServiceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
    };
    MCPServiceConfig() = default ;
    MCPServiceConfig(const MCPServiceConfig &) = default ;
    MCPServiceConfig(MCPServiceConfig &&) = default ;
    MCPServiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MCPServiceConfig() = default ;
    MCPServiceConfig& operator=(const MCPServiceConfig &) = default ;
    MCPServiceConfig& operator=(MCPServiceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serviceId_ != nullptr; };
    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline MCPServiceConfig& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    std::shared_ptr<string> serviceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
