// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACOSMCPSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNACOSMCPSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetNacosMcpServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacosMcpServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(McpServerId, mcpServerId_);
      DARABONBA_PTR_TO_JSON(McpServerVersion, mcpServerVersion_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacosMcpServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(McpServerId, mcpServerId_);
      DARABONBA_PTR_FROM_JSON(McpServerVersion, mcpServerVersion_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    GetNacosMcpServerRequest() = default ;
    GetNacosMcpServerRequest(const GetNacosMcpServerRequest &) = default ;
    GetNacosMcpServerRequest(GetNacosMcpServerRequest &&) = default ;
    GetNacosMcpServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacosMcpServerRequest() = default ;
    GetNacosMcpServerRequest& operator=(const GetNacosMcpServerRequest &) = default ;
    GetNacosMcpServerRequest& operator=(GetNacosMcpServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->instanceId_ == nullptr && this->mcpServerId_ == nullptr && this->mcpServerVersion_ == nullptr && this->namespaceId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetNacosMcpServerRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetNacosMcpServerRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mcpServerId Field Functions 
    bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
    void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
    inline string getMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
    inline GetNacosMcpServerRequest& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


    // mcpServerVersion Field Functions 
    bool hasMcpServerVersion() const { return this->mcpServerVersion_ != nullptr;};
    void deleteMcpServerVersion() { this->mcpServerVersion_ = nullptr;};
    inline string getMcpServerVersion() const { DARABONBA_PTR_GET_DEFAULT(mcpServerVersion_, "") };
    inline GetNacosMcpServerRequest& setMcpServerVersion(string mcpServerVersion) { DARABONBA_PTR_SET_VALUE(mcpServerVersion_, mcpServerVersion) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline GetNacosMcpServerRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    shared_ptr<string> acceptLanguage_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> mcpServerId_ {};
    shared_ptr<string> mcpServerVersion_ {};
    shared_ptr<string> namespaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
