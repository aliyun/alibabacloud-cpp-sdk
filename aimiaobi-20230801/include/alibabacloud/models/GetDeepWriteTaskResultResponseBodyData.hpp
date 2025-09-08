// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEEPWRITETASKRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDEEPWRITETASKRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetDeepWriteTaskResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeepWriteTaskResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactUrl, artifactUrl_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeepWriteTaskResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactUrl, artifactUrl_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetDeepWriteTaskResultResponseBodyData() = default ;
    GetDeepWriteTaskResultResponseBodyData(const GetDeepWriteTaskResultResponseBodyData &) = default ;
    GetDeepWriteTaskResultResponseBodyData(GetDeepWriteTaskResultResponseBodyData &&) = default ;
    GetDeepWriteTaskResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeepWriteTaskResultResponseBodyData() = default ;
    GetDeepWriteTaskResultResponseBodyData& operator=(const GetDeepWriteTaskResultResponseBodyData &) = default ;
    GetDeepWriteTaskResultResponseBodyData& operator=(GetDeepWriteTaskResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->artifactUrl_ != nullptr
        && this->taskId_ != nullptr; };
    // artifactUrl Field Functions 
    bool hasArtifactUrl() const { return this->artifactUrl_ != nullptr;};
    void deleteArtifactUrl() { this->artifactUrl_ = nullptr;};
    inline string artifactUrl() const { DARABONBA_PTR_GET_DEFAULT(artifactUrl_, "") };
    inline GetDeepWriteTaskResultResponseBodyData& setArtifactUrl(string artifactUrl) { DARABONBA_PTR_SET_VALUE(artifactUrl_, artifactUrl) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetDeepWriteTaskResultResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> artifactUrl_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
