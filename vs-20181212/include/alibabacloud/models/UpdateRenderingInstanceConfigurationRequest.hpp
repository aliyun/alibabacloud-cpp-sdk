// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERENDERINGINSTANCECONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERENDERINGINSTANCECONFIGURATIONREQUEST_HPP_
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
  class UpdateRenderingInstanceConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRenderingInstanceConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRenderingInstanceConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    UpdateRenderingInstanceConfigurationRequest() = default ;
    UpdateRenderingInstanceConfigurationRequest(const UpdateRenderingInstanceConfigurationRequest &) = default ;
    UpdateRenderingInstanceConfigurationRequest(UpdateRenderingInstanceConfigurationRequest &&) = default ;
    UpdateRenderingInstanceConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRenderingInstanceConfigurationRequest() = default ;
    UpdateRenderingInstanceConfigurationRequest& operator=(const UpdateRenderingInstanceConfigurationRequest &) = default ;
    UpdateRenderingInstanceConfigurationRequest& operator=(UpdateRenderingInstanceConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configuration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configuration& obj) { 
        DARABONBA_PTR_TO_JSON(Attributes, attributes_);
        DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      };
      friend void from_json(const Darabonba::Json& j, Configuration& obj) { 
        DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
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
      class Attributes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Attributes& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_ANY_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Attributes& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_ANY_FROM_JSON(Value, value_);
        };
        Attributes() = default ;
        Attributes(const Attributes &) = default ;
        Attributes(Attributes &&) = default ;
        Attributes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Attributes() = default ;
        Attributes& operator=(const Attributes &) = default ;
        Attributes& operator=(Attributes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Attributes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline         const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
        Darabonba::Json & getValue() { DARABONBA_GET(value_) };
        inline Attributes& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
        inline Attributes& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


      protected:
        // This parameter is required.
        shared_ptr<string> name_ {};
        // This parameter is required.
        Darabonba::Json value_ {};
      };

      virtual bool empty() const override { return this->attributes_ == nullptr
        && this->moduleName_ == nullptr; };
      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline const vector<Configuration::Attributes> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<Configuration::Attributes>) };
      inline vector<Configuration::Attributes> getAttributes() { DARABONBA_PTR_GET(attributes_, vector<Configuration::Attributes>) };
      inline Configuration& setAttributes(const vector<Configuration::Attributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
      inline Configuration& setAttributes(vector<Configuration::Attributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline Configuration& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    protected:
      // This parameter is required.
      shared_ptr<vector<Configuration::Attributes>> attributes_ {};
      // This parameter is required.
      shared_ptr<string> moduleName_ {};
    };

    virtual bool empty() const override { return this->configuration_ == nullptr
        && this->renderingInstanceId_ == nullptr; };
    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const vector<UpdateRenderingInstanceConfigurationRequest::Configuration> & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, vector<UpdateRenderingInstanceConfigurationRequest::Configuration>) };
    inline vector<UpdateRenderingInstanceConfigurationRequest::Configuration> getConfiguration() { DARABONBA_PTR_GET(configuration_, vector<UpdateRenderingInstanceConfigurationRequest::Configuration>) };
    inline UpdateRenderingInstanceConfigurationRequest& setConfiguration(const vector<UpdateRenderingInstanceConfigurationRequest::Configuration> & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline UpdateRenderingInstanceConfigurationRequest& setConfiguration(vector<UpdateRenderingInstanceConfigurationRequest::Configuration> && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline UpdateRenderingInstanceConfigurationRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<UpdateRenderingInstanceConfigurationRequest::Configuration>> configuration_ {};
    // This parameter is required.
    shared_ptr<string> renderingInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
