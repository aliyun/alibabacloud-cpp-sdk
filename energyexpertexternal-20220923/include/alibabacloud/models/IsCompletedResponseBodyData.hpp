// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ISCOMPLETEDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ISCOMPLETEDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class IsCompletedResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IsCompletedResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(taskKey, taskKey_);
      DARABONBA_PTR_TO_JSON(taskShortResult, taskShortResult_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, IsCompletedResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(taskKey, taskKey_);
      DARABONBA_PTR_FROM_JSON(taskShortResult, taskShortResult_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
    };
    IsCompletedResponseBodyData() = default ;
    IsCompletedResponseBodyData(const IsCompletedResponseBodyData &) = default ;
    IsCompletedResponseBodyData(IsCompletedResponseBodyData &&) = default ;
    IsCompletedResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IsCompletedResponseBodyData() = default ;
    IsCompletedResponseBodyData& operator=(const IsCompletedResponseBodyData &) = default ;
    IsCompletedResponseBodyData& operator=(IsCompletedResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modifiedTime_ == nullptr
        && return this->taskKey_ == nullptr && return this->taskShortResult_ == nullptr && return this->taskStatus_ == nullptr; };
    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline IsCompletedResponseBodyData& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // taskKey Field Functions 
    bool hasTaskKey() const { return this->taskKey_ != nullptr;};
    void deleteTaskKey() { this->taskKey_ = nullptr;};
    inline string taskKey() const { DARABONBA_PTR_GET_DEFAULT(taskKey_, "") };
    inline IsCompletedResponseBodyData& setTaskKey(string taskKey) { DARABONBA_PTR_SET_VALUE(taskKey_, taskKey) };


    // taskShortResult Field Functions 
    bool hasTaskShortResult() const { return this->taskShortResult_ != nullptr;};
    void deleteTaskShortResult() { this->taskShortResult_ = nullptr;};
    inline string taskShortResult() const { DARABONBA_PTR_GET_DEFAULT(taskShortResult_, "") };
    inline IsCompletedResponseBodyData& setTaskShortResult(string taskShortResult) { DARABONBA_PTR_SET_VALUE(taskShortResult_, taskShortResult) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline IsCompletedResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    // Modified time in milliseconds, e.g. 1711438780000.
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    // The unique key of this generation task.
    std::shared_ptr<string> taskKey_ = nullptr;
    // Unused temporarily.
    std::shared_ptr<string> taskShortResult_ = nullptr;
    // The status of the report generation task. The possible values are `running`, `success`, and `error`, which mean generating, generating succeeded, and generating failed, respectively. If you encounter a result generation failure, check the model, correct the model, and then generate the result again.
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
