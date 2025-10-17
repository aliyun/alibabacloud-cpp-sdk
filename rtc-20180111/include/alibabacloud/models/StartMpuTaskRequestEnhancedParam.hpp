// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTMPUTASKREQUESTENHANCEDPARAM_HPP_
#define ALIBABACLOUD_MODELS_STARTMPUTASKREQUESTENHANCEDPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartMPUTaskRequestEnhancedParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartMPUTaskRequestEnhancedParam& obj) { 
      DARABONBA_PTR_TO_JSON(EnablePortraitSegmentation, enablePortraitSegmentation_);
    };
    friend void from_json(const Darabonba::Json& j, StartMPUTaskRequestEnhancedParam& obj) { 
      DARABONBA_PTR_FROM_JSON(EnablePortraitSegmentation, enablePortraitSegmentation_);
    };
    StartMPUTaskRequestEnhancedParam() = default ;
    StartMPUTaskRequestEnhancedParam(const StartMPUTaskRequestEnhancedParam &) = default ;
    StartMPUTaskRequestEnhancedParam(StartMPUTaskRequestEnhancedParam &&) = default ;
    StartMPUTaskRequestEnhancedParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartMPUTaskRequestEnhancedParam() = default ;
    StartMPUTaskRequestEnhancedParam& operator=(const StartMPUTaskRequestEnhancedParam &) = default ;
    StartMPUTaskRequestEnhancedParam& operator=(StartMPUTaskRequestEnhancedParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enablePortraitSegmentation_ == nullptr; };
    // enablePortraitSegmentation Field Functions 
    bool hasEnablePortraitSegmentation() const { return this->enablePortraitSegmentation_ != nullptr;};
    void deleteEnablePortraitSegmentation() { this->enablePortraitSegmentation_ = nullptr;};
    inline bool enablePortraitSegmentation() const { DARABONBA_PTR_GET_DEFAULT(enablePortraitSegmentation_, false) };
    inline StartMPUTaskRequestEnhancedParam& setEnablePortraitSegmentation(bool enablePortraitSegmentation) { DARABONBA_PTR_SET_VALUE(enablePortraitSegmentation_, enablePortraitSegmentation) };


  protected:
    std::shared_ptr<bool> enablePortraitSegmentation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
