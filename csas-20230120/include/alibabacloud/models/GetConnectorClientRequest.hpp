// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTORCLIENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTORCLIENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetConnectorClientRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectorClientRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_TO_JSON(DevTag, devTag_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectorClientRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
    };
    GetConnectorClientRequest() = default ;
    GetConnectorClientRequest(const GetConnectorClientRequest &) = default ;
    GetConnectorClientRequest(GetConnectorClientRequest &&) = default ;
    GetConnectorClientRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectorClientRequest() = default ;
    GetConnectorClientRequest& operator=(const GetConnectorClientRequest &) = default ;
    GetConnectorClientRequest& operator=(GetConnectorClientRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectorId_ == nullptr
        && this->devTag_ == nullptr; };
    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline GetConnectorClientRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


    // devTag Field Functions 
    bool hasDevTag() const { return this->devTag_ != nullptr;};
    void deleteDevTag() { this->devTag_ = nullptr;};
    inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
    inline GetConnectorClientRequest& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


  protected:
    // The connector ID. You can call [ListConnectors](~~ListConnectors~~) to query connectors.
    // 
    // This parameter is required.
    shared_ptr<string> connectorId_ {};
    // The unique device identifier of the ConnectorClient. You can call [ListConnectors](~~ListConnectors~~) to query connectors.
    // 
    // This parameter is required.
    shared_ptr<string> devTag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
