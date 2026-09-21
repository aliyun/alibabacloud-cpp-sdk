// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETANDROIDINSTANCESINGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETANDROIDINSTANCESINGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ResetAndroidInstancesInGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetAndroidInstancesInGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(IgnoreParamValidation, ignoreParamValidation_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(SaleMode, saleMode_);
      DARABONBA_PTR_TO_JSON(SettingResetType, settingResetType_);
      DARABONBA_PTR_TO_JSON(TargetDataDiskSize, targetDataDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, ResetAndroidInstancesInGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(IgnoreParamValidation, ignoreParamValidation_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(SaleMode, saleMode_);
      DARABONBA_PTR_FROM_JSON(SettingResetType, settingResetType_);
      DARABONBA_PTR_FROM_JSON(TargetDataDiskSize, targetDataDiskSize_);
    };
    ResetAndroidInstancesInGroupRequest() = default ;
    ResetAndroidInstancesInGroupRequest(const ResetAndroidInstancesInGroupRequest &) = default ;
    ResetAndroidInstancesInGroupRequest(ResetAndroidInstancesInGroupRequest &&) = default ;
    ResetAndroidInstancesInGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetAndroidInstancesInGroupRequest() = default ;
    ResetAndroidInstancesInGroupRequest& operator=(const ResetAndroidInstancesInGroupRequest &) = default ;
    ResetAndroidInstancesInGroupRequest& operator=(ResetAndroidInstancesInGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceIds_ == nullptr
        && this->autoPay_ == nullptr && this->ignoreParamValidation_ == nullptr && this->promotionId_ == nullptr && this->saleMode_ == nullptr && this->settingResetType_ == nullptr
        && this->targetDataDiskSize_ == nullptr; };
    // androidInstanceIds Field Functions 
    bool hasAndroidInstanceIds() const { return this->androidInstanceIds_ != nullptr;};
    void deleteAndroidInstanceIds() { this->androidInstanceIds_ = nullptr;};
    inline const vector<string> & getAndroidInstanceIds() const { DARABONBA_PTR_GET_CONST(androidInstanceIds_, vector<string>) };
    inline vector<string> getAndroidInstanceIds() { DARABONBA_PTR_GET(androidInstanceIds_, vector<string>) };
    inline ResetAndroidInstancesInGroupRequest& setAndroidInstanceIds(const vector<string> & androidInstanceIds) { DARABONBA_PTR_SET_VALUE(androidInstanceIds_, androidInstanceIds) };
    inline ResetAndroidInstancesInGroupRequest& setAndroidInstanceIds(vector<string> && androidInstanceIds) { DARABONBA_PTR_SET_RVALUE(androidInstanceIds_, androidInstanceIds) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ResetAndroidInstancesInGroupRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // ignoreParamValidation Field Functions 
    bool hasIgnoreParamValidation() const { return this->ignoreParamValidation_ != nullptr;};
    void deleteIgnoreParamValidation() { this->ignoreParamValidation_ = nullptr;};
    inline bool getIgnoreParamValidation() const { DARABONBA_PTR_GET_DEFAULT(ignoreParamValidation_, false) };
    inline ResetAndroidInstancesInGroupRequest& setIgnoreParamValidation(bool ignoreParamValidation) { DARABONBA_PTR_SET_VALUE(ignoreParamValidation_, ignoreParamValidation) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline ResetAndroidInstancesInGroupRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // saleMode Field Functions 
    bool hasSaleMode() const { return this->saleMode_ != nullptr;};
    void deleteSaleMode() { this->saleMode_ = nullptr;};
    inline string getSaleMode() const { DARABONBA_PTR_GET_DEFAULT(saleMode_, "") };
    inline ResetAndroidInstancesInGroupRequest& setSaleMode(string saleMode) { DARABONBA_PTR_SET_VALUE(saleMode_, saleMode) };


    // settingResetType Field Functions 
    bool hasSettingResetType() const { return this->settingResetType_ != nullptr;};
    void deleteSettingResetType() { this->settingResetType_ = nullptr;};
    inline int32_t getSettingResetType() const { DARABONBA_PTR_GET_DEFAULT(settingResetType_, 0) };
    inline ResetAndroidInstancesInGroupRequest& setSettingResetType(int32_t settingResetType) { DARABONBA_PTR_SET_VALUE(settingResetType_, settingResetType) };


    // targetDataDiskSize Field Functions 
    bool hasTargetDataDiskSize() const { return this->targetDataDiskSize_ != nullptr;};
    void deleteTargetDataDiskSize() { this->targetDataDiskSize_ = nullptr;};
    inline int32_t getTargetDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(targetDataDiskSize_, 0) };
    inline ResetAndroidInstancesInGroupRequest& setTargetDataDiskSize(int32_t targetDataDiskSize) { DARABONBA_PTR_SET_VALUE(targetDataDiskSize_, targetDataDiskSize) };


  protected:
    // The list of instance IDs.
    shared_ptr<vector<string>> androidInstanceIds_ {};
    // Specifies whether to enable automatic payment. Default value: false.
    shared_ptr<bool> autoPay_ {};
    shared_ptr<bool> ignoreParamValidation_ {};
    // The promotion ID.
    shared_ptr<string> promotionId_ {};
    // **[Deprecated]** The sales mode. This parameter is deprecated.
    shared_ptr<string> saleMode_ {};
    // <props="china">Specifies whether to retain attribute settings during the reset. If this parameter is not specified, attribute configurations are not retained by default. This parameter takes effect only for cloud phone matrix instances. Run the wya dump config command to view the details of retained attributes.
    // <props="intl">This parameter is not supported on the international site.
    shared_ptr<int32_t> settingResetType_ {};
    // Specify this parameter when you need to reduce storage while resetting instances in a cloud phone matrix. This feature is currently available through a whitelist. This parameter applies only to instances in a cloud phone matrix.
    shared_ptr<int32_t> targetDataDiskSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
