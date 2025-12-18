// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCETIMELINERESPONSEBODYRESOURCECOMPLIANCETIMELINE_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCETIMELINERESPONSEBODYRESOURCECOMPLIANCETIMELINE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceList, complianceList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceList, complianceList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline() = default ;
    GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline(const GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline &) = default ;
    GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline(GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline &&) = default ;
    GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline() = default ;
    GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline& operator=(const GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline &) = default ;
    GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline& operator=(GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceList_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr; };
    // complianceList Field Functions 
    bool hasComplianceList() const { return this->complianceList_ != nullptr;};
    void deleteComplianceList() { this->complianceList_ = nullptr;};
    inline const vector<Models::GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList> & complianceList() const { DARABONBA_PTR_GET_CONST(complianceList_, vector<Models::GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList>) };
    inline vector<Models::GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList> complianceList() { DARABONBA_PTR_GET(complianceList_, vector<Models::GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList>) };
    inline GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline& setComplianceList(const vector<Models::GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList> & complianceList) { DARABONBA_PTR_SET_VALUE(complianceList_, complianceList) };
    inline GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline& setComplianceList(vector<Models::GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList> && complianceList) { DARABONBA_PTR_SET_RVALUE(complianceList_, complianceList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The status of the resource. The parameter value varies based on the resource type and may be left empty. Examples:
    // 
    // *   If the value of the ResourceType parameter is ACS::ECS::Instance, the resource is an Elastic Compute Service (ECS) instance that has a specific state. In this case, the valid values of this parameter are Running and Stopped.
    // *   If the value of the ResourceType parameter is ACS::OSS::Bucket, the resource is an Object Storage Service (OSS) bucket that is not in a specific state. In this case, this parameter is empty.
    std::shared_ptr<vector<Models::GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList>> complianceList_ = nullptr;
    // The maximum number of entries returned for a single request.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
