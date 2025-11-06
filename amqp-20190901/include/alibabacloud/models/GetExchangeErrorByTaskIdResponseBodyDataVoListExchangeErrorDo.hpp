// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXCHANGEERRORBYTASKIDRESPONSEBODYDATAVOLISTEXCHANGEERRORDO_HPP_
#define ALIBABACLOUD_MODELS_GETEXCHANGEERRORBYTASKIDRESPONSEBODYDATAVOLISTEXCHANGEERRORDO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ExchangeName, exchangeName_);
      DARABONBA_PTR_TO_JSON(ExchangeType, exchangeType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ExchangeName, exchangeName_);
      DARABONBA_PTR_FROM_JSON(ExchangeType, exchangeType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO() = default ;
    GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO(const GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO &) = default ;
    GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO(GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO &&) = default ;
    GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO() = default ;
    GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO& operator=(const GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO &) = default ;
    GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO& operator=(GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->exchangeName_ == nullptr && return this->exchangeType_ == nullptr && return this->taskId_ == nullptr && return this->vhostName_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline int32_t errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, 0) };
    inline GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO& setErrorMessage(int32_t errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // exchangeName Field Functions 
    bool hasExchangeName() const { return this->exchangeName_ != nullptr;};
    void deleteExchangeName() { this->exchangeName_ = nullptr;};
    inline string exchangeName() const { DARABONBA_PTR_GET_DEFAULT(exchangeName_, "") };
    inline GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO& setExchangeName(string exchangeName) { DARABONBA_PTR_SET_VALUE(exchangeName_, exchangeName) };


    // exchangeType Field Functions 
    bool hasExchangeType() const { return this->exchangeType_ != nullptr;};
    void deleteExchangeType() { this->exchangeType_ = nullptr;};
    inline string exchangeType() const { DARABONBA_PTR_GET_DEFAULT(exchangeType_, "") };
    inline GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO& setExchangeType(string exchangeType) { DARABONBA_PTR_SET_VALUE(exchangeType_, exchangeType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<int32_t> errorMessage_ = nullptr;
    std::shared_ptr<string> exchangeName_ = nullptr;
    std::shared_ptr<string> exchangeType_ = nullptr;
    std::shared_ptr<int64_t> taskId_ = nullptr;
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
