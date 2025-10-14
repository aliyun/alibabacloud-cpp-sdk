// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCDCCLASSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCDCCLASSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyCdcClassResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCdcClassResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCdcClassResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ModifyCdcClassResponseBodyData() = default ;
    ModifyCdcClassResponseBodyData(const ModifyCdcClassResponseBodyData &) = default ;
    ModifyCdcClassResponseBodyData(ModifyCdcClassResponseBodyData &&) = default ;
    ModifyCdcClassResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCdcClassResponseBodyData() = default ;
    ModifyCdcClassResponseBodyData& operator=(const ModifyCdcClassResponseBodyData &) = default ;
    ModifyCdcClassResponseBodyData& operator=(ModifyCdcClassResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline ModifyCdcClassResponseBodyData& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int32_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
