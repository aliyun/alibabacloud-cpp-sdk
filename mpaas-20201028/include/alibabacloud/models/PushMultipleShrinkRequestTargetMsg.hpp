// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHMULTIPLESHRINKREQUESTTARGETMSG_HPP_
#define ALIBABACLOUD_MODELS_PUSHMULTIPLESHRINKREQUESTTARGETMSG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class PushMultipleShrinkRequestTargetMsg : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushMultipleShrinkRequestTargetMsg& obj) { 
      DARABONBA_PTR_TO_JSON(ExtendedParams, extendedParams_);
      DARABONBA_PTR_TO_JSON(MsgKey, msgKey_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TemplateKeyValue, templateKeyValue_);
    };
    friend void from_json(const Darabonba::Json& j, PushMultipleShrinkRequestTargetMsg& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtendedParams, extendedParams_);
      DARABONBA_PTR_FROM_JSON(MsgKey, msgKey_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TemplateKeyValue, templateKeyValue_);
    };
    PushMultipleShrinkRequestTargetMsg() = default ;
    PushMultipleShrinkRequestTargetMsg(const PushMultipleShrinkRequestTargetMsg &) = default ;
    PushMultipleShrinkRequestTargetMsg(PushMultipleShrinkRequestTargetMsg &&) = default ;
    PushMultipleShrinkRequestTargetMsg(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushMultipleShrinkRequestTargetMsg() = default ;
    PushMultipleShrinkRequestTargetMsg& operator=(const PushMultipleShrinkRequestTargetMsg &) = default ;
    PushMultipleShrinkRequestTargetMsg& operator=(PushMultipleShrinkRequestTargetMsg &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extendedParams_ == nullptr
        && return this->msgKey_ == nullptr && return this->target_ == nullptr && return this->templateKeyValue_ == nullptr; };
    // extendedParams Field Functions 
    bool hasExtendedParams() const { return this->extendedParams_ != nullptr;};
    void deleteExtendedParams() { this->extendedParams_ = nullptr;};
    inline string extendedParams() const { DARABONBA_PTR_GET_DEFAULT(extendedParams_, "") };
    inline PushMultipleShrinkRequestTargetMsg& setExtendedParams(string extendedParams) { DARABONBA_PTR_SET_VALUE(extendedParams_, extendedParams) };


    // msgKey Field Functions 
    bool hasMsgKey() const { return this->msgKey_ != nullptr;};
    void deleteMsgKey() { this->msgKey_ = nullptr;};
    inline string msgKey() const { DARABONBA_PTR_GET_DEFAULT(msgKey_, "") };
    inline PushMultipleShrinkRequestTargetMsg& setMsgKey(string msgKey) { DARABONBA_PTR_SET_VALUE(msgKey_, msgKey) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline PushMultipleShrinkRequestTargetMsg& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // templateKeyValue Field Functions 
    bool hasTemplateKeyValue() const { return this->templateKeyValue_ != nullptr;};
    void deleteTemplateKeyValue() { this->templateKeyValue_ = nullptr;};
    inline string templateKeyValue() const { DARABONBA_PTR_GET_DEFAULT(templateKeyValue_, "") };
    inline PushMultipleShrinkRequestTargetMsg& setTemplateKeyValue(string templateKeyValue) { DARABONBA_PTR_SET_VALUE(templateKeyValue_, templateKeyValue) };


  protected:
    std::shared_ptr<string> extendedParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> msgKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> target_ = nullptr;
    std::shared_ptr<string> templateKeyValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
