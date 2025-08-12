// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSYNCSTATUSBYALIUIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYSYNCSTATUSBYALIUIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class QuerySyncStatusByAliUidResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySyncStatusByAliUidResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(CorpId, corpId_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LatestBeginTime, latestBeginTime_);
      DARABONBA_PTR_TO_JSON(LatestEndTime, latestEndTime_);
      DARABONBA_PTR_TO_JSON(LatestSuccessTime, latestSuccessTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySyncStatusByAliUidResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LatestBeginTime, latestBeginTime_);
      DARABONBA_PTR_FROM_JSON(LatestEndTime, latestEndTime_);
      DARABONBA_PTR_FROM_JSON(LatestSuccessTime, latestSuccessTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QuerySyncStatusByAliUidResponseBodyData() = default ;
    QuerySyncStatusByAliUidResponseBodyData(const QuerySyncStatusByAliUidResponseBodyData &) = default ;
    QuerySyncStatusByAliUidResponseBodyData(QuerySyncStatusByAliUidResponseBodyData &&) = default ;
    QuerySyncStatusByAliUidResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySyncStatusByAliUidResponseBodyData() = default ;
    QuerySyncStatusByAliUidResponseBodyData& operator=(const QuerySyncStatusByAliUidResponseBodyData &) = default ;
    QuerySyncStatusByAliUidResponseBodyData& operator=(QuerySyncStatusByAliUidResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->corpId_ != nullptr && this->gmtCreated_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->latestBeginTime_ != nullptr
        && this->latestEndTime_ != nullptr && this->latestSuccessTime_ != nullptr && this->status_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline QuerySyncStatusByAliUidResponseBodyData& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline QuerySyncStatusByAliUidResponseBodyData& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline QuerySyncStatusByAliUidResponseBodyData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QuerySyncStatusByAliUidResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QuerySyncStatusByAliUidResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // latestBeginTime Field Functions 
    bool hasLatestBeginTime() const { return this->latestBeginTime_ != nullptr;};
    void deleteLatestBeginTime() { this->latestBeginTime_ = nullptr;};
    inline string latestBeginTime() const { DARABONBA_PTR_GET_DEFAULT(latestBeginTime_, "") };
    inline QuerySyncStatusByAliUidResponseBodyData& setLatestBeginTime(string latestBeginTime) { DARABONBA_PTR_SET_VALUE(latestBeginTime_, latestBeginTime) };


    // latestEndTime Field Functions 
    bool hasLatestEndTime() const { return this->latestEndTime_ != nullptr;};
    void deleteLatestEndTime() { this->latestEndTime_ = nullptr;};
    inline string latestEndTime() const { DARABONBA_PTR_GET_DEFAULT(latestEndTime_, "") };
    inline QuerySyncStatusByAliUidResponseBodyData& setLatestEndTime(string latestEndTime) { DARABONBA_PTR_SET_VALUE(latestEndTime_, latestEndTime) };


    // latestSuccessTime Field Functions 
    bool hasLatestSuccessTime() const { return this->latestSuccessTime_ != nullptr;};
    void deleteLatestSuccessTime() { this->latestSuccessTime_ = nullptr;};
    inline string latestSuccessTime() const { DARABONBA_PTR_GET_DEFAULT(latestSuccessTime_, "") };
    inline QuerySyncStatusByAliUidResponseBodyData& setLatestSuccessTime(string latestSuccessTime) { DARABONBA_PTR_SET_VALUE(latestSuccessTime_, latestSuccessTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QuerySyncStatusByAliUidResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> latestBeginTime_ = nullptr;
    std::shared_ptr<string> latestEndTime_ = nullptr;
    std::shared_ptr<string> latestSuccessTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
