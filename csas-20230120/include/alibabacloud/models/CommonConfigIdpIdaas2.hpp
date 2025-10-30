// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMONCONFIGIDPIDAAS2_HPP_
#define ALIBABACLOUD_MODELS_COMMONCONFIGIDPIDAAS2_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CommonConfigIdpIdaas2 : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommonConfigIdpIdaas2& obj) { 
      DARABONBA_PTR_TO_JSON(EventCallbackBase, eventCallbackBase_);
      DARABONBA_PTR_TO_JSON(EventLabel, eventLabel_);
    };
    friend void from_json(const Darabonba::Json& j, CommonConfigIdpIdaas2& obj) { 
      DARABONBA_PTR_FROM_JSON(EventCallbackBase, eventCallbackBase_);
      DARABONBA_PTR_FROM_JSON(EventLabel, eventLabel_);
    };
    CommonConfigIdpIdaas2() = default ;
    CommonConfigIdpIdaas2(const CommonConfigIdpIdaas2 &) = default ;
    CommonConfigIdpIdaas2(CommonConfigIdpIdaas2 &&) = default ;
    CommonConfigIdpIdaas2(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommonConfigIdpIdaas2() = default ;
    CommonConfigIdpIdaas2& operator=(const CommonConfigIdpIdaas2 &) = default ;
    CommonConfigIdpIdaas2& operator=(CommonConfigIdpIdaas2 &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventCallbackBase_ == nullptr
        && return this->eventLabel_ == nullptr; };
    // eventCallbackBase Field Functions 
    bool hasEventCallbackBase() const { return this->eventCallbackBase_ != nullptr;};
    void deleteEventCallbackBase() { this->eventCallbackBase_ = nullptr;};
    inline string eventCallbackBase() const { DARABONBA_PTR_GET_DEFAULT(eventCallbackBase_, "") };
    inline CommonConfigIdpIdaas2& setEventCallbackBase(string eventCallbackBase) { DARABONBA_PTR_SET_VALUE(eventCallbackBase_, eventCallbackBase) };


    // eventLabel Field Functions 
    bool hasEventLabel() const { return this->eventLabel_ != nullptr;};
    void deleteEventLabel() { this->eventLabel_ = nullptr;};
    inline string eventLabel() const { DARABONBA_PTR_GET_DEFAULT(eventLabel_, "") };
    inline CommonConfigIdpIdaas2& setEventLabel(string eventLabel) { DARABONBA_PTR_SET_VALUE(eventLabel_, eventLabel) };


  protected:
    std::shared_ptr<string> eventCallbackBase_ = nullptr;
    std::shared_ptr<string> eventLabel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
