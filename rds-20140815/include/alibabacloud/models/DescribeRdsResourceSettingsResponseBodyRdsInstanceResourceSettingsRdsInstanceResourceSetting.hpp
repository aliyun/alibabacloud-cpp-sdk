// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSRESOURCESETTINGSRESPONSEBODYRDSINSTANCERESOURCESETTINGSRDSINSTANCERESOURCESETTING_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSRESOURCESETTINGSRESPONSEBODYRDSINSTANCERESOURCESETTINGSRDSINSTANCERESOURCESETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(IsTop, isTop_);
      DARABONBA_PTR_TO_JSON(NoticeBarContent, noticeBarContent_);
      DARABONBA_PTR_TO_JSON(PoppedUpButtonText, poppedUpButtonText_);
      DARABONBA_PTR_TO_JSON(PoppedUpButtonType, poppedUpButtonType_);
      DARABONBA_PTR_TO_JSON(PoppedUpButtonUrl, poppedUpButtonUrl_);
      DARABONBA_PTR_TO_JSON(PoppedUpContent, poppedUpContent_);
      DARABONBA_PTR_TO_JSON(ResourceNiche, resourceNiche_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(IsTop, isTop_);
      DARABONBA_PTR_FROM_JSON(NoticeBarContent, noticeBarContent_);
      DARABONBA_PTR_FROM_JSON(PoppedUpButtonText, poppedUpButtonText_);
      DARABONBA_PTR_FROM_JSON(PoppedUpButtonType, poppedUpButtonType_);
      DARABONBA_PTR_FROM_JSON(PoppedUpButtonUrl, poppedUpButtonUrl_);
      DARABONBA_PTR_FROM_JSON(PoppedUpContent, poppedUpContent_);
      DARABONBA_PTR_FROM_JSON(ResourceNiche, resourceNiche_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting() = default ;
    DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting(const DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting &) = default ;
    DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting(DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting &&) = default ;
    DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting() = default ;
    DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting& operator=(const DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting &) = default ;
    DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting& operator=(DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && return this->isTop_ == nullptr && return this->noticeBarContent_ == nullptr && return this->poppedUpButtonText_ == nullptr && return this->poppedUpButtonType_ == nullptr && return this->poppedUpButtonUrl_ == nullptr
        && return this->poppedUpContent_ == nullptr && return this->resourceNiche_ == nullptr && return this->startDate_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // isTop Field Functions 
    bool hasIsTop() const { return this->isTop_ != nullptr;};
    void deleteIsTop() { this->isTop_ = nullptr;};
    inline string isTop() const { DARABONBA_PTR_GET_DEFAULT(isTop_, "") };
    inline DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting& setIsTop(string isTop) { DARABONBA_PTR_SET_VALUE(isTop_, isTop) };


    // noticeBarContent Field Functions 
    bool hasNoticeBarContent() const { return this->noticeBarContent_ != nullptr;};
    void deleteNoticeBarContent() { this->noticeBarContent_ = nullptr;};
    inline string noticeBarContent() const { DARABONBA_PTR_GET_DEFAULT(noticeBarContent_, "") };
    inline DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting& setNoticeBarContent(string noticeBarContent) { DARABONBA_PTR_SET_VALUE(noticeBarContent_, noticeBarContent) };


    // poppedUpButtonText Field Functions 
    bool hasPoppedUpButtonText() const { return this->poppedUpButtonText_ != nullptr;};
    void deletePoppedUpButtonText() { this->poppedUpButtonText_ = nullptr;};
    inline string poppedUpButtonText() const { DARABONBA_PTR_GET_DEFAULT(poppedUpButtonText_, "") };
    inline DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting& setPoppedUpButtonText(string poppedUpButtonText) { DARABONBA_PTR_SET_VALUE(poppedUpButtonText_, poppedUpButtonText) };


    // poppedUpButtonType Field Functions 
    bool hasPoppedUpButtonType() const { return this->poppedUpButtonType_ != nullptr;};
    void deletePoppedUpButtonType() { this->poppedUpButtonType_ = nullptr;};
    inline string poppedUpButtonType() const { DARABONBA_PTR_GET_DEFAULT(poppedUpButtonType_, "") };
    inline DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting& setPoppedUpButtonType(string poppedUpButtonType) { DARABONBA_PTR_SET_VALUE(poppedUpButtonType_, poppedUpButtonType) };


    // poppedUpButtonUrl Field Functions 
    bool hasPoppedUpButtonUrl() const { return this->poppedUpButtonUrl_ != nullptr;};
    void deletePoppedUpButtonUrl() { this->poppedUpButtonUrl_ = nullptr;};
    inline string poppedUpButtonUrl() const { DARABONBA_PTR_GET_DEFAULT(poppedUpButtonUrl_, "") };
    inline DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting& setPoppedUpButtonUrl(string poppedUpButtonUrl) { DARABONBA_PTR_SET_VALUE(poppedUpButtonUrl_, poppedUpButtonUrl) };


    // poppedUpContent Field Functions 
    bool hasPoppedUpContent() const { return this->poppedUpContent_ != nullptr;};
    void deletePoppedUpContent() { this->poppedUpContent_ = nullptr;};
    inline string poppedUpContent() const { DARABONBA_PTR_GET_DEFAULT(poppedUpContent_, "") };
    inline DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting& setPoppedUpContent(string poppedUpContent) { DARABONBA_PTR_SET_VALUE(poppedUpContent_, poppedUpContent) };


    // resourceNiche Field Functions 
    bool hasResourceNiche() const { return this->resourceNiche_ != nullptr;};
    void deleteResourceNiche() { this->resourceNiche_ = nullptr;};
    inline string resourceNiche() const { DARABONBA_PTR_GET_DEFAULT(resourceNiche_, "") };
    inline DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting& setResourceNiche(string resourceNiche) { DARABONBA_PTR_SET_VALUE(resourceNiche_, resourceNiche) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // The end date.
    std::shared_ptr<string> endDate_ = nullptr;
    // Specifies whether to pin the notification at the top.
    // 
    // *   true
    // *   false
    std::shared_ptr<string> isTop_ = nullptr;
    // The notification text.
    std::shared_ptr<string> noticeBarContent_ = nullptr;
    // The text of the popup button.
    std::shared_ptr<string> poppedUpButtonText_ = nullptr;
    // The type of the popup button.
    // 
    // *   BUY
    // *   RENEW
    // *   UPGRADE
    std::shared_ptr<string> poppedUpButtonType_ = nullptr;
    // The link of the popup button.
    std::shared_ptr<string> poppedUpButtonUrl_ = nullptr;
    // The text of the popup.
    std::shared_ptr<string> poppedUpContent_ = nullptr;
    // The location of the notification.
    std::shared_ptr<string> resourceNiche_ = nullptr;
    // The effective date.
    std::shared_ptr<string> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
