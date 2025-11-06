// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBINDINGERRORBYTASKIDRESPONSEBODYDATAVOLISTBINDINGERRORDO_HPP_
#define ALIBABACLOUD_MODELS_GETBINDINGERRORBYTASKIDRESPONSEBODYDATAVOLISTBINDINGERRORDO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO& obj) { 
      DARABONBA_PTR_TO_JSON(Destination, destination_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RoutingKey, routingKey_);
      DARABONBA_PTR_TO_JSON(Src, src_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO& obj) { 
      DARABONBA_PTR_FROM_JSON(Destination, destination_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RoutingKey, routingKey_);
      DARABONBA_PTR_FROM_JSON(Src, src_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO() = default ;
    GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO(const GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO &) = default ;
    GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO(GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO &&) = default ;
    GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO() = default ;
    GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO& operator=(const GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO &) = default ;
    GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO& operator=(GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destination_ == nullptr
        && return this->destinationType_ == nullptr && return this->errorMessage_ == nullptr && return this->routingKey_ == nullptr && return this->src_ == nullptr && return this->taskId_ == nullptr
        && return this->vhostName_ == nullptr; };
    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string destination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string destinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // routingKey Field Functions 
    bool hasRoutingKey() const { return this->routingKey_ != nullptr;};
    void deleteRoutingKey() { this->routingKey_ = nullptr;};
    inline string routingKey() const { DARABONBA_PTR_GET_DEFAULT(routingKey_, "") };
    inline GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO& setRoutingKey(string routingKey) { DARABONBA_PTR_SET_VALUE(routingKey_, routingKey) };


    // src Field Functions 
    bool hasSrc() const { return this->src_ != nullptr;};
    void deleteSrc() { this->src_ = nullptr;};
    inline string src() const { DARABONBA_PTR_GET_DEFAULT(src_, "") };
    inline GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO& setSrc(string src) { DARABONBA_PTR_SET_VALUE(src_, src) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<string> destination_ = nullptr;
    std::shared_ptr<string> destinationType_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> routingKey_ = nullptr;
    std::shared_ptr<string> src_ = nullptr;
    std::shared_ptr<int64_t> taskId_ = nullptr;
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
