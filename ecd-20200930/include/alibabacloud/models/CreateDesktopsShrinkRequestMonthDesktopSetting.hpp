// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDESKTOPSSHRINKREQUESTMONTHDESKTOPSETTING_HPP_
#define ALIBABACLOUD_MODELS_CREATEDESKTOPSSHRINKREQUESTMONTHDESKTOPSETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateDesktopsShrinkRequestMonthDesktopSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDesktopsShrinkRequestMonthDesktopSetting& obj) { 
      DARABONBA_PTR_TO_JSON(BuyerId, buyerId_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(UseDuration, useDuration_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDesktopsShrinkRequestMonthDesktopSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(BuyerId, buyerId_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(UseDuration, useDuration_);
    };
    CreateDesktopsShrinkRequestMonthDesktopSetting() = default ;
    CreateDesktopsShrinkRequestMonthDesktopSetting(const CreateDesktopsShrinkRequestMonthDesktopSetting &) = default ;
    CreateDesktopsShrinkRequestMonthDesktopSetting(CreateDesktopsShrinkRequestMonthDesktopSetting &&) = default ;
    CreateDesktopsShrinkRequestMonthDesktopSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDesktopsShrinkRequestMonthDesktopSetting() = default ;
    CreateDesktopsShrinkRequestMonthDesktopSetting& operator=(const CreateDesktopsShrinkRequestMonthDesktopSetting &) = default ;
    CreateDesktopsShrinkRequestMonthDesktopSetting& operator=(CreateDesktopsShrinkRequestMonthDesktopSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buyerId_ == nullptr
        && return this->desktopId_ == nullptr && return this->useDuration_ == nullptr; };
    // buyerId Field Functions 
    bool hasBuyerId() const { return this->buyerId_ != nullptr;};
    void deleteBuyerId() { this->buyerId_ = nullptr;};
    inline int64_t buyerId() const { DARABONBA_PTR_GET_DEFAULT(buyerId_, 0L) };
    inline CreateDesktopsShrinkRequestMonthDesktopSetting& setBuyerId(int64_t buyerId) { DARABONBA_PTR_SET_VALUE(buyerId_, buyerId) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline CreateDesktopsShrinkRequestMonthDesktopSetting& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // useDuration Field Functions 
    bool hasUseDuration() const { return this->useDuration_ != nullptr;};
    void deleteUseDuration() { this->useDuration_ = nullptr;};
    inline int32_t useDuration() const { DARABONBA_PTR_GET_DEFAULT(useDuration_, 0) };
    inline CreateDesktopsShrinkRequestMonthDesktopSetting& setUseDuration(int32_t useDuration) { DARABONBA_PTR_SET_VALUE(useDuration_, useDuration) };


  protected:
    // > This parameter is not publicly available.
    std::shared_ptr<int64_t> buyerId_ = nullptr;
    // > This parameter is not publicly available.
    std::shared_ptr<string> desktopId_ = nullptr;
    // > This parameter is not publicly available.
    std::shared_ptr<int32_t> useDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
