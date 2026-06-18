// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetConnectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_TO_JSON(ConnectorName, connectorName_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_FROM_JSON(ConnectorName, connectorName_);
    };
    GetConnectorRequest() = default ;
    GetConnectorRequest(const GetConnectorRequest &) = default ;
    GetConnectorRequest(GetConnectorRequest &&) = default ;
    GetConnectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectorRequest() = default ;
    GetConnectorRequest& operator=(const GetConnectorRequest &) = default ;
    GetConnectorRequest& operator=(GetConnectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectorId_ == nullptr
        && this->connectorName_ == nullptr; };
    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline GetConnectorRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


    // connectorName Field Functions 
    bool hasConnectorName() const { return this->connectorName_ != nullptr;};
    void deleteConnectorName() { this->connectorName_ = nullptr;};
    inline string getConnectorName() const { DARABONBA_PTR_GET_DEFAULT(connectorName_, "") };
    inline GetConnectorRequest& setConnectorName(string connectorName) { DARABONBA_PTR_SET_VALUE(connectorName_, connectorName) };


  protected:
    // The ID of the connector. You can find this ID in the [Model Studio console](https://bailian.console.aliyun.com/cn-beijing/?tab=app#/connector/list).
    shared_ptr<string> connectorId_ {};
    // The name of the connector to query. An exact match is required.
    shared_ptr<string> connectorName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
