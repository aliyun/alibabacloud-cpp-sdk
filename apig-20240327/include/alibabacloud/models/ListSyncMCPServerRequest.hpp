// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYNCMCPSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSYNCMCPSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListSyncMCPServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSyncMCPServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSyncMCPServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
    };
    ListSyncMCPServerRequest() = default ;
    ListSyncMCPServerRequest(const ListSyncMCPServerRequest &) = default ;
    ListSyncMCPServerRequest(ListSyncMCPServerRequest &&) = default ;
    ListSyncMCPServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSyncMCPServerRequest() = default ;
    ListSyncMCPServerRequest& operator=(const ListSyncMCPServerRequest &) = default ;
    ListSyncMCPServerRequest& operator=(ListSyncMCPServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->namespace_ == nullptr && this->sourceId_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListSyncMCPServerRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListSyncMCPServerRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ListSyncMCPServerRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


  protected:
    // The AI gateway ID. This parameter is required. If this parameter is not specified, the API returns InvalidParameter.IsEmpty(400).
    shared_ptr<string> gatewayId_ {};
    // The Nacos namespace ID. This parameter is required. If this parameter is not specified, the API returns InvalidParameter.IsEmpty(400).
    shared_ptr<string> namespace_ {};
    // The Nacos service source ID. In a single Nacos source scenario, this parameter can be omitted because the server automatically populates the unique source. In a multi-Nacos source scenario, this parameter is required. Otherwise, a parameter error indicating that sourceId is empty is returned. If the gateway has no Nacos source, the error ErrServiceSourceNotFound is returned.
    shared_ptr<string> sourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
