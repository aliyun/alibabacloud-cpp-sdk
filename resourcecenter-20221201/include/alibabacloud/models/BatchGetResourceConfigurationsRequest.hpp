// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETRESOURCECONFIGURATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETRESOURCECONFIGURATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class BatchGetResourceConfigurationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetResourceConfigurationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetResourceConfigurationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    BatchGetResourceConfigurationsRequest() = default ;
    BatchGetResourceConfigurationsRequest(const BatchGetResourceConfigurationsRequest &) = default ;
    BatchGetResourceConfigurationsRequest(BatchGetResourceConfigurationsRequest &&) = default ;
    BatchGetResourceConfigurationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetResourceConfigurationsRequest() = default ;
    BatchGetResourceConfigurationsRequest& operator=(const BatchGetResourceConfigurationsRequest &) = default ;
    BatchGetResourceConfigurationsRequest& operator=(BatchGetResourceConfigurationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
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
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->resourceId_ == nullptr && this->resourceType_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Resources& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      shared_ptr<string> regionId_ {};
      shared_ptr<string> resourceId_ {};
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->resources_ == nullptr; };
    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<BatchGetResourceConfigurationsRequest::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<BatchGetResourceConfigurationsRequest::Resources>) };
    inline vector<BatchGetResourceConfigurationsRequest::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<BatchGetResourceConfigurationsRequest::Resources>) };
    inline BatchGetResourceConfigurationsRequest& setResources(const vector<BatchGetResourceConfigurationsRequest::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline BatchGetResourceConfigurationsRequest& setResources(vector<BatchGetResourceConfigurationsRequest::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    shared_ptr<vector<BatchGetResourceConfigurationsRequest::Resources>> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
