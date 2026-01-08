// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEACKCLUSTERCONNECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEACKCLUSTERCONNECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeleteAckClusterConnectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAckClusterConnectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAckClusterConnectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
    };
    DeleteAckClusterConnectorRequest() = default ;
    DeleteAckClusterConnectorRequest(const DeleteAckClusterConnectorRequest &) = default ;
    DeleteAckClusterConnectorRequest(DeleteAckClusterConnectorRequest &&) = default ;
    DeleteAckClusterConnectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAckClusterConnectorRequest() = default ;
    DeleteAckClusterConnectorRequest& operator=(const DeleteAckClusterConnectorRequest &) = default ;
    DeleteAckClusterConnectorRequest& operator=(DeleteAckClusterConnectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectorId_ == nullptr; };
    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline DeleteAckClusterConnectorRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


  protected:
    // This parameter is required.
    shared_ptr<string> connectorId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
