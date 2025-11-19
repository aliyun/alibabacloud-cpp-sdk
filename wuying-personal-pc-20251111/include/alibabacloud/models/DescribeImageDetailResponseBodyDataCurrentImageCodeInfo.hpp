// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEDETAILRESPONSEBODYDATACURRENTIMAGECODEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEDETAILRESPONSEBODYDATACURRENTIMAGECODEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class DescribeImageDetailResponseBodyDataCurrentImageCodeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageDetailResponseBodyDataCurrentImageCodeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPassword, currentPassword_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ImageCode, imageCode_);
      DARABONBA_PTR_TO_JSON(IsCopyPassword, isCopyPassword_);
      DARABONBA_PTR_TO_JSON(IsEncrypted, isEncrypted_);
      DARABONBA_PTR_TO_JSON(IsFree, isFree_);
      DARABONBA_PTR_TO_JSON(PeriodDays, periodDays_);
      DARABONBA_PTR_TO_JSON(RedeemCount, redeemCount_);
      DARABONBA_PTR_TO_JSON(RedeemQuota, redeemQuota_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageDetailResponseBodyDataCurrentImageCodeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPassword, currentPassword_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ImageCode, imageCode_);
      DARABONBA_PTR_FROM_JSON(IsCopyPassword, isCopyPassword_);
      DARABONBA_PTR_FROM_JSON(IsEncrypted, isEncrypted_);
      DARABONBA_PTR_FROM_JSON(IsFree, isFree_);
      DARABONBA_PTR_FROM_JSON(PeriodDays, periodDays_);
      DARABONBA_PTR_FROM_JSON(RedeemCount, redeemCount_);
      DARABONBA_PTR_FROM_JSON(RedeemQuota, redeemQuota_);
    };
    DescribeImageDetailResponseBodyDataCurrentImageCodeInfo() = default ;
    DescribeImageDetailResponseBodyDataCurrentImageCodeInfo(const DescribeImageDetailResponseBodyDataCurrentImageCodeInfo &) = default ;
    DescribeImageDetailResponseBodyDataCurrentImageCodeInfo(DescribeImageDetailResponseBodyDataCurrentImageCodeInfo &&) = default ;
    DescribeImageDetailResponseBodyDataCurrentImageCodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageDetailResponseBodyDataCurrentImageCodeInfo() = default ;
    DescribeImageDetailResponseBodyDataCurrentImageCodeInfo& operator=(const DescribeImageDetailResponseBodyDataCurrentImageCodeInfo &) = default ;
    DescribeImageDetailResponseBodyDataCurrentImageCodeInfo& operator=(DescribeImageDetailResponseBodyDataCurrentImageCodeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPassword_ == nullptr
        && return this->expireTime_ == nullptr && return this->gmtCreated_ == nullptr && return this->gmtModified_ == nullptr && return this->imageCode_ == nullptr && return this->isCopyPassword_ == nullptr
        && return this->isEncrypted_ == nullptr && return this->isFree_ == nullptr && return this->periodDays_ == nullptr && return this->redeemCount_ == nullptr && return this->redeemQuota_ == nullptr; };
    // currentPassword Field Functions 
    bool hasCurrentPassword() const { return this->currentPassword_ != nullptr;};
    void deleteCurrentPassword() { this->currentPassword_ = nullptr;};
    inline string currentPassword() const { DARABONBA_PTR_GET_DEFAULT(currentPassword_, "") };
    inline DescribeImageDetailResponseBodyDataCurrentImageCodeInfo& setCurrentPassword(string currentPassword) { DARABONBA_PTR_SET_VALUE(currentPassword_, currentPassword) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeImageDetailResponseBodyDataCurrentImageCodeInfo& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeImageDetailResponseBodyDataCurrentImageCodeInfo& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeImageDetailResponseBodyDataCurrentImageCodeInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // imageCode Field Functions 
    bool hasImageCode() const { return this->imageCode_ != nullptr;};
    void deleteImageCode() { this->imageCode_ = nullptr;};
    inline string imageCode() const { DARABONBA_PTR_GET_DEFAULT(imageCode_, "") };
    inline DescribeImageDetailResponseBodyDataCurrentImageCodeInfo& setImageCode(string imageCode) { DARABONBA_PTR_SET_VALUE(imageCode_, imageCode) };


    // isCopyPassword Field Functions 
    bool hasIsCopyPassword() const { return this->isCopyPassword_ != nullptr;};
    void deleteIsCopyPassword() { this->isCopyPassword_ = nullptr;};
    inline bool isCopyPassword() const { DARABONBA_PTR_GET_DEFAULT(isCopyPassword_, false) };
    inline DescribeImageDetailResponseBodyDataCurrentImageCodeInfo& setIsCopyPassword(bool isCopyPassword) { DARABONBA_PTR_SET_VALUE(isCopyPassword_, isCopyPassword) };


    // isEncrypted Field Functions 
    bool hasIsEncrypted() const { return this->isEncrypted_ != nullptr;};
    void deleteIsEncrypted() { this->isEncrypted_ = nullptr;};
    inline bool isEncrypted() const { DARABONBA_PTR_GET_DEFAULT(isEncrypted_, false) };
    inline DescribeImageDetailResponseBodyDataCurrentImageCodeInfo& setIsEncrypted(bool isEncrypted) { DARABONBA_PTR_SET_VALUE(isEncrypted_, isEncrypted) };


    // isFree Field Functions 
    bool hasIsFree() const { return this->isFree_ != nullptr;};
    void deleteIsFree() { this->isFree_ = nullptr;};
    inline bool isFree() const { DARABONBA_PTR_GET_DEFAULT(isFree_, false) };
    inline DescribeImageDetailResponseBodyDataCurrentImageCodeInfo& setIsFree(bool isFree) { DARABONBA_PTR_SET_VALUE(isFree_, isFree) };


    // periodDays Field Functions 
    bool hasPeriodDays() const { return this->periodDays_ != nullptr;};
    void deletePeriodDays() { this->periodDays_ = nullptr;};
    inline int32_t periodDays() const { DARABONBA_PTR_GET_DEFAULT(periodDays_, 0) };
    inline DescribeImageDetailResponseBodyDataCurrentImageCodeInfo& setPeriodDays(int32_t periodDays) { DARABONBA_PTR_SET_VALUE(periodDays_, periodDays) };


    // redeemCount Field Functions 
    bool hasRedeemCount() const { return this->redeemCount_ != nullptr;};
    void deleteRedeemCount() { this->redeemCount_ = nullptr;};
    inline int32_t redeemCount() const { DARABONBA_PTR_GET_DEFAULT(redeemCount_, 0) };
    inline DescribeImageDetailResponseBodyDataCurrentImageCodeInfo& setRedeemCount(int32_t redeemCount) { DARABONBA_PTR_SET_VALUE(redeemCount_, redeemCount) };


    // redeemQuota Field Functions 
    bool hasRedeemQuota() const { return this->redeemQuota_ != nullptr;};
    void deleteRedeemQuota() { this->redeemQuota_ = nullptr;};
    inline int32_t redeemQuota() const { DARABONBA_PTR_GET_DEFAULT(redeemQuota_, 0) };
    inline DescribeImageDetailResponseBodyDataCurrentImageCodeInfo& setRedeemQuota(int32_t redeemQuota) { DARABONBA_PTR_SET_VALUE(redeemQuota_, redeemQuota) };


  protected:
    std::shared_ptr<string> currentPassword_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> imageCode_ = nullptr;
    std::shared_ptr<bool> isCopyPassword_ = nullptr;
    std::shared_ptr<bool> isEncrypted_ = nullptr;
    std::shared_ptr<bool> isFree_ = nullptr;
    std::shared_ptr<int32_t> periodDays_ = nullptr;
    std::shared_ptr<int32_t> redeemCount_ = nullptr;
    std::shared_ptr<int32_t> redeemQuota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
