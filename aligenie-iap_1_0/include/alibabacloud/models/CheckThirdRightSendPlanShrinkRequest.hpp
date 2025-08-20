// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKTHIRDRIGHTSENDPLANSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKTHIRDRIGHTSENDPLANSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class CheckThirdRightSendPlanShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckThirdRightSendPlanShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizGroup, bizGroup_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfoShrink_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
      DARABONBA_PTR_TO_JSON(SupplierId, supplierId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckThirdRightSendPlanShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizGroup, bizGroup_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfoShrink_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
      DARABONBA_PTR_FROM_JSON(SupplierId, supplierId_);
    };
    CheckThirdRightSendPlanShrinkRequest() = default ;
    CheckThirdRightSendPlanShrinkRequest(const CheckThirdRightSendPlanShrinkRequest &) = default ;
    CheckThirdRightSendPlanShrinkRequest(CheckThirdRightSendPlanShrinkRequest &&) = default ;
    CheckThirdRightSendPlanShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckThirdRightSendPlanShrinkRequest() = default ;
    CheckThirdRightSendPlanShrinkRequest& operator=(const CheckThirdRightSendPlanShrinkRequest &) = default ;
    CheckThirdRightSendPlanShrinkRequest& operator=(CheckThirdRightSendPlanShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizGroup_ != nullptr
        && this->bizType_ != nullptr && this->extendInfoShrink_ != nullptr && this->sn_ != nullptr && this->supplierId_ != nullptr; };
    // bizGroup Field Functions 
    bool hasBizGroup() const { return this->bizGroup_ != nullptr;};
    void deleteBizGroup() { this->bizGroup_ = nullptr;};
    inline string bizGroup() const { DARABONBA_PTR_GET_DEFAULT(bizGroup_, "") };
    inline CheckThirdRightSendPlanShrinkRequest& setBizGroup(string bizGroup) { DARABONBA_PTR_SET_VALUE(bizGroup_, bizGroup) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline CheckThirdRightSendPlanShrinkRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // extendInfoShrink Field Functions 
    bool hasExtendInfoShrink() const { return this->extendInfoShrink_ != nullptr;};
    void deleteExtendInfoShrink() { this->extendInfoShrink_ = nullptr;};
    inline string extendInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(extendInfoShrink_, "") };
    inline CheckThirdRightSendPlanShrinkRequest& setExtendInfoShrink(string extendInfoShrink) { DARABONBA_PTR_SET_VALUE(extendInfoShrink_, extendInfoShrink) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string sn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline CheckThirdRightSendPlanShrinkRequest& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


    // supplierId Field Functions 
    bool hasSupplierId() const { return this->supplierId_ != nullptr;};
    void deleteSupplierId() { this->supplierId_ = nullptr;};
    inline int64_t supplierId() const { DARABONBA_PTR_GET_DEFAULT(supplierId_, 0L) };
    inline CheckThirdRightSendPlanShrinkRequest& setSupplierId(int64_t supplierId) { DARABONBA_PTR_SET_VALUE(supplierId_, supplierId) };


  protected:
    std::shared_ptr<string> bizGroup_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> extendInfoShrink_ = nullptr;
    std::shared_ptr<string> sn_ = nullptr;
    std::shared_ptr<int64_t> supplierId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
