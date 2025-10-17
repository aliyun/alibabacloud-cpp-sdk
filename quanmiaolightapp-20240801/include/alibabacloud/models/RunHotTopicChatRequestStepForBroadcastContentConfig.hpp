// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICCHATREQUESTSTEPFORBROADCASTCONTENTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICCHATREQUESTSTEPFORBROADCASTCONTENTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicChatRequestStepForBroadcastContentConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicChatRequestStepForBroadcastContentConfig& obj) { 
      DARABONBA_PTR_TO_JSON(categories, categories_);
      DARABONBA_PTR_TO_JSON(customHotValueWeights, customHotValueWeights_);
      DARABONBA_PTR_TO_JSON(topicCount, topicCount_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicChatRequestStepForBroadcastContentConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(categories, categories_);
      DARABONBA_PTR_FROM_JSON(customHotValueWeights, customHotValueWeights_);
      DARABONBA_PTR_FROM_JSON(topicCount, topicCount_);
    };
    RunHotTopicChatRequestStepForBroadcastContentConfig() = default ;
    RunHotTopicChatRequestStepForBroadcastContentConfig(const RunHotTopicChatRequestStepForBroadcastContentConfig &) = default ;
    RunHotTopicChatRequestStepForBroadcastContentConfig(RunHotTopicChatRequestStepForBroadcastContentConfig &&) = default ;
    RunHotTopicChatRequestStepForBroadcastContentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicChatRequestStepForBroadcastContentConfig() = default ;
    RunHotTopicChatRequestStepForBroadcastContentConfig& operator=(const RunHotTopicChatRequestStepForBroadcastContentConfig &) = default ;
    RunHotTopicChatRequestStepForBroadcastContentConfig& operator=(RunHotTopicChatRequestStepForBroadcastContentConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categories_ == nullptr
        && return this->customHotValueWeights_ == nullptr && return this->topicCount_ == nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<string> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
    inline vector<string> categories() { DARABONBA_PTR_GET(categories_, vector<string>) };
    inline RunHotTopicChatRequestStepForBroadcastContentConfig& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline RunHotTopicChatRequestStepForBroadcastContentConfig& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // customHotValueWeights Field Functions 
    bool hasCustomHotValueWeights() const { return this->customHotValueWeights_ != nullptr;};
    void deleteCustomHotValueWeights() { this->customHotValueWeights_ = nullptr;};
    inline const vector<Models::RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights> & customHotValueWeights() const { DARABONBA_PTR_GET_CONST(customHotValueWeights_, vector<Models::RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights>) };
    inline vector<Models::RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights> customHotValueWeights() { DARABONBA_PTR_GET(customHotValueWeights_, vector<Models::RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights>) };
    inline RunHotTopicChatRequestStepForBroadcastContentConfig& setCustomHotValueWeights(const vector<Models::RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights> & customHotValueWeights) { DARABONBA_PTR_SET_VALUE(customHotValueWeights_, customHotValueWeights) };
    inline RunHotTopicChatRequestStepForBroadcastContentConfig& setCustomHotValueWeights(vector<Models::RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights> && customHotValueWeights) { DARABONBA_PTR_SET_RVALUE(customHotValueWeights_, customHotValueWeights) };


    // topicCount Field Functions 
    bool hasTopicCount() const { return this->topicCount_ != nullptr;};
    void deleteTopicCount() { this->topicCount_ = nullptr;};
    inline int32_t topicCount() const { DARABONBA_PTR_GET_DEFAULT(topicCount_, 0) };
    inline RunHotTopicChatRequestStepForBroadcastContentConfig& setTopicCount(int32_t topicCount) { DARABONBA_PTR_SET_VALUE(topicCount_, topicCount) };


  protected:
    std::shared_ptr<vector<string>> categories_ = nullptr;
    std::shared_ptr<vector<Models::RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights>> customHotValueWeights_ = nullptr;
    std::shared_ptr<int32_t> topicCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
