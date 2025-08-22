// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserResourcesResponseBodyResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeUserResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(QueryFailedResourceTypes, queryFailedResourceTypes_);
      DARABONBA_PTR_TO_JSON(RankVersion, rankVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(QueryFailedResourceTypes, queryFailedResourceTypes_);
      DARABONBA_PTR_FROM_JSON(RankVersion, rankVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    DescribeUserResourcesResponseBody() = default ;
    DescribeUserResourcesResponseBody(const DescribeUserResourcesResponseBody &) = default ;
    DescribeUserResourcesResponseBody(DescribeUserResourcesResponseBody &&) = default ;
    DescribeUserResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserResourcesResponseBody() = default ;
    DescribeUserResourcesResponseBody& operator=(const DescribeUserResourcesResponseBody &) = default ;
    DescribeUserResourcesResponseBody& operator=(DescribeUserResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->queryFailedResourceTypes_ != nullptr && this->rankVersion_ != nullptr && this->requestId_ != nullptr && this->resources_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeUserResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // queryFailedResourceTypes Field Functions 
    bool hasQueryFailedResourceTypes() const { return this->queryFailedResourceTypes_ != nullptr;};
    void deleteQueryFailedResourceTypes() { this->queryFailedResourceTypes_ = nullptr;};
    inline const vector<string> & queryFailedResourceTypes() const { DARABONBA_PTR_GET_CONST(queryFailedResourceTypes_, vector<string>) };
    inline vector<string> queryFailedResourceTypes() { DARABONBA_PTR_GET(queryFailedResourceTypes_, vector<string>) };
    inline DescribeUserResourcesResponseBody& setQueryFailedResourceTypes(const vector<string> & queryFailedResourceTypes) { DARABONBA_PTR_SET_VALUE(queryFailedResourceTypes_, queryFailedResourceTypes) };
    inline DescribeUserResourcesResponseBody& setQueryFailedResourceTypes(vector<string> && queryFailedResourceTypes) { DARABONBA_PTR_SET_RVALUE(queryFailedResourceTypes_, queryFailedResourceTypes) };


    // rankVersion Field Functions 
    bool hasRankVersion() const { return this->rankVersion_ != nullptr;};
    void deleteRankVersion() { this->rankVersion_ = nullptr;};
    inline int64_t rankVersion() const { DARABONBA_PTR_GET_DEFAULT(rankVersion_, 0L) };
    inline DescribeUserResourcesResponseBody& setRankVersion(int64_t rankVersion) { DARABONBA_PTR_SET_VALUE(rankVersion_, rankVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<DescribeUserResourcesResponseBodyResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<DescribeUserResourcesResponseBodyResources>) };
    inline vector<DescribeUserResourcesResponseBodyResources> resources() { DARABONBA_PTR_GET(resources_, vector<DescribeUserResourcesResponseBodyResources>) };
    inline DescribeUserResourcesResponseBody& setResources(const vector<DescribeUserResourcesResponseBodyResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribeUserResourcesResponseBody& setResources(vector<DescribeUserResourcesResponseBodyResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<string>> queryFailedResourceTypes_ = nullptr;
    std::shared_ptr<int64_t> rankVersion_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeUserResourcesResponseBodyResources>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
