// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVERGROUPATTRIBUTEREQUESTCONNECTIONDRAINCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVERGROUPATTRIBUTEREQUESTCONNECTIONDRAINCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateServerGroupAttributeRequestConnectionDrainConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServerGroupAttributeRequestConnectionDrainConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionDrainEnabled, connectionDrainEnabled_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServerGroupAttributeRequestConnectionDrainConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionDrainEnabled, connectionDrainEnabled_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
    };
    UpdateServerGroupAttributeRequestConnectionDrainConfig() = default ;
    UpdateServerGroupAttributeRequestConnectionDrainConfig(const UpdateServerGroupAttributeRequestConnectionDrainConfig &) = default ;
    UpdateServerGroupAttributeRequestConnectionDrainConfig(UpdateServerGroupAttributeRequestConnectionDrainConfig &&) = default ;
    UpdateServerGroupAttributeRequestConnectionDrainConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServerGroupAttributeRequestConnectionDrainConfig() = default ;
    UpdateServerGroupAttributeRequestConnectionDrainConfig& operator=(const UpdateServerGroupAttributeRequestConnectionDrainConfig &) = default ;
    UpdateServerGroupAttributeRequestConnectionDrainConfig& operator=(UpdateServerGroupAttributeRequestConnectionDrainConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionDrainEnabled_ != nullptr
        && this->connectionDrainTimeout_ != nullptr; };
    // connectionDrainEnabled Field Functions 
    bool hasConnectionDrainEnabled() const { return this->connectionDrainEnabled_ != nullptr;};
    void deleteConnectionDrainEnabled() { this->connectionDrainEnabled_ = nullptr;};
    inline bool connectionDrainEnabled() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainEnabled_, false) };
    inline UpdateServerGroupAttributeRequestConnectionDrainConfig& setConnectionDrainEnabled(bool connectionDrainEnabled) { DARABONBA_PTR_SET_VALUE(connectionDrainEnabled_, connectionDrainEnabled) };


    // connectionDrainTimeout Field Functions 
    bool hasConnectionDrainTimeout() const { return this->connectionDrainTimeout_ != nullptr;};
    void deleteConnectionDrainTimeout() { this->connectionDrainTimeout_ = nullptr;};
    inline int32_t connectionDrainTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainTimeout_, 0) };
    inline UpdateServerGroupAttributeRequestConnectionDrainConfig& setConnectionDrainTimeout(int32_t connectionDrainTimeout) { DARABONBA_PTR_SET_VALUE(connectionDrainTimeout_, connectionDrainTimeout) };


  protected:
    // Specifies whether to enable connection draining. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> connectionDrainEnabled_ = nullptr;
    // The timeout period of connection draining.
    // 
    // Valid values: **0** to **900**.
    std::shared_ptr<int32_t> connectionDrainTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
