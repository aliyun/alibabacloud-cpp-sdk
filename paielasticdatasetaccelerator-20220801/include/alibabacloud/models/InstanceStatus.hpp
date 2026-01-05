// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCESTATUS_HPP_
#define ALIBABACLOUD_MODELS_INSTANCESTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{
namespace Models
{
  class InstanceStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstanceStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(SlotNum, slotNum_);
      DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, InstanceStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(SlotNum, slotNum_);
      DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
    };
    InstanceStatus() = default ;
    InstanceStatus(const InstanceStatus &) = default ;
    InstanceStatus(InstanceStatus &&) = default ;
    InstanceStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstanceStatus() = default ;
    InstanceStatus& operator=(const InstanceStatus &) = default ;
    InstanceStatus& operator=(InstanceStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->phase_ == nullptr && this->slotNum_ == nullptr && this->usedCapacity_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InstanceStatus& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InstanceStatus& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline InstanceStatus& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // slotNum Field Functions 
    bool hasSlotNum() const { return this->slotNum_ != nullptr;};
    void deleteSlotNum() { this->slotNum_ = nullptr;};
    inline int32_t getSlotNum() const { DARABONBA_PTR_GET_DEFAULT(slotNum_, 0) };
    inline InstanceStatus& setSlotNum(int32_t slotNum) { DARABONBA_PTR_SET_VALUE(slotNum_, slotNum) };


    // usedCapacity Field Functions 
    bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
    void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
    inline string getUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, "") };
    inline InstanceStatus& setUsedCapacity(string usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> phase_ {};
    shared_ptr<int32_t> slotNum_ {};
    shared_ptr<string> usedCapacity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801
#endif
