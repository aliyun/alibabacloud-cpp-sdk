// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECONFIGURATIONTIMELINERESPONSEBODYRESOURCECONFIGURATIONTIMELINE_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECONFIGURATIONTIMELINERESPONSEBODYRESOURCECONFIGURATIONTIMELINE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigurationList, configurationList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigurationList, configurationList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline() = default ;
    GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline(const GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline &) = default ;
    GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline(GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline &&) = default ;
    GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline() = default ;
    GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline& operator=(const GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline &) = default ;
    GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline& operator=(GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configurationList_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr; };
    // configurationList Field Functions 
    bool hasConfigurationList() const { return this->configurationList_ != nullptr;};
    void deleteConfigurationList() { this->configurationList_ = nullptr;};
    inline const vector<Models::GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList> & configurationList() const { DARABONBA_PTR_GET_CONST(configurationList_, vector<Models::GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList>) };
    inline vector<Models::GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList> configurationList() { DARABONBA_PTR_GET(configurationList_, vector<Models::GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList>) };
    inline GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline& setConfigurationList(const vector<Models::GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList> & configurationList) { DARABONBA_PTR_SET_VALUE(configurationList_, configurationList) };
    inline GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline& setConfigurationList(vector<Models::GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList> && configurationList) { DARABONBA_PTR_SET_RVALUE(configurationList_, configurationList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The configuration changes on the configuration timeline.
    std::shared_ptr<vector<Models::GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList>> configurationList_ = nullptr;
    // The maximum number of entries returned for a single request.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
