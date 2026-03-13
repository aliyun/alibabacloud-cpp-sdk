// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONMETRICDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONMETRICDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationMetricDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationMetricDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationMetricDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    ListEvaluationMetricDetailsResponseBody() = default ;
    ListEvaluationMetricDetailsResponseBody(const ListEvaluationMetricDetailsResponseBody &) = default ;
    ListEvaluationMetricDetailsResponseBody(ListEvaluationMetricDetailsResponseBody &&) = default ;
    ListEvaluationMetricDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationMetricDetailsResponseBody() = default ;
    ListEvaluationMetricDetailsResponseBody& operator=(const ListEvaluationMetricDetailsResponseBody &) = default ;
    ListEvaluationMetricDetailsResponseBody& operator=(ListEvaluationMetricDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceClassification, resourceClassification_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
        DARABONBA_PTR_TO_JSON(ResourceProperties, resourceProperties_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceClassification, resourceClassification_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
        DARABONBA_PTR_FROM_JSON(ResourceProperties, resourceProperties_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceProperties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceProperties& obj) { 
          DARABONBA_PTR_TO_JSON(PropertyName, propertyName_);
          DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceProperties& obj) { 
          DARABONBA_PTR_FROM_JSON(PropertyName, propertyName_);
          DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
        };
        ResourceProperties() = default ;
        ResourceProperties(const ResourceProperties &) = default ;
        ResourceProperties(ResourceProperties &&) = default ;
        ResourceProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceProperties() = default ;
        ResourceProperties& operator=(const ResourceProperties &) = default ;
        ResourceProperties& operator=(ResourceProperties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->propertyName_ == nullptr
        && this->propertyValue_ == nullptr; };
        // propertyName Field Functions 
        bool hasPropertyName() const { return this->propertyName_ != nullptr;};
        void deletePropertyName() { this->propertyName_ = nullptr;};
        inline string getPropertyName() const { DARABONBA_PTR_GET_DEFAULT(propertyName_, "") };
        inline ResourceProperties& setPropertyName(string propertyName) { DARABONBA_PTR_SET_VALUE(propertyName_, propertyName) };


        // propertyValue Field Functions 
        bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
        void deletePropertyValue() { this->propertyValue_ = nullptr;};
        inline string getPropertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
        inline ResourceProperties& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


      protected:
        // The name of the resource attribute.
        shared_ptr<string> propertyName_ {};
        // The value of the resource attribute.
        shared_ptr<string> propertyValue_ {};
      };

      virtual bool empty() const override { return this->complianceType_ == nullptr
        && this->regionId_ == nullptr && this->resourceClassification_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->resourceProperties_ == nullptr && this->resourceType_ == nullptr; };
      // complianceType Field Functions 
      bool hasComplianceType() const { return this->complianceType_ != nullptr;};
      void deleteComplianceType() { this->complianceType_ = nullptr;};
      inline string getComplianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
      inline Resources& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Resources& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceClassification Field Functions 
      bool hasResourceClassification() const { return this->resourceClassification_ != nullptr;};
      void deleteResourceClassification() { this->resourceClassification_ = nullptr;};
      inline string getResourceClassification() const { DARABONBA_PTR_GET_DEFAULT(resourceClassification_, "") };
      inline Resources& setResourceClassification(string resourceClassification) { DARABONBA_PTR_SET_VALUE(resourceClassification_, resourceClassification) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline Resources& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourceOwnerId Field Functions 
      bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
      void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
      inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
      inline Resources& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


      // resourceProperties Field Functions 
      bool hasResourceProperties() const { return this->resourceProperties_ != nullptr;};
      void deleteResourceProperties() { this->resourceProperties_ = nullptr;};
      inline const vector<Resources::ResourceProperties> & getResourceProperties() const { DARABONBA_PTR_GET_CONST(resourceProperties_, vector<Resources::ResourceProperties>) };
      inline vector<Resources::ResourceProperties> getResourceProperties() { DARABONBA_PTR_GET(resourceProperties_, vector<Resources::ResourceProperties>) };
      inline Resources& setResourceProperties(const vector<Resources::ResourceProperties> & resourceProperties) { DARABONBA_PTR_SET_VALUE(resourceProperties_, resourceProperties) };
      inline Resources& setResourceProperties(vector<Resources::ResourceProperties> && resourceProperties) { DARABONBA_PTR_SET_RVALUE(resourceProperties_, resourceProperties) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The compliance status of the resource. Valid values:
      // 
      // *   NonCompliant: non-compliant.
      // *   Excluded: ignored.
      // *   PendingExclusion: to be ignored.
      // *   PendingInclusion: to be unignored.
      shared_ptr<string> complianceType_ {};
      // The region ID of the resource.
      shared_ptr<string> regionId_ {};
      // The check results further analyzed by auxiliary decision-making.
      // 
      // >  This parameter is returned only when the check item supports the auxiliary decision-making feature.
      shared_ptr<string> resourceClassification_ {};
      // The ID of the resource.
      shared_ptr<string> resourceId_ {};
      // The name of the resource.
      shared_ptr<string> resourceName_ {};
      // The ID of the Alibaba Cloud account that owns the resource.
      shared_ptr<int64_t> resourceOwnerId_ {};
      // The attributes of the resource.
      shared_ptr<vector<Resources::ResourceProperties>> resourceProperties_ {};
      // The type of the resource.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->date_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->resources_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline ListEvaluationMetricDetailsResponseBody& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEvaluationMetricDetailsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEvaluationMetricDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<ListEvaluationMetricDetailsResponseBody::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<ListEvaluationMetricDetailsResponseBody::Resources>) };
    inline vector<ListEvaluationMetricDetailsResponseBody::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<ListEvaluationMetricDetailsResponseBody::Resources>) };
    inline ListEvaluationMetricDetailsResponseBody& setResources(const vector<ListEvaluationMetricDetailsResponseBody::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ListEvaluationMetricDetailsResponseBody& setResources(vector<ListEvaluationMetricDetailsResponseBody::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    shared_ptr<string> date_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the non-compliant resources.
    shared_ptr<vector<ListEvaluationMetricDetailsResponseBody::Resources>> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
