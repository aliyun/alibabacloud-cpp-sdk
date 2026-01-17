// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPINSTANCEAGGREGATE_HPP_
#define ALIBABACLOUD_MODELS_APPINSTANCEAGGREGATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AppAiStaff.hpp>
#include <alibabacloud/models/AppOperationAddress.hpp>
#include <alibabacloud/models/AppServiceAggregate.hpp>
#include <alibabacloud/models/AppInstanceProfile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class AppInstanceAggregate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppInstanceAggregate& obj) { 
      DARABONBA_PTR_TO_JSON(AiStaffList, aiStaffList_);
      DARABONBA_PTR_TO_JSON(AppOperationAddress, appOperationAddress_);
      DARABONBA_PTR_TO_JSON(AppServiceList, appServiceList_);
      DARABONBA_PTR_TO_JSON(AppSubType, appSubType_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BuildType, buildType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DesignSpecBizId, designSpecBizId_);
      DARABONBA_PTR_TO_JSON(DesignSpecId, designSpecId_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EspBizId, espBizId_);
      DARABONBA_PTR_TO_JSON(GmtDelete, gmtDelete_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GmtPublish, gmtPublish_);
      DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PartnerDetail, partnerDetail_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SiteHost, siteHost_);
      DARABONBA_PTR_TO_JSON(Slug, slug_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusText, statusText_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ThumbnailUrl, thumbnailUrl_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AppInstanceAggregate& obj) { 
      DARABONBA_PTR_FROM_JSON(AiStaffList, aiStaffList_);
      DARABONBA_PTR_FROM_JSON(AppOperationAddress, appOperationAddress_);
      DARABONBA_PTR_FROM_JSON(AppServiceList, appServiceList_);
      DARABONBA_PTR_FROM_JSON(AppSubType, appSubType_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BuildType, buildType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DesignSpecBizId, designSpecBizId_);
      DARABONBA_PTR_FROM_JSON(DesignSpecId, designSpecId_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EspBizId, espBizId_);
      DARABONBA_PTR_FROM_JSON(GmtDelete, gmtDelete_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GmtPublish, gmtPublish_);
      DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PartnerDetail, partnerDetail_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SiteHost, siteHost_);
      DARABONBA_PTR_FROM_JSON(Slug, slug_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusText, statusText_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ThumbnailUrl, thumbnailUrl_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AppInstanceAggregate() = default ;
    AppInstanceAggregate(const AppInstanceAggregate &) = default ;
    AppInstanceAggregate(AppInstanceAggregate &&) = default ;
    AppInstanceAggregate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppInstanceAggregate() = default ;
    AppInstanceAggregate& operator=(const AppInstanceAggregate &) = default ;
    AppInstanceAggregate& operator=(AppInstanceAggregate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      shared_ptr<string> tagKey_ {};
      shared_ptr<string> tagValue_ {};
    };

    class PartnerDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PartnerDetail& obj) { 
        DARABONBA_PTR_TO_JSON(BindData, bindData_);
        DARABONBA_PTR_TO_JSON(PartnerId, partnerId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, PartnerDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(BindData, bindData_);
        DARABONBA_PTR_FROM_JSON(PartnerId, partnerId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      PartnerDetail() = default ;
      PartnerDetail(const PartnerDetail &) = default ;
      PartnerDetail(PartnerDetail &&) = default ;
      PartnerDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PartnerDetail() = default ;
      PartnerDetail& operator=(const PartnerDetail &) = default ;
      PartnerDetail& operator=(PartnerDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BindData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BindData& obj) { 
          DARABONBA_PTR_TO_JSON(BizId, bizId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Mobile, mobile_);
          DARABONBA_PTR_TO_JSON(ParentPk, parentPk_);
          DARABONBA_PTR_TO_JSON(PartnerId, partnerId_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, BindData& obj) { 
          DARABONBA_PTR_FROM_JSON(BizId, bizId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
          DARABONBA_PTR_FROM_JSON(ParentPk, parentPk_);
          DARABONBA_PTR_FROM_JSON(PartnerId, partnerId_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        BindData() = default ;
        BindData(const BindData &) = default ;
        BindData(BindData &&) = default ;
        BindData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BindData() = default ;
        BindData& operator=(const BindData &) = default ;
        BindData& operator=(BindData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizId_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->mobile_ == nullptr && this->parentPk_ == nullptr
        && this->partnerId_ == nullptr && this->userId_ == nullptr; };
        // bizId Field Functions 
        bool hasBizId() const { return this->bizId_ != nullptr;};
        void deleteBizId() { this->bizId_ = nullptr;};
        inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
        inline BindData& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline BindData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline BindData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline BindData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // mobile Field Functions 
        bool hasMobile() const { return this->mobile_ != nullptr;};
        void deleteMobile() { this->mobile_ = nullptr;};
        inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
        inline BindData& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


        // parentPk Field Functions 
        bool hasParentPk() const { return this->parentPk_ != nullptr;};
        void deleteParentPk() { this->parentPk_ = nullptr;};
        inline string getParentPk() const { DARABONBA_PTR_GET_DEFAULT(parentPk_, "") };
        inline BindData& setParentPk(string parentPk) { DARABONBA_PTR_SET_VALUE(parentPk_, parentPk) };


        // partnerId Field Functions 
        bool hasPartnerId() const { return this->partnerId_ != nullptr;};
        void deletePartnerId() { this->partnerId_ = nullptr;};
        inline string getPartnerId() const { DARABONBA_PTR_GET_DEFAULT(partnerId_, "") };
        inline BindData& setPartnerId(string partnerId) { DARABONBA_PTR_SET_VALUE(partnerId_, partnerId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline BindData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> bizId_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> mobile_ {};
        shared_ptr<string> parentPk_ {};
        shared_ptr<string> partnerId_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->bindData_ == nullptr
        && this->partnerId_ == nullptr && this->status_ == nullptr; };
      // bindData Field Functions 
      bool hasBindData() const { return this->bindData_ != nullptr;};
      void deleteBindData() { this->bindData_ = nullptr;};
      inline const PartnerDetail::BindData & getBindData() const { DARABONBA_PTR_GET_CONST(bindData_, PartnerDetail::BindData) };
      inline PartnerDetail::BindData getBindData() { DARABONBA_PTR_GET(bindData_, PartnerDetail::BindData) };
      inline PartnerDetail& setBindData(const PartnerDetail::BindData & bindData) { DARABONBA_PTR_SET_VALUE(bindData_, bindData) };
      inline PartnerDetail& setBindData(PartnerDetail::BindData && bindData) { DARABONBA_PTR_SET_RVALUE(bindData_, bindData) };


      // partnerId Field Functions 
      bool hasPartnerId() const { return this->partnerId_ != nullptr;};
      void deletePartnerId() { this->partnerId_ = nullptr;};
      inline string getPartnerId() const { DARABONBA_PTR_GET_DEFAULT(partnerId_, "") };
      inline PartnerDetail& setPartnerId(string partnerId) { DARABONBA_PTR_SET_VALUE(partnerId_, partnerId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PartnerDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<PartnerDetail::BindData> bindData_ {};
      shared_ptr<string> partnerId_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->aiStaffList_ == nullptr
        && this->appOperationAddress_ == nullptr && this->appServiceList_ == nullptr && this->appSubType_ == nullptr && this->appType_ == nullptr && this->bizId_ == nullptr
        && this->buildType_ == nullptr && this->createTime_ == nullptr && this->deleted_ == nullptr && this->description_ == nullptr && this->designSpecBizId_ == nullptr
        && this->designSpecId_ == nullptr && this->domain_ == nullptr && this->endTime_ == nullptr && this->espBizId_ == nullptr && this->gmtDelete_ == nullptr
        && this->gmtModified_ == nullptr && this->gmtPublish_ == nullptr && this->iconUrl_ == nullptr && this->name_ == nullptr && this->partnerDetail_ == nullptr
        && this->profile_ == nullptr && this->resourceGroupId_ == nullptr && this->siteHost_ == nullptr && this->slug_ == nullptr && this->sourceType_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->statusText_ == nullptr && this->tags_ == nullptr && this->thumbnailUrl_ == nullptr
        && this->userId_ == nullptr; };
    // aiStaffList Field Functions 
    bool hasAiStaffList() const { return this->aiStaffList_ != nullptr;};
    void deleteAiStaffList() { this->aiStaffList_ = nullptr;};
    inline const vector<AppAiStaff> & getAiStaffList() const { DARABONBA_PTR_GET_CONST(aiStaffList_, vector<AppAiStaff>) };
    inline vector<AppAiStaff> getAiStaffList() { DARABONBA_PTR_GET(aiStaffList_, vector<AppAiStaff>) };
    inline AppInstanceAggregate& setAiStaffList(const vector<AppAiStaff> & aiStaffList) { DARABONBA_PTR_SET_VALUE(aiStaffList_, aiStaffList) };
    inline AppInstanceAggregate& setAiStaffList(vector<AppAiStaff> && aiStaffList) { DARABONBA_PTR_SET_RVALUE(aiStaffList_, aiStaffList) };


    // appOperationAddress Field Functions 
    bool hasAppOperationAddress() const { return this->appOperationAddress_ != nullptr;};
    void deleteAppOperationAddress() { this->appOperationAddress_ = nullptr;};
    inline const AppOperationAddress & getAppOperationAddress() const { DARABONBA_PTR_GET_CONST(appOperationAddress_, AppOperationAddress) };
    inline AppOperationAddress getAppOperationAddress() { DARABONBA_PTR_GET(appOperationAddress_, AppOperationAddress) };
    inline AppInstanceAggregate& setAppOperationAddress(const AppOperationAddress & appOperationAddress) { DARABONBA_PTR_SET_VALUE(appOperationAddress_, appOperationAddress) };
    inline AppInstanceAggregate& setAppOperationAddress(AppOperationAddress && appOperationAddress) { DARABONBA_PTR_SET_RVALUE(appOperationAddress_, appOperationAddress) };


    // appServiceList Field Functions 
    bool hasAppServiceList() const { return this->appServiceList_ != nullptr;};
    void deleteAppServiceList() { this->appServiceList_ = nullptr;};
    inline const vector<AppServiceAggregate> & getAppServiceList() const { DARABONBA_PTR_GET_CONST(appServiceList_, vector<AppServiceAggregate>) };
    inline vector<AppServiceAggregate> getAppServiceList() { DARABONBA_PTR_GET(appServiceList_, vector<AppServiceAggregate>) };
    inline AppInstanceAggregate& setAppServiceList(const vector<AppServiceAggregate> & appServiceList) { DARABONBA_PTR_SET_VALUE(appServiceList_, appServiceList) };
    inline AppInstanceAggregate& setAppServiceList(vector<AppServiceAggregate> && appServiceList) { DARABONBA_PTR_SET_RVALUE(appServiceList_, appServiceList) };


    // appSubType Field Functions 
    bool hasAppSubType() const { return this->appSubType_ != nullptr;};
    void deleteAppSubType() { this->appSubType_ = nullptr;};
    inline string getAppSubType() const { DARABONBA_PTR_GET_DEFAULT(appSubType_, "") };
    inline AppInstanceAggregate& setAppSubType(string appSubType) { DARABONBA_PTR_SET_VALUE(appSubType_, appSubType) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline AppInstanceAggregate& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline AppInstanceAggregate& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // buildType Field Functions 
    bool hasBuildType() const { return this->buildType_ != nullptr;};
    void deleteBuildType() { this->buildType_ = nullptr;};
    inline string getBuildType() const { DARABONBA_PTR_GET_DEFAULT(buildType_, "") };
    inline AppInstanceAggregate& setBuildType(string buildType) { DARABONBA_PTR_SET_VALUE(buildType_, buildType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline AppInstanceAggregate& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline int32_t getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, 0) };
    inline AppInstanceAggregate& setDeleted(int32_t deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AppInstanceAggregate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // designSpecBizId Field Functions 
    bool hasDesignSpecBizId() const { return this->designSpecBizId_ != nullptr;};
    void deleteDesignSpecBizId() { this->designSpecBizId_ = nullptr;};
    inline string getDesignSpecBizId() const { DARABONBA_PTR_GET_DEFAULT(designSpecBizId_, "") };
    inline AppInstanceAggregate& setDesignSpecBizId(string designSpecBizId) { DARABONBA_PTR_SET_VALUE(designSpecBizId_, designSpecBizId) };


    // designSpecId Field Functions 
    bool hasDesignSpecId() const { return this->designSpecId_ != nullptr;};
    void deleteDesignSpecId() { this->designSpecId_ = nullptr;};
    inline string getDesignSpecId() const { DARABONBA_PTR_GET_DEFAULT(designSpecId_, "") };
    inline AppInstanceAggregate& setDesignSpecId(string designSpecId) { DARABONBA_PTR_SET_VALUE(designSpecId_, designSpecId) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AppInstanceAggregate& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline AppInstanceAggregate& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // espBizId Field Functions 
    bool hasEspBizId() const { return this->espBizId_ != nullptr;};
    void deleteEspBizId() { this->espBizId_ = nullptr;};
    inline string getEspBizId() const { DARABONBA_PTR_GET_DEFAULT(espBizId_, "") };
    inline AppInstanceAggregate& setEspBizId(string espBizId) { DARABONBA_PTR_SET_VALUE(espBizId_, espBizId) };


    // gmtDelete Field Functions 
    bool hasGmtDelete() const { return this->gmtDelete_ != nullptr;};
    void deleteGmtDelete() { this->gmtDelete_ = nullptr;};
    inline string getGmtDelete() const { DARABONBA_PTR_GET_DEFAULT(gmtDelete_, "") };
    inline AppInstanceAggregate& setGmtDelete(string gmtDelete) { DARABONBA_PTR_SET_VALUE(gmtDelete_, gmtDelete) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline AppInstanceAggregate& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // gmtPublish Field Functions 
    bool hasGmtPublish() const { return this->gmtPublish_ != nullptr;};
    void deleteGmtPublish() { this->gmtPublish_ = nullptr;};
    inline string getGmtPublish() const { DARABONBA_PTR_GET_DEFAULT(gmtPublish_, "") };
    inline AppInstanceAggregate& setGmtPublish(string gmtPublish) { DARABONBA_PTR_SET_VALUE(gmtPublish_, gmtPublish) };


    // iconUrl Field Functions 
    bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
    void deleteIconUrl() { this->iconUrl_ = nullptr;};
    inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
    inline AppInstanceAggregate& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AppInstanceAggregate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // partnerDetail Field Functions 
    bool hasPartnerDetail() const { return this->partnerDetail_ != nullptr;};
    void deletePartnerDetail() { this->partnerDetail_ = nullptr;};
    inline const AppInstanceAggregate::PartnerDetail & getPartnerDetail() const { DARABONBA_PTR_GET_CONST(partnerDetail_, AppInstanceAggregate::PartnerDetail) };
    inline AppInstanceAggregate::PartnerDetail getPartnerDetail() { DARABONBA_PTR_GET(partnerDetail_, AppInstanceAggregate::PartnerDetail) };
    inline AppInstanceAggregate& setPartnerDetail(const AppInstanceAggregate::PartnerDetail & partnerDetail) { DARABONBA_PTR_SET_VALUE(partnerDetail_, partnerDetail) };
    inline AppInstanceAggregate& setPartnerDetail(AppInstanceAggregate::PartnerDetail && partnerDetail) { DARABONBA_PTR_SET_RVALUE(partnerDetail_, partnerDetail) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline const AppInstanceProfile & getProfile() const { DARABONBA_PTR_GET_CONST(profile_, AppInstanceProfile) };
    inline AppInstanceProfile getProfile() { DARABONBA_PTR_GET(profile_, AppInstanceProfile) };
    inline AppInstanceAggregate& setProfile(const AppInstanceProfile & profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };
    inline AppInstanceAggregate& setProfile(AppInstanceProfile && profile) { DARABONBA_PTR_SET_RVALUE(profile_, profile) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AppInstanceAggregate& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // siteHost Field Functions 
    bool hasSiteHost() const { return this->siteHost_ != nullptr;};
    void deleteSiteHost() { this->siteHost_ = nullptr;};
    inline string getSiteHost() const { DARABONBA_PTR_GET_DEFAULT(siteHost_, "") };
    inline AppInstanceAggregate& setSiteHost(string siteHost) { DARABONBA_PTR_SET_VALUE(siteHost_, siteHost) };


    // slug Field Functions 
    bool hasSlug() const { return this->slug_ != nullptr;};
    void deleteSlug() { this->slug_ = nullptr;};
    inline string getSlug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
    inline AppInstanceAggregate& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline AppInstanceAggregate& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline AppInstanceAggregate& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AppInstanceAggregate& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusText Field Functions 
    bool hasStatusText() const { return this->statusText_ != nullptr;};
    void deleteStatusText() { this->statusText_ = nullptr;};
    inline string getStatusText() const { DARABONBA_PTR_GET_DEFAULT(statusText_, "") };
    inline AppInstanceAggregate& setStatusText(string statusText) { DARABONBA_PTR_SET_VALUE(statusText_, statusText) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<AppInstanceAggregate::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<AppInstanceAggregate::Tags>) };
    inline vector<AppInstanceAggregate::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<AppInstanceAggregate::Tags>) };
    inline AppInstanceAggregate& setTags(const vector<AppInstanceAggregate::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline AppInstanceAggregate& setTags(vector<AppInstanceAggregate::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // thumbnailUrl Field Functions 
    bool hasThumbnailUrl() const { return this->thumbnailUrl_ != nullptr;};
    void deleteThumbnailUrl() { this->thumbnailUrl_ = nullptr;};
    inline string getThumbnailUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbnailUrl_, "") };
    inline AppInstanceAggregate& setThumbnailUrl(string thumbnailUrl) { DARABONBA_PTR_SET_VALUE(thumbnailUrl_, thumbnailUrl) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AppInstanceAggregate& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<vector<AppAiStaff>> aiStaffList_ {};
    shared_ptr<AppOperationAddress> appOperationAddress_ {};
    shared_ptr<vector<AppServiceAggregate>> appServiceList_ {};
    shared_ptr<string> appSubType_ {};
    shared_ptr<string> appType_ {};
    shared_ptr<string> bizId_ {};
    shared_ptr<string> buildType_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<int32_t> deleted_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> designSpecBizId_ {};
    shared_ptr<string> designSpecId_ {};
    shared_ptr<string> domain_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> espBizId_ {};
    shared_ptr<string> gmtDelete_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> gmtPublish_ {};
    shared_ptr<string> iconUrl_ {};
    shared_ptr<string> name_ {};
    shared_ptr<AppInstanceAggregate::PartnerDetail> partnerDetail_ {};
    shared_ptr<AppInstanceProfile> profile_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> siteHost_ {};
    shared_ptr<string> slug_ {};
    shared_ptr<string> sourceType_ {};
    shared_ptr<string> startTime_ {};
    // trial,draft,live,refunded,expired,released
    shared_ptr<string> status_ {};
    shared_ptr<string> statusText_ {};
    shared_ptr<vector<AppInstanceAggregate::Tags>> tags_ {};
    shared_ptr<string> thumbnailUrl_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
