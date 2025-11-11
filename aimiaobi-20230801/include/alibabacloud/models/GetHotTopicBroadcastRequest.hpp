// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetHotTopicBroadcastRequestStepForCustomSummaryStyleConfig.hpp>
#include <alibabacloud/models/GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetHotTopicBroadcastRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotTopicBroadcastRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalcTotalToken, calcTotalToken_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(HotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_TO_JSON(LocationQuery, locationQuery_);
      DARABONBA_PTR_TO_JSON(Locations, locations_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(StepForCustomSummaryStyleConfig, stepForCustomSummaryStyleConfig_);
      DARABONBA_PTR_TO_JSON(StepForNewsBroadcastContentConfig, stepForNewsBroadcastContentConfig_);
      DARABONBA_PTR_TO_JSON(Topics, topics_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotTopicBroadcastRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalcTotalToken, calcTotalToken_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(HotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_FROM_JSON(LocationQuery, locationQuery_);
      DARABONBA_PTR_FROM_JSON(Locations, locations_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(StepForCustomSummaryStyleConfig, stepForCustomSummaryStyleConfig_);
      DARABONBA_PTR_FROM_JSON(StepForNewsBroadcastContentConfig, stepForNewsBroadcastContentConfig_);
      DARABONBA_PTR_FROM_JSON(Topics, topics_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetHotTopicBroadcastRequest() = default ;
    GetHotTopicBroadcastRequest(const GetHotTopicBroadcastRequest &) = default ;
    GetHotTopicBroadcastRequest(GetHotTopicBroadcastRequest &&) = default ;
    GetHotTopicBroadcastRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotTopicBroadcastRequest() = default ;
    GetHotTopicBroadcastRequest& operator=(const GetHotTopicBroadcastRequest &) = default ;
    GetHotTopicBroadcastRequest& operator=(GetHotTopicBroadcastRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calcTotalToken_ == nullptr
        && return this->category_ == nullptr && return this->current_ == nullptr && return this->hotTopicVersion_ == nullptr && return this->locationQuery_ == nullptr && return this->locations_ == nullptr
        && return this->query_ == nullptr && return this->size_ == nullptr && return this->stepForCustomSummaryStyleConfig_ == nullptr && return this->stepForNewsBroadcastContentConfig_ == nullptr && return this->topics_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // calcTotalToken Field Functions 
    bool hasCalcTotalToken() const { return this->calcTotalToken_ != nullptr;};
    void deleteCalcTotalToken() { this->calcTotalToken_ = nullptr;};
    inline bool calcTotalToken() const { DARABONBA_PTR_GET_DEFAULT(calcTotalToken_, false) };
    inline GetHotTopicBroadcastRequest& setCalcTotalToken(bool calcTotalToken) { DARABONBA_PTR_SET_VALUE(calcTotalToken_, calcTotalToken) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetHotTopicBroadcastRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t current() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline GetHotTopicBroadcastRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // hotTopicVersion Field Functions 
    bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
    void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
    inline string hotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
    inline GetHotTopicBroadcastRequest& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


    // locationQuery Field Functions 
    bool hasLocationQuery() const { return this->locationQuery_ != nullptr;};
    void deleteLocationQuery() { this->locationQuery_ = nullptr;};
    inline string locationQuery() const { DARABONBA_PTR_GET_DEFAULT(locationQuery_, "") };
    inline GetHotTopicBroadcastRequest& setLocationQuery(string locationQuery) { DARABONBA_PTR_SET_VALUE(locationQuery_, locationQuery) };


    // locations Field Functions 
    bool hasLocations() const { return this->locations_ != nullptr;};
    void deleteLocations() { this->locations_ = nullptr;};
    inline const vector<string> & locations() const { DARABONBA_PTR_GET_CONST(locations_, vector<string>) };
    inline vector<string> locations() { DARABONBA_PTR_GET(locations_, vector<string>) };
    inline GetHotTopicBroadcastRequest& setLocations(const vector<string> & locations) { DARABONBA_PTR_SET_VALUE(locations_, locations) };
    inline GetHotTopicBroadcastRequest& setLocations(vector<string> && locations) { DARABONBA_PTR_SET_RVALUE(locations_, locations) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline GetHotTopicBroadcastRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline GetHotTopicBroadcastRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // stepForCustomSummaryStyleConfig Field Functions 
    bool hasStepForCustomSummaryStyleConfig() const { return this->stepForCustomSummaryStyleConfig_ != nullptr;};
    void deleteStepForCustomSummaryStyleConfig() { this->stepForCustomSummaryStyleConfig_ = nullptr;};
    inline const GetHotTopicBroadcastRequestStepForCustomSummaryStyleConfig & stepForCustomSummaryStyleConfig() const { DARABONBA_PTR_GET_CONST(stepForCustomSummaryStyleConfig_, GetHotTopicBroadcastRequestStepForCustomSummaryStyleConfig) };
    inline GetHotTopicBroadcastRequestStepForCustomSummaryStyleConfig stepForCustomSummaryStyleConfig() { DARABONBA_PTR_GET(stepForCustomSummaryStyleConfig_, GetHotTopicBroadcastRequestStepForCustomSummaryStyleConfig) };
    inline GetHotTopicBroadcastRequest& setStepForCustomSummaryStyleConfig(const GetHotTopicBroadcastRequestStepForCustomSummaryStyleConfig & stepForCustomSummaryStyleConfig) { DARABONBA_PTR_SET_VALUE(stepForCustomSummaryStyleConfig_, stepForCustomSummaryStyleConfig) };
    inline GetHotTopicBroadcastRequest& setStepForCustomSummaryStyleConfig(GetHotTopicBroadcastRequestStepForCustomSummaryStyleConfig && stepForCustomSummaryStyleConfig) { DARABONBA_PTR_SET_RVALUE(stepForCustomSummaryStyleConfig_, stepForCustomSummaryStyleConfig) };


    // stepForNewsBroadcastContentConfig Field Functions 
    bool hasStepForNewsBroadcastContentConfig() const { return this->stepForNewsBroadcastContentConfig_ != nullptr;};
    void deleteStepForNewsBroadcastContentConfig() { this->stepForNewsBroadcastContentConfig_ = nullptr;};
    inline const GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig & stepForNewsBroadcastContentConfig() const { DARABONBA_PTR_GET_CONST(stepForNewsBroadcastContentConfig_, GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig) };
    inline GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig stepForNewsBroadcastContentConfig() { DARABONBA_PTR_GET(stepForNewsBroadcastContentConfig_, GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig) };
    inline GetHotTopicBroadcastRequest& setStepForNewsBroadcastContentConfig(const GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig & stepForNewsBroadcastContentConfig) { DARABONBA_PTR_SET_VALUE(stepForNewsBroadcastContentConfig_, stepForNewsBroadcastContentConfig) };
    inline GetHotTopicBroadcastRequest& setStepForNewsBroadcastContentConfig(GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig && stepForNewsBroadcastContentConfig) { DARABONBA_PTR_SET_RVALUE(stepForNewsBroadcastContentConfig_, stepForNewsBroadcastContentConfig) };


    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline const vector<string> & topics() const { DARABONBA_PTR_GET_CONST(topics_, vector<string>) };
    inline vector<string> topics() { DARABONBA_PTR_GET(topics_, vector<string>) };
    inline GetHotTopicBroadcastRequest& setTopics(const vector<string> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
    inline GetHotTopicBroadcastRequest& setTopics(vector<string> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetHotTopicBroadcastRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<bool> calcTotalToken_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<int32_t> current_ = nullptr;
    std::shared_ptr<string> hotTopicVersion_ = nullptr;
    std::shared_ptr<string> locationQuery_ = nullptr;
    std::shared_ptr<vector<string>> locations_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<GetHotTopicBroadcastRequestStepForCustomSummaryStyleConfig> stepForCustomSummaryStyleConfig_ = nullptr;
    std::shared_ptr<GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig> stepForNewsBroadcastContentConfig_ = nullptr;
    std::shared_ptr<vector<string>> topics_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
