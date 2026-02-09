// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIROUTECONFLICTINFO_HPP_
#define ALIBABACLOUD_MODELS_APIROUTECONFLICTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpRouteMatch.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ApiRouteConflictInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApiRouteConflictInfo& obj) { 
      DARABONBA_PTR_TO_JSON(conflicts, conflicts_);
      DARABONBA_PTR_TO_JSON(domainInfo, domainInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ApiRouteConflictInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(conflicts, conflicts_);
      DARABONBA_PTR_FROM_JSON(domainInfo, domainInfo_);
    };
    ApiRouteConflictInfo() = default ;
    ApiRouteConflictInfo(const ApiRouteConflictInfo &) = default ;
    ApiRouteConflictInfo(ApiRouteConflictInfo &&) = default ;
    ApiRouteConflictInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApiRouteConflictInfo() = default ;
    ApiRouteConflictInfo& operator=(const ApiRouteConflictInfo &) = default ;
    ApiRouteConflictInfo& operator=(ApiRouteConflictInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainInfo& obj) { 
        DARABONBA_PTR_TO_JSON(domainId, domainId_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, DomainInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(domainId, domainId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      DomainInfo() = default ;
      DomainInfo(const DomainInfo &) = default ;
      DomainInfo(DomainInfo &&) = default ;
      DomainInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainInfo() = default ;
      DomainInfo& operator=(const DomainInfo &) = default ;
      DomainInfo& operator=(DomainInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domainId_ == nullptr
        && this->name_ == nullptr; };
      // domainId Field Functions 
      bool hasDomainId() const { return this->domainId_ != nullptr;};
      void deleteDomainId() { this->domainId_ = nullptr;};
      inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
      inline DomainInfo& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DomainInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The domain name ID.
      shared_ptr<string> domainId_ {};
      // The domain name.
      shared_ptr<string> name_ {};
    };

    class Conflicts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Conflicts& obj) { 
        DARABONBA_PTR_TO_JSON(details, details_);
        DARABONBA_PTR_TO_JSON(environmentInfo, environmentInfo_);
        DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(routeInfo, routeInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Conflicts& obj) { 
        DARABONBA_PTR_FROM_JSON(details, details_);
        DARABONBA_PTR_FROM_JSON(environmentInfo, environmentInfo_);
        DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(resourceName, resourceName_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(routeInfo, routeInfo_);
      };
      Conflicts() = default ;
      Conflicts(const Conflicts &) = default ;
      Conflicts(Conflicts &&) = default ;
      Conflicts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Conflicts() = default ;
      Conflicts& operator=(const Conflicts &) = default ;
      Conflicts& operator=(Conflicts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RouteInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RouteInfo& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(routeId, routeId_);
        };
        friend void from_json(const Darabonba::Json& j, RouteInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(routeId, routeId_);
        };
        RouteInfo() = default ;
        RouteInfo(const RouteInfo &) = default ;
        RouteInfo(RouteInfo &&) = default ;
        RouteInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RouteInfo() = default ;
        RouteInfo& operator=(const RouteInfo &) = default ;
        RouteInfo& operator=(RouteInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->routeId_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RouteInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // routeId Field Functions 
        bool hasRouteId() const { return this->routeId_ != nullptr;};
        void deleteRouteId() { this->routeId_ = nullptr;};
        inline string getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
        inline RouteInfo& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


      protected:
        // The route name.
        shared_ptr<string> name_ {};
        // The route ID.
        shared_ptr<string> routeId_ {};
      };

      class EnvironmentInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnvironmentInfo& obj) { 
          DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, EnvironmentInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        EnvironmentInfo() = default ;
        EnvironmentInfo(const EnvironmentInfo &) = default ;
        EnvironmentInfo(EnvironmentInfo &&) = default ;
        EnvironmentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnvironmentInfo() = default ;
        EnvironmentInfo& operator=(const EnvironmentInfo &) = default ;
        EnvironmentInfo& operator=(EnvironmentInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->environmentId_ == nullptr
        && this->name_ == nullptr; };
        // environmentId Field Functions 
        bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
        void deleteEnvironmentId() { this->environmentId_ = nullptr;};
        inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
        inline EnvironmentInfo& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EnvironmentInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The environment ID.
        shared_ptr<string> environmentId_ {};
        // The environment name.
        shared_ptr<string> name_ {};
      };

      class Details : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Details& obj) { 
          DARABONBA_PTR_TO_JSON(conflictingMatch, conflictingMatch_);
          DARABONBA_PTR_TO_JSON(detectedMatch, detectedMatch_);
          DARABONBA_PTR_TO_JSON(level, level_);
        };
        friend void from_json(const Darabonba::Json& j, Details& obj) { 
          DARABONBA_PTR_FROM_JSON(conflictingMatch, conflictingMatch_);
          DARABONBA_PTR_FROM_JSON(detectedMatch, detectedMatch_);
          DARABONBA_PTR_FROM_JSON(level, level_);
        };
        Details() = default ;
        Details(const Details &) = default ;
        Details(Details &&) = default ;
        Details(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Details() = default ;
        Details& operator=(const Details &) = default ;
        Details& operator=(Details &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DetectedMatch : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DetectedMatch& obj) { 
            DARABONBA_PTR_TO_JSON(match, match_);
            DARABONBA_PTR_TO_JSON(operationInfo, operationInfo_);
          };
          friend void from_json(const Darabonba::Json& j, DetectedMatch& obj) { 
            DARABONBA_PTR_FROM_JSON(match, match_);
            DARABONBA_PTR_FROM_JSON(operationInfo, operationInfo_);
          };
          DetectedMatch() = default ;
          DetectedMatch(const DetectedMatch &) = default ;
          DetectedMatch(DetectedMatch &&) = default ;
          DetectedMatch(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DetectedMatch() = default ;
          DetectedMatch& operator=(const DetectedMatch &) = default ;
          DetectedMatch& operator=(DetectedMatch &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class OperationInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OperationInfo& obj) { 
              DARABONBA_PTR_TO_JSON(name, name_);
              DARABONBA_PTR_TO_JSON(operationId, operationId_);
            };
            friend void from_json(const Darabonba::Json& j, OperationInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(name, name_);
              DARABONBA_PTR_FROM_JSON(operationId, operationId_);
            };
            OperationInfo() = default ;
            OperationInfo(const OperationInfo &) = default ;
            OperationInfo(OperationInfo &&) = default ;
            OperationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OperationInfo() = default ;
            OperationInfo& operator=(const OperationInfo &) = default ;
            OperationInfo& operator=(OperationInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->operationId_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline OperationInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // operationId Field Functions 
            bool hasOperationId() const { return this->operationId_ != nullptr;};
            void deleteOperationId() { this->operationId_ = nullptr;};
            inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
            inline OperationInfo& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


          protected:
            // The operation name.
            shared_ptr<string> name_ {};
            // The operation ID.
            shared_ptr<string> operationId_ {};
          };

          virtual bool empty() const override { return this->match_ == nullptr
        && this->operationInfo_ == nullptr; };
          // match Field Functions 
          bool hasMatch() const { return this->match_ != nullptr;};
          void deleteMatch() { this->match_ = nullptr;};
          inline const HttpRouteMatch & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpRouteMatch) };
          inline HttpRouteMatch getMatch() { DARABONBA_PTR_GET(match_, HttpRouteMatch) };
          inline DetectedMatch& setMatch(const HttpRouteMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
          inline DetectedMatch& setMatch(HttpRouteMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


          // operationInfo Field Functions 
          bool hasOperationInfo() const { return this->operationInfo_ != nullptr;};
          void deleteOperationInfo() { this->operationInfo_ = nullptr;};
          inline const DetectedMatch::OperationInfo & getOperationInfo() const { DARABONBA_PTR_GET_CONST(operationInfo_, DetectedMatch::OperationInfo) };
          inline DetectedMatch::OperationInfo getOperationInfo() { DARABONBA_PTR_GET(operationInfo_, DetectedMatch::OperationInfo) };
          inline DetectedMatch& setOperationInfo(const DetectedMatch::OperationInfo & operationInfo) { DARABONBA_PTR_SET_VALUE(operationInfo_, operationInfo) };
          inline DetectedMatch& setOperationInfo(DetectedMatch::OperationInfo && operationInfo) { DARABONBA_PTR_SET_RVALUE(operationInfo_, operationInfo) };


        protected:
          // The matching rule information of the object being detected.
          shared_ptr<HttpRouteMatch> match_ {};
          // If the object is an API, the conflicting operation information needs to be returned.
          shared_ptr<DetectedMatch::OperationInfo> operationInfo_ {};
        };

        class ConflictingMatch : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConflictingMatch& obj) { 
            DARABONBA_PTR_TO_JSON(match, match_);
            DARABONBA_PTR_TO_JSON(operationInfo, operationInfo_);
          };
          friend void from_json(const Darabonba::Json& j, ConflictingMatch& obj) { 
            DARABONBA_PTR_FROM_JSON(match, match_);
            DARABONBA_PTR_FROM_JSON(operationInfo, operationInfo_);
          };
          ConflictingMatch() = default ;
          ConflictingMatch(const ConflictingMatch &) = default ;
          ConflictingMatch(ConflictingMatch &&) = default ;
          ConflictingMatch(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConflictingMatch() = default ;
          ConflictingMatch& operator=(const ConflictingMatch &) = default ;
          ConflictingMatch& operator=(ConflictingMatch &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class OperationInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OperationInfo& obj) { 
              DARABONBA_PTR_TO_JSON(name, name_);
              DARABONBA_PTR_TO_JSON(operationId, operationId_);
            };
            friend void from_json(const Darabonba::Json& j, OperationInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(name, name_);
              DARABONBA_PTR_FROM_JSON(operationId, operationId_);
            };
            OperationInfo() = default ;
            OperationInfo(const OperationInfo &) = default ;
            OperationInfo(OperationInfo &&) = default ;
            OperationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OperationInfo() = default ;
            OperationInfo& operator=(const OperationInfo &) = default ;
            OperationInfo& operator=(OperationInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->operationId_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline OperationInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // operationId Field Functions 
            bool hasOperationId() const { return this->operationId_ != nullptr;};
            void deleteOperationId() { this->operationId_ = nullptr;};
            inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
            inline OperationInfo& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


          protected:
            // The operation name.
            shared_ptr<string> name_ {};
            // The operation ID.
            shared_ptr<string> operationId_ {};
          };

          virtual bool empty() const override { return this->match_ == nullptr
        && this->operationInfo_ == nullptr; };
          // match Field Functions 
          bool hasMatch() const { return this->match_ != nullptr;};
          void deleteMatch() { this->match_ = nullptr;};
          inline const HttpRouteMatch & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpRouteMatch) };
          inline HttpRouteMatch getMatch() { DARABONBA_PTR_GET(match_, HttpRouteMatch) };
          inline ConflictingMatch& setMatch(const HttpRouteMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
          inline ConflictingMatch& setMatch(HttpRouteMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


          // operationInfo Field Functions 
          bool hasOperationInfo() const { return this->operationInfo_ != nullptr;};
          void deleteOperationInfo() { this->operationInfo_ = nullptr;};
          inline const ConflictingMatch::OperationInfo & getOperationInfo() const { DARABONBA_PTR_GET_CONST(operationInfo_, ConflictingMatch::OperationInfo) };
          inline ConflictingMatch::OperationInfo getOperationInfo() { DARABONBA_PTR_GET(operationInfo_, ConflictingMatch::OperationInfo) };
          inline ConflictingMatch& setOperationInfo(const ConflictingMatch::OperationInfo & operationInfo) { DARABONBA_PTR_SET_VALUE(operationInfo_, operationInfo) };
          inline ConflictingMatch& setOperationInfo(ConflictingMatch::OperationInfo && operationInfo) { DARABONBA_PTR_SET_RVALUE(operationInfo_, operationInfo) };


        protected:
          // The matching rule.
          shared_ptr<HttpRouteMatch> match_ {};
          // The corresponding operation information if the conflicting target is an API.
          shared_ptr<ConflictingMatch::OperationInfo> operationInfo_ {};
        };

        virtual bool empty() const override { return this->conflictingMatch_ == nullptr
        && this->detectedMatch_ == nullptr && this->level_ == nullptr; };
        // conflictingMatch Field Functions 
        bool hasConflictingMatch() const { return this->conflictingMatch_ != nullptr;};
        void deleteConflictingMatch() { this->conflictingMatch_ = nullptr;};
        inline const Details::ConflictingMatch & getConflictingMatch() const { DARABONBA_PTR_GET_CONST(conflictingMatch_, Details::ConflictingMatch) };
        inline Details::ConflictingMatch getConflictingMatch() { DARABONBA_PTR_GET(conflictingMatch_, Details::ConflictingMatch) };
        inline Details& setConflictingMatch(const Details::ConflictingMatch & conflictingMatch) { DARABONBA_PTR_SET_VALUE(conflictingMatch_, conflictingMatch) };
        inline Details& setConflictingMatch(Details::ConflictingMatch && conflictingMatch) { DARABONBA_PTR_SET_RVALUE(conflictingMatch_, conflictingMatch) };


        // detectedMatch Field Functions 
        bool hasDetectedMatch() const { return this->detectedMatch_ != nullptr;};
        void deleteDetectedMatch() { this->detectedMatch_ = nullptr;};
        inline const Details::DetectedMatch & getDetectedMatch() const { DARABONBA_PTR_GET_CONST(detectedMatch_, Details::DetectedMatch) };
        inline Details::DetectedMatch getDetectedMatch() { DARABONBA_PTR_GET(detectedMatch_, Details::DetectedMatch) };
        inline Details& setDetectedMatch(const Details::DetectedMatch & detectedMatch) { DARABONBA_PTR_SET_VALUE(detectedMatch_, detectedMatch) };
        inline Details& setDetectedMatch(Details::DetectedMatch && detectedMatch) { DARABONBA_PTR_SET_RVALUE(detectedMatch_, detectedMatch) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline Details& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      protected:
        // The matching rule information of the conflicting target.
        shared_ptr<Details::ConflictingMatch> conflictingMatch_ {};
        // The matching rule information of the object being detected.
        shared_ptr<Details::DetectedMatch> detectedMatch_ {};
        // The conflict level. Valid values: Critical, Warning, and Informational.
        shared_ptr<string> level_ {};
      };

      virtual bool empty() const override { return this->details_ == nullptr
        && this->environmentInfo_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr && this->resourceType_ == nullptr && this->routeInfo_ == nullptr; };
      // details Field Functions 
      bool hasDetails() const { return this->details_ != nullptr;};
      void deleteDetails() { this->details_ = nullptr;};
      inline const vector<Conflicts::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<Conflicts::Details>) };
      inline vector<Conflicts::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<Conflicts::Details>) };
      inline Conflicts& setDetails(const vector<Conflicts::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
      inline Conflicts& setDetails(vector<Conflicts::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


      // environmentInfo Field Functions 
      bool hasEnvironmentInfo() const { return this->environmentInfo_ != nullptr;};
      void deleteEnvironmentInfo() { this->environmentInfo_ = nullptr;};
      inline const Conflicts::EnvironmentInfo & getEnvironmentInfo() const { DARABONBA_PTR_GET_CONST(environmentInfo_, Conflicts::EnvironmentInfo) };
      inline Conflicts::EnvironmentInfo getEnvironmentInfo() { DARABONBA_PTR_GET(environmentInfo_, Conflicts::EnvironmentInfo) };
      inline Conflicts& setEnvironmentInfo(const Conflicts::EnvironmentInfo & environmentInfo) { DARABONBA_PTR_SET_VALUE(environmentInfo_, environmentInfo) };
      inline Conflicts& setEnvironmentInfo(Conflicts::EnvironmentInfo && environmentInfo) { DARABONBA_PTR_SET_RVALUE(environmentInfo_, environmentInfo) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Conflicts& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline Conflicts& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Conflicts& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // routeInfo Field Functions 
      bool hasRouteInfo() const { return this->routeInfo_ != nullptr;};
      void deleteRouteInfo() { this->routeInfo_ = nullptr;};
      inline const Conflicts::RouteInfo & getRouteInfo() const { DARABONBA_PTR_GET_CONST(routeInfo_, Conflicts::RouteInfo) };
      inline Conflicts::RouteInfo getRouteInfo() { DARABONBA_PTR_GET(routeInfo_, Conflicts::RouteInfo) };
      inline Conflicts& setRouteInfo(const Conflicts::RouteInfo & routeInfo) { DARABONBA_PTR_SET_VALUE(routeInfo_, routeInfo) };
      inline Conflicts& setRouteInfo(Conflicts::RouteInfo && routeInfo) { DARABONBA_PTR_SET_RVALUE(routeInfo_, routeInfo) };


    protected:
      // The details about the conflicts.
      shared_ptr<vector<Conflicts::Details>> details_ {};
      // For APIs, conflicts exist in the specific environment. If the conflict object is a route, ignore.
      shared_ptr<Conflicts::EnvironmentInfo> environmentInfo_ {};
      // The conflicting resource ID.
      shared_ptr<string> resourceId_ {};
      // The conflicting resource name.
      shared_ptr<string> resourceName_ {};
      // The type of the conflicting resource.
      // 
      // Valid values:
      // 
      // *   RestApi
      // *   HttpApiRoute
      shared_ptr<string> resourceType_ {};
      // The route information.
      shared_ptr<Conflicts::RouteInfo> routeInfo_ {};
    };

    virtual bool empty() const override { return this->conflicts_ == nullptr
        && this->domainInfo_ == nullptr; };
    // conflicts Field Functions 
    bool hasConflicts() const { return this->conflicts_ != nullptr;};
    void deleteConflicts() { this->conflicts_ = nullptr;};
    inline const vector<ApiRouteConflictInfo::Conflicts> & getConflicts() const { DARABONBA_PTR_GET_CONST(conflicts_, vector<ApiRouteConflictInfo::Conflicts>) };
    inline vector<ApiRouteConflictInfo::Conflicts> getConflicts() { DARABONBA_PTR_GET(conflicts_, vector<ApiRouteConflictInfo::Conflicts>) };
    inline ApiRouteConflictInfo& setConflicts(const vector<ApiRouteConflictInfo::Conflicts> & conflicts) { DARABONBA_PTR_SET_VALUE(conflicts_, conflicts) };
    inline ApiRouteConflictInfo& setConflicts(vector<ApiRouteConflictInfo::Conflicts> && conflicts) { DARABONBA_PTR_SET_RVALUE(conflicts_, conflicts) };


    // domainInfo Field Functions 
    bool hasDomainInfo() const { return this->domainInfo_ != nullptr;};
    void deleteDomainInfo() { this->domainInfo_ = nullptr;};
    inline const ApiRouteConflictInfo::DomainInfo & getDomainInfo() const { DARABONBA_PTR_GET_CONST(domainInfo_, ApiRouteConflictInfo::DomainInfo) };
    inline ApiRouteConflictInfo::DomainInfo getDomainInfo() { DARABONBA_PTR_GET(domainInfo_, ApiRouteConflictInfo::DomainInfo) };
    inline ApiRouteConflictInfo& setDomainInfo(const ApiRouteConflictInfo::DomainInfo & domainInfo) { DARABONBA_PTR_SET_VALUE(domainInfo_, domainInfo) };
    inline ApiRouteConflictInfo& setDomainInfo(ApiRouteConflictInfo::DomainInfo && domainInfo) { DARABONBA_PTR_SET_RVALUE(domainInfo_, domainInfo) };


  protected:
    // The conflicts.
    shared_ptr<vector<ApiRouteConflictInfo::Conflicts>> conflicts_ {};
    // The conflicting routes.
    shared_ptr<ApiRouteConflictInfo::DomainInfo> domainInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
