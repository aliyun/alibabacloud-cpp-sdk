// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMSMARTCALLENCRYPTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LLMSMARTCALLENCRYPTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class LlmSmartCallEncryptResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LlmSmartCallEncryptResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallId, callId_);
    };
    friend void from_json(const Darabonba::Json& j, LlmSmartCallEncryptResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
    };
    LlmSmartCallEncryptResponseBodyData() = default ;
    LlmSmartCallEncryptResponseBodyData(const LlmSmartCallEncryptResponseBodyData &) = default ;
    LlmSmartCallEncryptResponseBodyData(LlmSmartCallEncryptResponseBodyData &&) = default ;
    LlmSmartCallEncryptResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LlmSmartCallEncryptResponseBodyData() = default ;
    LlmSmartCallEncryptResponseBodyData& operator=(const LlmSmartCallEncryptResponseBodyData &) = default ;
    LlmSmartCallEncryptResponseBodyData& operator=(LlmSmartCallEncryptResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callId_ == nullptr; };
    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string callId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline LlmSmartCallEncryptResponseBodyData& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


  protected:
    std::shared_ptr<string> callId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
