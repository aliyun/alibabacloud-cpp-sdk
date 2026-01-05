// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROVISIONEDPRODUCTPLANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROVISIONEDPRODUCTPLANSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class ListProvisionedProductPlansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProvisionedProductPlansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlanDetails, planDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProvisionedProductPlansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlanDetails, planDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProvisionedProductPlansResponseBody() = default ;
    ListProvisionedProductPlansResponseBody(const ListProvisionedProductPlansResponseBody &) = default ;
    ListProvisionedProductPlansResponseBody(ListProvisionedProductPlansResponseBody &&) = default ;
    ListProvisionedProductPlansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProvisionedProductPlansResponseBody() = default ;
    ListProvisionedProductPlansResponseBody& operator=(const ListProvisionedProductPlansResponseBody &) = default ;
    ListProvisionedProductPlansResponseBody& operator=(ListProvisionedProductPlansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PlanDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PlanDetails& obj) { 
        DARABONBA_PTR_TO_JSON(AssignedApprovers, assignedApprovers_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(OperationType, operationType_);
        DARABONBA_PTR_TO_JSON(OwnerPrincipalId, ownerPrincipalId_);
        DARABONBA_PTR_TO_JSON(OwnerPrincipalName, ownerPrincipalName_);
        DARABONBA_PTR_TO_JSON(OwnerPrincipalType, ownerPrincipalType_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(PlanId, planId_);
        DARABONBA_PTR_TO_JSON(PlanName, planName_);
        DARABONBA_PTR_TO_JSON(PlanType, planType_);
        DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(ProductVersionId, productVersionId_);
        DARABONBA_PTR_TO_JSON(ProvisionedProductId, provisionedProductId_);
        DARABONBA_PTR_TO_JSON(ProvisionedProductName, provisionedProductName_);
        DARABONBA_PTR_TO_JSON(StackId, stackId_);
        DARABONBA_PTR_TO_JSON(StackRegionId, stackRegionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, PlanDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(AssignedApprovers, assignedApprovers_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
        DARABONBA_PTR_FROM_JSON(OwnerPrincipalId, ownerPrincipalId_);
        DARABONBA_PTR_FROM_JSON(OwnerPrincipalName, ownerPrincipalName_);
        DARABONBA_PTR_FROM_JSON(OwnerPrincipalType, ownerPrincipalType_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(PlanId, planId_);
        DARABONBA_PTR_FROM_JSON(PlanName, planName_);
        DARABONBA_PTR_FROM_JSON(PlanType, planType_);
        DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(ProductVersionId, productVersionId_);
        DARABONBA_PTR_FROM_JSON(ProvisionedProductId, provisionedProductId_);
        DARABONBA_PTR_FROM_JSON(ProvisionedProductName, provisionedProductName_);
        DARABONBA_PTR_FROM_JSON(StackId, stackId_);
        DARABONBA_PTR_FROM_JSON(StackRegionId, stackRegionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      PlanDetails() = default ;
      PlanDetails(const PlanDetails &) = default ;
      PlanDetails(PlanDetails &&) = default ;
      PlanDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PlanDetails() = default ;
      PlanDetails& operator=(const PlanDetails &) = default ;
      PlanDetails& operator=(PlanDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The key of the custom tag.
        shared_ptr<string> key_ {};
        // The value of the custom tag.
        shared_ptr<string> value_ {};
      };

      class Parameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
          DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
          DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
        };
        friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
          DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
          DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
        };
        Parameters() = default ;
        Parameters(const Parameters &) = default ;
        Parameters(Parameters &&) = default ;
        Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Parameters() = default ;
        Parameters& operator=(const Parameters &) = default ;
        Parameters& operator=(Parameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->parameterKey_ == nullptr
        && this->parameterValue_ == nullptr; };
        // parameterKey Field Functions 
        bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
        void deleteParameterKey() { this->parameterKey_ = nullptr;};
        inline string getParameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
        inline Parameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


        // parameterValue Field Functions 
        bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
        void deleteParameterValue() { this->parameterValue_ = nullptr;};
        inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
        inline Parameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


      protected:
        // The name of the parameter in the template.
        shared_ptr<string> parameterKey_ {};
        // The value of the parameter in the template.
        shared_ptr<string> parameterValue_ {};
      };

      class AssignedApprovers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssignedApprovers& obj) { 
          DARABONBA_PTR_TO_JSON(PrincipalName, principalName_);
          DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
        };
        friend void from_json(const Darabonba::Json& j, AssignedApprovers& obj) { 
          DARABONBA_PTR_FROM_JSON(PrincipalName, principalName_);
          DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
        };
        AssignedApprovers() = default ;
        AssignedApprovers(const AssignedApprovers &) = default ;
        AssignedApprovers(AssignedApprovers &&) = default ;
        AssignedApprovers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssignedApprovers() = default ;
        AssignedApprovers& operator=(const AssignedApprovers &) = default ;
        AssignedApprovers& operator=(AssignedApprovers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->principalName_ == nullptr
        && this->principalType_ == nullptr; };
        // principalName Field Functions 
        bool hasPrincipalName() const { return this->principalName_ != nullptr;};
        void deletePrincipalName() { this->principalName_ = nullptr;};
        inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
        inline AssignedApprovers& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


        // principalType Field Functions 
        bool hasPrincipalType() const { return this->principalType_ != nullptr;};
        void deletePrincipalType() { this->principalType_ = nullptr;};
        inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
        inline AssignedApprovers& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


      protected:
        // The RAM entity name of the reviewer.
        shared_ptr<string> principalName_ {};
        // The type of the RAM entity of the reviewer. Valid values:
        // 
        // *   RamUser: a RAM user
        // *   RamRole: a RAM role
        shared_ptr<string> principalType_ {};
      };

      virtual bool empty() const override { return this->assignedApprovers_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->operationType_ == nullptr && this->ownerPrincipalId_ == nullptr && this->ownerPrincipalName_ == nullptr
        && this->ownerPrincipalType_ == nullptr && this->parameters_ == nullptr && this->planId_ == nullptr && this->planName_ == nullptr && this->planType_ == nullptr
        && this->portfolioId_ == nullptr && this->productId_ == nullptr && this->productName_ == nullptr && this->productVersionId_ == nullptr && this->provisionedProductId_ == nullptr
        && this->provisionedProductName_ == nullptr && this->stackId_ == nullptr && this->stackRegionId_ == nullptr && this->status_ == nullptr && this->statusMessage_ == nullptr
        && this->tags_ == nullptr && this->uid_ == nullptr && this->updateTime_ == nullptr; };
      // assignedApprovers Field Functions 
      bool hasAssignedApprovers() const { return this->assignedApprovers_ != nullptr;};
      void deleteAssignedApprovers() { this->assignedApprovers_ = nullptr;};
      inline const vector<PlanDetails::AssignedApprovers> & getAssignedApprovers() const { DARABONBA_PTR_GET_CONST(assignedApprovers_, vector<PlanDetails::AssignedApprovers>) };
      inline vector<PlanDetails::AssignedApprovers> getAssignedApprovers() { DARABONBA_PTR_GET(assignedApprovers_, vector<PlanDetails::AssignedApprovers>) };
      inline PlanDetails& setAssignedApprovers(const vector<PlanDetails::AssignedApprovers> & assignedApprovers) { DARABONBA_PTR_SET_VALUE(assignedApprovers_, assignedApprovers) };
      inline PlanDetails& setAssignedApprovers(vector<PlanDetails::AssignedApprovers> && assignedApprovers) { DARABONBA_PTR_SET_RVALUE(assignedApprovers_, assignedApprovers) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline PlanDetails& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PlanDetails& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // operationType Field Functions 
      bool hasOperationType() const { return this->operationType_ != nullptr;};
      void deleteOperationType() { this->operationType_ = nullptr;};
      inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
      inline PlanDetails& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


      // ownerPrincipalId Field Functions 
      bool hasOwnerPrincipalId() const { return this->ownerPrincipalId_ != nullptr;};
      void deleteOwnerPrincipalId() { this->ownerPrincipalId_ = nullptr;};
      inline string getOwnerPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(ownerPrincipalId_, "") };
      inline PlanDetails& setOwnerPrincipalId(string ownerPrincipalId) { DARABONBA_PTR_SET_VALUE(ownerPrincipalId_, ownerPrincipalId) };


      // ownerPrincipalName Field Functions 
      bool hasOwnerPrincipalName() const { return this->ownerPrincipalName_ != nullptr;};
      void deleteOwnerPrincipalName() { this->ownerPrincipalName_ = nullptr;};
      inline string getOwnerPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(ownerPrincipalName_, "") };
      inline PlanDetails& setOwnerPrincipalName(string ownerPrincipalName) { DARABONBA_PTR_SET_VALUE(ownerPrincipalName_, ownerPrincipalName) };


      // ownerPrincipalType Field Functions 
      bool hasOwnerPrincipalType() const { return this->ownerPrincipalType_ != nullptr;};
      void deleteOwnerPrincipalType() { this->ownerPrincipalType_ = nullptr;};
      inline string getOwnerPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(ownerPrincipalType_, "") };
      inline PlanDetails& setOwnerPrincipalType(string ownerPrincipalType) { DARABONBA_PTR_SET_VALUE(ownerPrincipalType_, ownerPrincipalType) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const vector<PlanDetails::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<PlanDetails::Parameters>) };
      inline vector<PlanDetails::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<PlanDetails::Parameters>) };
      inline PlanDetails& setParameters(const vector<PlanDetails::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline PlanDetails& setParameters(vector<PlanDetails::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // planId Field Functions 
      bool hasPlanId() const { return this->planId_ != nullptr;};
      void deletePlanId() { this->planId_ = nullptr;};
      inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
      inline PlanDetails& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


      // planName Field Functions 
      bool hasPlanName() const { return this->planName_ != nullptr;};
      void deletePlanName() { this->planName_ = nullptr;};
      inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
      inline PlanDetails& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


      // planType Field Functions 
      bool hasPlanType() const { return this->planType_ != nullptr;};
      void deletePlanType() { this->planType_ = nullptr;};
      inline string getPlanType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
      inline PlanDetails& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


      // portfolioId Field Functions 
      bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
      void deletePortfolioId() { this->portfolioId_ = nullptr;};
      inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
      inline PlanDetails& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline PlanDetails& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline PlanDetails& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // productVersionId Field Functions 
      bool hasProductVersionId() const { return this->productVersionId_ != nullptr;};
      void deleteProductVersionId() { this->productVersionId_ = nullptr;};
      inline string getProductVersionId() const { DARABONBA_PTR_GET_DEFAULT(productVersionId_, "") };
      inline PlanDetails& setProductVersionId(string productVersionId) { DARABONBA_PTR_SET_VALUE(productVersionId_, productVersionId) };


      // provisionedProductId Field Functions 
      bool hasProvisionedProductId() const { return this->provisionedProductId_ != nullptr;};
      void deleteProvisionedProductId() { this->provisionedProductId_ = nullptr;};
      inline string getProvisionedProductId() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductId_, "") };
      inline PlanDetails& setProvisionedProductId(string provisionedProductId) { DARABONBA_PTR_SET_VALUE(provisionedProductId_, provisionedProductId) };


      // provisionedProductName Field Functions 
      bool hasProvisionedProductName() const { return this->provisionedProductName_ != nullptr;};
      void deleteProvisionedProductName() { this->provisionedProductName_ = nullptr;};
      inline string getProvisionedProductName() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductName_, "") };
      inline PlanDetails& setProvisionedProductName(string provisionedProductName) { DARABONBA_PTR_SET_VALUE(provisionedProductName_, provisionedProductName) };


      // stackId Field Functions 
      bool hasStackId() const { return this->stackId_ != nullptr;};
      void deleteStackId() { this->stackId_ = nullptr;};
      inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
      inline PlanDetails& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


      // stackRegionId Field Functions 
      bool hasStackRegionId() const { return this->stackRegionId_ != nullptr;};
      void deleteStackRegionId() { this->stackRegionId_ = nullptr;};
      inline string getStackRegionId() const { DARABONBA_PTR_GET_DEFAULT(stackRegionId_, "") };
      inline PlanDetails& setStackRegionId(string stackRegionId) { DARABONBA_PTR_SET_VALUE(stackRegionId_, stackRegionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PlanDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusMessage Field Functions 
      bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
      void deleteStatusMessage() { this->statusMessage_ = nullptr;};
      inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
      inline PlanDetails& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<PlanDetails::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<PlanDetails::Tags>) };
      inline vector<PlanDetails::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<PlanDetails::Tags>) };
      inline PlanDetails& setTags(const vector<PlanDetails::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline PlanDetails& setTags(vector<PlanDetails::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline PlanDetails& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline PlanDetails& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // An array that consists of reviewers.
      shared_ptr<vector<PlanDetails::AssignedApprovers>> assignedApprovers_ {};
      // The time when the plan was created.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the plan.
      shared_ptr<string> description_ {};
      // The purpose of the plan. Valid values:
      // 
      // *   LaunchProduct: launches the product. This is the default value.
      // *   UpdateProvisionedProduct: updates the information about the product instance.
      // *   TerminateProvisionedProduct: terminates the product instance.
      shared_ptr<string> operationType_ {};
      // The ID of the RAM entity to which the plan belongs.
      shared_ptr<string> ownerPrincipalId_ {};
      // The name of the RAM entity to which the plan belongs.
      shared_ptr<string> ownerPrincipalName_ {};
      // The type of the RAM entity to which the plan belongs. Valid values:
      // 
      // *   RamUser: a RAM user
      // *   RamRole: a RAM role
      shared_ptr<string> ownerPrincipalType_ {};
      // An array that consists of the parameters in the template.
      shared_ptr<vector<PlanDetails::Parameters>> parameters_ {};
      // The ID of the plan.
      shared_ptr<string> planId_ {};
      // The name of the plan.
      shared_ptr<string> planName_ {};
      // The type of the plan.
      // 
      // The value is fixed as Ros, which indicates Resource Orchestration Service (ROS).
      shared_ptr<string> planType_ {};
      // The ID of the product portfolio.
      shared_ptr<string> portfolioId_ {};
      // The ID of the product.
      shared_ptr<string> productId_ {};
      // The name of the product.
      shared_ptr<string> productName_ {};
      // The ID of the product version.
      shared_ptr<string> productVersionId_ {};
      // The ID of the product instance.
      shared_ptr<string> provisionedProductId_ {};
      // The name of the product instance.
      shared_ptr<string> provisionedProductName_ {};
      // The ID of the ROS stack.
      shared_ptr<string> stackId_ {};
      // The ID of the region to which the ROS stack belongs.
      shared_ptr<string> stackRegionId_ {};
      // The state of the plan. Valid values:
      // 
      // *   PreviewInProgress: The plan is being prechecked.
      // *   PreviewSuccess: The precheck is successful.
      // *   PreviewFailed: The precheck fails.
      // *   ApplicationInProgress: The plan is being reviewed.
      // *   ApplicationApproved: The plan is approved.
      // *   ApplicationRejected: The approval is rejected.
      // *   ExecuteInProgress: The plan is being run.
      // *   ExecuteSuccess: The plan is run.
      // *   ExecuteFailed: The plan fails to be run.
      // *   Canceled: The plan is canceled.
      shared_ptr<string> status_ {};
      // The message returned for the state.
      // 
      // > This parameter is returned only when PreviewFailed or ExecuteFailed is returned for the Status parameter.
      shared_ptr<string> statusMessage_ {};
      // An array that consists of custom tags.
      shared_ptr<vector<PlanDetails::Tags>> tags_ {};
      // The ID of the Alibaba Cloud account to which the plan belongs.
      shared_ptr<string> uid_ {};
      // The last time when the task was modified.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->planDetails_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListProvisionedProductPlansResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProvisionedProductPlansResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // planDetails Field Functions 
    bool hasPlanDetails() const { return this->planDetails_ != nullptr;};
    void deletePlanDetails() { this->planDetails_ = nullptr;};
    inline const vector<ListProvisionedProductPlansResponseBody::PlanDetails> & getPlanDetails() const { DARABONBA_PTR_GET_CONST(planDetails_, vector<ListProvisionedProductPlansResponseBody::PlanDetails>) };
    inline vector<ListProvisionedProductPlansResponseBody::PlanDetails> getPlanDetails() { DARABONBA_PTR_GET(planDetails_, vector<ListProvisionedProductPlansResponseBody::PlanDetails>) };
    inline ListProvisionedProductPlansResponseBody& setPlanDetails(const vector<ListProvisionedProductPlansResponseBody::PlanDetails> & planDetails) { DARABONBA_PTR_SET_VALUE(planDetails_, planDetails) };
    inline ListProvisionedProductPlansResponseBody& setPlanDetails(vector<ListProvisionedProductPlansResponseBody::PlanDetails> && planDetails) { DARABONBA_PTR_SET_RVALUE(planDetails_, planDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProvisionedProductPlansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProvisionedProductPlansResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    // 
    // Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    // 
    // Valid values: 1 to 100. Minimum value: 1. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // An array that consists of plans.
    shared_ptr<vector<ListProvisionedProductPlansResponseBody::PlanDetails>> planDetails_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
