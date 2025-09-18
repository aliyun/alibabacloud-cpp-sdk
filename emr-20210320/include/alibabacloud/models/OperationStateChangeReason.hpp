// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATIONSTATECHANGEREASON_HPP_
#define ALIBABACLOUD_MODELS_OPERATIONSTATECHANGEREASON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class OperationStateChangeReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperationStateChangeReason& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, OperationStateChangeReason& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    OperationStateChangeReason() = default ;
    OperationStateChangeReason(const OperationStateChangeReason &) = default ;
    OperationStateChangeReason(OperationStateChangeReason &&) = default ;
    OperationStateChangeReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperationStateChangeReason() = default ;
    OperationStateChangeReason& operator=(const OperationStateChangeReason &) = default ;
    OperationStateChangeReason& operator=(OperationStateChangeReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline OperationStateChangeReason& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline OperationStateChangeReason& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // 状态码。
    std::shared_ptr<string> code_ = nullptr;
    // 状态变化信息。
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
