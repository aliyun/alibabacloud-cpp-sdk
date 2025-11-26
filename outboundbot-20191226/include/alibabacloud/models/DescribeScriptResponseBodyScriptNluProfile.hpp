// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCRIPTRESPONSEBODYSCRIPTNLUPROFILE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCRIPTRESPONSEBODYSCRIPTNLUPROFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeScriptResponseBodyScriptNluProfile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScriptResponseBodyScriptNluProfile& obj) { 
      DARABONBA_PTR_TO_JSON(FcFunction, fcFunction_);
      DARABONBA_PTR_TO_JSON(FcHttpTriggerUrl, fcHttpTriggerUrl_);
      DARABONBA_PTR_TO_JSON(FcRegion, fcRegion_);
      DARABONBA_PTR_TO_JSON(SupportBeebotPrompts, supportBeebotPrompts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScriptResponseBodyScriptNluProfile& obj) { 
      DARABONBA_PTR_FROM_JSON(FcFunction, fcFunction_);
      DARABONBA_PTR_FROM_JSON(FcHttpTriggerUrl, fcHttpTriggerUrl_);
      DARABONBA_PTR_FROM_JSON(FcRegion, fcRegion_);
      DARABONBA_PTR_FROM_JSON(SupportBeebotPrompts, supportBeebotPrompts_);
    };
    DescribeScriptResponseBodyScriptNluProfile() = default ;
    DescribeScriptResponseBodyScriptNluProfile(const DescribeScriptResponseBodyScriptNluProfile &) = default ;
    DescribeScriptResponseBodyScriptNluProfile(DescribeScriptResponseBodyScriptNluProfile &&) = default ;
    DescribeScriptResponseBodyScriptNluProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScriptResponseBodyScriptNluProfile() = default ;
    DescribeScriptResponseBodyScriptNluProfile& operator=(const DescribeScriptResponseBodyScriptNluProfile &) = default ;
    DescribeScriptResponseBodyScriptNluProfile& operator=(DescribeScriptResponseBodyScriptNluProfile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fcFunction_ == nullptr
        && return this->fcHttpTriggerUrl_ == nullptr && return this->fcRegion_ == nullptr && return this->supportBeebotPrompts_ == nullptr; };
    // fcFunction Field Functions 
    bool hasFcFunction() const { return this->fcFunction_ != nullptr;};
    void deleteFcFunction() { this->fcFunction_ = nullptr;};
    inline string fcFunction() const { DARABONBA_PTR_GET_DEFAULT(fcFunction_, "") };
    inline DescribeScriptResponseBodyScriptNluProfile& setFcFunction(string fcFunction) { DARABONBA_PTR_SET_VALUE(fcFunction_, fcFunction) };


    // fcHttpTriggerUrl Field Functions 
    bool hasFcHttpTriggerUrl() const { return this->fcHttpTriggerUrl_ != nullptr;};
    void deleteFcHttpTriggerUrl() { this->fcHttpTriggerUrl_ = nullptr;};
    inline string fcHttpTriggerUrl() const { DARABONBA_PTR_GET_DEFAULT(fcHttpTriggerUrl_, "") };
    inline DescribeScriptResponseBodyScriptNluProfile& setFcHttpTriggerUrl(string fcHttpTriggerUrl) { DARABONBA_PTR_SET_VALUE(fcHttpTriggerUrl_, fcHttpTriggerUrl) };


    // fcRegion Field Functions 
    bool hasFcRegion() const { return this->fcRegion_ != nullptr;};
    void deleteFcRegion() { this->fcRegion_ = nullptr;};
    inline string fcRegion() const { DARABONBA_PTR_GET_DEFAULT(fcRegion_, "") };
    inline DescribeScriptResponseBodyScriptNluProfile& setFcRegion(string fcRegion) { DARABONBA_PTR_SET_VALUE(fcRegion_, fcRegion) };


    // supportBeebotPrompts Field Functions 
    bool hasSupportBeebotPrompts() const { return this->supportBeebotPrompts_ != nullptr;};
    void deleteSupportBeebotPrompts() { this->supportBeebotPrompts_ = nullptr;};
    inline bool supportBeebotPrompts() const { DARABONBA_PTR_GET_DEFAULT(supportBeebotPrompts_, false) };
    inline DescribeScriptResponseBodyScriptNluProfile& setSupportBeebotPrompts(bool supportBeebotPrompts) { DARABONBA_PTR_SET_VALUE(supportBeebotPrompts_, supportBeebotPrompts) };


  protected:
    std::shared_ptr<string> fcFunction_ = nullptr;
    std::shared_ptr<string> fcHttpTriggerUrl_ = nullptr;
    std::shared_ptr<string> fcRegion_ = nullptr;
    std::shared_ptr<bool> supportBeebotPrompts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
