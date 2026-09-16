// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONNECTORRUNTIME_HPP_
#define ALIBABACLOUD_MODELS_CONNECTORRUNTIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class ConnectorRuntime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConnectorRuntime& obj) { 
      DARABONBA_PTR_TO_JSON(mode, mode_);
      DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(satelliteId, satelliteId_);
    };
    friend void from_json(const Darabonba::Json& j, ConnectorRuntime& obj) { 
      DARABONBA_PTR_FROM_JSON(mode, mode_);
      DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(satelliteId, satelliteId_);
    };
    ConnectorRuntime() = default ;
    ConnectorRuntime(const ConnectorRuntime &) = default ;
    ConnectorRuntime(ConnectorRuntime &&) = default ;
    ConnectorRuntime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConnectorRuntime() = default ;
    ConnectorRuntime& operator=(const ConnectorRuntime &) = default ;
    ConnectorRuntime& operator=(ConnectorRuntime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr
        && this->pluginId_ == nullptr && this->satelliteId_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ConnectorRuntime& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline ConnectorRuntime& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // satelliteId Field Functions 
    bool hasSatelliteId() const { return this->satelliteId_ != nullptr;};
    void deleteSatelliteId() { this->satelliteId_ = nullptr;};
    inline string getSatelliteId() const { DARABONBA_PTR_GET_DEFAULT(satelliteId_, "") };
    inline ConnectorRuntime& setSatelliteId(string satelliteId) { DARABONBA_PTR_SET_VALUE(satelliteId_, satelliteId) };


  protected:
    // Runtime mode
    // 
    // This parameter is required.
    shared_ptr<string> mode_ {};
    // Plugin ID
    shared_ptr<string> pluginId_ {};
    // Satellite ID
    shared_ptr<string> satelliteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
