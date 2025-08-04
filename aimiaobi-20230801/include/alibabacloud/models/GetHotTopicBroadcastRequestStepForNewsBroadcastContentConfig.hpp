// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTREQUESTSTEPFORNEWSBROADCASTCONTENTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTREQUESTSTEPFORNEWSBROADCASTCONTENTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfigCustomHotValueWeights.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(CustomHotValueWeights, customHotValueWeights_);
      DARABONBA_PTR_TO_JSON(TopicCount, topicCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(CustomHotValueWeights, customHotValueWeights_);
      DARABONBA_PTR_FROM_JSON(TopicCount, topicCount_);
    };
    GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig() = default ;
    GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig(const GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig &) = default ;
    GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig(GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig &&) = default ;
    GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig() = default ;
    GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig& operator=(const GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig &) = default ;
    GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig& operator=(GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categories_ != nullptr
        && this->customHotValueWeights_ != nullptr && this->topicCount_ != nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<string> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
    inline vector<string> categories() { DARABONBA_PTR_GET(categories_, vector<string>) };
    inline GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // customHotValueWeights Field Functions 
    bool hasCustomHotValueWeights() const { return this->customHotValueWeights_ != nullptr;};
    void deleteCustomHotValueWeights() { this->customHotValueWeights_ = nullptr;};
    inline const vector<Models::GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfigCustomHotValueWeights> & customHotValueWeights() const { DARABONBA_PTR_GET_CONST(customHotValueWeights_, vector<Models::GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfigCustomHotValueWeights>) };
    inline vector<Models::GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfigCustomHotValueWeights> customHotValueWeights() { DARABONBA_PTR_GET(customHotValueWeights_, vector<Models::GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfigCustomHotValueWeights>) };
    inline GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig& setCustomHotValueWeights(const vector<Models::GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfigCustomHotValueWeights> & customHotValueWeights) { DARABONBA_PTR_SET_VALUE(customHotValueWeights_, customHotValueWeights) };
    inline GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig& setCustomHotValueWeights(vector<Models::GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfigCustomHotValueWeights> && customHotValueWeights) { DARABONBA_PTR_SET_RVALUE(customHotValueWeights_, customHotValueWeights) };


    // topicCount Field Functions 
    bool hasTopicCount() const { return this->topicCount_ != nullptr;};
    void deleteTopicCount() { this->topicCount_ = nullptr;};
    inline int32_t topicCount() const { DARABONBA_PTR_GET_DEFAULT(topicCount_, 0) };
    inline GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig& setTopicCount(int32_t topicCount) { DARABONBA_PTR_SET_VALUE(topicCount_, topicCount) };


  protected:
    std::shared_ptr<vector<string>> categories_ = nullptr;
    std::shared_ptr<vector<Models::GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfigCustomHotValueWeights>> customHotValueWeights_ = nullptr;
    std::shared_ptr<int32_t> topicCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
