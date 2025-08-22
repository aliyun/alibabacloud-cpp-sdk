// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNTHETICTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNTHETICTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateSyntheticTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSyntheticTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSyntheticTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CreateSyntheticTaskResponseBodyData() = default ;
    CreateSyntheticTaskResponseBodyData(const CreateSyntheticTaskResponseBodyData &) = default ;
    CreateSyntheticTaskResponseBodyData(CreateSyntheticTaskResponseBodyData &&) = default ;
    CreateSyntheticTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSyntheticTaskResponseBodyData() = default ;
    CreateSyntheticTaskResponseBodyData& operator=(const CreateSyntheticTaskResponseBodyData &) = default ;
    CreateSyntheticTaskResponseBodyData& operator=(CreateSyntheticTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline CreateSyntheticTaskResponseBodyData& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the synthetic monitoring task.
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
