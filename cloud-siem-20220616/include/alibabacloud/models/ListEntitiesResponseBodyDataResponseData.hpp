// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTITIESRESPONSEBODYDATARESPONSEDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTENTITIESRESPONSEBODYDATARESPONSEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListEntitiesResponseBodyDataResponseData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEntitiesResponseBodyDataResponseData& obj) { 
      DARABONBA_PTR_TO_JSON(AlertNum, alertNum_);
      DARABONBA_PTR_TO_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(EntityInfo, entityInfo_);
      DARABONBA_PTR_TO_JSON(EntityName, entityName_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(EntityUuid, entityUuid_);
      DARABONBA_PTR_TO_JSON(EventNum, eventNum_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(IsAsset, isAsset_);
      DARABONBA_PTR_TO_JSON(IsMalware, isMalware_);
      DARABONBA_PTR_TO_JSON(MalwareType, malwareType_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListEntitiesResponseBodyDataResponseData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertNum, alertNum_);
      DARABONBA_PTR_FROM_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(EntityInfo, entityInfo_);
      DARABONBA_PTR_FROM_JSON(EntityName, entityName_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(EntityUuid, entityUuid_);
      DARABONBA_PTR_FROM_JSON(EventNum, eventNum_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(IsAsset, isAsset_);
      DARABONBA_PTR_FROM_JSON(IsMalware, isMalware_);
      DARABONBA_PTR_FROM_JSON(MalwareType, malwareType_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListEntitiesResponseBodyDataResponseData() = default ;
    ListEntitiesResponseBodyDataResponseData(const ListEntitiesResponseBodyDataResponseData &) = default ;
    ListEntitiesResponseBodyDataResponseData(ListEntitiesResponseBodyDataResponseData &&) = default ;
    ListEntitiesResponseBodyDataResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEntitiesResponseBodyDataResponseData() = default ;
    ListEntitiesResponseBodyDataResponseData& operator=(const ListEntitiesResponseBodyDataResponseData &) = default ;
    ListEntitiesResponseBodyDataResponseData& operator=(ListEntitiesResponseBodyDataResponseData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertNum_ != nullptr
        && this->alertUuid_ != nullptr && this->aliuid_ != nullptr && this->cloudCode_ != nullptr && this->entityId_ != nullptr && this->entityInfo_ != nullptr
        && this->entityName_ != nullptr && this->entityType_ != nullptr && this->entityUuid_ != nullptr && this->eventNum_ != nullptr && this->gmtCreate_ != nullptr
        && this->gmtModified_ != nullptr && this->id_ != nullptr && this->incidentUuid_ != nullptr && this->isAsset_ != nullptr && this->isMalware_ != nullptr
        && this->malwareType_ != nullptr && this->subUserId_ != nullptr && this->tags_ != nullptr; };
    // alertNum Field Functions 
    bool hasAlertNum() const { return this->alertNum_ != nullptr;};
    void deleteAlertNum() { this->alertNum_ = nullptr;};
    inline int32_t alertNum() const { DARABONBA_PTR_GET_DEFAULT(alertNum_, 0) };
    inline ListEntitiesResponseBodyDataResponseData& setAlertNum(int32_t alertNum) { DARABONBA_PTR_SET_VALUE(alertNum_, alertNum) };


    // alertUuid Field Functions 
    bool hasAlertUuid() const { return this->alertUuid_ != nullptr;};
    void deleteAlertUuid() { this->alertUuid_ = nullptr;};
    inline string alertUuid() const { DARABONBA_PTR_GET_DEFAULT(alertUuid_, "") };
    inline ListEntitiesResponseBodyDataResponseData& setAlertUuid(string alertUuid) { DARABONBA_PTR_SET_VALUE(alertUuid_, alertUuid) };


    // aliuid Field Functions 
    bool hasAliuid() const { return this->aliuid_ != nullptr;};
    void deleteAliuid() { this->aliuid_ = nullptr;};
    inline int64_t aliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, 0L) };
    inline ListEntitiesResponseBodyDataResponseData& setAliuid(int64_t aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline ListEntitiesResponseBodyDataResponseData& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline ListEntitiesResponseBodyDataResponseData& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityInfo Field Functions 
    bool hasEntityInfo() const { return this->entityInfo_ != nullptr;};
    void deleteEntityInfo() { this->entityInfo_ = nullptr;};
    inline string entityInfo() const { DARABONBA_PTR_GET_DEFAULT(entityInfo_, "") };
    inline ListEntitiesResponseBodyDataResponseData& setEntityInfo(string entityInfo) { DARABONBA_PTR_SET_VALUE(entityInfo_, entityInfo) };


    // entityName Field Functions 
    bool hasEntityName() const { return this->entityName_ != nullptr;};
    void deleteEntityName() { this->entityName_ = nullptr;};
    inline string entityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
    inline ListEntitiesResponseBodyDataResponseData& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ListEntitiesResponseBodyDataResponseData& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // entityUuid Field Functions 
    bool hasEntityUuid() const { return this->entityUuid_ != nullptr;};
    void deleteEntityUuid() { this->entityUuid_ = nullptr;};
    inline string entityUuid() const { DARABONBA_PTR_GET_DEFAULT(entityUuid_, "") };
    inline ListEntitiesResponseBodyDataResponseData& setEntityUuid(string entityUuid) { DARABONBA_PTR_SET_VALUE(entityUuid_, entityUuid) };


    // eventNum Field Functions 
    bool hasEventNum() const { return this->eventNum_ != nullptr;};
    void deleteEventNum() { this->eventNum_ = nullptr;};
    inline int32_t eventNum() const { DARABONBA_PTR_GET_DEFAULT(eventNum_, 0) };
    inline ListEntitiesResponseBodyDataResponseData& setEventNum(int32_t eventNum) { DARABONBA_PTR_SET_VALUE(eventNum_, eventNum) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListEntitiesResponseBodyDataResponseData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListEntitiesResponseBodyDataResponseData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListEntitiesResponseBodyDataResponseData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string incidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline ListEntitiesResponseBodyDataResponseData& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // isAsset Field Functions 
    bool hasIsAsset() const { return this->isAsset_ != nullptr;};
    void deleteIsAsset() { this->isAsset_ = nullptr;};
    inline string isAsset() const { DARABONBA_PTR_GET_DEFAULT(isAsset_, "") };
    inline ListEntitiesResponseBodyDataResponseData& setIsAsset(string isAsset) { DARABONBA_PTR_SET_VALUE(isAsset_, isAsset) };


    // isMalware Field Functions 
    bool hasIsMalware() const { return this->isMalware_ != nullptr;};
    void deleteIsMalware() { this->isMalware_ = nullptr;};
    inline string isMalware() const { DARABONBA_PTR_GET_DEFAULT(isMalware_, "") };
    inline ListEntitiesResponseBodyDataResponseData& setIsMalware(string isMalware) { DARABONBA_PTR_SET_VALUE(isMalware_, isMalware) };


    // malwareType Field Functions 
    bool hasMalwareType() const { return this->malwareType_ != nullptr;};
    void deleteMalwareType() { this->malwareType_ = nullptr;};
    inline string malwareType() const { DARABONBA_PTR_GET_DEFAULT(malwareType_, "") };
    inline ListEntitiesResponseBodyDataResponseData& setMalwareType(string malwareType) { DARABONBA_PTR_SET_VALUE(malwareType_, malwareType) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline int64_t subUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
    inline ListEntitiesResponseBodyDataResponseData& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ListEntitiesResponseBodyDataResponseData& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    std::shared_ptr<int32_t> alertNum_ = nullptr;
    std::shared_ptr<string> alertUuid_ = nullptr;
    std::shared_ptr<int64_t> aliuid_ = nullptr;
    std::shared_ptr<string> cloudCode_ = nullptr;
    std::shared_ptr<string> entityId_ = nullptr;
    std::shared_ptr<string> entityInfo_ = nullptr;
    std::shared_ptr<string> entityName_ = nullptr;
    std::shared_ptr<string> entityType_ = nullptr;
    std::shared_ptr<string> entityUuid_ = nullptr;
    std::shared_ptr<int32_t> eventNum_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> incidentUuid_ = nullptr;
    std::shared_ptr<string> isAsset_ = nullptr;
    std::shared_ptr<string> isMalware_ = nullptr;
    std::shared_ptr<string> malwareType_ = nullptr;
    std::shared_ptr<int64_t> subUserId_ = nullptr;
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
