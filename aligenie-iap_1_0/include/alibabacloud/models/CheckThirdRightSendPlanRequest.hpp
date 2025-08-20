// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKTHIRDRIGHTSENDPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKTHIRDRIGHTSENDPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class CheckThirdRightSendPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckThirdRightSendPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizGroup, bizGroup_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_ANY_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
      DARABONBA_PTR_TO_JSON(SupplierId, supplierId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckThirdRightSendPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizGroup, bizGroup_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_ANY_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
      DARABONBA_PTR_FROM_JSON(SupplierId, supplierId_);
    };
    CheckThirdRightSendPlanRequest() = default ;
    CheckThirdRightSendPlanRequest(const CheckThirdRightSendPlanRequest &) = default ;
    CheckThirdRightSendPlanRequest(CheckThirdRightSendPlanRequest &&) = default ;
    CheckThirdRightSendPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckThirdRightSendPlanRequest() = default ;
    CheckThirdRightSendPlanRequest& operator=(const CheckThirdRightSendPlanRequest &) = default ;
    CheckThirdRightSendPlanRequest& operator=(CheckThirdRightSendPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizGroup_ != nullptr
        && this->bizType_ != nullptr && this->extendInfo_ != nullptr && this->sn_ != nullptr && this->supplierId_ != nullptr; };
    // bizGroup Field Functions 
    bool hasBizGroup() const { return this->bizGroup_ != nullptr;};
    void deleteBizGroup() { this->bizGroup_ = nullptr;};
    inline string bizGroup() const { DARABONBA_PTR_GET_DEFAULT(bizGroup_, "") };
    inline CheckThirdRightSendPlanRequest& setBizGroup(string bizGroup) { DARABONBA_PTR_SET_VALUE(bizGroup_, bizGroup) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline CheckThirdRightSendPlanRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline     const Darabonba::Json & extendInfo() const { DARABONBA_GET(extendInfo_) };
    Darabonba::Json & extendInfo() { DARABONBA_GET(extendInfo_) };
    inline CheckThirdRightSendPlanRequest& setExtendInfo(const Darabonba::Json & extendInfo) { DARABONBA_SET_VALUE(extendInfo_, extendInfo) };
    inline CheckThirdRightSendPlanRequest& setExtendInfo(Darabonba::Json & extendInfo) { DARABONBA_SET_RVALUE(extendInfo_, extendInfo) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string sn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline CheckThirdRightSendPlanRequest& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


    // supplierId Field Functions 
    bool hasSupplierId() const { return this->supplierId_ != nullptr;};
    void deleteSupplierId() { this->supplierId_ = nullptr;};
    inline int64_t supplierId() const { DARABONBA_PTR_GET_DEFAULT(supplierId_, 0L) };
    inline CheckThirdRightSendPlanRequest& setSupplierId(int64_t supplierId) { DARABONBA_PTR_SET_VALUE(supplierId_, supplierId) };


  protected:
    std::shared_ptr<string> bizGroup_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    Darabonba::Json extendInfo_ = nullptr;
    std::shared_ptr<string> sn_ = nullptr;
    std::shared_ptr<int64_t> supplierId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
