// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListPluginWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
    };
    ListPluginWorkspaceRequest() = default ;
    ListPluginWorkspaceRequest(const ListPluginWorkspaceRequest &) = default ;
    ListPluginWorkspaceRequest(ListPluginWorkspaceRequest &&) = default ;
    ListPluginWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginWorkspaceRequest() = default ;
    ListPluginWorkspaceRequest& operator=(const ListPluginWorkspaceRequest &) = default ;
    ListPluginWorkspaceRequest& operator=(ListPluginWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayType_ == nullptr; };
    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline ListPluginWorkspaceRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


  protected:
    shared_ptr<string> gatewayType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
