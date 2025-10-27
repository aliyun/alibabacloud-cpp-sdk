// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDINGTALKRESPONSEBODYACTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDINGTALKRESPONSEBODYACTIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDingTalkResponseBodyActionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDingTalkResponseBodyActionList& obj) { 
      DARABONBA_PTR_TO_JSON(ActionName, actionName_);
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(DingTalkLang, dingTalkLang_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GroupIdList, groupIdList_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IntervalTime, intervalTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDingTalkResponseBodyActionList& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionName, actionName_);
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(DingTalkLang, dingTalkLang_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GroupIdList, groupIdList_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IntervalTime, intervalTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeDingTalkResponseBodyActionList() = default ;
    DescribeDingTalkResponseBodyActionList(const DescribeDingTalkResponseBodyActionList &) = default ;
    DescribeDingTalkResponseBodyActionList(DescribeDingTalkResponseBodyActionList &&) = default ;
    DescribeDingTalkResponseBodyActionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDingTalkResponseBodyActionList() = default ;
    DescribeDingTalkResponseBodyActionList& operator=(const DescribeDingTalkResponseBodyActionList &) = default ;
    DescribeDingTalkResponseBodyActionList& operator=(DescribeDingTalkResponseBodyActionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionName_ == nullptr
        && return this->aliUid_ == nullptr && return this->configList_ == nullptr && return this->dingTalkLang_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->groupIdList_ == nullptr && return this->id_ == nullptr && return this->intervalTime_ == nullptr && return this->status_ == nullptr && return this->url_ == nullptr; };
    // actionName Field Functions 
    bool hasActionName() const { return this->actionName_ != nullptr;};
    void deleteActionName() { this->actionName_ = nullptr;};
    inline string actionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
    inline DescribeDingTalkResponseBodyActionList& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeDingTalkResponseBodyActionList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline string configList() const { DARABONBA_PTR_GET_DEFAULT(configList_, "") };
    inline DescribeDingTalkResponseBodyActionList& setConfigList(string configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };


    // dingTalkLang Field Functions 
    bool hasDingTalkLang() const { return this->dingTalkLang_ != nullptr;};
    void deleteDingTalkLang() { this->dingTalkLang_ = nullptr;};
    inline string dingTalkLang() const { DARABONBA_PTR_GET_DEFAULT(dingTalkLang_, "") };
    inline DescribeDingTalkResponseBodyActionList& setDingTalkLang(string dingTalkLang) { DARABONBA_PTR_SET_VALUE(dingTalkLang_, dingTalkLang) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeDingTalkResponseBodyActionList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeDingTalkResponseBodyActionList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // groupIdList Field Functions 
    bool hasGroupIdList() const { return this->groupIdList_ != nullptr;};
    void deleteGroupIdList() { this->groupIdList_ = nullptr;};
    inline string groupIdList() const { DARABONBA_PTR_GET_DEFAULT(groupIdList_, "") };
    inline DescribeDingTalkResponseBodyActionList& setGroupIdList(string groupIdList) { DARABONBA_PTR_SET_VALUE(groupIdList_, groupIdList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DescribeDingTalkResponseBodyActionList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // intervalTime Field Functions 
    bool hasIntervalTime() const { return this->intervalTime_ != nullptr;};
    void deleteIntervalTime() { this->intervalTime_ = nullptr;};
    inline int32_t intervalTime() const { DARABONBA_PTR_GET_DEFAULT(intervalTime_, 0) };
    inline DescribeDingTalkResponseBodyActionList& setIntervalTime(int32_t intervalTime) { DARABONBA_PTR_SET_VALUE(intervalTime_, intervalTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeDingTalkResponseBodyActionList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeDingTalkResponseBodyActionList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The name of the notification.
    std::shared_ptr<string> actionName_ = nullptr;
    // The UID of the user.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The list of notification settings.
    std::shared_ptr<string> configList_ = nullptr;
    // The language of the content within notifications. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> dingTalkLang_ = nullptr;
    // The creation time. unit:millisecond.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The modification time.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The group IDs.
    std::shared_ptr<string> groupIdList_ = nullptr;
    // The ID of the notification.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The interval at which the notifications are sent.unit:minute.
    std::shared_ptr<int32_t> intervalTime_ = nullptr;
    // The status of the notification. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: enabled
    std::shared_ptr<int32_t> status_ = nullptr;
    // The parameters of the notification.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
