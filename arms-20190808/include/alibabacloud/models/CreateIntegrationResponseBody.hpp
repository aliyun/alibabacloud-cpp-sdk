// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTEGRATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTEGRATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateIntegrationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntegrationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Integration, integration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntegrationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Integration, integration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateIntegrationResponseBody() = default ;
    CreateIntegrationResponseBody(const CreateIntegrationResponseBody &) = default ;
    CreateIntegrationResponseBody(CreateIntegrationResponseBody &&) = default ;
    CreateIntegrationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntegrationResponseBody() = default ;
    CreateIntegrationResponseBody& operator=(const CreateIntegrationResponseBody &) = default ;
    CreateIntegrationResponseBody& operator=(CreateIntegrationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Integration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Integration& obj) { 
        DARABONBA_PTR_TO_JSON(AutoRecover, autoRecover_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(IntegrationId, integrationId_);
        DARABONBA_PTR_TO_JSON(IntegrationName, integrationName_);
        DARABONBA_PTR_TO_JSON(IntegrationProductType, integrationProductType_);
        DARABONBA_PTR_TO_JSON(RecoverTime, recoverTime_);
      };
      friend void from_json(const Darabonba::Json& j, Integration& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoRecover, autoRecover_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(IntegrationId, integrationId_);
        DARABONBA_PTR_FROM_JSON(IntegrationName, integrationName_);
        DARABONBA_PTR_FROM_JSON(IntegrationProductType, integrationProductType_);
        DARABONBA_PTR_FROM_JSON(RecoverTime, recoverTime_);
      };
      Integration() = default ;
      Integration(const Integration &) = default ;
      Integration(Integration &&) = default ;
      Integration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Integration() = default ;
      Integration& operator=(const Integration &) = default ;
      Integration& operator=(Integration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoRecover_ == nullptr
        && this->description_ == nullptr && this->integrationId_ == nullptr && this->integrationName_ == nullptr && this->integrationProductType_ == nullptr && this->recoverTime_ == nullptr; };
      // autoRecover Field Functions 
      bool hasAutoRecover() const { return this->autoRecover_ != nullptr;};
      void deleteAutoRecover() { this->autoRecover_ = nullptr;};
      inline bool getAutoRecover() const { DARABONBA_PTR_GET_DEFAULT(autoRecover_, false) };
      inline Integration& setAutoRecover(bool autoRecover) { DARABONBA_PTR_SET_VALUE(autoRecover_, autoRecover) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Integration& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // integrationId Field Functions 
      bool hasIntegrationId() const { return this->integrationId_ != nullptr;};
      void deleteIntegrationId() { this->integrationId_ = nullptr;};
      inline int64_t getIntegrationId() const { DARABONBA_PTR_GET_DEFAULT(integrationId_, 0L) };
      inline Integration& setIntegrationId(int64_t integrationId) { DARABONBA_PTR_SET_VALUE(integrationId_, integrationId) };


      // integrationName Field Functions 
      bool hasIntegrationName() const { return this->integrationName_ != nullptr;};
      void deleteIntegrationName() { this->integrationName_ = nullptr;};
      inline string getIntegrationName() const { DARABONBA_PTR_GET_DEFAULT(integrationName_, "") };
      inline Integration& setIntegrationName(string integrationName) { DARABONBA_PTR_SET_VALUE(integrationName_, integrationName) };


      // integrationProductType Field Functions 
      bool hasIntegrationProductType() const { return this->integrationProductType_ != nullptr;};
      void deleteIntegrationProductType() { this->integrationProductType_ = nullptr;};
      inline string getIntegrationProductType() const { DARABONBA_PTR_GET_DEFAULT(integrationProductType_, "") };
      inline Integration& setIntegrationProductType(string integrationProductType) { DARABONBA_PTR_SET_VALUE(integrationProductType_, integrationProductType) };


      // recoverTime Field Functions 
      bool hasRecoverTime() const { return this->recoverTime_ != nullptr;};
      void deleteRecoverTime() { this->recoverTime_ = nullptr;};
      inline int64_t getRecoverTime() const { DARABONBA_PTR_GET_DEFAULT(recoverTime_, 0L) };
      inline Integration& setRecoverTime(int64_t recoverTime) { DARABONBA_PTR_SET_VALUE(recoverTime_, recoverTime) };


    protected:
      // Indicates whether alert events are automatically cleared. Default value: true. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> autoRecover_ {};
      // The description of the alert integration.
      shared_ptr<string> description_ {};
      // The ID of the alert integration.
      shared_ptr<int64_t> integrationId_ {};
      // The name of the alert integration.
      shared_ptr<string> integrationName_ {};
      // The service of the alert integration. Valid values:
      // 
      // *   CLOUD_MONITOR: CloudMonitor
      // *   LOG_SERVICE: Log Service
      shared_ptr<string> integrationProductType_ {};
      // The period of time within which alert events are automatically cleared. Unit: seconds. Default value: 300.
      shared_ptr<int64_t> recoverTime_ {};
    };

    virtual bool empty() const override { return this->integration_ == nullptr
        && this->requestId_ == nullptr; };
    // integration Field Functions 
    bool hasIntegration() const { return this->integration_ != nullptr;};
    void deleteIntegration() { this->integration_ = nullptr;};
    inline const CreateIntegrationResponseBody::Integration & getIntegration() const { DARABONBA_PTR_GET_CONST(integration_, CreateIntegrationResponseBody::Integration) };
    inline CreateIntegrationResponseBody::Integration getIntegration() { DARABONBA_PTR_GET(integration_, CreateIntegrationResponseBody::Integration) };
    inline CreateIntegrationResponseBody& setIntegration(const CreateIntegrationResponseBody::Integration & integration) { DARABONBA_PTR_SET_VALUE(integration_, integration) };
    inline CreateIntegrationResponseBody& setIntegration(CreateIntegrationResponseBody::Integration && integration) { DARABONBA_PTR_SET_RVALUE(integration_, integration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIntegrationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned information about the alert integration.
    shared_ptr<CreateIntegrationResponseBody::Integration> integration_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
