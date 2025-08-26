// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PODCASTTASKSUBMITRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_PODCASTTASKSUBMITRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIPodcast20250228
{
namespace Models
{
  class PodcastTaskSubmitResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PodcastTaskSubmitResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, PodcastTaskSubmitResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
    };
    PodcastTaskSubmitResponseBodyData() = default ;
    PodcastTaskSubmitResponseBodyData(const PodcastTaskSubmitResponseBodyData &) = default ;
    PodcastTaskSubmitResponseBodyData(PodcastTaskSubmitResponseBodyData &&) = default ;
    PodcastTaskSubmitResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PodcastTaskSubmitResponseBodyData() = default ;
    PodcastTaskSubmitResponseBodyData& operator=(const PodcastTaskSubmitResponseBodyData &) = default ;
    PodcastTaskSubmitResponseBodyData& operator=(PodcastTaskSubmitResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr
        && this->taskStatus_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline PodcastTaskSubmitResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline PodcastTaskSubmitResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIPodcast20250228
#endif
