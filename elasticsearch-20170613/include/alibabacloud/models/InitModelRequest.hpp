// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class InitModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(api_key, apiKey_);
      DARABONBA_PTR_TO_JSON(host, host_);
      DARABONBA_PTR_TO_JSON(http_schema, httpSchema_);
      DARABONBA_PTR_TO_JSON(models, models_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, InitModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(api_key, apiKey_);
      DARABONBA_PTR_FROM_JSON(host, host_);
      DARABONBA_PTR_FROM_JSON(http_schema, httpSchema_);
      DARABONBA_PTR_FROM_JSON(models, models_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    InitModelRequest() = default ;
    InitModelRequest(const InitModelRequest &) = default ;
    InitModelRequest(InitModelRequest &&) = default ;
    InitModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitModelRequest() = default ;
    InitModelRequest& operator=(const InitModelRequest &) = default ;
    InitModelRequest& operator=(InitModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Models : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Models& obj) { 
        DARABONBA_PTR_TO_JSON(modelType, modelType_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      };
      friend void from_json(const Darabonba::Json& j, Models& obj) { 
        DARABONBA_PTR_FROM_JSON(modelType, modelType_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      };
      Models() = default ;
      Models(const Models &) = default ;
      Models(Models &&) = default ;
      Models(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Models() = default ;
      Models& operator=(const Models &) = default ;
      Models& operator=(Models &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modelType_ == nullptr
        && this->serviceId_ == nullptr; };
      // modelType Field Functions 
      bool hasModelType() const { return this->modelType_ != nullptr;};
      void deleteModelType() { this->modelType_ = nullptr;};
      inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
      inline Models& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Models& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    protected:
      shared_ptr<string> modelType_ {};
      shared_ptr<string> serviceId_ {};
    };

    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->host_ == nullptr && this->httpSchema_ == nullptr && this->models_ == nullptr && this->workspace_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline InitModelRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline InitModelRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // httpSchema Field Functions 
    bool hasHttpSchema() const { return this->httpSchema_ != nullptr;};
    void deleteHttpSchema() { this->httpSchema_ = nullptr;};
    inline string getHttpSchema() const { DARABONBA_PTR_GET_DEFAULT(httpSchema_, "") };
    inline InitModelRequest& setHttpSchema(string httpSchema) { DARABONBA_PTR_SET_VALUE(httpSchema_, httpSchema) };


    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<InitModelRequest::Models> & getModels() const { DARABONBA_PTR_GET_CONST(models_, vector<InitModelRequest::Models>) };
    inline vector<InitModelRequest::Models> getModels() { DARABONBA_PTR_GET(models_, vector<InitModelRequest::Models>) };
    inline InitModelRequest& setModels(const vector<InitModelRequest::Models> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline InitModelRequest& setModels(vector<InitModelRequest::Models> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline InitModelRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // This parameter is required.
    shared_ptr<string> apiKey_ {};
    // This parameter is required.
    shared_ptr<string> host_ {};
    // This parameter is required.
    shared_ptr<string> httpSchema_ {};
    shared_ptr<vector<InitModelRequest::Models>> models_ {};
    // This parameter is required.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
