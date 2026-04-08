// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTHTTPAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTHTTPAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ExportHttpApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportHttpApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(extensionConfig, extensionConfig_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(operationIds, operationIds_);
    };
    friend void from_json(const Darabonba::Json& j, ExportHttpApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(extensionConfig, extensionConfig_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(operationIds, operationIds_);
    };
    ExportHttpApiRequest() = default ;
    ExportHttpApiRequest(const ExportHttpApiRequest &) = default ;
    ExportHttpApiRequest(ExportHttpApiRequest &&) = default ;
    ExportHttpApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportHttpApiRequest() = default ;
    ExportHttpApiRequest& operator=(const ExportHttpApiRequest &) = default ;
    ExportHttpApiRequest& operator=(ExportHttpApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExtensionConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExtensionConfig& obj) { 
        DARABONBA_PTR_TO_JSON(withAuthConfig, withAuthConfig_);
        DARABONBA_PTR_TO_JSON(withAuthConsumer, withAuthConsumer_);
        DARABONBA_PTR_TO_JSON(withPlugin, withPlugin_);
        DARABONBA_PTR_TO_JSON(withPolicy, withPolicy_);
        DARABONBA_PTR_TO_JSON(withService, withService_);
      };
      friend void from_json(const Darabonba::Json& j, ExtensionConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(withAuthConfig, withAuthConfig_);
        DARABONBA_PTR_FROM_JSON(withAuthConsumer, withAuthConsumer_);
        DARABONBA_PTR_FROM_JSON(withPlugin, withPlugin_);
        DARABONBA_PTR_FROM_JSON(withPolicy, withPolicy_);
        DARABONBA_PTR_FROM_JSON(withService, withService_);
      };
      ExtensionConfig() = default ;
      ExtensionConfig(const ExtensionConfig &) = default ;
      ExtensionConfig(ExtensionConfig &&) = default ;
      ExtensionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExtensionConfig() = default ;
      ExtensionConfig& operator=(const ExtensionConfig &) = default ;
      ExtensionConfig& operator=(ExtensionConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->withAuthConfig_ == nullptr
        && this->withAuthConsumer_ == nullptr && this->withPlugin_ == nullptr && this->withPolicy_ == nullptr && this->withService_ == nullptr; };
      // withAuthConfig Field Functions 
      bool hasWithAuthConfig() const { return this->withAuthConfig_ != nullptr;};
      void deleteWithAuthConfig() { this->withAuthConfig_ = nullptr;};
      inline bool getWithAuthConfig() const { DARABONBA_PTR_GET_DEFAULT(withAuthConfig_, false) };
      inline ExtensionConfig& setWithAuthConfig(bool withAuthConfig) { DARABONBA_PTR_SET_VALUE(withAuthConfig_, withAuthConfig) };


      // withAuthConsumer Field Functions 
      bool hasWithAuthConsumer() const { return this->withAuthConsumer_ != nullptr;};
      void deleteWithAuthConsumer() { this->withAuthConsumer_ = nullptr;};
      inline bool getWithAuthConsumer() const { DARABONBA_PTR_GET_DEFAULT(withAuthConsumer_, false) };
      inline ExtensionConfig& setWithAuthConsumer(bool withAuthConsumer) { DARABONBA_PTR_SET_VALUE(withAuthConsumer_, withAuthConsumer) };


      // withPlugin Field Functions 
      bool hasWithPlugin() const { return this->withPlugin_ != nullptr;};
      void deleteWithPlugin() { this->withPlugin_ = nullptr;};
      inline bool getWithPlugin() const { DARABONBA_PTR_GET_DEFAULT(withPlugin_, false) };
      inline ExtensionConfig& setWithPlugin(bool withPlugin) { DARABONBA_PTR_SET_VALUE(withPlugin_, withPlugin) };


      // withPolicy Field Functions 
      bool hasWithPolicy() const { return this->withPolicy_ != nullptr;};
      void deleteWithPolicy() { this->withPolicy_ = nullptr;};
      inline bool getWithPolicy() const { DARABONBA_PTR_GET_DEFAULT(withPolicy_, false) };
      inline ExtensionConfig& setWithPolicy(bool withPolicy) { DARABONBA_PTR_SET_VALUE(withPolicy_, withPolicy) };


      // withService Field Functions 
      bool hasWithService() const { return this->withService_ != nullptr;};
      void deleteWithService() { this->withService_ = nullptr;};
      inline bool getWithService() const { DARABONBA_PTR_GET_DEFAULT(withService_, false) };
      inline ExtensionConfig& setWithService(bool withService) { DARABONBA_PTR_SET_VALUE(withService_, withService) };


    protected:
      shared_ptr<bool> withAuthConfig_ {};
      shared_ptr<bool> withAuthConsumer_ {};
      shared_ptr<bool> withPlugin_ {};
      shared_ptr<bool> withPolicy_ {};
      shared_ptr<bool> withService_ {};
    };

    virtual bool empty() const override { return this->extensionConfig_ == nullptr
        && this->gatewayId_ == nullptr && this->operationIds_ == nullptr; };
    // extensionConfig Field Functions 
    bool hasExtensionConfig() const { return this->extensionConfig_ != nullptr;};
    void deleteExtensionConfig() { this->extensionConfig_ = nullptr;};
    inline const ExportHttpApiRequest::ExtensionConfig & getExtensionConfig() const { DARABONBA_PTR_GET_CONST(extensionConfig_, ExportHttpApiRequest::ExtensionConfig) };
    inline ExportHttpApiRequest::ExtensionConfig getExtensionConfig() { DARABONBA_PTR_GET(extensionConfig_, ExportHttpApiRequest::ExtensionConfig) };
    inline ExportHttpApiRequest& setExtensionConfig(const ExportHttpApiRequest::ExtensionConfig & extensionConfig) { DARABONBA_PTR_SET_VALUE(extensionConfig_, extensionConfig) };
    inline ExportHttpApiRequest& setExtensionConfig(ExportHttpApiRequest::ExtensionConfig && extensionConfig) { DARABONBA_PTR_SET_RVALUE(extensionConfig_, extensionConfig) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ExportHttpApiRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // operationIds Field Functions 
    bool hasOperationIds() const { return this->operationIds_ != nullptr;};
    void deleteOperationIds() { this->operationIds_ = nullptr;};
    inline const vector<string> & getOperationIds() const { DARABONBA_PTR_GET_CONST(operationIds_, vector<string>) };
    inline vector<string> getOperationIds() { DARABONBA_PTR_GET(operationIds_, vector<string>) };
    inline ExportHttpApiRequest& setOperationIds(const vector<string> & operationIds) { DARABONBA_PTR_SET_VALUE(operationIds_, operationIds) };
    inline ExportHttpApiRequest& setOperationIds(vector<string> && operationIds) { DARABONBA_PTR_SET_RVALUE(operationIds_, operationIds) };


  protected:
    shared_ptr<ExportHttpApiRequest::ExtensionConfig> extensionConfig_ {};
    shared_ptr<string> gatewayId_ {};
    shared_ptr<vector<string>> operationIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
