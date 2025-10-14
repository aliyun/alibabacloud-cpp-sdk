// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSQLFLASHBACKTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSQLFLASHBACKTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class SubmitSqlFlashbackTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSqlFlashbackTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSqlFlashbackTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    SubmitSqlFlashbackTaskResponseBodyData() = default ;
    SubmitSqlFlashbackTaskResponseBodyData(const SubmitSqlFlashbackTaskResponseBodyData &) = default ;
    SubmitSqlFlashbackTaskResponseBodyData(SubmitSqlFlashbackTaskResponseBodyData &&) = default ;
    SubmitSqlFlashbackTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSqlFlashbackTaskResponseBodyData() = default ;
    SubmitSqlFlashbackTaskResponseBodyData& operator=(const SubmitSqlFlashbackTaskResponseBodyData &) = default ;
    SubmitSqlFlashbackTaskResponseBodyData& operator=(SubmitSqlFlashbackTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SubmitSqlFlashbackTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
