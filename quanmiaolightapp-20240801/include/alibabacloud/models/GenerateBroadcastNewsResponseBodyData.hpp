// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEBROADCASTNEWSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GENERATEBROADCASTNEWSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GenerateBroadcastNewsResponseBodyDataHotTopicSummaries.hpp>
#include <alibabacloud/models/GenerateBroadcastNewsResponseBodyDataUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GenerateBroadcastNewsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateBroadcastNewsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(hotTopicSummaries, hotTopicSummaries_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateBroadcastNewsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(hotTopicSummaries, hotTopicSummaries_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    GenerateBroadcastNewsResponseBodyData() = default ;
    GenerateBroadcastNewsResponseBodyData(const GenerateBroadcastNewsResponseBodyData &) = default ;
    GenerateBroadcastNewsResponseBodyData(GenerateBroadcastNewsResponseBodyData &&) = default ;
    GenerateBroadcastNewsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateBroadcastNewsResponseBodyData() = default ;
    GenerateBroadcastNewsResponseBodyData& operator=(const GenerateBroadcastNewsResponseBodyData &) = default ;
    GenerateBroadcastNewsResponseBodyData& operator=(GenerateBroadcastNewsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotTopicSummaries_ != nullptr
        && this->sessionId_ != nullptr && this->taskId_ != nullptr && this->text_ != nullptr && this->usage_ != nullptr; };
    // hotTopicSummaries Field Functions 
    bool hasHotTopicSummaries() const { return this->hotTopicSummaries_ != nullptr;};
    void deleteHotTopicSummaries() { this->hotTopicSummaries_ = nullptr;};
    inline const vector<Models::GenerateBroadcastNewsResponseBodyDataHotTopicSummaries> & hotTopicSummaries() const { DARABONBA_PTR_GET_CONST(hotTopicSummaries_, vector<Models::GenerateBroadcastNewsResponseBodyDataHotTopicSummaries>) };
    inline vector<Models::GenerateBroadcastNewsResponseBodyDataHotTopicSummaries> hotTopicSummaries() { DARABONBA_PTR_GET(hotTopicSummaries_, vector<Models::GenerateBroadcastNewsResponseBodyDataHotTopicSummaries>) };
    inline GenerateBroadcastNewsResponseBodyData& setHotTopicSummaries(const vector<Models::GenerateBroadcastNewsResponseBodyDataHotTopicSummaries> & hotTopicSummaries) { DARABONBA_PTR_SET_VALUE(hotTopicSummaries_, hotTopicSummaries) };
    inline GenerateBroadcastNewsResponseBodyData& setHotTopicSummaries(vector<Models::GenerateBroadcastNewsResponseBodyDataHotTopicSummaries> && hotTopicSummaries) { DARABONBA_PTR_SET_RVALUE(hotTopicSummaries_, hotTopicSummaries) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GenerateBroadcastNewsResponseBodyData& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GenerateBroadcastNewsResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GenerateBroadcastNewsResponseBodyData& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::GenerateBroadcastNewsResponseBodyDataUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::GenerateBroadcastNewsResponseBodyDataUsage) };
    inline Models::GenerateBroadcastNewsResponseBodyDataUsage usage() { DARABONBA_PTR_GET(usage_, Models::GenerateBroadcastNewsResponseBodyDataUsage) };
    inline GenerateBroadcastNewsResponseBodyData& setUsage(const Models::GenerateBroadcastNewsResponseBodyDataUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline GenerateBroadcastNewsResponseBodyData& setUsage(Models::GenerateBroadcastNewsResponseBodyDataUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<vector<Models::GenerateBroadcastNewsResponseBodyDataHotTopicSummaries>> hotTopicSummaries_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<Models::GenerateBroadcastNewsResponseBodyDataUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
