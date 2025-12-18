// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCETIMELINERESPONSEBODYRESOURCECOMPLIANCETIMELINE_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCETIMELINERESPONSEBODYRESOURCECOMPLIANCETIMELINE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceList, complianceList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceList, complianceList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline() = default ;
    GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline(const GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline &) = default ;
    GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline(GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline &&) = default ;
    GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline() = default ;
    GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline& operator=(const GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline &) = default ;
    GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline& operator=(GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceList_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr; };
    // complianceList Field Functions 
    bool hasComplianceList() const { return this->complianceList_ != nullptr;};
    void deleteComplianceList() { this->complianceList_ = nullptr;};
    inline const vector<Models::GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList> & complianceList() const { DARABONBA_PTR_GET_CONST(complianceList_, vector<Models::GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList>) };
    inline vector<Models::GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList> complianceList() { DARABONBA_PTR_GET(complianceList_, vector<Models::GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList>) };
    inline GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline& setComplianceList(const vector<Models::GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList> & complianceList) { DARABONBA_PTR_SET_VALUE(complianceList_, complianceList) };
    inline GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline& setComplianceList(vector<Models::GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList> && complianceList) { DARABONBA_PTR_SET_RVALUE(complianceList_, complianceList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The compliance evaluation records on the compliance timeline.
    std::shared_ptr<vector<Models::GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList>> complianceList_ = nullptr;
    // The maximum number of entries that can be returned for a single request.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used to initiate the next request.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
