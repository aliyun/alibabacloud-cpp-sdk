// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETEMPLATEPARAMETERCONSTRAINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETEMPLATEPARAMETERCONSTRAINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceTemplateParameterConstraintsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceTemplateParameterConstraintsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FamilyConstraints, familyConstraints_);
      DARABONBA_PTR_TO_JSON(ParameterConstraints, parameterConstraints_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceTemplateParameterConstraintsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FamilyConstraints, familyConstraints_);
      DARABONBA_PTR_FROM_JSON(ParameterConstraints, parameterConstraints_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetServiceTemplateParameterConstraintsResponseBody() = default ;
    GetServiceTemplateParameterConstraintsResponseBody(const GetServiceTemplateParameterConstraintsResponseBody &) = default ;
    GetServiceTemplateParameterConstraintsResponseBody(GetServiceTemplateParameterConstraintsResponseBody &&) = default ;
    GetServiceTemplateParameterConstraintsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceTemplateParameterConstraintsResponseBody() = default ;
    GetServiceTemplateParameterConstraintsResponseBody& operator=(const GetServiceTemplateParameterConstraintsResponseBody &) = default ;
    GetServiceTemplateParameterConstraintsResponseBody& operator=(GetServiceTemplateParameterConstraintsResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(OriginalConstraints, originalConstraints_);
        DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_TO_JSON(QueryErrors, queryErrors_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ParameterConstraints& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowedValues, allowedValues_);
        DARABONBA_PTR_FROM_JSON(AssociationParameterNames, associationParameterNames_);
        DARABONBA_PTR_FROM_JSON(Behavior, behavior_);
        DARABONBA_PTR_FROM_JSON(BehaviorReason, behaviorReason_);
        DARABONBA_PTR_FROM_JSON(OriginalConstraints, originalConstraints_);
        DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_FROM_JSON(QueryErrors, queryErrors_);
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
          DARABONBA_PTR_TO_JSON(PropertyName, propertyName_);
          DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, OriginalConstraints& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowedValues, allowedValues_);
          DARABONBA_PTR_FROM_JSON(PropertyName, propertyName_);
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
        && this->propertyName_ == nullptr && this->resourceName_ == nullptr && this->resourceType_ == nullptr; };
        // allowedValues Field Functions 
        bool hasAllowedValues() const { return this->allowedValues_ != nullptr;};
        void deleteAllowedValues() { this->allowedValues_ = nullptr;};
        inline const vector<string> & getAllowedValues() const { DARABONBA_PTR_GET_CONST(allowedValues_, vector<string>) };
        inline vector<string> getAllowedValues() { DARABONBA_PTR_GET(allowedValues_, vector<string>) };
        inline OriginalConstraints& setAllowedValues(const vector<string> & allowedValues) { DARABONBA_PTR_SET_VALUE(allowedValues_, allowedValues) };
        inline OriginalConstraints& setAllowedValues(vector<string> && allowedValues) { DARABONBA_PTR_SET_RVALUE(allowedValues_, allowedValues) };


        // propertyName Field Functions 
        bool hasPropertyName() const { return this->propertyName_ != nullptr;};
        void deletePropertyName() { this->propertyName_ = nullptr;};
        inline string getPropertyName() const { DARABONBA_PTR_GET_DEFAULT(propertyName_, "") };
        inline OriginalConstraints& setPropertyName(string propertyName) { DARABONBA_PTR_SET_VALUE(propertyName_, propertyName) };


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
        // The valid values of the parameter.
        shared_ptr<vector<string>> allowedValues_ {};
        // The property name.
        shared_ptr<string> propertyName_ {};
        // The name of the resource that is defined in the template.
        shared_ptr<string> resourceName_ {};
        // The resource type.
        shared_ptr<string> resourceType_ {};
      };

      virtual bool empty() const override { return this->allowedValues_ == nullptr
        && this->associationParameterNames_ == nullptr && this->behavior_ == nullptr && this->behaviorReason_ == nullptr && this->originalConstraints_ == nullptr && this->parameterKey_ == nullptr
        && this->queryErrors_ == nullptr && this->type_ == nullptr; };
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


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ParameterConstraints& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The valid values of the parameter.
      shared_ptr<vector<string>> allowedValues_ {};
      // The names of the associated parameters.
      shared_ptr<vector<string>> associationParameterNames_ {};
      // The behavior of the parameter. Valid values:
      // 
      // *   NoLimit: No limit is imposed on the value of this parameter.
      // *   NotSupport: The value of this parameter cannot be queried.
      // *   QueryError: This parameter failed to be queried.
      // 
      // >  If AllowedValues is not returned, Behavior and BehaviorReason are returned, which indicate the behavior of the parameter and the reason for the behavior.
      shared_ptr<string> behavior_ {};
      // The reason why the behavior of the parameter is returned.
      shared_ptr<string> behaviorReason_ {};
      // The original constraint information.
      shared_ptr<vector<ParameterConstraints::OriginalConstraints>> originalConstraints_ {};
      // The name of the parameter.
      shared_ptr<string> parameterKey_ {};
      // The error details that are returned if the request fails.
      shared_ptr<vector<ParameterConstraints::QueryErrors>> queryErrors_ {};
      // The data type of the parameter.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->familyConstraints_ == nullptr
        && this->parameterConstraints_ == nullptr && this->requestId_ == nullptr; };
    // familyConstraints Field Functions 
    bool hasFamilyConstraints() const { return this->familyConstraints_ != nullptr;};
    void deleteFamilyConstraints() { this->familyConstraints_ = nullptr;};
    inline const vector<string> & getFamilyConstraints() const { DARABONBA_PTR_GET_CONST(familyConstraints_, vector<string>) };
    inline vector<string> getFamilyConstraints() { DARABONBA_PTR_GET(familyConstraints_, vector<string>) };
    inline GetServiceTemplateParameterConstraintsResponseBody& setFamilyConstraints(const vector<string> & familyConstraints) { DARABONBA_PTR_SET_VALUE(familyConstraints_, familyConstraints) };
    inline GetServiceTemplateParameterConstraintsResponseBody& setFamilyConstraints(vector<string> && familyConstraints) { DARABONBA_PTR_SET_RVALUE(familyConstraints_, familyConstraints) };


    // parameterConstraints Field Functions 
    bool hasParameterConstraints() const { return this->parameterConstraints_ != nullptr;};
    void deleteParameterConstraints() { this->parameterConstraints_ = nullptr;};
    inline const vector<GetServiceTemplateParameterConstraintsResponseBody::ParameterConstraints> & getParameterConstraints() const { DARABONBA_PTR_GET_CONST(parameterConstraints_, vector<GetServiceTemplateParameterConstraintsResponseBody::ParameterConstraints>) };
    inline vector<GetServiceTemplateParameterConstraintsResponseBody::ParameterConstraints> getParameterConstraints() { DARABONBA_PTR_GET(parameterConstraints_, vector<GetServiceTemplateParameterConstraintsResponseBody::ParameterConstraints>) };
    inline GetServiceTemplateParameterConstraintsResponseBody& setParameterConstraints(const vector<GetServiceTemplateParameterConstraintsResponseBody::ParameterConstraints> & parameterConstraints) { DARABONBA_PTR_SET_VALUE(parameterConstraints_, parameterConstraints) };
    inline GetServiceTemplateParameterConstraintsResponseBody& setParameterConstraints(vector<GetServiceTemplateParameterConstraintsResponseBody::ParameterConstraints> && parameterConstraints) { DARABONBA_PTR_SET_RVALUE(parameterConstraints_, parameterConstraints) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceTemplateParameterConstraintsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The package family constraints.
    shared_ptr<vector<string>> familyConstraints_ {};
    // The constraints on the parameters.
    shared_ptr<vector<GetServiceTemplateParameterConstraintsResponseBody::ParameterConstraints>> parameterConstraints_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
