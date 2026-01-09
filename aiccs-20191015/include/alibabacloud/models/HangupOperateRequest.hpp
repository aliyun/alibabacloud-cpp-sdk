// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HANGUPOPERATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HANGUPOPERATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class HangupOperateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HangupOperateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(ImmediateHangup, immediateHangup_);
    };
    friend void from_json(const Darabonba::Json& j, HangupOperateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(ImmediateHangup, immediateHangup_);
    };
    HangupOperateRequest() = default ;
    HangupOperateRequest(const HangupOperateRequest &) = default ;
    HangupOperateRequest(HangupOperateRequest &&) = default ;
    HangupOperateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HangupOperateRequest() = default ;
    HangupOperateRequest& operator=(const HangupOperateRequest &) = default ;
    HangupOperateRequest& operator=(HangupOperateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callId_ == nullptr
        && this->immediateHangup_ == nullptr; };
    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline HangupOperateRequest& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // immediateHangup Field Functions 
    bool hasImmediateHangup() const { return this->immediateHangup_ != nullptr;};
    void deleteImmediateHangup() { this->immediateHangup_ = nullptr;};
    inline bool getImmediateHangup() const { DARABONBA_PTR_GET_DEFAULT(immediateHangup_, false) };
    inline HangupOperateRequest& setImmediateHangup(bool immediateHangup) { DARABONBA_PTR_SET_VALUE(immediateHangup_, immediateHangup) };


  protected:
    // This parameter is required.
    shared_ptr<string> callId_ {};
    shared_ptr<bool> immediateHangup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
