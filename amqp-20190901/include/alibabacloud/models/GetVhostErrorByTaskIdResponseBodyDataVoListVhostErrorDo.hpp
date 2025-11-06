// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVHOSTERRORBYTASKIDRESPONSEBODYDATAVOLISTVHOSTERRORDO_HPP_
#define ALIBABACLOUD_MODELS_GETVHOSTERRORBYTASKIDRESPONSEBODYDATAVOLISTVHOSTERRORDO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO() = default ;
    GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO(const GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO &) = default ;
    GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO(GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO &&) = default ;
    GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO() = default ;
    GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO& operator=(const GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO &) = default ;
    GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO& operator=(GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->taskId_ == nullptr && return this->vhostName_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline int32_t errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, 0) };
    inline GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO& setErrorMessage(int32_t errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<int32_t> errorMessage_ = nullptr;
    std::shared_ptr<int64_t> taskId_ = nullptr;
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
