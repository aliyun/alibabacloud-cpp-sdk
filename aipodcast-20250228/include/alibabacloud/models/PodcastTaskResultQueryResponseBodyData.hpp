// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PODCASTTASKRESULTQUERYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_PODCASTTASKRESULTQUERYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIPodcast20250228
{
namespace Models
{
  class PodcastTaskResultQueryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PodcastTaskResultQueryResponseBodyData& obj) { 
      DARABONBA_ANY_TO_JSON(extraResult, extraResult_);
      DARABONBA_ANY_TO_JSON(resultUrl, resultUrl_);
      DARABONBA_PTR_TO_JSON(script, script_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, PodcastTaskResultQueryResponseBodyData& obj) { 
      DARABONBA_ANY_FROM_JSON(extraResult, extraResult_);
      DARABONBA_ANY_FROM_JSON(resultUrl, resultUrl_);
      DARABONBA_PTR_FROM_JSON(script, script_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
    };
    PodcastTaskResultQueryResponseBodyData() = default ;
    PodcastTaskResultQueryResponseBodyData(const PodcastTaskResultQueryResponseBodyData &) = default ;
    PodcastTaskResultQueryResponseBodyData(PodcastTaskResultQueryResponseBodyData &&) = default ;
    PodcastTaskResultQueryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PodcastTaskResultQueryResponseBodyData() = default ;
    PodcastTaskResultQueryResponseBodyData& operator=(const PodcastTaskResultQueryResponseBodyData &) = default ;
    PodcastTaskResultQueryResponseBodyData& operator=(PodcastTaskResultQueryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extraResult_ != nullptr
        && this->resultUrl_ != nullptr && this->script_ != nullptr && this->taskId_ != nullptr && this->taskStatus_ != nullptr; };
    // extraResult Field Functions 
    bool hasExtraResult() const { return this->extraResult_ != nullptr;};
    void deleteExtraResult() { this->extraResult_ = nullptr;};
    inline     const Darabonba::Json & extraResult() const { DARABONBA_GET(extraResult_) };
    Darabonba::Json & extraResult() { DARABONBA_GET(extraResult_) };
    inline PodcastTaskResultQueryResponseBodyData& setExtraResult(const Darabonba::Json & extraResult) { DARABONBA_SET_VALUE(extraResult_, extraResult) };
    inline PodcastTaskResultQueryResponseBodyData& setExtraResult(Darabonba::Json & extraResult) { DARABONBA_SET_RVALUE(extraResult_, extraResult) };


    // resultUrl Field Functions 
    bool hasResultUrl() const { return this->resultUrl_ != nullptr;};
    void deleteResultUrl() { this->resultUrl_ = nullptr;};
    inline     const Darabonba::Json & resultUrl() const { DARABONBA_GET(resultUrl_) };
    Darabonba::Json & resultUrl() { DARABONBA_GET(resultUrl_) };
    inline PodcastTaskResultQueryResponseBodyData& setResultUrl(const Darabonba::Json & resultUrl) { DARABONBA_SET_VALUE(resultUrl_, resultUrl) };
    inline PodcastTaskResultQueryResponseBodyData& setResultUrl(Darabonba::Json & resultUrl) { DARABONBA_SET_RVALUE(resultUrl_, resultUrl) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string script() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline PodcastTaskResultQueryResponseBodyData& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline PodcastTaskResultQueryResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline PodcastTaskResultQueryResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    Darabonba::Json extraResult_ = nullptr;
    Darabonba::Json resultUrl_ = nullptr;
    std::shared_ptr<string> script_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIPodcast20250228
#endif
