// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCECONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCECONFIGURATIONRESPONSEBODY_HPP_
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
  class DescribeRenderingInstanceConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenderingInstanceConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenderingInstanceConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRenderingInstanceConfigurationResponseBody() = default ;
    DescribeRenderingInstanceConfigurationResponseBody(const DescribeRenderingInstanceConfigurationResponseBody &) = default ;
    DescribeRenderingInstanceConfigurationResponseBody(DescribeRenderingInstanceConfigurationResponseBody &&) = default ;
    DescribeRenderingInstanceConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenderingInstanceConfigurationResponseBody() = default ;
    DescribeRenderingInstanceConfigurationResponseBody& operator=(const DescribeRenderingInstanceConfigurationResponseBody &) = default ;
    DescribeRenderingInstanceConfigurationResponseBody& operator=(DescribeRenderingInstanceConfigurationResponseBody &&) = default ;
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
        shared_ptr<string> name_ {};
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
      shared_ptr<vector<Configuration::Attributes>> attributes_ {};
      shared_ptr<string> moduleName_ {};
    };

    virtual bool empty() const override { return this->configuration_ == nullptr
        && this->requestId_ == nullptr; };
    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const vector<DescribeRenderingInstanceConfigurationResponseBody::Configuration> & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, vector<DescribeRenderingInstanceConfigurationResponseBody::Configuration>) };
    inline vector<DescribeRenderingInstanceConfigurationResponseBody::Configuration> getConfiguration() { DARABONBA_PTR_GET(configuration_, vector<DescribeRenderingInstanceConfigurationResponseBody::Configuration>) };
    inline DescribeRenderingInstanceConfigurationResponseBody& setConfiguration(const vector<DescribeRenderingInstanceConfigurationResponseBody::Configuration> & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline DescribeRenderingInstanceConfigurationResponseBody& setConfiguration(vector<DescribeRenderingInstanceConfigurationResponseBody::Configuration> && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRenderingInstanceConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeRenderingInstanceConfigurationResponseBody::Configuration>> configuration_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
