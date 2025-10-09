// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODYPIPELINE_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODYPIPELINE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPipelineRunResponseBodyPipelineStages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetPipelineRunResponseBodyPipeline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineRunResponseBodyPipeline& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Stages, stages_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineRunResponseBodyPipeline& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Stages, stages_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetPipelineRunResponseBodyPipeline() = default ;
    GetPipelineRunResponseBodyPipeline(const GetPipelineRunResponseBodyPipeline &) = default ;
    GetPipelineRunResponseBodyPipeline(GetPipelineRunResponseBodyPipeline &&) = default ;
    GetPipelineRunResponseBodyPipeline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineRunResponseBodyPipeline() = default ;
    GetPipelineRunResponseBodyPipeline& operator=(const GetPipelineRunResponseBodyPipeline &) = default ;
    GetPipelineRunResponseBodyPipeline& operator=(GetPipelineRunResponseBodyPipeline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->creator_ != nullptr && this->id_ != nullptr && this->message_ != nullptr && this->modifyTime_ != nullptr && this->projectId_ != nullptr
        && this->stages_ != nullptr && this->status_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetPipelineRunResponseBodyPipeline& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetPipelineRunResponseBodyPipeline& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetPipelineRunResponseBodyPipeline& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPipelineRunResponseBodyPipeline& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline GetPipelineRunResponseBodyPipeline& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetPipelineRunResponseBodyPipeline& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // stages Field Functions 
    bool hasStages() const { return this->stages_ != nullptr;};
    void deleteStages() { this->stages_ = nullptr;};
    inline const vector<Models::GetPipelineRunResponseBodyPipelineStages> & stages() const { DARABONBA_PTR_GET_CONST(stages_, vector<Models::GetPipelineRunResponseBodyPipelineStages>) };
    inline vector<Models::GetPipelineRunResponseBodyPipelineStages> stages() { DARABONBA_PTR_GET(stages_, vector<Models::GetPipelineRunResponseBodyPipelineStages>) };
    inline GetPipelineRunResponseBodyPipeline& setStages(const vector<Models::GetPipelineRunResponseBodyPipelineStages> & stages) { DARABONBA_PTR_SET_VALUE(stages_, stages) };
    inline GetPipelineRunResponseBodyPipeline& setStages(vector<Models::GetPipelineRunResponseBodyPipelineStages> && stages) { DARABONBA_PTR_SET_RVALUE(stages_, stages) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPipelineRunResponseBodyPipeline& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the process was created. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The creator of the process.
    std::shared_ptr<string> creator_ = nullptr;
    // The process ID.
    std::shared_ptr<string> id_ = nullptr;
    // The error message returned when the process fails.
    std::shared_ptr<string> message_ = nullptr;
    // The time when the process was modified. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The DataWorks workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The information about stages in the process.
    std::shared_ptr<vector<Models::GetPipelineRunResponseBodyPipelineStages>> stages_ = nullptr;
    // The status of the process.
    // 
    // Valid values:
    // 
    // *   Init
    // *   Running
    // *   Success
    // *   Fail
    // *   Termination
    // *   Cancel
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
