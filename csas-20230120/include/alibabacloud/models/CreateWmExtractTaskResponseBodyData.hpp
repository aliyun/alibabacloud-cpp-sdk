// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEXTRACTTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEXTRACTTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmExtractTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmExtractTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmExtractTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CreateWmExtractTaskResponseBodyData() = default ;
    CreateWmExtractTaskResponseBodyData(const CreateWmExtractTaskResponseBodyData &) = default ;
    CreateWmExtractTaskResponseBodyData(CreateWmExtractTaskResponseBodyData &&) = default ;
    CreateWmExtractTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmExtractTaskResponseBodyData() = default ;
    CreateWmExtractTaskResponseBodyData& operator=(const CreateWmExtractTaskResponseBodyData &) = default ;
    CreateWmExtractTaskResponseBodyData& operator=(CreateWmExtractTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateWmExtractTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The task ID. You can use task IDs to query task results.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
