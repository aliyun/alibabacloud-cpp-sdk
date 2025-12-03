// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HARMONYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_HARMONYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HarmonyBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class HarmonyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HarmonyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(displayType, displayType_);
      DARABONBA_ANY_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(harmonyBody, harmonyBody_);
    };
    friend void from_json(const Darabonba::Json& j, HarmonyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(displayType, displayType_);
      DARABONBA_ANY_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(harmonyBody, harmonyBody_);
    };
    HarmonyPayload() = default ;
    HarmonyPayload(const HarmonyPayload &) = default ;
    HarmonyPayload(HarmonyPayload &&) = default ;
    HarmonyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HarmonyPayload() = default ;
    HarmonyPayload& operator=(const HarmonyPayload &) = default ;
    HarmonyPayload& operator=(HarmonyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayType_ == nullptr
        && return this->extra_ == nullptr && return this->harmonyBody_ == nullptr; };
    // displayType Field Functions 
    bool hasDisplayType() const { return this->displayType_ != nullptr;};
    void deleteDisplayType() { this->displayType_ = nullptr;};
    inline string displayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
    inline HarmonyPayload& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline     const Darabonba::Json & extra() const { DARABONBA_GET(extra_) };
    Darabonba::Json & extra() { DARABONBA_GET(extra_) };
    inline HarmonyPayload& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
    inline HarmonyPayload& setExtra(Darabonba::Json & extra) { DARABONBA_SET_RVALUE(extra_, extra) };


    // harmonyBody Field Functions 
    bool hasHarmonyBody() const { return this->harmonyBody_ != nullptr;};
    void deleteHarmonyBody() { this->harmonyBody_ = nullptr;};
    inline const HarmonyBody & harmonyBody() const { DARABONBA_PTR_GET_CONST(harmonyBody_, HarmonyBody) };
    inline HarmonyBody harmonyBody() { DARABONBA_PTR_GET(harmonyBody_, HarmonyBody) };
    inline HarmonyPayload& setHarmonyBody(const HarmonyBody & harmonyBody) { DARABONBA_PTR_SET_VALUE(harmonyBody_, harmonyBody) };
    inline HarmonyPayload& setHarmonyBody(HarmonyBody && harmonyBody) { DARABONBA_PTR_SET_RVALUE(harmonyBody_, harmonyBody) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> displayType_ = nullptr;
    Darabonba::Json extra_ = nullptr;
    std::shared_ptr<HarmonyBody> harmonyBody_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
