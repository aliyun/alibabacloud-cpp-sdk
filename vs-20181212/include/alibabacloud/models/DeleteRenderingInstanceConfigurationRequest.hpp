// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERENDERINGINSTANCECONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERENDERINGINSTANCECONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DeleteRenderingInstanceConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRenderingInstanceConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRenderingInstanceConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    DeleteRenderingInstanceConfigurationRequest() = default ;
    DeleteRenderingInstanceConfigurationRequest(const DeleteRenderingInstanceConfigurationRequest &) = default ;
    DeleteRenderingInstanceConfigurationRequest(DeleteRenderingInstanceConfigurationRequest &&) = default ;
    DeleteRenderingInstanceConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRenderingInstanceConfigurationRequest() = default ;
    DeleteRenderingInstanceConfigurationRequest& operator=(const DeleteRenderingInstanceConfigurationRequest &) = default ;
    DeleteRenderingInstanceConfigurationRequest& operator=(DeleteRenderingInstanceConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configuration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configuration& obj) { 
        DARABONBA_PTR_TO_JSON(AttributeNames, attributeNames_);
        DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      };
      friend void from_json(const Darabonba::Json& j, Configuration& obj) { 
        DARABONBA_PTR_FROM_JSON(AttributeNames, attributeNames_);
        DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      };
      Configuration() = default ;
      Configuration(const Configuration &) = default ;
      Configuration(Configuration &&) = default ;
      Configuration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configuration() = default ;
      Configuration& operator=(const Configuration &) = default ;
      Configuration& operator=(Configuration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attributeNames_ == nullptr
        && this->moduleName_ == nullptr; };
      // attributeNames Field Functions 
      bool hasAttributeNames() const { return this->attributeNames_ != nullptr;};
      void deleteAttributeNames() { this->attributeNames_ = nullptr;};
      inline const vector<string> & getAttributeNames() const { DARABONBA_PTR_GET_CONST(attributeNames_, vector<string>) };
      inline vector<string> getAttributeNames() { DARABONBA_PTR_GET(attributeNames_, vector<string>) };
      inline Configuration& setAttributeNames(const vector<string> & attributeNames) { DARABONBA_PTR_SET_VALUE(attributeNames_, attributeNames) };
      inline Configuration& setAttributeNames(vector<string> && attributeNames) { DARABONBA_PTR_SET_RVALUE(attributeNames_, attributeNames) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline Configuration& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    protected:
      shared_ptr<vector<string>> attributeNames_ {};
      // This parameter is required.
      shared_ptr<string> moduleName_ {};
    };

    virtual bool empty() const override { return this->configuration_ == nullptr
        && this->renderingInstanceId_ == nullptr; };
    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const vector<DeleteRenderingInstanceConfigurationRequest::Configuration> & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, vector<DeleteRenderingInstanceConfigurationRequest::Configuration>) };
    inline vector<DeleteRenderingInstanceConfigurationRequest::Configuration> getConfiguration() { DARABONBA_PTR_GET(configuration_, vector<DeleteRenderingInstanceConfigurationRequest::Configuration>) };
    inline DeleteRenderingInstanceConfigurationRequest& setConfiguration(const vector<DeleteRenderingInstanceConfigurationRequest::Configuration> & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline DeleteRenderingInstanceConfigurationRequest& setConfiguration(vector<DeleteRenderingInstanceConfigurationRequest::Configuration> && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline DeleteRenderingInstanceConfigurationRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    shared_ptr<vector<DeleteRenderingInstanceConfigurationRequest::Configuration>> configuration_ {};
    // This parameter is required.
    shared_ptr<string> renderingInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
