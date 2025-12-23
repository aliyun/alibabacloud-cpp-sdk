// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHEVENTREQUESTUICONFIGS_HPP_
#define ALIBABACLOUD_MODELS_PATCHEVENTREQUESTUICONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class PatchEventRequestUiConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchEventRequestUiConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(uiName, uiName_);
      DARABONBA_PTR_TO_JSON(uiStatus, uiStatus_);
    };
    friend void from_json(const Darabonba::Json& j, PatchEventRequestUiConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(uiName, uiName_);
      DARABONBA_PTR_FROM_JSON(uiStatus, uiStatus_);
    };
    PatchEventRequestUiConfigs() = default ;
    PatchEventRequestUiConfigs(const PatchEventRequestUiConfigs &) = default ;
    PatchEventRequestUiConfigs(PatchEventRequestUiConfigs &&) = default ;
    PatchEventRequestUiConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchEventRequestUiConfigs() = default ;
    PatchEventRequestUiConfigs& operator=(const PatchEventRequestUiConfigs &) = default ;
    PatchEventRequestUiConfigs& operator=(PatchEventRequestUiConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uiName_ == nullptr
        && return this->uiStatus_ == nullptr; };
    // uiName Field Functions 
    bool hasUiName() const { return this->uiName_ != nullptr;};
    void deleteUiName() { this->uiName_ = nullptr;};
    inline string uiName() const { DARABONBA_PTR_GET_DEFAULT(uiName_, "") };
    inline PatchEventRequestUiConfigs& setUiName(string uiName) { DARABONBA_PTR_SET_VALUE(uiName_, uiName) };


    // uiStatus Field Functions 
    bool hasUiStatus() const { return this->uiStatus_ != nullptr;};
    void deleteUiStatus() { this->uiStatus_ = nullptr;};
    inline string uiStatus() const { DARABONBA_PTR_GET_DEFAULT(uiStatus_, "") };
    inline PatchEventRequestUiConfigs& setUiStatus(string uiStatus) { DARABONBA_PTR_SET_VALUE(uiStatus_, uiStatus) };


  protected:
    std::shared_ptr<string> uiName_ = nullptr;
    std::shared_ptr<string> uiStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
