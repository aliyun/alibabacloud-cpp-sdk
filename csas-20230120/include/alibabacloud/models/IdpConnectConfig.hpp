// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IDPCONNECTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_IDPCONNECTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class IdpConnectConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IdpConnectConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_TO_JSON(UseConnector, useConnector_);
    };
    friend void from_json(const Darabonba::Json& j, IdpConnectConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_FROM_JSON(UseConnector, useConnector_);
    };
    IdpConnectConfig() = default ;
    IdpConnectConfig(const IdpConnectConfig &) = default ;
    IdpConnectConfig(IdpConnectConfig &&) = default ;
    IdpConnectConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IdpConnectConfig() = default ;
    IdpConnectConfig& operator=(const IdpConnectConfig &) = default ;
    IdpConnectConfig& operator=(IdpConnectConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectorId_ == nullptr
        && return this->useConnector_ == nullptr; };
    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string connectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline IdpConnectConfig& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


    // useConnector Field Functions 
    bool hasUseConnector() const { return this->useConnector_ != nullptr;};
    void deleteUseConnector() { this->useConnector_ = nullptr;};
    inline bool useConnector() const { DARABONBA_PTR_GET_DEFAULT(useConnector_, false) };
    inline IdpConnectConfig& setUseConnector(bool useConnector) { DARABONBA_PTR_SET_VALUE(useConnector_, useConnector) };


  protected:
    std::shared_ptr<string> connectorId_ = nullptr;
    std::shared_ptr<bool> useConnector_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
