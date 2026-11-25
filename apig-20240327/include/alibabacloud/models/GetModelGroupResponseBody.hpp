// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODELGROUPRESPONSEBODY_HPP_
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
  class GetModelGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetModelGroupResponseBody() = default ;
    GetModelGroupResponseBody(const GetModelGroupResponseBody &) = default ;
    GetModelGroupResponseBody(GetModelGroupResponseBody &&) = default ;
    GetModelGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelGroupResponseBody() = default ;
    GetModelGroupResponseBody& operator=(const GetModelGroupResponseBody &) = default ;
    GetModelGroupResponseBody& operator=(GetModelGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(configurationDeployment, configurationDeployment_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(entitlementState, entitlementState_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(modelCardIds, modelCardIds_);
        DARABONBA_PTR_TO_JSON(modelGroupId, modelGroupId_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(configurationDeployment, configurationDeployment_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(entitlementState, entitlementState_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(modelCardIds, modelCardIds_);
        DARABONBA_PTR_FROM_JSON(modelGroupId, modelGroupId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EntitlementState : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EntitlementState& obj) { 
          DARABONBA_PTR_TO_JSON(appliedRevision, appliedRevision_);
          DARABONBA_PTR_TO_JSON(desiredRevision, desiredRevision_);
          DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, EntitlementState& obj) { 
          DARABONBA_PTR_FROM_JSON(appliedRevision, appliedRevision_);
          DARABONBA_PTR_FROM_JSON(desiredRevision, desiredRevision_);
          DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        EntitlementState() = default ;
        EntitlementState(const EntitlementState &) = default ;
        EntitlementState(EntitlementState &&) = default ;
        EntitlementState(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EntitlementState() = default ;
        EntitlementState& operator=(const EntitlementState &) = default ;
        EntitlementState& operator=(EntitlementState &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appliedRevision_ == nullptr
        && this->desiredRevision_ == nullptr && this->errorMessage_ == nullptr && this->status_ == nullptr; };
        // appliedRevision Field Functions 
        bool hasAppliedRevision() const { return this->appliedRevision_ != nullptr;};
        void deleteAppliedRevision() { this->appliedRevision_ = nullptr;};
        inline int64_t getAppliedRevision() const { DARABONBA_PTR_GET_DEFAULT(appliedRevision_, 0L) };
        inline EntitlementState& setAppliedRevision(int64_t appliedRevision) { DARABONBA_PTR_SET_VALUE(appliedRevision_, appliedRevision) };


        // desiredRevision Field Functions 
        bool hasDesiredRevision() const { return this->desiredRevision_ != nullptr;};
        void deleteDesiredRevision() { this->desiredRevision_ = nullptr;};
        inline int64_t getDesiredRevision() const { DARABONBA_PTR_GET_DEFAULT(desiredRevision_, 0L) };
        inline EntitlementState& setDesiredRevision(int64_t desiredRevision) { DARABONBA_PTR_SET_VALUE(desiredRevision_, desiredRevision) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline EntitlementState& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline EntitlementState& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The applied entitlement revision.
        shared_ptr<int64_t> appliedRevision_ {};
        // The desired entitlement revision.
        shared_ptr<int64_t> desiredRevision_ {};
        // The error message when entitlement fails. This field is not returned when no error occurs.
        shared_ptr<string> errorMessage_ {};
        // The entitlement status. Valid values: Pending, Applying, Committed, and Failed. Committed indicates only that the control plane has successfully submitted and read back the status, and does not mean that all nodes have acknowledged it.
        shared_ptr<string> status_ {};
      };

      class ConfigurationDeployment : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigurationDeployment& obj) { 
          DARABONBA_PTR_TO_JSON(operationId, operationId_);
          DARABONBA_PTR_TO_JSON(revision, revision_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigurationDeployment& obj) { 
          DARABONBA_PTR_FROM_JSON(operationId, operationId_);
          DARABONBA_PTR_FROM_JSON(revision, revision_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        ConfigurationDeployment() = default ;
        ConfigurationDeployment(const ConfigurationDeployment &) = default ;
        ConfigurationDeployment(ConfigurationDeployment &&) = default ;
        ConfigurationDeployment(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigurationDeployment() = default ;
        ConfigurationDeployment& operator=(const ConfigurationDeployment &) = default ;
        ConfigurationDeployment& operator=(ConfigurationDeployment &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->operationId_ == nullptr
        && this->revision_ == nullptr && this->status_ == nullptr; };
        // operationId Field Functions 
        bool hasOperationId() const { return this->operationId_ != nullptr;};
        void deleteOperationId() { this->operationId_ = nullptr;};
        inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
        inline ConfigurationDeployment& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


        // revision Field Functions 
        bool hasRevision() const { return this->revision_ != nullptr;};
        void deleteRevision() { this->revision_ = nullptr;};
        inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
        inline ConfigurationDeployment& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ConfigurationDeployment& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The operation ID of the group configuration task, which is used for tracking only. It cannot be used for GetLogicalModelDeployment or RetryLogicalModelDeployment.
        shared_ptr<string> operationId_ {};
        // The model group version corresponding to the task, which may be earlier than the current version.
        shared_ptr<int64_t> revision_ {};
        // The configuration deployment status. Valid values: Pending, Running, Succeeded, Failed, and PartiallyFailed.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->configurationDeployment_ == nullptr
        && this->description_ == nullptr && this->entitlementState_ == nullptr && this->gatewayId_ == nullptr && this->modelCardIds_ == nullptr && this->modelGroupId_ == nullptr
        && this->name_ == nullptr && this->updateTime_ == nullptr && this->version_ == nullptr; };
      // configurationDeployment Field Functions 
      bool hasConfigurationDeployment() const { return this->configurationDeployment_ != nullptr;};
      void deleteConfigurationDeployment() { this->configurationDeployment_ = nullptr;};
      inline const Data::ConfigurationDeployment & getConfigurationDeployment() const { DARABONBA_PTR_GET_CONST(configurationDeployment_, Data::ConfigurationDeployment) };
      inline Data::ConfigurationDeployment getConfigurationDeployment() { DARABONBA_PTR_GET(configurationDeployment_, Data::ConfigurationDeployment) };
      inline Data& setConfigurationDeployment(const Data::ConfigurationDeployment & configurationDeployment) { DARABONBA_PTR_SET_VALUE(configurationDeployment_, configurationDeployment) };
      inline Data& setConfigurationDeployment(Data::ConfigurationDeployment && configurationDeployment) { DARABONBA_PTR_SET_RVALUE(configurationDeployment_, configurationDeployment) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // entitlementState Field Functions 
      bool hasEntitlementState() const { return this->entitlementState_ != nullptr;};
      void deleteEntitlementState() { this->entitlementState_ = nullptr;};
      inline const Data::EntitlementState & getEntitlementState() const { DARABONBA_PTR_GET_CONST(entitlementState_, Data::EntitlementState) };
      inline Data::EntitlementState getEntitlementState() { DARABONBA_PTR_GET(entitlementState_, Data::EntitlementState) };
      inline Data& setEntitlementState(const Data::EntitlementState & entitlementState) { DARABONBA_PTR_SET_VALUE(entitlementState_, entitlementState) };
      inline Data& setEntitlementState(Data::EntitlementState && entitlementState) { DARABONBA_PTR_SET_RVALUE(entitlementState_, entitlementState) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // modelCardIds Field Functions 
      bool hasModelCardIds() const { return this->modelCardIds_ != nullptr;};
      void deleteModelCardIds() { this->modelCardIds_ = nullptr;};
      inline const vector<string> & getModelCardIds() const { DARABONBA_PTR_GET_CONST(modelCardIds_, vector<string>) };
      inline vector<string> getModelCardIds() { DARABONBA_PTR_GET(modelCardIds_, vector<string>) };
      inline Data& setModelCardIds(const vector<string> & modelCardIds) { DARABONBA_PTR_SET_VALUE(modelCardIds_, modelCardIds) };
      inline Data& setModelCardIds(vector<string> && modelCardIds) { DARABONBA_PTR_SET_RVALUE(modelCardIds_, modelCardIds) };


      // modelGroupId Field Functions 
      bool hasModelGroupId() const { return this->modelGroupId_ != nullptr;};
      void deleteModelGroupId() { this->modelGroupId_ = nullptr;};
      inline string getModelGroupId() const { DARABONBA_PTR_GET_DEFAULT(modelGroupId_, "") };
      inline Data& setModelGroupId(string modelGroupId) { DARABONBA_PTR_SET_VALUE(modelGroupId_, modelGroupId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline Data& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The summary of the latest group configuration deployment, which is independent of API publishing and entitlement status. This field is not returned when no deployment task exists, and its presence does not indicate success. It represents the current version only when the revision matches the current version. List operations do not guarantee that this field is populated.
      shared_ptr<Data::ConfigurationDeployment> configurationDeployment_ {};
      // The description of the model group.
      shared_ptr<string> description_ {};
      // The entitlement status information.
      shared_ptr<Data::EntitlementState> entitlementState_ {};
      // The ID of the gateway instance.
      shared_ptr<string> gatewayId_ {};
      // The list of model card IDs included in the model group.
      shared_ptr<vector<string>> modelCardIds_ {};
      // The ID of the model group.
      shared_ptr<string> modelGroupId_ {};
      // The name of the model group.
      shared_ptr<string> name_ {};
      // The last update time in ISO 8601 (RFC 3339) format in the UTC time zone, such as 2026-05-15T10:00:00Z.
      shared_ptr<string> updateTime_ {};
      // The version number of the model group.
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetModelGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetModelGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetModelGroupResponseBody::Data) };
    inline GetModelGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetModelGroupResponseBody::Data) };
    inline GetModelGroupResponseBody& setData(const GetModelGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetModelGroupResponseBody& setData(GetModelGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetModelGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModelGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetModelGroupResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
