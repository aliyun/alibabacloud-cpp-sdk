// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINERESPONSEBODYPIPELINE_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINERESPONSEBODYPIPELINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetPipelineResponseBodyPipeline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineResponseBodyPipeline& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineResponseBodyPipeline& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetPipelineResponseBodyPipeline() = default ;
    GetPipelineResponseBodyPipeline(const GetPipelineResponseBodyPipeline &) = default ;
    GetPipelineResponseBodyPipeline(GetPipelineResponseBodyPipeline &&) = default ;
    GetPipelineResponseBodyPipeline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineResponseBodyPipeline() = default ;
    GetPipelineResponseBodyPipeline& operator=(const GetPipelineResponseBodyPipeline &) = default ;
    GetPipelineResponseBodyPipeline& operator=(GetPipelineResponseBodyPipeline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->modifiedTime_ != nullptr && this->name_ != nullptr && this->pipelineId_ != nullptr && this->priority_ != nullptr && this->speed_ != nullptr
        && this->status_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetPipelineResponseBodyPipeline& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetPipelineResponseBodyPipeline& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPipelineResponseBodyPipeline& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline GetPipelineResponseBodyPipeline& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetPipelineResponseBodyPipeline& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline string speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
    inline GetPipelineResponseBodyPipeline& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPipelineResponseBodyPipeline& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the template was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the template was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The name of the MPS queue.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the MPS queue.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The priority of the MPS queue. Valid values: 1 to 10.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The type of the MPS queue.
    // 
    // Valid values:
    // 
    // *   Standard: standard MPS queue.
    // *   Boost: MPS queue with transcoding speed boosted.
    // *   NarrowBandHDV2: MPS queue that supports Narrowband HD 2.0.
    std::shared_ptr<string> speed_ = nullptr;
    // The state of the MPS queue.
    // 
    // Valid values:
    // 
    // *   Active
    // *   Paused
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
