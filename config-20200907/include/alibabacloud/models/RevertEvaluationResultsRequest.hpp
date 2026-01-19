// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVERTEVALUATIONRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVERTEVALUATIONRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class RevertEvaluationResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevertEvaluationResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, RevertEvaluationResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    RevertEvaluationResultsRequest() = default ;
    RevertEvaluationResultsRequest(const RevertEvaluationResultsRequest &) = default ;
    RevertEvaluationResultsRequest(RevertEvaluationResultsRequest &&) = default ;
    RevertEvaluationResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevertEvaluationResultsRequest() = default ;
    RevertEvaluationResultsRequest& operator=(const RevertEvaluationResultsRequest &) = default ;
    RevertEvaluationResultsRequest& operator=(RevertEvaluationResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(ResourceAccountId, resourceAccountId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(ResourceAccountId, resourceAccountId_);
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
      virtual bool empty() const override { return this->region_ == nullptr
        && this->resourceAccountId_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr; };
      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Resources& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // resourceAccountId Field Functions 
      bool hasResourceAccountId() const { return this->resourceAccountId_ != nullptr;};
      void deleteResourceAccountId() { this->resourceAccountId_ = nullptr;};
      inline int64_t getResourceAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceAccountId_, 0L) };
      inline Resources& setResourceAccountId(int64_t resourceAccountId) { DARABONBA_PTR_SET_VALUE(resourceAccountId_, resourceAccountId) };


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
      // The ID of the region in which the resource resides.
      // 
      // For more information about how to obtain the ID of the region in which a resource resides, see [ListDiscoveredResources](https://help.aliyun.com/document_detail/169620.html).
      // 
      // This parameter is required.
      shared_ptr<string> region_ {};
      // The ID of the Alibaba Cloud account to which the resource belongs.
      // 
      // This parameter is required.
      shared_ptr<int64_t> resourceAccountId_ {};
      // The resource ID.
      // 
      // For more information about how to obtain the ID of a resource, see [ListDiscoveredResources](https://help.aliyun.com/document_detail/169620.html).
      // 
      // This parameter is required.
      shared_ptr<string> resourceId_ {};
      // The resource type.
      // 
      // For more information about how to query the type of a resource, see [ListDiscoveredResources](https://help.aliyun.com/document_detail/169620.html).
      // 
      // This parameter is required.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->configRuleId_ == nullptr
        && this->resources_ == nullptr; };
    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string getConfigRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline RevertEvaluationResultsRequest& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<RevertEvaluationResultsRequest::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<RevertEvaluationResultsRequest::Resources>) };
    inline vector<RevertEvaluationResultsRequest::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<RevertEvaluationResultsRequest::Resources>) };
    inline RevertEvaluationResultsRequest& setResources(const vector<RevertEvaluationResultsRequest::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline RevertEvaluationResultsRequest& setResources(vector<RevertEvaluationResultsRequest::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The rule ID.
    // 
    // For more information about how to obtain the ID of a rule, see [ListConfigRules](https://help.aliyun.com/document_detail/169607.html).
    // 
    // This parameter is required.
    shared_ptr<string> configRuleId_ {};
    // The resources that are to be re-evaluated.
    // 
    // This parameter is required.
    shared_ptr<vector<RevertEvaluationResultsRequest::Resources>> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
