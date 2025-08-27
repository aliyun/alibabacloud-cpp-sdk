// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMONAPPLYSYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMMONAPPLYSYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CommonApplySyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommonApplySyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(biz_category, bizCategory_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(thirdparty_flow_id, thirdpartyFlowId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CommonApplySyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(biz_category, bizCategory_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(thirdparty_flow_id, thirdpartyFlowId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    CommonApplySyncRequest() = default ;
    CommonApplySyncRequest(const CommonApplySyncRequest &) = default ;
    CommonApplySyncRequest(CommonApplySyncRequest &&) = default ;
    CommonApplySyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommonApplySyncRequest() = default ;
    CommonApplySyncRequest& operator=(const CommonApplySyncRequest &) = default ;
    CommonApplySyncRequest& operator=(CommonApplySyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->bizCategory_ != nullptr && this->remark_ != nullptr && this->status_ != nullptr && this->thirdpartyFlowId_ != nullptr && this->userId_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline int64_t applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
    inline CommonApplySyncRequest& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // bizCategory Field Functions 
    bool hasBizCategory() const { return this->bizCategory_ != nullptr;};
    void deleteBizCategory() { this->bizCategory_ = nullptr;};
    inline int32_t bizCategory() const { DARABONBA_PTR_GET_DEFAULT(bizCategory_, 0) };
    inline CommonApplySyncRequest& setBizCategory(int32_t bizCategory) { DARABONBA_PTR_SET_VALUE(bizCategory_, bizCategory) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CommonApplySyncRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CommonApplySyncRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thirdpartyFlowId Field Functions 
    bool hasThirdpartyFlowId() const { return this->thirdpartyFlowId_ != nullptr;};
    void deleteThirdpartyFlowId() { this->thirdpartyFlowId_ = nullptr;};
    inline string thirdpartyFlowId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyFlowId_, "") };
    inline CommonApplySyncRequest& setThirdpartyFlowId(string thirdpartyFlowId) { DARABONBA_PTR_SET_VALUE(thirdpartyFlowId_, thirdpartyFlowId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CommonApplySyncRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> applyId_ = nullptr;
    std::shared_ptr<int32_t> bizCategory_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> thirdpartyFlowId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
