// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEXPORTHTTPAPISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHEXPORTHTTPAPISREQUEST_HPP_
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
  class BatchExportHttpApisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchExportHttpApisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apiIds, apiIds_);
      DARABONBA_PTR_TO_JSON(apiType, apiType_);
      DARABONBA_PTR_TO_JSON(extensionConfig, extensionConfig_);
      DARABONBA_PTR_TO_JSON(format, format_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchExportHttpApisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apiIds, apiIds_);
      DARABONBA_PTR_FROM_JSON(apiType, apiType_);
      DARABONBA_PTR_FROM_JSON(extensionConfig, extensionConfig_);
      DARABONBA_PTR_FROM_JSON(format, format_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
    };
    BatchExportHttpApisRequest() = default ;
    BatchExportHttpApisRequest(const BatchExportHttpApisRequest &) = default ;
    BatchExportHttpApisRequest(BatchExportHttpApisRequest &&) = default ;
    BatchExportHttpApisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchExportHttpApisRequest() = default ;
    BatchExportHttpApisRequest& operator=(const BatchExportHttpApisRequest &) = default ;
    BatchExportHttpApisRequest& operator=(BatchExportHttpApisRequest &&) = default ;
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

    virtual bool empty() const override { return this->apiIds_ == nullptr
        && this->apiType_ == nullptr && this->extensionConfig_ == nullptr && this->format_ == nullptr && this->gatewayId_ == nullptr; };
    // apiIds Field Functions 
    bool hasApiIds() const { return this->apiIds_ != nullptr;};
    void deleteApiIds() { this->apiIds_ = nullptr;};
    inline const vector<string> & getApiIds() const { DARABONBA_PTR_GET_CONST(apiIds_, vector<string>) };
    inline vector<string> getApiIds() { DARABONBA_PTR_GET(apiIds_, vector<string>) };
    inline BatchExportHttpApisRequest& setApiIds(const vector<string> & apiIds) { DARABONBA_PTR_SET_VALUE(apiIds_, apiIds) };
    inline BatchExportHttpApisRequest& setApiIds(vector<string> && apiIds) { DARABONBA_PTR_SET_RVALUE(apiIds_, apiIds) };


    // apiType Field Functions 
    bool hasApiType() const { return this->apiType_ != nullptr;};
    void deleteApiType() { this->apiType_ = nullptr;};
    inline string getApiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
    inline BatchExportHttpApisRequest& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


    // extensionConfig Field Functions 
    bool hasExtensionConfig() const { return this->extensionConfig_ != nullptr;};
    void deleteExtensionConfig() { this->extensionConfig_ = nullptr;};
    inline const BatchExportHttpApisRequest::ExtensionConfig & getExtensionConfig() const { DARABONBA_PTR_GET_CONST(extensionConfig_, BatchExportHttpApisRequest::ExtensionConfig) };
    inline BatchExportHttpApisRequest::ExtensionConfig getExtensionConfig() { DARABONBA_PTR_GET(extensionConfig_, BatchExportHttpApisRequest::ExtensionConfig) };
    inline BatchExportHttpApisRequest& setExtensionConfig(const BatchExportHttpApisRequest::ExtensionConfig & extensionConfig) { DARABONBA_PTR_SET_VALUE(extensionConfig_, extensionConfig) };
    inline BatchExportHttpApisRequest& setExtensionConfig(BatchExportHttpApisRequest::ExtensionConfig && extensionConfig) { DARABONBA_PTR_SET_RVALUE(extensionConfig_, extensionConfig) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline BatchExportHttpApisRequest& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline BatchExportHttpApisRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> apiIds_ {};
    // This parameter is required.
    shared_ptr<string> apiType_ {};
    shared_ptr<BatchExportHttpApisRequest::ExtensionConfig> extensionConfig_ {};
    shared_ptr<string> format_ {};
    shared_ptr<string> gatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
