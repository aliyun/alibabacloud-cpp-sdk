// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOLUMNARCLASSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOLUMNARCLASSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyColumnarClassResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyColumnarClassResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyColumnarClassResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ModifyColumnarClassResponseBodyData() = default ;
    ModifyColumnarClassResponseBodyData(const ModifyColumnarClassResponseBodyData &) = default ;
    ModifyColumnarClassResponseBodyData(ModifyColumnarClassResponseBodyData &&) = default ;
    ModifyColumnarClassResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyColumnarClassResponseBodyData() = default ;
    ModifyColumnarClassResponseBodyData& operator=(const ModifyColumnarClassResponseBodyData &) = default ;
    ModifyColumnarClassResponseBodyData& operator=(ModifyColumnarClassResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline ModifyColumnarClassResponseBodyData& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int32_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
