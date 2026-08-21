// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONNECTORCLIENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONNECTORCLIENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateConnectorClientRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConnectorClientRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_TO_JSON(DevTag, devTag_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConnectorClientRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateConnectorClientRequest() = default ;
    UpdateConnectorClientRequest(const UpdateConnectorClientRequest &) = default ;
    UpdateConnectorClientRequest(UpdateConnectorClientRequest &&) = default ;
    UpdateConnectorClientRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConnectorClientRequest() = default ;
    UpdateConnectorClientRequest& operator=(const UpdateConnectorClientRequest &) = default ;
    UpdateConnectorClientRequest& operator=(UpdateConnectorClientRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectorId_ == nullptr
        && this->devTag_ == nullptr && this->status_ == nullptr; };
    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline UpdateConnectorClientRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


    // devTag Field Functions 
    bool hasDevTag() const { return this->devTag_ != nullptr;};
    void deleteDevTag() { this->devTag_ = nullptr;};
    inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
    inline UpdateConnectorClientRequest& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateConnectorClientRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The connector ID. You can call [ListConnectors](~~ListConnectors~~) to query connector IDs.
    // 
    // This parameter is required.
    shared_ptr<string> connectorId_ {};
    // The unique identifier of the ConnectorClient device. You can call [ListConnectors](~~ListConnectors~~) to query connector information.
    // 
    // This parameter is required.
    shared_ptr<string> devTag_ {};
    // The connection status of the ConnectorClient. Valid values:
    // - **Enabled**: connected.
    // - **Disabled**: disconnected.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
