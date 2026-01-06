// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSRESOURCESETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSRESOURCESETTINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRdsResourceSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsResourceSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RdsInstanceResourceSettings, rdsInstanceResourceSettings_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsResourceSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RdsInstanceResourceSettings, rdsInstanceResourceSettings_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRdsResourceSettingsResponseBody() = default ;
    DescribeRdsResourceSettingsResponseBody(const DescribeRdsResourceSettingsResponseBody &) = default ;
    DescribeRdsResourceSettingsResponseBody(DescribeRdsResourceSettingsResponseBody &&) = default ;
    DescribeRdsResourceSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsResourceSettingsResponseBody() = default ;
    DescribeRdsResourceSettingsResponseBody& operator=(const DescribeRdsResourceSettingsResponseBody &) = default ;
    DescribeRdsResourceSettingsResponseBody& operator=(DescribeRdsResourceSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RdsInstanceResourceSettings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RdsInstanceResourceSettings& obj) { 
        DARABONBA_PTR_TO_JSON(RdsInstanceResourceSetting, rdsInstanceResourceSetting_);
      };
      friend void from_json(const Darabonba::Json& j, RdsInstanceResourceSettings& obj) { 
        DARABONBA_PTR_FROM_JSON(RdsInstanceResourceSetting, rdsInstanceResourceSetting_);
      };
      RdsInstanceResourceSettings() = default ;
      RdsInstanceResourceSettings(const RdsInstanceResourceSettings &) = default ;
      RdsInstanceResourceSettings(RdsInstanceResourceSettings &&) = default ;
      RdsInstanceResourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RdsInstanceResourceSettings() = default ;
      RdsInstanceResourceSettings& operator=(const RdsInstanceResourceSettings &) = default ;
      RdsInstanceResourceSettings& operator=(RdsInstanceResourceSettings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RdsInstanceResourceSetting : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RdsInstanceResourceSetting& obj) { 
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
        friend void from_json(const Darabonba::Json& j, RdsInstanceResourceSetting& obj) { 
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
        RdsInstanceResourceSetting() = default ;
        RdsInstanceResourceSetting(const RdsInstanceResourceSetting &) = default ;
        RdsInstanceResourceSetting(RdsInstanceResourceSetting &&) = default ;
        RdsInstanceResourceSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RdsInstanceResourceSetting() = default ;
        RdsInstanceResourceSetting& operator=(const RdsInstanceResourceSetting &) = default ;
        RdsInstanceResourceSetting& operator=(RdsInstanceResourceSetting &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endDate_ == nullptr
        && this->isTop_ == nullptr && this->noticeBarContent_ == nullptr && this->poppedUpButtonText_ == nullptr && this->poppedUpButtonType_ == nullptr && this->poppedUpButtonUrl_ == nullptr
        && this->poppedUpContent_ == nullptr && this->resourceNiche_ == nullptr && this->startDate_ == nullptr; };
        // endDate Field Functions 
        bool hasEndDate() const { return this->endDate_ != nullptr;};
        void deleteEndDate() { this->endDate_ = nullptr;};
        inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
        inline RdsInstanceResourceSetting& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


        // isTop Field Functions 
        bool hasIsTop() const { return this->isTop_ != nullptr;};
        void deleteIsTop() { this->isTop_ = nullptr;};
        inline string getIsTop() const { DARABONBA_PTR_GET_DEFAULT(isTop_, "") };
        inline RdsInstanceResourceSetting& setIsTop(string isTop) { DARABONBA_PTR_SET_VALUE(isTop_, isTop) };


        // noticeBarContent Field Functions 
        bool hasNoticeBarContent() const { return this->noticeBarContent_ != nullptr;};
        void deleteNoticeBarContent() { this->noticeBarContent_ = nullptr;};
        inline string getNoticeBarContent() const { DARABONBA_PTR_GET_DEFAULT(noticeBarContent_, "") };
        inline RdsInstanceResourceSetting& setNoticeBarContent(string noticeBarContent) { DARABONBA_PTR_SET_VALUE(noticeBarContent_, noticeBarContent) };


        // poppedUpButtonText Field Functions 
        bool hasPoppedUpButtonText() const { return this->poppedUpButtonText_ != nullptr;};
        void deletePoppedUpButtonText() { this->poppedUpButtonText_ = nullptr;};
        inline string getPoppedUpButtonText() const { DARABONBA_PTR_GET_DEFAULT(poppedUpButtonText_, "") };
        inline RdsInstanceResourceSetting& setPoppedUpButtonText(string poppedUpButtonText) { DARABONBA_PTR_SET_VALUE(poppedUpButtonText_, poppedUpButtonText) };


        // poppedUpButtonType Field Functions 
        bool hasPoppedUpButtonType() const { return this->poppedUpButtonType_ != nullptr;};
        void deletePoppedUpButtonType() { this->poppedUpButtonType_ = nullptr;};
        inline string getPoppedUpButtonType() const { DARABONBA_PTR_GET_DEFAULT(poppedUpButtonType_, "") };
        inline RdsInstanceResourceSetting& setPoppedUpButtonType(string poppedUpButtonType) { DARABONBA_PTR_SET_VALUE(poppedUpButtonType_, poppedUpButtonType) };


        // poppedUpButtonUrl Field Functions 
        bool hasPoppedUpButtonUrl() const { return this->poppedUpButtonUrl_ != nullptr;};
        void deletePoppedUpButtonUrl() { this->poppedUpButtonUrl_ = nullptr;};
        inline string getPoppedUpButtonUrl() const { DARABONBA_PTR_GET_DEFAULT(poppedUpButtonUrl_, "") };
        inline RdsInstanceResourceSetting& setPoppedUpButtonUrl(string poppedUpButtonUrl) { DARABONBA_PTR_SET_VALUE(poppedUpButtonUrl_, poppedUpButtonUrl) };


        // poppedUpContent Field Functions 
        bool hasPoppedUpContent() const { return this->poppedUpContent_ != nullptr;};
        void deletePoppedUpContent() { this->poppedUpContent_ = nullptr;};
        inline string getPoppedUpContent() const { DARABONBA_PTR_GET_DEFAULT(poppedUpContent_, "") };
        inline RdsInstanceResourceSetting& setPoppedUpContent(string poppedUpContent) { DARABONBA_PTR_SET_VALUE(poppedUpContent_, poppedUpContent) };


        // resourceNiche Field Functions 
        bool hasResourceNiche() const { return this->resourceNiche_ != nullptr;};
        void deleteResourceNiche() { this->resourceNiche_ = nullptr;};
        inline string getResourceNiche() const { DARABONBA_PTR_GET_DEFAULT(resourceNiche_, "") };
        inline RdsInstanceResourceSetting& setResourceNiche(string resourceNiche) { DARABONBA_PTR_SET_VALUE(resourceNiche_, resourceNiche) };


        // startDate Field Functions 
        bool hasStartDate() const { return this->startDate_ != nullptr;};
        void deleteStartDate() { this->startDate_ = nullptr;};
        inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
        inline RdsInstanceResourceSetting& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      protected:
        // The end date.
        shared_ptr<string> endDate_ {};
        // Specifies whether to pin the notification at the top.
        // 
        // *   true
        // *   false
        shared_ptr<string> isTop_ {};
        // The notification text.
        shared_ptr<string> noticeBarContent_ {};
        // The text of the popup button.
        shared_ptr<string> poppedUpButtonText_ {};
        // The type of the popup button.
        // 
        // *   BUY
        // *   RENEW
        // *   UPGRADE
        shared_ptr<string> poppedUpButtonType_ {};
        // The link of the popup button.
        shared_ptr<string> poppedUpButtonUrl_ {};
        // The text of the popup.
        shared_ptr<string> poppedUpContent_ {};
        // The location of the notification.
        shared_ptr<string> resourceNiche_ {};
        // The effective date.
        shared_ptr<string> startDate_ {};
      };

      virtual bool empty() const override { return this->rdsInstanceResourceSetting_ == nullptr; };
      // rdsInstanceResourceSetting Field Functions 
      bool hasRdsInstanceResourceSetting() const { return this->rdsInstanceResourceSetting_ != nullptr;};
      void deleteRdsInstanceResourceSetting() { this->rdsInstanceResourceSetting_ = nullptr;};
      inline const vector<RdsInstanceResourceSettings::RdsInstanceResourceSetting> & getRdsInstanceResourceSetting() const { DARABONBA_PTR_GET_CONST(rdsInstanceResourceSetting_, vector<RdsInstanceResourceSettings::RdsInstanceResourceSetting>) };
      inline vector<RdsInstanceResourceSettings::RdsInstanceResourceSetting> getRdsInstanceResourceSetting() { DARABONBA_PTR_GET(rdsInstanceResourceSetting_, vector<RdsInstanceResourceSettings::RdsInstanceResourceSetting>) };
      inline RdsInstanceResourceSettings& setRdsInstanceResourceSetting(const vector<RdsInstanceResourceSettings::RdsInstanceResourceSetting> & rdsInstanceResourceSetting) { DARABONBA_PTR_SET_VALUE(rdsInstanceResourceSetting_, rdsInstanceResourceSetting) };
      inline RdsInstanceResourceSettings& setRdsInstanceResourceSetting(vector<RdsInstanceResourceSettings::RdsInstanceResourceSetting> && rdsInstanceResourceSetting) { DARABONBA_PTR_SET_RVALUE(rdsInstanceResourceSetting_, rdsInstanceResourceSetting) };


    protected:
      shared_ptr<vector<RdsInstanceResourceSettings::RdsInstanceResourceSetting>> rdsInstanceResourceSetting_ {};
    };

    virtual bool empty() const override { return this->rdsInstanceResourceSettings_ == nullptr
        && this->requestId_ == nullptr; };
    // rdsInstanceResourceSettings Field Functions 
    bool hasRdsInstanceResourceSettings() const { return this->rdsInstanceResourceSettings_ != nullptr;};
    void deleteRdsInstanceResourceSettings() { this->rdsInstanceResourceSettings_ = nullptr;};
    inline const DescribeRdsResourceSettingsResponseBody::RdsInstanceResourceSettings & getRdsInstanceResourceSettings() const { DARABONBA_PTR_GET_CONST(rdsInstanceResourceSettings_, DescribeRdsResourceSettingsResponseBody::RdsInstanceResourceSettings) };
    inline DescribeRdsResourceSettingsResponseBody::RdsInstanceResourceSettings getRdsInstanceResourceSettings() { DARABONBA_PTR_GET(rdsInstanceResourceSettings_, DescribeRdsResourceSettingsResponseBody::RdsInstanceResourceSettings) };
    inline DescribeRdsResourceSettingsResponseBody& setRdsInstanceResourceSettings(const DescribeRdsResourceSettingsResponseBody::RdsInstanceResourceSettings & rdsInstanceResourceSettings) { DARABONBA_PTR_SET_VALUE(rdsInstanceResourceSettings_, rdsInstanceResourceSettings) };
    inline DescribeRdsResourceSettingsResponseBody& setRdsInstanceResourceSettings(DescribeRdsResourceSettingsResponseBody::RdsInstanceResourceSettings && rdsInstanceResourceSettings) { DARABONBA_PTR_SET_RVALUE(rdsInstanceResourceSettings_, rdsInstanceResourceSettings) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRdsResourceSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about notification settings for an instance.
    shared_ptr<DescribeRdsResourceSettingsResponseBody::RdsInstanceResourceSettings> rdsInstanceResourceSettings_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
