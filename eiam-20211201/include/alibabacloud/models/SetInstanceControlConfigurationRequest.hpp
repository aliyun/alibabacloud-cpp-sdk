// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETINSTANCECONTROLCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETINSTANCECONTROLCONFIGURATIONREQUEST_HPP_
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
  class SetInstanceControlConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetInstanceControlConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ControlElements, controlElements_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, SetInstanceControlConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlElements, controlElements_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    SetInstanceControlConfigurationRequest() = default ;
    SetInstanceControlConfigurationRequest(const SetInstanceControlConfigurationRequest &) = default ;
    SetInstanceControlConfigurationRequest(SetInstanceControlConfigurationRequest &&) = default ;
    SetInstanceControlConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetInstanceControlConfigurationRequest() = default ;
    SetInstanceControlConfigurationRequest& operator=(const SetInstanceControlConfigurationRequest &) = default ;
    SetInstanceControlConfigurationRequest& operator=(SetInstanceControlConfigurationRequest &&) = default ;
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
      // 实例控制项状态。
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->controlElements_ == nullptr
        && this->instanceId_ == nullptr; };
    // controlElements Field Functions 
    bool hasControlElements() const { return this->controlElements_ != nullptr;};
    void deleteControlElements() { this->controlElements_ = nullptr;};
    inline const vector<SetInstanceControlConfigurationRequest::ControlElements> & getControlElements() const { DARABONBA_PTR_GET_CONST(controlElements_, vector<SetInstanceControlConfigurationRequest::ControlElements>) };
    inline vector<SetInstanceControlConfigurationRequest::ControlElements> getControlElements() { DARABONBA_PTR_GET(controlElements_, vector<SetInstanceControlConfigurationRequest::ControlElements>) };
    inline SetInstanceControlConfigurationRequest& setControlElements(const vector<SetInstanceControlConfigurationRequest::ControlElements> & controlElements) { DARABONBA_PTR_SET_VALUE(controlElements_, controlElements) };
    inline SetInstanceControlConfigurationRequest& setControlElements(vector<SetInstanceControlConfigurationRequest::ControlElements> && controlElements) { DARABONBA_PTR_SET_RVALUE(controlElements_, controlElements) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetInstanceControlConfigurationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 实例控制项。
    shared_ptr<vector<SetInstanceControlConfigurationRequest::ControlElements>> controlElements_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
