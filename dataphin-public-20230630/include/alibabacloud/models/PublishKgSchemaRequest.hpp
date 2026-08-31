// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHKGSCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHKGSCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class PublishKgSchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishKgSchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(PublishCommand, publishCommand_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, PublishKgSchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(PublishCommand, publishCommand_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    PublishKgSchemaRequest() = default ;
    PublishKgSchemaRequest(const PublishKgSchemaRequest &) = default ;
    PublishKgSchemaRequest(PublishKgSchemaRequest &&) = default ;
    PublishKgSchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishKgSchemaRequest() = default ;
    PublishKgSchemaRequest& operator=(const PublishKgSchemaRequest &) = default ;
    PublishKgSchemaRequest& operator=(PublishKgSchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PublishCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PublishCommand& obj) { 
        DARABONBA_PTR_TO_JSON(DataAdjustmentPolicies, dataAdjustmentPolicies_);
        DARABONBA_PTR_TO_JSON(Description, description_);
      };
      friend void from_json(const Darabonba::Json& j, PublishCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(DataAdjustmentPolicies, dataAdjustmentPolicies_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
      };
      PublishCommand() = default ;
      PublishCommand(const PublishCommand &) = default ;
      PublishCommand(PublishCommand &&) = default ;
      PublishCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PublishCommand() = default ;
      PublishCommand& operator=(const PublishCommand &) = default ;
      PublishCommand& operator=(PublishCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataAdjustmentPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataAdjustmentPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(BackFillDefaultValuePolicy, backFillDefaultValuePolicy_);
          DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(TypeCode, typeCode_);
        };
        friend void from_json(const Darabonba::Json& j, DataAdjustmentPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(BackFillDefaultValuePolicy, backFillDefaultValuePolicy_);
          DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(TypeCode, typeCode_);
        };
        DataAdjustmentPolicies() = default ;
        DataAdjustmentPolicies(const DataAdjustmentPolicies &) = default ;
        DataAdjustmentPolicies(DataAdjustmentPolicies &&) = default ;
        DataAdjustmentPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataAdjustmentPolicies() = default ;
        DataAdjustmentPolicies& operator=(const DataAdjustmentPolicies &) = default ;
        DataAdjustmentPolicies& operator=(DataAdjustmentPolicies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class BackFillDefaultValuePolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BackFillDefaultValuePolicy& obj) { 
            DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_TO_JSON(PropertyCode, propertyCode_);
          };
          friend void from_json(const Darabonba::Json& j, BackFillDefaultValuePolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_FROM_JSON(PropertyCode, propertyCode_);
          };
          BackFillDefaultValuePolicy() = default ;
          BackFillDefaultValuePolicy(const BackFillDefaultValuePolicy &) = default ;
          BackFillDefaultValuePolicy(BackFillDefaultValuePolicy &&) = default ;
          BackFillDefaultValuePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BackFillDefaultValuePolicy() = default ;
          BackFillDefaultValuePolicy& operator=(const BackFillDefaultValuePolicy &) = default ;
          BackFillDefaultValuePolicy& operator=(BackFillDefaultValuePolicy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->propertyCode_ == nullptr; };
          // defaultValue Field Functions 
          bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
          void deleteDefaultValue() { this->defaultValue_ = nullptr;};
          inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
          inline BackFillDefaultValuePolicy& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


          // propertyCode Field Functions 
          bool hasPropertyCode() const { return this->propertyCode_ != nullptr;};
          void deletePropertyCode() { this->propertyCode_ = nullptr;};
          inline string getPropertyCode() const { DARABONBA_PTR_GET_DEFAULT(propertyCode_, "") };
          inline BackFillDefaultValuePolicy& setPropertyCode(string propertyCode) { DARABONBA_PTR_SET_VALUE(propertyCode_, propertyCode) };


        protected:
          // The default value to backfill for the property.
          // 
          // This parameter is required.
          shared_ptr<string> defaultValue_ {};
          // The property code.
          // 
          // This parameter is required.
          shared_ptr<string> propertyCode_ {};
        };

        virtual bool empty() const override { return this->backFillDefaultValuePolicy_ == nullptr
        && this->policyType_ == nullptr && this->type_ == nullptr && this->typeCode_ == nullptr; };
        // backFillDefaultValuePolicy Field Functions 
        bool hasBackFillDefaultValuePolicy() const { return this->backFillDefaultValuePolicy_ != nullptr;};
        void deleteBackFillDefaultValuePolicy() { this->backFillDefaultValuePolicy_ = nullptr;};
        inline const DataAdjustmentPolicies::BackFillDefaultValuePolicy & getBackFillDefaultValuePolicy() const { DARABONBA_PTR_GET_CONST(backFillDefaultValuePolicy_, DataAdjustmentPolicies::BackFillDefaultValuePolicy) };
        inline DataAdjustmentPolicies::BackFillDefaultValuePolicy getBackFillDefaultValuePolicy() { DARABONBA_PTR_GET(backFillDefaultValuePolicy_, DataAdjustmentPolicies::BackFillDefaultValuePolicy) };
        inline DataAdjustmentPolicies& setBackFillDefaultValuePolicy(const DataAdjustmentPolicies::BackFillDefaultValuePolicy & backFillDefaultValuePolicy) { DARABONBA_PTR_SET_VALUE(backFillDefaultValuePolicy_, backFillDefaultValuePolicy) };
        inline DataAdjustmentPolicies& setBackFillDefaultValuePolicy(DataAdjustmentPolicies::BackFillDefaultValuePolicy && backFillDefaultValuePolicy) { DARABONBA_PTR_SET_RVALUE(backFillDefaultValuePolicy_, backFillDefaultValuePolicy) };


        // policyType Field Functions 
        bool hasPolicyType() const { return this->policyType_ != nullptr;};
        void deletePolicyType() { this->policyType_ = nullptr;};
        inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
        inline DataAdjustmentPolicies& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DataAdjustmentPolicies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // typeCode Field Functions 
        bool hasTypeCode() const { return this->typeCode_ != nullptr;};
        void deleteTypeCode() { this->typeCode_ = nullptr;};
        inline string getTypeCode() const { DARABONBA_PTR_GET_DEFAULT(typeCode_, "") };
        inline DataAdjustmentPolicies& setTypeCode(string typeCode) { DARABONBA_PTR_SET_VALUE(typeCode_, typeCode) };


      protected:
        // The backfill property default value policy. This parameter takes effect only when PolicyType is set to BackFillDefault.
        // 
        // This parameter is required.
        shared_ptr<DataAdjustmentPolicies::BackFillDefaultValuePolicy> backFillDefaultValuePolicy_ {};
        // The policy type. Valid values:
        // 
        // - BackFillDefault: backfills default values when a property changes from optional to required.
        // 
        // This parameter is required.
        shared_ptr<string> policyType_ {};
        // The type to which the policy applies. Valid values:
        // 
        // - ENTITY: applies to entity types.
        // - RELATION: applies to relation types.
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
        // The code of the entity type or relation type.
        // 
        // This parameter is required.
        shared_ptr<string> typeCode_ {};
      };

      virtual bool empty() const override { return this->dataAdjustmentPolicies_ == nullptr
        && this->description_ == nullptr; };
      // dataAdjustmentPolicies Field Functions 
      bool hasDataAdjustmentPolicies() const { return this->dataAdjustmentPolicies_ != nullptr;};
      void deleteDataAdjustmentPolicies() { this->dataAdjustmentPolicies_ = nullptr;};
      inline const vector<PublishCommand::DataAdjustmentPolicies> & getDataAdjustmentPolicies() const { DARABONBA_PTR_GET_CONST(dataAdjustmentPolicies_, vector<PublishCommand::DataAdjustmentPolicies>) };
      inline vector<PublishCommand::DataAdjustmentPolicies> getDataAdjustmentPolicies() { DARABONBA_PTR_GET(dataAdjustmentPolicies_, vector<PublishCommand::DataAdjustmentPolicies>) };
      inline PublishCommand& setDataAdjustmentPolicies(const vector<PublishCommand::DataAdjustmentPolicies> & dataAdjustmentPolicies) { DARABONBA_PTR_SET_VALUE(dataAdjustmentPolicies_, dataAdjustmentPolicies) };
      inline PublishCommand& setDataAdjustmentPolicies(vector<PublishCommand::DataAdjustmentPolicies> && dataAdjustmentPolicies) { DARABONBA_PTR_SET_RVALUE(dataAdjustmentPolicies_, dataAdjustmentPolicies) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PublishCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    protected:
      // The data adjustment policies.
      shared_ptr<vector<PublishCommand::DataAdjustmentPolicies>> dataAdjustmentPolicies_ {};
      // The description.
      // 
      // This parameter is required.
      shared_ptr<string> description_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->publishCommand_ == nullptr && this->workspaceId_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline PublishKgSchemaRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline PublishKgSchemaRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // publishCommand Field Functions 
    bool hasPublishCommand() const { return this->publishCommand_ != nullptr;};
    void deletePublishCommand() { this->publishCommand_ = nullptr;};
    inline const PublishKgSchemaRequest::PublishCommand & getPublishCommand() const { DARABONBA_PTR_GET_CONST(publishCommand_, PublishKgSchemaRequest::PublishCommand) };
    inline PublishKgSchemaRequest::PublishCommand getPublishCommand() { DARABONBA_PTR_GET(publishCommand_, PublishKgSchemaRequest::PublishCommand) };
    inline PublishKgSchemaRequest& setPublishCommand(const PublishKgSchemaRequest::PublishCommand & publishCommand) { DARABONBA_PTR_SET_VALUE(publishCommand_, publishCommand) };
    inline PublishKgSchemaRequest& setPublishCommand(PublishKgSchemaRequest::PublishCommand && publishCommand) { DARABONBA_PTR_SET_RVALUE(publishCommand_, publishCommand) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline PublishKgSchemaRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
    // The publish command and its details.
    // 
    // This parameter is required.
    shared_ptr<PublishKgSchemaRequest::PublishCommand> publishCommand_ {};
    // The model ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
