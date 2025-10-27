// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUESTPOLICYVIDEOPOLICY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUESTPOLICYVIDEOPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyBrowserInstanceGroupRequestPolicyVideoPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBrowserInstanceGroupRequestPolicyVideoPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(FrameRate, frameRate_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBrowserInstanceGroupRequestPolicyVideoPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(FrameRate, frameRate_);
    };
    ModifyBrowserInstanceGroupRequestPolicyVideoPolicy() = default ;
    ModifyBrowserInstanceGroupRequestPolicyVideoPolicy(const ModifyBrowserInstanceGroupRequestPolicyVideoPolicy &) = default ;
    ModifyBrowserInstanceGroupRequestPolicyVideoPolicy(ModifyBrowserInstanceGroupRequestPolicyVideoPolicy &&) = default ;
    ModifyBrowserInstanceGroupRequestPolicyVideoPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBrowserInstanceGroupRequestPolicyVideoPolicy() = default ;
    ModifyBrowserInstanceGroupRequestPolicyVideoPolicy& operator=(const ModifyBrowserInstanceGroupRequestPolicyVideoPolicy &) = default ;
    ModifyBrowserInstanceGroupRequestPolicyVideoPolicy& operator=(ModifyBrowserInstanceGroupRequestPolicyVideoPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->frameRate_ == nullptr; };
    // frameRate Field Functions 
    bool hasFrameRate() const { return this->frameRate_ != nullptr;};
    void deleteFrameRate() { this->frameRate_ = nullptr;};
    inline int32_t frameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, 0) };
    inline ModifyBrowserInstanceGroupRequestPolicyVideoPolicy& setFrameRate(int32_t frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


  protected:
    std::shared_ptr<int32_t> frameRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
