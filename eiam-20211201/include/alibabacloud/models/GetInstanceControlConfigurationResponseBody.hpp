// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCECONTROLCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCECONTROLCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetInstanceControlConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceControlConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceControlConfiguration, instanceControlConfiguration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceControlConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceControlConfiguration, instanceControlConfiguration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceControlConfigurationResponseBody() = default ;
    GetInstanceControlConfigurationResponseBody(const GetInstanceControlConfigurationResponseBody &) = default ;
    GetInstanceControlConfigurationResponseBody(GetInstanceControlConfigurationResponseBody &&) = default ;
    GetInstanceControlConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceControlConfigurationResponseBody() = default ;
    GetInstanceControlConfigurationResponseBody& operator=(const GetInstanceControlConfigurationResponseBody &) = default ;
    GetInstanceControlConfigurationResponseBody& operator=(GetInstanceControlConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceControlConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceControlConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(ControlElements, controlElements_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceControlConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(ControlElements, controlElements_);
      };
      InstanceControlConfiguration() = default ;
      InstanceControlConfiguration(const InstanceControlConfiguration &) = default ;
      InstanceControlConfiguration(InstanceControlConfiguration &&) = default ;
      InstanceControlConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceControlConfiguration() = default ;
      InstanceControlConfiguration& operator=(const InstanceControlConfiguration &) = default ;
      InstanceControlConfiguration& operator=(InstanceControlConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ControlElements : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ControlElements& obj) { 
          DARABONBA_PTR_TO_JSON(ElementName, elementName_);
          DARABONBA_PTR_TO_JSON(HumanVerificationConfig, humanVerificationConfig_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ControlElements& obj) { 
          DARABONBA_PTR_FROM_JSON(ElementName, elementName_);
          DARABONBA_PTR_FROM_JSON(HumanVerificationConfig, humanVerificationConfig_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ControlElements() = default ;
        ControlElements(const ControlElements &) = default ;
        ControlElements(ControlElements &&) = default ;
        ControlElements(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ControlElements() = default ;
        ControlElements& operator=(const ControlElements &) = default ;
        ControlElements& operator=(ControlElements &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class HumanVerificationConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HumanVerificationConfig& obj) { 
            DARABONBA_PTR_TO_JSON(HumanVerificationType, humanVerificationType_);
          };
          friend void from_json(const Darabonba::Json& j, HumanVerificationConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(HumanVerificationType, humanVerificationType_);
          };
          HumanVerificationConfig() = default ;
          HumanVerificationConfig(const HumanVerificationConfig &) = default ;
          HumanVerificationConfig(HumanVerificationConfig &&) = default ;
          HumanVerificationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HumanVerificationConfig() = default ;
          HumanVerificationConfig& operator=(const HumanVerificationConfig &) = default ;
          HumanVerificationConfig& operator=(HumanVerificationConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->humanVerificationType_ == nullptr; };
          // humanVerificationType Field Functions 
          bool hasHumanVerificationType() const { return this->humanVerificationType_ != nullptr;};
          void deleteHumanVerificationType() { this->humanVerificationType_ = nullptr;};
          inline string getHumanVerificationType() const { DARABONBA_PTR_GET_DEFAULT(humanVerificationType_, "") };
          inline HumanVerificationConfig& setHumanVerificationType(string humanVerificationType) { DARABONBA_PTR_SET_VALUE(humanVerificationType_, humanVerificationType) };


        protected:
          shared_ptr<string> humanVerificationType_ {};
        };

        virtual bool empty() const override { return this->elementName_ == nullptr
        && this->humanVerificationConfig_ == nullptr && this->status_ == nullptr; };
        // elementName Field Functions 
        bool hasElementName() const { return this->elementName_ != nullptr;};
        void deleteElementName() { this->elementName_ = nullptr;};
        inline string getElementName() const { DARABONBA_PTR_GET_DEFAULT(elementName_, "") };
        inline ControlElements& setElementName(string elementName) { DARABONBA_PTR_SET_VALUE(elementName_, elementName) };


        // humanVerificationConfig Field Functions 
        bool hasHumanVerificationConfig() const { return this->humanVerificationConfig_ != nullptr;};
        void deleteHumanVerificationConfig() { this->humanVerificationConfig_ = nullptr;};
        inline const ControlElements::HumanVerificationConfig & getHumanVerificationConfig() const { DARABONBA_PTR_GET_CONST(humanVerificationConfig_, ControlElements::HumanVerificationConfig) };
        inline ControlElements::HumanVerificationConfig getHumanVerificationConfig() { DARABONBA_PTR_GET(humanVerificationConfig_, ControlElements::HumanVerificationConfig) };
        inline ControlElements& setHumanVerificationConfig(const ControlElements::HumanVerificationConfig & humanVerificationConfig) { DARABONBA_PTR_SET_VALUE(humanVerificationConfig_, humanVerificationConfig) };
        inline ControlElements& setHumanVerificationConfig(ControlElements::HumanVerificationConfig && humanVerificationConfig) { DARABONBA_PTR_SET_RVALUE(humanVerificationConfig_, humanVerificationConfig) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ControlElements& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // 实例控制项名称，如human_verification。
        shared_ptr<string> elementName_ {};
        shared_ptr<ControlElements::HumanVerificationConfig> humanVerificationConfig_ {};
        // 实例控制项状态，enabled或者disabled。
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->controlElements_ == nullptr; };
      // controlElements Field Functions 
      bool hasControlElements() const { return this->controlElements_ != nullptr;};
      void deleteControlElements() { this->controlElements_ = nullptr;};
      inline const vector<InstanceControlConfiguration::ControlElements> & getControlElements() const { DARABONBA_PTR_GET_CONST(controlElements_, vector<InstanceControlConfiguration::ControlElements>) };
      inline vector<InstanceControlConfiguration::ControlElements> getControlElements() { DARABONBA_PTR_GET(controlElements_, vector<InstanceControlConfiguration::ControlElements>) };
      inline InstanceControlConfiguration& setControlElements(const vector<InstanceControlConfiguration::ControlElements> & controlElements) { DARABONBA_PTR_SET_VALUE(controlElements_, controlElements) };
      inline InstanceControlConfiguration& setControlElements(vector<InstanceControlConfiguration::ControlElements> && controlElements) { DARABONBA_PTR_SET_RVALUE(controlElements_, controlElements) };


    protected:
      // 实例控制配置项
      shared_ptr<vector<InstanceControlConfiguration::ControlElements>> controlElements_ {};
    };

    virtual bool empty() const override { return this->instanceControlConfiguration_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceControlConfiguration Field Functions 
    bool hasInstanceControlConfiguration() const { return this->instanceControlConfiguration_ != nullptr;};
    void deleteInstanceControlConfiguration() { this->instanceControlConfiguration_ = nullptr;};
    inline const GetInstanceControlConfigurationResponseBody::InstanceControlConfiguration & getInstanceControlConfiguration() const { DARABONBA_PTR_GET_CONST(instanceControlConfiguration_, GetInstanceControlConfigurationResponseBody::InstanceControlConfiguration) };
    inline GetInstanceControlConfigurationResponseBody::InstanceControlConfiguration getInstanceControlConfiguration() { DARABONBA_PTR_GET(instanceControlConfiguration_, GetInstanceControlConfigurationResponseBody::InstanceControlConfiguration) };
    inline GetInstanceControlConfigurationResponseBody& setInstanceControlConfiguration(const GetInstanceControlConfigurationResponseBody::InstanceControlConfiguration & instanceControlConfiguration) { DARABONBA_PTR_SET_VALUE(instanceControlConfiguration_, instanceControlConfiguration) };
    inline GetInstanceControlConfigurationResponseBody& setInstanceControlConfiguration(GetInstanceControlConfigurationResponseBody::InstanceControlConfiguration && instanceControlConfiguration) { DARABONBA_PTR_SET_RVALUE(instanceControlConfiguration_, instanceControlConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceControlConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetInstanceControlConfigurationResponseBody::InstanceControlConfiguration> instanceControlConfiguration_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
