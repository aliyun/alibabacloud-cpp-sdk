// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDBINSTANCESSLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDBINSTANCESSLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class UpdateDBInstanceSSLResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDBInstanceSSLResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDBInstanceSSLResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpdateDBInstanceSSLResponseBodyData() = default ;
    UpdateDBInstanceSSLResponseBodyData(const UpdateDBInstanceSSLResponseBodyData &) = default ;
    UpdateDBInstanceSSLResponseBodyData(UpdateDBInstanceSSLResponseBodyData &&) = default ;
    UpdateDBInstanceSSLResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDBInstanceSSLResponseBodyData() = default ;
    UpdateDBInstanceSSLResponseBodyData& operator=(const UpdateDBInstanceSSLResponseBodyData &) = default ;
    UpdateDBInstanceSSLResponseBodyData& operator=(UpdateDBInstanceSSLResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline UpdateDBInstanceSSLResponseBodyData& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
