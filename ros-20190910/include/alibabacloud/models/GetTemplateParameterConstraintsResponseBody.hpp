// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEPARAMETERCONSTRAINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEPARAMETERCONSTRAINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateParameterConstraintsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateParameterConstraintsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterConstraints, parameterConstraints_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateParameterConstraintsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterConstraints, parameterConstraints_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetTemplateParameterConstraintsResponseBody() = default ;
    GetTemplateParameterConstraintsResponseBody(const GetTemplateParameterConstraintsResponseBody &) = default ;
    GetTemplateParameterConstraintsResponseBody(GetTemplateParameterConstraintsResponseBody &&) = default ;
    GetTemplateParameterConstraintsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateParameterConstraintsResponseBody() = default ;
    GetTemplateParameterConstraintsResponseBody& operator=(const GetTemplateParameterConstraintsResponseBody &) = default ;
    GetTemplateParameterConstraintsResponseBody& operator=(GetTemplateParameterConstraintsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParameterConstraints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParameterConstraints& obj) { 
        DARABONBA_PTR_TO_JSON(AllowedValues, allowedValues_);
        DARABONBA_PTR_TO_JSON(AssociationParameterNames, associationParameterNames_);
        DARABONBA_PTR_TO_JSON(Behavior, behavior_);
        DARABONBA_PTR_TO_JSON(BehaviorReason, behaviorReason_);
        DARABONBA_PTR_TO_JSON(IllegalValueByParameterConstraints, illegalValueByParameterConstraints_);
        DARABONBA_PTR_TO_JSON(IllegalValueByRules, illegalValueByRules_);
        DARABONBA_PTR_TO_JSON(NotSupportResources, notSupportResources_);
        DARABONBA_PTR_TO_JSON(OriginalConstraints, originalConstraints_);
        DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_TO_JSON(QueryErrors, queryErrors_);
        DARABONBA_PTR_TO_JSON(QueryTimeoutDetails, queryTimeoutDetails_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ParameterConstraints& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowedValues, allowedValues_);
        DARABONBA_PTR_FROM_JSON(AssociationParameterNames, associationParameterNames_);
        DARABONBA_PTR_FROM_JSON(Behavior, behavior_);
        DARABONBA_PTR_FROM_JSON(BehaviorReason, behaviorReason_);
        DARABONBA_PTR_FROM_JSON(IllegalValueByParameterConstraints, illegalValueByParameterConstraints_);
        DARABONBA_PTR_FROM_JSON(IllegalValueByRules, illegalValueByRules_);
        DARABONBA_PTR_FROM_JSON(NotSupportResources, notSupportResources_);
        DARABONBA_PTR_FROM_JSON(OriginalConstraints, originalConstraints_);
        DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_FROM_JSON(QueryErrors, queryErrors_);
        DARABONBA_PTR_FROM_JSON(QueryTimeoutDetails, queryTimeoutDetails_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ParameterConstraints() = default ;
      ParameterConstraints(const ParameterConstraints &) = default ;
      ParameterConstraints(ParameterConstraints &&) = default ;
      ParameterConstraints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParameterConstraints() = default ;
      ParameterConstraints& operator=(const ParameterConstraints &) = default ;
      ParameterConstraints& operator=(ParameterConstraints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class QueryTimeoutDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QueryTimeoutDetails& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, QueryTimeoutDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        };
        QueryTimeoutDetails() = default ;
        QueryTimeoutDetails(const QueryTimeoutDetails &) = default ;
        QueryTimeoutDetails(QueryTimeoutDetails &&) = default ;
        QueryTimeoutDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QueryTimeoutDetails() = default ;
        QueryTimeoutDetails& operator=(const QueryTimeoutDetails &) = default ;
        QueryTimeoutDetails& operator=(QueryTimeoutDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->resourceName_ == nullptr && this->resourceType_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline QueryTimeoutDetails& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // resourceName Field Functions 
        bool hasResourceName() const { return this->resourceName_ != nullptr;};
        void deleteResourceName() { this->resourceName_ = nullptr;};
        inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
        inline QueryTimeoutDetails& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline QueryTimeoutDetails& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        // Error message.
        shared_ptr<string> errorMessage_ {};
        // Resource name.
        shared_ptr<string> resourceName_ {};
        // Resource type.
        shared_ptr<string> resourceType_ {};
      };

      class QueryErrors : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QueryErrors& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, QueryErrors& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        };
        QueryErrors() = default ;
        QueryErrors(const QueryErrors &) = default ;
        QueryErrors(QueryErrors &&) = default ;
        QueryErrors(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QueryErrors() = default ;
        QueryErrors& operator=(const QueryErrors &) = default ;
        QueryErrors& operator=(QueryErrors &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->resourceName_ == nullptr && this->resourceType_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline QueryErrors& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // resourceName Field Functions 
        bool hasResourceName() const { return this->resourceName_ != nullptr;};
        void deleteResourceName() { this->resourceName_ = nullptr;};
        inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
        inline QueryErrors& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline QueryErrors& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        // The error message.
        shared_ptr<string> errorMessage_ {};
        // The resource name.
        shared_ptr<string> resourceName_ {};
        // The resource type.
        shared_ptr<string> resourceType_ {};
      };

      class OriginalConstraints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OriginalConstraints& obj) { 
          DARABONBA_PTR_TO_JSON(AllowedValues, allowedValues_);
          DARABONBA_PTR_TO_JSON(Behavior, behavior_);
          DARABONBA_PTR_TO_JSON(BehaviorReason, behaviorReason_);
          DARABONBA_PTR_TO_JSON(PropertiesData, propertiesData_);
          DARABONBA_PTR_TO_JSON(PropertyName, propertyName_);
          DARABONBA_PTR_TO_JSON(RequestInfo, requestInfo_);
          DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, OriginalConstraints& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowedValues, allowedValues_);
          DARABONBA_PTR_FROM_JSON(Behavior, behavior_);
          DARABONBA_PTR_FROM_JSON(BehaviorReason, behaviorReason_);
          DARABONBA_PTR_FROM_JSON(PropertiesData, propertiesData_);
          DARABONBA_PTR_FROM_JSON(PropertyName, propertyName_);
          DARABONBA_PTR_FROM_JSON(RequestInfo, requestInfo_);
          DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        };
        OriginalConstraints() = default ;
        OriginalConstraints(const OriginalConstraints &) = default ;
        OriginalConstraints(OriginalConstraints &&) = default ;
        OriginalConstraints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OriginalConstraints() = default ;
        OriginalConstraints& operator=(const OriginalConstraints &) = default ;
        OriginalConstraints& operator=(OriginalConstraints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allowedValues_ == nullptr
        && this->behavior_ == nullptr && this->behaviorReason_ == nullptr && this->propertiesData_ == nullptr && this->propertyName_ == nullptr && this->requestInfo_ == nullptr
        && this->resourceName_ == nullptr && this->resourceType_ == nullptr; };
        // allowedValues Field Functions 
        bool hasAllowedValues() const { return this->allowedValues_ != nullptr;};
        void deleteAllowedValues() { this->allowedValues_ = nullptr;};
        inline const vector<Darabonba::Json> & getAllowedValues() const { DARABONBA_PTR_GET_CONST(allowedValues_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getAllowedValues() { DARABONBA_PTR_GET(allowedValues_, vector<Darabonba::Json>) };
        inline OriginalConstraints& setAllowedValues(const vector<Darabonba::Json> & allowedValues) { DARABONBA_PTR_SET_VALUE(allowedValues_, allowedValues) };
        inline OriginalConstraints& setAllowedValues(vector<Darabonba::Json> && allowedValues) { DARABONBA_PTR_SET_RVALUE(allowedValues_, allowedValues) };


        // behavior Field Functions 
        bool hasBehavior() const { return this->behavior_ != nullptr;};
        void deleteBehavior() { this->behavior_ = nullptr;};
        inline string getBehavior() const { DARABONBA_PTR_GET_DEFAULT(behavior_, "") };
        inline OriginalConstraints& setBehavior(string behavior) { DARABONBA_PTR_SET_VALUE(behavior_, behavior) };


        // behaviorReason Field Functions 
        bool hasBehaviorReason() const { return this->behaviorReason_ != nullptr;};
        void deleteBehaviorReason() { this->behaviorReason_ = nullptr;};
        inline string getBehaviorReason() const { DARABONBA_PTR_GET_DEFAULT(behaviorReason_, "") };
        inline OriginalConstraints& setBehaviorReason(string behaviorReason) { DARABONBA_PTR_SET_VALUE(behaviorReason_, behaviorReason) };


        // propertiesData Field Functions 
        bool hasPropertiesData() const { return this->propertiesData_ != nullptr;};
        void deletePropertiesData() { this->propertiesData_ = nullptr;};
        inline string getPropertiesData() const { DARABONBA_PTR_GET_DEFAULT(propertiesData_, "") };
        inline OriginalConstraints& setPropertiesData(string propertiesData) { DARABONBA_PTR_SET_VALUE(propertiesData_, propertiesData) };


        // propertyName Field Functions 
        bool hasPropertyName() const { return this->propertyName_ != nullptr;};
        void deletePropertyName() { this->propertyName_ = nullptr;};
        inline string getPropertyName() const { DARABONBA_PTR_GET_DEFAULT(propertyName_, "") };
        inline OriginalConstraints& setPropertyName(string propertyName) { DARABONBA_PTR_SET_VALUE(propertyName_, propertyName) };


        // requestInfo Field Functions 
        bool hasRequestInfo() const { return this->requestInfo_ != nullptr;};
        void deleteRequestInfo() { this->requestInfo_ = nullptr;};
        inline string getRequestInfo() const { DARABONBA_PTR_GET_DEFAULT(requestInfo_, "") };
        inline OriginalConstraints& setRequestInfo(string requestInfo) { DARABONBA_PTR_SET_VALUE(requestInfo_, requestInfo) };


        // resourceName Field Functions 
        bool hasResourceName() const { return this->resourceName_ != nullptr;};
        void deleteResourceName() { this->resourceName_ = nullptr;};
        inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
        inline OriginalConstraints& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline OriginalConstraints& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        // The values of the parameter.
        shared_ptr<vector<Darabonba::Json>> allowedValues_ {};
        // Behavior of the parameter
        shared_ptr<string> behavior_ {};
        // The reason for the parameter behavior
        shared_ptr<string> behaviorReason_ {};
        shared_ptr<string> propertiesData_ {};
        // The name of the resource property.
        shared_ptr<string> propertyName_ {};
        shared_ptr<string> requestInfo_ {};
        // The name of the resource that is defined in the template.
        shared_ptr<string> resourceName_ {};
        // The resource type.
        shared_ptr<string> resourceType_ {};
      };

      class NotSupportResources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NotSupportResources& obj) { 
          DARABONBA_PTR_TO_JSON(PropertyName, propertyName_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, NotSupportResources& obj) { 
          DARABONBA_PTR_FROM_JSON(PropertyName, propertyName_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        };
        NotSupportResources() = default ;
        NotSupportResources(const NotSupportResources &) = default ;
        NotSupportResources(NotSupportResources &&) = default ;
        NotSupportResources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NotSupportResources() = default ;
        NotSupportResources& operator=(const NotSupportResources &) = default ;
        NotSupportResources& operator=(NotSupportResources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->propertyName_ == nullptr
        && this->resourceType_ == nullptr; };
        // propertyName Field Functions 
        bool hasPropertyName() const { return this->propertyName_ != nullptr;};
        void deletePropertyName() { this->propertyName_ = nullptr;};
        inline string getPropertyName() const { DARABONBA_PTR_GET_DEFAULT(propertyName_, "") };
        inline NotSupportResources& setPropertyName(string propertyName) { DARABONBA_PTR_SET_VALUE(propertyName_, propertyName) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline NotSupportResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        // The name of the resource property.
        shared_ptr<string> propertyName_ {};
        // The resource type.
        shared_ptr<string> resourceType_ {};
      };

      virtual bool empty() const override { return this->allowedValues_ == nullptr
        && this->associationParameterNames_ == nullptr && this->behavior_ == nullptr && this->behaviorReason_ == nullptr && this->illegalValueByParameterConstraints_ == nullptr && this->illegalValueByRules_ == nullptr
        && this->notSupportResources_ == nullptr && this->originalConstraints_ == nullptr && this->parameterKey_ == nullptr && this->queryErrors_ == nullptr && this->queryTimeoutDetails_ == nullptr
        && this->type_ == nullptr; };
      // allowedValues Field Functions 
      bool hasAllowedValues() const { return this->allowedValues_ != nullptr;};
      void deleteAllowedValues() { this->allowedValues_ = nullptr;};
      inline const vector<string> & getAllowedValues() const { DARABONBA_PTR_GET_CONST(allowedValues_, vector<string>) };
      inline vector<string> getAllowedValues() { DARABONBA_PTR_GET(allowedValues_, vector<string>) };
      inline ParameterConstraints& setAllowedValues(const vector<string> & allowedValues) { DARABONBA_PTR_SET_VALUE(allowedValues_, allowedValues) };
      inline ParameterConstraints& setAllowedValues(vector<string> && allowedValues) { DARABONBA_PTR_SET_RVALUE(allowedValues_, allowedValues) };


      // associationParameterNames Field Functions 
      bool hasAssociationParameterNames() const { return this->associationParameterNames_ != nullptr;};
      void deleteAssociationParameterNames() { this->associationParameterNames_ = nullptr;};
      inline const vector<string> & getAssociationParameterNames() const { DARABONBA_PTR_GET_CONST(associationParameterNames_, vector<string>) };
      inline vector<string> getAssociationParameterNames() { DARABONBA_PTR_GET(associationParameterNames_, vector<string>) };
      inline ParameterConstraints& setAssociationParameterNames(const vector<string> & associationParameterNames) { DARABONBA_PTR_SET_VALUE(associationParameterNames_, associationParameterNames) };
      inline ParameterConstraints& setAssociationParameterNames(vector<string> && associationParameterNames) { DARABONBA_PTR_SET_RVALUE(associationParameterNames_, associationParameterNames) };


      // behavior Field Functions 
      bool hasBehavior() const { return this->behavior_ != nullptr;};
      void deleteBehavior() { this->behavior_ = nullptr;};
      inline string getBehavior() const { DARABONBA_PTR_GET_DEFAULT(behavior_, "") };
      inline ParameterConstraints& setBehavior(string behavior) { DARABONBA_PTR_SET_VALUE(behavior_, behavior) };


      // behaviorReason Field Functions 
      bool hasBehaviorReason() const { return this->behaviorReason_ != nullptr;};
      void deleteBehaviorReason() { this->behaviorReason_ = nullptr;};
      inline string getBehaviorReason() const { DARABONBA_PTR_GET_DEFAULT(behaviorReason_, "") };
      inline ParameterConstraints& setBehaviorReason(string behaviorReason) { DARABONBA_PTR_SET_VALUE(behaviorReason_, behaviorReason) };


      // illegalValueByParameterConstraints Field Functions 
      bool hasIllegalValueByParameterConstraints() const { return this->illegalValueByParameterConstraints_ != nullptr;};
      void deleteIllegalValueByParameterConstraints() { this->illegalValueByParameterConstraints_ = nullptr;};
      inline const vector<Darabonba::Json> & getIllegalValueByParameterConstraints() const { DARABONBA_PTR_GET_CONST(illegalValueByParameterConstraints_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getIllegalValueByParameterConstraints() { DARABONBA_PTR_GET(illegalValueByParameterConstraints_, vector<Darabonba::Json>) };
      inline ParameterConstraints& setIllegalValueByParameterConstraints(const vector<Darabonba::Json> & illegalValueByParameterConstraints) { DARABONBA_PTR_SET_VALUE(illegalValueByParameterConstraints_, illegalValueByParameterConstraints) };
      inline ParameterConstraints& setIllegalValueByParameterConstraints(vector<Darabonba::Json> && illegalValueByParameterConstraints) { DARABONBA_PTR_SET_RVALUE(illegalValueByParameterConstraints_, illegalValueByParameterConstraints) };


      // illegalValueByRules Field Functions 
      bool hasIllegalValueByRules() const { return this->illegalValueByRules_ != nullptr;};
      void deleteIllegalValueByRules() { this->illegalValueByRules_ = nullptr;};
      inline const vector<Darabonba::Json> & getIllegalValueByRules() const { DARABONBA_PTR_GET_CONST(illegalValueByRules_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getIllegalValueByRules() { DARABONBA_PTR_GET(illegalValueByRules_, vector<Darabonba::Json>) };
      inline ParameterConstraints& setIllegalValueByRules(const vector<Darabonba::Json> & illegalValueByRules) { DARABONBA_PTR_SET_VALUE(illegalValueByRules_, illegalValueByRules) };
      inline ParameterConstraints& setIllegalValueByRules(vector<Darabonba::Json> && illegalValueByRules) { DARABONBA_PTR_SET_RVALUE(illegalValueByRules_, illegalValueByRules) };


      // notSupportResources Field Functions 
      bool hasNotSupportResources() const { return this->notSupportResources_ != nullptr;};
      void deleteNotSupportResources() { this->notSupportResources_ = nullptr;};
      inline const vector<ParameterConstraints::NotSupportResources> & getNotSupportResources() const { DARABONBA_PTR_GET_CONST(notSupportResources_, vector<ParameterConstraints::NotSupportResources>) };
      inline vector<ParameterConstraints::NotSupportResources> getNotSupportResources() { DARABONBA_PTR_GET(notSupportResources_, vector<ParameterConstraints::NotSupportResources>) };
      inline ParameterConstraints& setNotSupportResources(const vector<ParameterConstraints::NotSupportResources> & notSupportResources) { DARABONBA_PTR_SET_VALUE(notSupportResources_, notSupportResources) };
      inline ParameterConstraints& setNotSupportResources(vector<ParameterConstraints::NotSupportResources> && notSupportResources) { DARABONBA_PTR_SET_RVALUE(notSupportResources_, notSupportResources) };


      // originalConstraints Field Functions 
      bool hasOriginalConstraints() const { return this->originalConstraints_ != nullptr;};
      void deleteOriginalConstraints() { this->originalConstraints_ = nullptr;};
      inline const vector<ParameterConstraints::OriginalConstraints> & getOriginalConstraints() const { DARABONBA_PTR_GET_CONST(originalConstraints_, vector<ParameterConstraints::OriginalConstraints>) };
      inline vector<ParameterConstraints::OriginalConstraints> getOriginalConstraints() { DARABONBA_PTR_GET(originalConstraints_, vector<ParameterConstraints::OriginalConstraints>) };
      inline ParameterConstraints& setOriginalConstraints(const vector<ParameterConstraints::OriginalConstraints> & originalConstraints) { DARABONBA_PTR_SET_VALUE(originalConstraints_, originalConstraints) };
      inline ParameterConstraints& setOriginalConstraints(vector<ParameterConstraints::OriginalConstraints> && originalConstraints) { DARABONBA_PTR_SET_RVALUE(originalConstraints_, originalConstraints) };


      // parameterKey Field Functions 
      bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
      void deleteParameterKey() { this->parameterKey_ = nullptr;};
      inline string getParameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
      inline ParameterConstraints& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


      // queryErrors Field Functions 
      bool hasQueryErrors() const { return this->queryErrors_ != nullptr;};
      void deleteQueryErrors() { this->queryErrors_ = nullptr;};
      inline const vector<ParameterConstraints::QueryErrors> & getQueryErrors() const { DARABONBA_PTR_GET_CONST(queryErrors_, vector<ParameterConstraints::QueryErrors>) };
      inline vector<ParameterConstraints::QueryErrors> getQueryErrors() { DARABONBA_PTR_GET(queryErrors_, vector<ParameterConstraints::QueryErrors>) };
      inline ParameterConstraints& setQueryErrors(const vector<ParameterConstraints::QueryErrors> & queryErrors) { DARABONBA_PTR_SET_VALUE(queryErrors_, queryErrors) };
      inline ParameterConstraints& setQueryErrors(vector<ParameterConstraints::QueryErrors> && queryErrors) { DARABONBA_PTR_SET_RVALUE(queryErrors_, queryErrors) };


      // queryTimeoutDetails Field Functions 
      bool hasQueryTimeoutDetails() const { return this->queryTimeoutDetails_ != nullptr;};
      void deleteQueryTimeoutDetails() { this->queryTimeoutDetails_ = nullptr;};
      inline const vector<ParameterConstraints::QueryTimeoutDetails> & getQueryTimeoutDetails() const { DARABONBA_PTR_GET_CONST(queryTimeoutDetails_, vector<ParameterConstraints::QueryTimeoutDetails>) };
      inline vector<ParameterConstraints::QueryTimeoutDetails> getQueryTimeoutDetails() { DARABONBA_PTR_GET(queryTimeoutDetails_, vector<ParameterConstraints::QueryTimeoutDetails>) };
      inline ParameterConstraints& setQueryTimeoutDetails(const vector<ParameterConstraints::QueryTimeoutDetails> & queryTimeoutDetails) { DARABONBA_PTR_SET_VALUE(queryTimeoutDetails_, queryTimeoutDetails) };
      inline ParameterConstraints& setQueryTimeoutDetails(vector<ParameterConstraints::QueryTimeoutDetails> && queryTimeoutDetails) { DARABONBA_PTR_SET_RVALUE(queryTimeoutDetails_, queryTimeoutDetails) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ParameterConstraints& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The values of the parameter.
      shared_ptr<vector<string>> allowedValues_ {};
      // The names of the associated parameters.
      shared_ptr<vector<string>> associationParameterNames_ {};
      // The behavior of the parameter. Valid values:
      // 
      // *   NoLimit: No limit is imposed on the value of this parameter.
      // *   NotSupport: The value of this parameter cannot be queried.
      // *   QueryError: This parameter failed to be queried.
      // 
      // > If AllowedValues is not returned, Behavior and BehaviorReason are returned.
      shared_ptr<string> behavior_ {};
      // The reason why the behavior of the parameter is returned.
      shared_ptr<string> behaviorReason_ {};
      // The values that do not conform to the parameter constraints.
      // 
      // > If AllowedValues is returned, IllegalValueByParameterConstraints and IllegalValueByRules are returned at the same time.
      shared_ptr<vector<Darabonba::Json>> illegalValueByParameterConstraints_ {};
      // The values that do not match the rules in the template.
      // 
      // > If AllowedValues is returned, IllegalValueByParameterConstraints and IllegalValueByRules are returned at the same time.
      shared_ptr<vector<Darabonba::Json>> illegalValueByRules_ {};
      // The unsupported resource in the template.
      shared_ptr<vector<ParameterConstraints::NotSupportResources>> notSupportResources_ {};
      // The original constraint information.
      shared_ptr<vector<ParameterConstraints::OriginalConstraints>> originalConstraints_ {};
      // The name of the parameter.
      shared_ptr<string> parameterKey_ {};
      // The error that is returned when the request fails.
      shared_ptr<vector<ParameterConstraints::QueryErrors>> queryErrors_ {};
      // Query the details of timeout.
      shared_ptr<vector<ParameterConstraints::QueryTimeoutDetails>> queryTimeoutDetails_ {};
      // The data type of the parameter.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->parameterConstraints_ == nullptr
        && this->requestId_ == nullptr; };
    // parameterConstraints Field Functions 
    bool hasParameterConstraints() const { return this->parameterConstraints_ != nullptr;};
    void deleteParameterConstraints() { this->parameterConstraints_ = nullptr;};
    inline const vector<GetTemplateParameterConstraintsResponseBody::ParameterConstraints> & getParameterConstraints() const { DARABONBA_PTR_GET_CONST(parameterConstraints_, vector<GetTemplateParameterConstraintsResponseBody::ParameterConstraints>) };
    inline vector<GetTemplateParameterConstraintsResponseBody::ParameterConstraints> getParameterConstraints() { DARABONBA_PTR_GET(parameterConstraints_, vector<GetTemplateParameterConstraintsResponseBody::ParameterConstraints>) };
    inline GetTemplateParameterConstraintsResponseBody& setParameterConstraints(const vector<GetTemplateParameterConstraintsResponseBody::ParameterConstraints> & parameterConstraints) { DARABONBA_PTR_SET_VALUE(parameterConstraints_, parameterConstraints) };
    inline GetTemplateParameterConstraintsResponseBody& setParameterConstraints(vector<GetTemplateParameterConstraintsResponseBody::ParameterConstraints> && parameterConstraints) { DARABONBA_PTR_SET_RVALUE(parameterConstraints_, parameterConstraints) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateParameterConstraintsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The constraints of the parameters.
    shared_ptr<vector<GetTemplateParameterConstraintsResponseBody::ParameterConstraints>> parameterConstraints_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
