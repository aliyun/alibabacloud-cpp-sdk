// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SLOTSTATUS_HPP_
#define ALIBABACLOUD_MODELS_SLOTSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SlotStatusDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{
namespace Models
{
  class SlotStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SlotStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
    };
    friend void from_json(const Darabonba::Json& j, SlotStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
    };
    SlotStatus() = default ;
    SlotStatus(const SlotStatus &) = default ;
    SlotStatus(SlotStatus &&) = default ;
    SlotStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SlotStatus() = default ;
    SlotStatus& operator=(const SlotStatus &) = default ;
    SlotStatus& operator=(SlotStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->detail_ == nullptr && this->message_ == nullptr && this->phase_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SlotStatus& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const SlotStatusDetail & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, SlotStatusDetail) };
    inline SlotStatusDetail getDetail() { DARABONBA_PTR_GET(detail_, SlotStatusDetail) };
    inline SlotStatus& setDetail(const SlotStatusDetail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline SlotStatus& setDetail(SlotStatusDetail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SlotStatus& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline SlotStatus& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<SlotStatusDetail> detail_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> phase_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801
#endif
