// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPRESSCONNECTROUTERSUPPORTEDREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPRESSCONNECTROUTERSUPPORTEDREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class ListExpressConnectRouterSupportedRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExpressConnectRouterSupportedRegionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListExpressConnectRouterSupportedRegionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListExpressConnectRouterSupportedRegionRequest() = default ;
    ListExpressConnectRouterSupportedRegionRequest(const ListExpressConnectRouterSupportedRegionRequest &) = default ;
    ListExpressConnectRouterSupportedRegionRequest(ListExpressConnectRouterSupportedRegionRequest &&) = default ;
    ListExpressConnectRouterSupportedRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExpressConnectRouterSupportedRegionRequest() = default ;
    ListExpressConnectRouterSupportedRegionRequest& operator=(const ListExpressConnectRouterSupportedRegionRequest &) = default ;
    ListExpressConnectRouterSupportedRegionRequest& operator=(ListExpressConnectRouterSupportedRegionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->nodeType_ == nullptr && this->version_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ListExpressConnectRouterSupportedRegionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ListExpressConnectRouterSupportedRegionRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListExpressConnectRouterSupportedRegionRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // A client token to ensure the idempotence of the request.
    // 
    // Generate a value that is unique across different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system uses the **RequestId** as the **ClientToken**. Each request has a unique **RequestId**.
    shared_ptr<string> clientToken_ {};
    // The type of network instance. Valid values:
    // 
    // - **TR**: transit router instance.
    // 
    // - **VBR**: virtual border router instance.
    // 
    // - **VPC**: virtual private cloud instance.
    // 
    // This parameter is required.
    shared_ptr<string> nodeType_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
