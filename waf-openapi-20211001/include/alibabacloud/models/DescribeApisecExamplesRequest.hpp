// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECEXAMPLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECEXAMPLESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecExamplesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecExamplesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalTag, abnormalTag_);
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ExampleType, exampleType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestSensitiveTypeList, requestSensitiveTypeList_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResponseSensitiveTypeList, responseSensitiveTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecExamplesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalTag, abnormalTag_);
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ExampleType, exampleType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestSensitiveTypeList, requestSensitiveTypeList_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResponseSensitiveTypeList, responseSensitiveTypeList_);
    };
    DescribeApisecExamplesRequest() = default ;
    DescribeApisecExamplesRequest(const DescribeApisecExamplesRequest &) = default ;
    DescribeApisecExamplesRequest(DescribeApisecExamplesRequest &&) = default ;
    DescribeApisecExamplesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecExamplesRequest() = default ;
    DescribeApisecExamplesRequest& operator=(const DescribeApisecExamplesRequest &) = default ;
    DescribeApisecExamplesRequest& operator=(DescribeApisecExamplesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormalTag_ == nullptr
        && return this->apiId_ == nullptr && return this->clusterId_ == nullptr && return this->exampleType_ == nullptr && return this->instanceId_ == nullptr && return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->regionId_ == nullptr && return this->requestSensitiveTypeList_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr && return this->responseSensitiveTypeList_ == nullptr; };
    // abnormalTag Field Functions 
    bool hasAbnormalTag() const { return this->abnormalTag_ != nullptr;};
    void deleteAbnormalTag() { this->abnormalTag_ = nullptr;};
    inline string abnormalTag() const { DARABONBA_PTR_GET_DEFAULT(abnormalTag_, "") };
    inline DescribeApisecExamplesRequest& setAbnormalTag(string abnormalTag) { DARABONBA_PTR_SET_VALUE(abnormalTag_, abnormalTag) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApisecExamplesRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeApisecExamplesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // exampleType Field Functions 
    bool hasExampleType() const { return this->exampleType_ != nullptr;};
    void deleteExampleType() { this->exampleType_ = nullptr;};
    inline string exampleType() const { DARABONBA_PTR_GET_DEFAULT(exampleType_, "") };
    inline DescribeApisecExamplesRequest& setExampleType(string exampleType) { DARABONBA_PTR_SET_VALUE(exampleType_, exampleType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeApisecExamplesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeApisecExamplesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeApisecExamplesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApisecExamplesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestSensitiveTypeList Field Functions 
    bool hasRequestSensitiveTypeList() const { return this->requestSensitiveTypeList_ != nullptr;};
    void deleteRequestSensitiveTypeList() { this->requestSensitiveTypeList_ = nullptr;};
    inline const vector<string> & requestSensitiveTypeList() const { DARABONBA_PTR_GET_CONST(requestSensitiveTypeList_, vector<string>) };
    inline vector<string> requestSensitiveTypeList() { DARABONBA_PTR_GET(requestSensitiveTypeList_, vector<string>) };
    inline DescribeApisecExamplesRequest& setRequestSensitiveTypeList(const vector<string> & requestSensitiveTypeList) { DARABONBA_PTR_SET_VALUE(requestSensitiveTypeList_, requestSensitiveTypeList) };
    inline DescribeApisecExamplesRequest& setRequestSensitiveTypeList(vector<string> && requestSensitiveTypeList) { DARABONBA_PTR_SET_RVALUE(requestSensitiveTypeList_, requestSensitiveTypeList) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeApisecExamplesRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // responseSensitiveTypeList Field Functions 
    bool hasResponseSensitiveTypeList() const { return this->responseSensitiveTypeList_ != nullptr;};
    void deleteResponseSensitiveTypeList() { this->responseSensitiveTypeList_ = nullptr;};
    inline const vector<string> & responseSensitiveTypeList() const { DARABONBA_PTR_GET_CONST(responseSensitiveTypeList_, vector<string>) };
    inline vector<string> responseSensitiveTypeList() { DARABONBA_PTR_GET(responseSensitiveTypeList_, vector<string>) };
    inline DescribeApisecExamplesRequest& setResponseSensitiveTypeList(const vector<string> & responseSensitiveTypeList) { DARABONBA_PTR_SET_VALUE(responseSensitiveTypeList_, responseSensitiveTypeList) };
    inline DescribeApisecExamplesRequest& setResponseSensitiveTypeList(vector<string> && responseSensitiveTypeList) { DARABONBA_PTR_SET_RVALUE(responseSensitiveTypeList_, responseSensitiveTypeList) };


  protected:
    std::shared_ptr<string> abnormalTag_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> apiId_ = nullptr;
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> exampleType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<vector<string>> requestSensitiveTypeList_ = nullptr;
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    std::shared_ptr<vector<string>> responseSensitiveTypeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
