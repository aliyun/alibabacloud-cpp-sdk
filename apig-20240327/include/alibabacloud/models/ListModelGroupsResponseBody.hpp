// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELGROUPSRESPONSEBODY_HPP_
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
  class ListModelGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListModelGroupsResponseBody() = default ;
    ListModelGroupsResponseBody(const ListModelGroupsResponseBody &) = default ;
    ListModelGroupsResponseBody(ListModelGroupsResponseBody &&) = default ;
    ListModelGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelGroupsResponseBody() = default ;
    ListModelGroupsResponseBody& operator=(const ListModelGroupsResponseBody &) = default ;
    ListModelGroupsResponseBody& operator=(ListModelGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
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
          // The applied entitlement revision number.
          shared_ptr<int64_t> appliedRevision_ {};
          // The desired entitlement revision number to be delivered.
          shared_ptr<int64_t> desiredRevision_ {};
          // The error message when processing fails. This field is empty if no errors occur.
          shared_ptr<string> errorMessage_ {};
          // The status of the entitlement. Valid values: Pending, Applying, Committed, and Failed. Committed indicates that the control plane has submitted and read back the configuration, but does not guarantee acknowledgment from all pods.
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
          // The identity of the group configuration task, which is used for tracking only. This task cannot be accessed by GetLogicalModelDeployment or RetryLogicalModelDeployment.
          shared_ptr<string> operationId_ {};
          // The group version corresponding to this task, which may be earlier than the current group version.
          shared_ptr<int64_t> revision_ {};
          // The status of the deployment. Valid values: Pending, Running, Succeeded, Failed, and PartiallyFailed.
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->configurationDeployment_ == nullptr
        && this->description_ == nullptr && this->entitlementState_ == nullptr && this->gatewayId_ == nullptr && this->modelCardIds_ == nullptr && this->modelGroupId_ == nullptr
        && this->name_ == nullptr && this->updateTime_ == nullptr && this->version_ == nullptr; };
        // configurationDeployment Field Functions 
        bool hasConfigurationDeployment() const { return this->configurationDeployment_ != nullptr;};
        void deleteConfigurationDeployment() { this->configurationDeployment_ = nullptr;};
        inline const Items::ConfigurationDeployment & getConfigurationDeployment() const { DARABONBA_PTR_GET_CONST(configurationDeployment_, Items::ConfigurationDeployment) };
        inline Items::ConfigurationDeployment getConfigurationDeployment() { DARABONBA_PTR_GET(configurationDeployment_, Items::ConfigurationDeployment) };
        inline Items& setConfigurationDeployment(const Items::ConfigurationDeployment & configurationDeployment) { DARABONBA_PTR_SET_VALUE(configurationDeployment_, configurationDeployment) };
        inline Items& setConfigurationDeployment(Items::ConfigurationDeployment && configurationDeployment) { DARABONBA_PTR_SET_RVALUE(configurationDeployment_, configurationDeployment) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // entitlementState Field Functions 
        bool hasEntitlementState() const { return this->entitlementState_ != nullptr;};
        void deleteEntitlementState() { this->entitlementState_ = nullptr;};
        inline const Items::EntitlementState & getEntitlementState() const { DARABONBA_PTR_GET_CONST(entitlementState_, Items::EntitlementState) };
        inline Items::EntitlementState getEntitlementState() { DARABONBA_PTR_GET(entitlementState_, Items::EntitlementState) };
        inline Items& setEntitlementState(const Items::EntitlementState & entitlementState) { DARABONBA_PTR_SET_VALUE(entitlementState_, entitlementState) };
        inline Items& setEntitlementState(Items::EntitlementState && entitlementState) { DARABONBA_PTR_SET_RVALUE(entitlementState_, entitlementState) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
        inline Items& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // modelCardIds Field Functions 
        bool hasModelCardIds() const { return this->modelCardIds_ != nullptr;};
        void deleteModelCardIds() { this->modelCardIds_ = nullptr;};
        inline const vector<string> & getModelCardIds() const { DARABONBA_PTR_GET_CONST(modelCardIds_, vector<string>) };
        inline vector<string> getModelCardIds() { DARABONBA_PTR_GET(modelCardIds_, vector<string>) };
        inline Items& setModelCardIds(const vector<string> & modelCardIds) { DARABONBA_PTR_SET_VALUE(modelCardIds_, modelCardIds) };
        inline Items& setModelCardIds(vector<string> && modelCardIds) { DARABONBA_PTR_SET_RVALUE(modelCardIds_, modelCardIds) };


        // modelGroupId Field Functions 
        bool hasModelGroupId() const { return this->modelGroupId_ != nullptr;};
        void deleteModelGroupId() { this->modelGroupId_ = nullptr;};
        inline string getModelGroupId() const { DARABONBA_PTR_GET_DEFAULT(modelGroupId_, "") };
        inline Items& setModelGroupId(string modelGroupId) { DARABONBA_PTR_SET_VALUE(modelGroupId_, modelGroupId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Items& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
        inline Items& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The summary of the most recent group configuration deployment returned by GetModelGroup. This is independent of the API release and entitlement status. If no task exists, this field is omitted and does not indicate success. The deployment represents the current version only when the revision matches the current version. This field is not guaranteed to be populated in list operations.
        shared_ptr<Items::ConfigurationDeployment> configurationDeployment_ {};
        // The description of the model group.
        shared_ptr<string> description_ {};
        // The control plane delivery status and revision number of the model access entitlement.
        shared_ptr<Items::EntitlementState> entitlementState_ {};
        // The ID of the AI gateway instance to which the resource belongs.
        shared_ptr<string> gatewayId_ {};
        // The collection of model card identifiers.
        shared_ptr<vector<string>> modelCardIds_ {};
        // The model group ID. Use the modelGroupId returned by CreateModelGroup.
        shared_ptr<string> modelGroupId_ {};
        // The name of the model group.
        shared_ptr<string> name_ {};
        // The update time in RFC3339 format.
        shared_ptr<string> updateTime_ {};
        // The current version of the object, which is used for conditional validation during updates or deletions.
        shared_ptr<int64_t> version_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of model groups returned on the current page.
      shared_ptr<vector<Data::Items>> items_ {};
      // The maximum number of records returned per page.
      shared_ptr<int32_t> maxResults_ {};
      // The pagination token returned from the previous page. Do not specify this parameter when you query the first page.
      shared_ptr<string> nextToken_ {};
      // The total number of records that match the current query conditions.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListModelGroupsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListModelGroupsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListModelGroupsResponseBody::Data) };
    inline ListModelGroupsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListModelGroupsResponseBody::Data) };
    inline ListModelGroupsResponseBody& setData(const ListModelGroupsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListModelGroupsResponseBody& setData(ListModelGroupsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListModelGroupsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code. The value is Ok for a successful request, or a specific business error code for a failed request.
    shared_ptr<string> code_ {};
    // The business result returned by the model group operation.
    shared_ptr<ListModelGroupsResponseBody::Data> data_ {};
    // The response message, which describes the request processing result.
    shared_ptr<string> message_ {};
    // The request ID, which is generated by the system and used to trace the call.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
