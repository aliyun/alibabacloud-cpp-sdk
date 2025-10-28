// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MCPSSESESSIONAFFINITYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MCPSSESESSIONAFFINITYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class MCPSSESessionAffinityConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MCPSSESessionAffinityConfig& obj) { 
      DARABONBA_PTR_TO_JSON(sessionConcurrencyPerInstance, sessionConcurrencyPerInstance_);
      DARABONBA_PTR_TO_JSON(sseEndpointPath, sseEndpointPath_);
    };
    friend void from_json(const Darabonba::Json& j, MCPSSESessionAffinityConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionConcurrencyPerInstance, sessionConcurrencyPerInstance_);
      DARABONBA_PTR_FROM_JSON(sseEndpointPath, sseEndpointPath_);
    };
    MCPSSESessionAffinityConfig() = default ;
    MCPSSESessionAffinityConfig(const MCPSSESessionAffinityConfig &) = default ;
    MCPSSESessionAffinityConfig(MCPSSESessionAffinityConfig &&) = default ;
    MCPSSESessionAffinityConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MCPSSESessionAffinityConfig() = default ;
    MCPSSESessionAffinityConfig& operator=(const MCPSSESessionAffinityConfig &) = default ;
    MCPSSESessionAffinityConfig& operator=(MCPSSESessionAffinityConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionConcurrencyPerInstance_ == nullptr
        && return this->sseEndpointPath_ == nullptr; };
    // sessionConcurrencyPerInstance Field Functions 
    bool hasSessionConcurrencyPerInstance() const { return this->sessionConcurrencyPerInstance_ != nullptr;};
    void deleteSessionConcurrencyPerInstance() { this->sessionConcurrencyPerInstance_ = nullptr;};
    inline int64_t sessionConcurrencyPerInstance() const { DARABONBA_PTR_GET_DEFAULT(sessionConcurrencyPerInstance_, 0L) };
    inline MCPSSESessionAffinityConfig& setSessionConcurrencyPerInstance(int64_t sessionConcurrencyPerInstance) { DARABONBA_PTR_SET_VALUE(sessionConcurrencyPerInstance_, sessionConcurrencyPerInstance) };


    // sseEndpointPath Field Functions 
    bool hasSseEndpointPath() const { return this->sseEndpointPath_ != nullptr;};
    void deleteSseEndpointPath() { this->sseEndpointPath_ = nullptr;};
    inline string sseEndpointPath() const { DARABONBA_PTR_GET_DEFAULT(sseEndpointPath_, "") };
    inline MCPSSESessionAffinityConfig& setSseEndpointPath(string sseEndpointPath) { DARABONBA_PTR_SET_VALUE(sseEndpointPath_, sseEndpointPath) };


  protected:
    std::shared_ptr<int64_t> sessionConcurrencyPerInstance_ = nullptr;
    std::shared_ptr<string> sseEndpointPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
