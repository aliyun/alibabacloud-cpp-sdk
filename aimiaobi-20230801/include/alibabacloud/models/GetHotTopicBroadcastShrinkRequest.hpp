// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetHotTopicBroadcastShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotTopicBroadcastShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalcTotalToken, calcTotalToken_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(HotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_TO_JSON(LocationQuery, locationQuery_);
      DARABONBA_PTR_TO_JSON(Locations, locationsShrink_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(StepForCustomSummaryStyleConfig, stepForCustomSummaryStyleConfigShrink_);
      DARABONBA_PTR_TO_JSON(StepForNewsBroadcastContentConfig, stepForNewsBroadcastContentConfigShrink_);
      DARABONBA_PTR_TO_JSON(Topics, topicsShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotTopicBroadcastShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalcTotalToken, calcTotalToken_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(HotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_FROM_JSON(LocationQuery, locationQuery_);
      DARABONBA_PTR_FROM_JSON(Locations, locationsShrink_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(StepForCustomSummaryStyleConfig, stepForCustomSummaryStyleConfigShrink_);
      DARABONBA_PTR_FROM_JSON(StepForNewsBroadcastContentConfig, stepForNewsBroadcastContentConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Topics, topicsShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetHotTopicBroadcastShrinkRequest() = default ;
    GetHotTopicBroadcastShrinkRequest(const GetHotTopicBroadcastShrinkRequest &) = default ;
    GetHotTopicBroadcastShrinkRequest(GetHotTopicBroadcastShrinkRequest &&) = default ;
    GetHotTopicBroadcastShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotTopicBroadcastShrinkRequest() = default ;
    GetHotTopicBroadcastShrinkRequest& operator=(const GetHotTopicBroadcastShrinkRequest &) = default ;
    GetHotTopicBroadcastShrinkRequest& operator=(GetHotTopicBroadcastShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calcTotalToken_ == nullptr
        && return this->category_ == nullptr && return this->current_ == nullptr && return this->hotTopicVersion_ == nullptr && return this->locationQuery_ == nullptr && return this->locationsShrink_ == nullptr
        && return this->query_ == nullptr && return this->size_ == nullptr && return this->stepForCustomSummaryStyleConfigShrink_ == nullptr && return this->stepForNewsBroadcastContentConfigShrink_ == nullptr && return this->topicsShrink_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // calcTotalToken Field Functions 
    bool hasCalcTotalToken() const { return this->calcTotalToken_ != nullptr;};
    void deleteCalcTotalToken() { this->calcTotalToken_ = nullptr;};
    inline bool calcTotalToken() const { DARABONBA_PTR_GET_DEFAULT(calcTotalToken_, false) };
    inline GetHotTopicBroadcastShrinkRequest& setCalcTotalToken(bool calcTotalToken) { DARABONBA_PTR_SET_VALUE(calcTotalToken_, calcTotalToken) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetHotTopicBroadcastShrinkRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t current() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline GetHotTopicBroadcastShrinkRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // hotTopicVersion Field Functions 
    bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
    void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
    inline string hotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
    inline GetHotTopicBroadcastShrinkRequest& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


    // locationQuery Field Functions 
    bool hasLocationQuery() const { return this->locationQuery_ != nullptr;};
    void deleteLocationQuery() { this->locationQuery_ = nullptr;};
    inline string locationQuery() const { DARABONBA_PTR_GET_DEFAULT(locationQuery_, "") };
    inline GetHotTopicBroadcastShrinkRequest& setLocationQuery(string locationQuery) { DARABONBA_PTR_SET_VALUE(locationQuery_, locationQuery) };


    // locationsShrink Field Functions 
    bool hasLocationsShrink() const { return this->locationsShrink_ != nullptr;};
    void deleteLocationsShrink() { this->locationsShrink_ = nullptr;};
    inline string locationsShrink() const { DARABONBA_PTR_GET_DEFAULT(locationsShrink_, "") };
    inline GetHotTopicBroadcastShrinkRequest& setLocationsShrink(string locationsShrink) { DARABONBA_PTR_SET_VALUE(locationsShrink_, locationsShrink) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline GetHotTopicBroadcastShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline GetHotTopicBroadcastShrinkRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // stepForCustomSummaryStyleConfigShrink Field Functions 
    bool hasStepForCustomSummaryStyleConfigShrink() const { return this->stepForCustomSummaryStyleConfigShrink_ != nullptr;};
    void deleteStepForCustomSummaryStyleConfigShrink() { this->stepForCustomSummaryStyleConfigShrink_ = nullptr;};
    inline string stepForCustomSummaryStyleConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(stepForCustomSummaryStyleConfigShrink_, "") };
    inline GetHotTopicBroadcastShrinkRequest& setStepForCustomSummaryStyleConfigShrink(string stepForCustomSummaryStyleConfigShrink) { DARABONBA_PTR_SET_VALUE(stepForCustomSummaryStyleConfigShrink_, stepForCustomSummaryStyleConfigShrink) };


    // stepForNewsBroadcastContentConfigShrink Field Functions 
    bool hasStepForNewsBroadcastContentConfigShrink() const { return this->stepForNewsBroadcastContentConfigShrink_ != nullptr;};
    void deleteStepForNewsBroadcastContentConfigShrink() { this->stepForNewsBroadcastContentConfigShrink_ = nullptr;};
    inline string stepForNewsBroadcastContentConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(stepForNewsBroadcastContentConfigShrink_, "") };
    inline GetHotTopicBroadcastShrinkRequest& setStepForNewsBroadcastContentConfigShrink(string stepForNewsBroadcastContentConfigShrink) { DARABONBA_PTR_SET_VALUE(stepForNewsBroadcastContentConfigShrink_, stepForNewsBroadcastContentConfigShrink) };


    // topicsShrink Field Functions 
    bool hasTopicsShrink() const { return this->topicsShrink_ != nullptr;};
    void deleteTopicsShrink() { this->topicsShrink_ = nullptr;};
    inline string topicsShrink() const { DARABONBA_PTR_GET_DEFAULT(topicsShrink_, "") };
    inline GetHotTopicBroadcastShrinkRequest& setTopicsShrink(string topicsShrink) { DARABONBA_PTR_SET_VALUE(topicsShrink_, topicsShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetHotTopicBroadcastShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<bool> calcTotalToken_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<int32_t> current_ = nullptr;
    std::shared_ptr<string> hotTopicVersion_ = nullptr;
    std::shared_ptr<string> locationQuery_ = nullptr;
    std::shared_ptr<string> locationsShrink_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> stepForCustomSummaryStyleConfigShrink_ = nullptr;
    std::shared_ptr<string> stepForNewsBroadcastContentConfigShrink_ = nullptr;
    std::shared_ptr<string> topicsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
