// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACKCLUSTERCONNECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACKCLUSTERCONNECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class UpdateAckClusterConnectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAckClusterConnectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_TO_JSON(ConnectorName, connectorName_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAckClusterConnectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_FROM_JSON(ConnectorName, connectorName_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    UpdateAckClusterConnectorRequest() = default ;
    UpdateAckClusterConnectorRequest(const UpdateAckClusterConnectorRequest &) = default ;
    UpdateAckClusterConnectorRequest(UpdateAckClusterConnectorRequest &&) = default ;
    UpdateAckClusterConnectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAckClusterConnectorRequest() = default ;
    UpdateAckClusterConnectorRequest& operator=(const UpdateAckClusterConnectorRequest &) = default ;
    UpdateAckClusterConnectorRequest& operator=(UpdateAckClusterConnectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectorId_ == nullptr
        && this->connectorName_ == nullptr && this->ttl_ == nullptr; };
    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline UpdateAckClusterConnectorRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


    // connectorName Field Functions 
    bool hasConnectorName() const { return this->connectorName_ != nullptr;};
    void deleteConnectorName() { this->connectorName_ = nullptr;};
    inline string getConnectorName() const { DARABONBA_PTR_GET_DEFAULT(connectorName_, "") };
    inline UpdateAckClusterConnectorRequest& setConnectorName(string connectorName) { DARABONBA_PTR_SET_VALUE(connectorName_, connectorName) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline string getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, "") };
    inline UpdateAckClusterConnectorRequest& setTtl(string ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // This parameter is required.
    shared_ptr<string> connectorId_ {};
    shared_ptr<string> connectorName_ {};
    shared_ptr<string> ttl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
