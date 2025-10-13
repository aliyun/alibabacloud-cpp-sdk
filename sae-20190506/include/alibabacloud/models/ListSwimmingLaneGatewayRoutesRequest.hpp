// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGATEWAYROUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGATEWAYROUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListSwimmingLaneGatewayRoutesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSwimmingLaneGatewayRoutesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSwimmingLaneGatewayRoutesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    ListSwimmingLaneGatewayRoutesRequest() = default ;
    ListSwimmingLaneGatewayRoutesRequest(const ListSwimmingLaneGatewayRoutesRequest &) = default ;
    ListSwimmingLaneGatewayRoutesRequest(ListSwimmingLaneGatewayRoutesRequest &&) = default ;
    ListSwimmingLaneGatewayRoutesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSwimmingLaneGatewayRoutesRequest() = default ;
    ListSwimmingLaneGatewayRoutesRequest& operator=(const ListSwimmingLaneGatewayRoutesRequest &) = default ;
    ListSwimmingLaneGatewayRoutesRequest& operator=(ListSwimmingLaneGatewayRoutesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayUniqueId_ == nullptr
        && return this->namespaceId_ == nullptr; };
    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline ListSwimmingLaneGatewayRoutesRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListSwimmingLaneGatewayRoutesRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    std::shared_ptr<string> namespaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
