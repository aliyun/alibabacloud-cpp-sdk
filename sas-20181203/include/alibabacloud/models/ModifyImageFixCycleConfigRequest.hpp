// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYIMAGEFIXCYCLECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYIMAGEFIXCYCLECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyImageFixCycleConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyImageFixCycleConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageFixCycle, imageFixCycle_);
      DARABONBA_PTR_TO_JSON(ImageFixSwitch, imageFixSwitch_);
      DARABONBA_PTR_TO_JSON(ImageFixTarget, imageFixTarget_);
      DARABONBA_PTR_TO_JSON(ImageTimeRange, imageTimeRange_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyImageFixCycleConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageFixCycle, imageFixCycle_);
      DARABONBA_PTR_FROM_JSON(ImageFixSwitch, imageFixSwitch_);
      DARABONBA_PTR_FROM_JSON(ImageFixTarget, imageFixTarget_);
      DARABONBA_PTR_FROM_JSON(ImageTimeRange, imageTimeRange_);
    };
    ModifyImageFixCycleConfigRequest() = default ;
    ModifyImageFixCycleConfigRequest(const ModifyImageFixCycleConfigRequest &) = default ;
    ModifyImageFixCycleConfigRequest(ModifyImageFixCycleConfigRequest &&) = default ;
    ModifyImageFixCycleConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyImageFixCycleConfigRequest() = default ;
    ModifyImageFixCycleConfigRequest& operator=(const ModifyImageFixCycleConfigRequest &) = default ;
    ModifyImageFixCycleConfigRequest& operator=(ModifyImageFixCycleConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageFixCycle_ != nullptr
        && this->imageFixSwitch_ != nullptr && this->imageFixTarget_ != nullptr && this->imageTimeRange_ != nullptr; };
    // imageFixCycle Field Functions 
    bool hasImageFixCycle() const { return this->imageFixCycle_ != nullptr;};
    void deleteImageFixCycle() { this->imageFixCycle_ = nullptr;};
    inline int32_t imageFixCycle() const { DARABONBA_PTR_GET_DEFAULT(imageFixCycle_, 0) };
    inline ModifyImageFixCycleConfigRequest& setImageFixCycle(int32_t imageFixCycle) { DARABONBA_PTR_SET_VALUE(imageFixCycle_, imageFixCycle) };


    // imageFixSwitch Field Functions 
    bool hasImageFixSwitch() const { return this->imageFixSwitch_ != nullptr;};
    void deleteImageFixSwitch() { this->imageFixSwitch_ = nullptr;};
    inline string imageFixSwitch() const { DARABONBA_PTR_GET_DEFAULT(imageFixSwitch_, "") };
    inline ModifyImageFixCycleConfigRequest& setImageFixSwitch(string imageFixSwitch) { DARABONBA_PTR_SET_VALUE(imageFixSwitch_, imageFixSwitch) };


    // imageFixTarget Field Functions 
    bool hasImageFixTarget() const { return this->imageFixTarget_ != nullptr;};
    void deleteImageFixTarget() { this->imageFixTarget_ = nullptr;};
    inline string imageFixTarget() const { DARABONBA_PTR_GET_DEFAULT(imageFixTarget_, "") };
    inline ModifyImageFixCycleConfigRequest& setImageFixTarget(string imageFixTarget) { DARABONBA_PTR_SET_VALUE(imageFixTarget_, imageFixTarget) };


    // imageTimeRange Field Functions 
    bool hasImageTimeRange() const { return this->imageTimeRange_ != nullptr;};
    void deleteImageTimeRange() { this->imageTimeRange_ = nullptr;};
    inline int32_t imageTimeRange() const { DARABONBA_PTR_GET_DEFAULT(imageTimeRange_, 0) };
    inline ModifyImageFixCycleConfigRequest& setImageTimeRange(int32_t imageTimeRange) { DARABONBA_PTR_SET_VALUE(imageTimeRange_, imageTimeRange) };


  protected:
    // The cycle of the scheduled fix. Unit: day.
    std::shared_ptr<int32_t> imageFixCycle_ = nullptr;
    // Specifies whether to enable the schedule image fix.
    // 
    // *   **on**: enable
    // *   **off**: disable
    std::shared_ptr<string> imageFixSwitch_ = nullptr;
    // The range of the scheduled fix. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **type**: The type of the image. The value is fixed to repo.
    // *   **target**: The content of the image. The value is in the format of Namespace/Image repository.
    std::shared_ptr<string> imageFixTarget_ = nullptr;
    // The time range during which the image was modified. Unit: day.
    std::shared_ptr<int32_t> imageTimeRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
