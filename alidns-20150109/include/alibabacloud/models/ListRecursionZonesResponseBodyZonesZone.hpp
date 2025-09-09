// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECURSIONZONESRESPONSEBODYZONESZONE_HPP_
#define ALIBABACLOUD_MODELS_LISTRECURSIONZONESRESPONSEBODYZONESZONE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRecursionZonesResponseBodyZonesZoneEffectiveScopes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListRecursionZonesResponseBodyZonesZone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecursionZonesResponseBodyZonesZone& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CreatorSubType, creatorSubType_);
      DARABONBA_PTR_TO_JSON(CreatorType, creatorType_);
      DARABONBA_PTR_TO_JSON(EffectiveScopes, effectiveScopes_);
      DARABONBA_PTR_TO_JSON(ProxyPattern, proxyPattern_);
      DARABONBA_PTR_TO_JSON(RecordCount, recordCount_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecursionZonesResponseBodyZonesZone& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CreatorSubType, creatorSubType_);
      DARABONBA_PTR_FROM_JSON(CreatorType, creatorType_);
      DARABONBA_PTR_FROM_JSON(EffectiveScopes, effectiveScopes_);
      DARABONBA_PTR_FROM_JSON(ProxyPattern, proxyPattern_);
      DARABONBA_PTR_FROM_JSON(RecordCount, recordCount_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
    };
    ListRecursionZonesResponseBodyZonesZone() = default ;
    ListRecursionZonesResponseBodyZonesZone(const ListRecursionZonesResponseBodyZonesZone &) = default ;
    ListRecursionZonesResponseBodyZonesZone(ListRecursionZonesResponseBodyZonesZone &&) = default ;
    ListRecursionZonesResponseBodyZonesZone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecursionZonesResponseBodyZonesZone() = default ;
    ListRecursionZonesResponseBodyZonesZone& operator=(const ListRecursionZonesResponseBodyZonesZone &) = default ;
    ListRecursionZonesResponseBodyZonesZone& operator=(ListRecursionZonesResponseBodyZonesZone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createTimestamp_ != nullptr && this->creator_ != nullptr && this->creatorSubType_ != nullptr && this->creatorType_ != nullptr && this->effectiveScopes_ != nullptr
        && this->proxyPattern_ != nullptr && this->recordCount_ != nullptr && this->remark_ != nullptr && this->updateTime_ != nullptr && this->updateTimestamp_ != nullptr
        && this->zoneId_ != nullptr && this->zoneName_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListRecursionZonesResponseBodyZonesZone& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline ListRecursionZonesResponseBodyZonesZone& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListRecursionZonesResponseBodyZonesZone& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // creatorSubType Field Functions 
    bool hasCreatorSubType() const { return this->creatorSubType_ != nullptr;};
    void deleteCreatorSubType() { this->creatorSubType_ = nullptr;};
    inline string creatorSubType() const { DARABONBA_PTR_GET_DEFAULT(creatorSubType_, "") };
    inline ListRecursionZonesResponseBodyZonesZone& setCreatorSubType(string creatorSubType) { DARABONBA_PTR_SET_VALUE(creatorSubType_, creatorSubType) };


    // creatorType Field Functions 
    bool hasCreatorType() const { return this->creatorType_ != nullptr;};
    void deleteCreatorType() { this->creatorType_ = nullptr;};
    inline string creatorType() const { DARABONBA_PTR_GET_DEFAULT(creatorType_, "") };
    inline ListRecursionZonesResponseBodyZonesZone& setCreatorType(string creatorType) { DARABONBA_PTR_SET_VALUE(creatorType_, creatorType) };


    // effectiveScopes Field Functions 
    bool hasEffectiveScopes() const { return this->effectiveScopes_ != nullptr;};
    void deleteEffectiveScopes() { this->effectiveScopes_ = nullptr;};
    inline const Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopes & effectiveScopes() const { DARABONBA_PTR_GET_CONST(effectiveScopes_, Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopes) };
    inline Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopes effectiveScopes() { DARABONBA_PTR_GET(effectiveScopes_, Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopes) };
    inline ListRecursionZonesResponseBodyZonesZone& setEffectiveScopes(const Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopes & effectiveScopes) { DARABONBA_PTR_SET_VALUE(effectiveScopes_, effectiveScopes) };
    inline ListRecursionZonesResponseBodyZonesZone& setEffectiveScopes(Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopes && effectiveScopes) { DARABONBA_PTR_SET_RVALUE(effectiveScopes_, effectiveScopes) };


    // proxyPattern Field Functions 
    bool hasProxyPattern() const { return this->proxyPattern_ != nullptr;};
    void deleteProxyPattern() { this->proxyPattern_ = nullptr;};
    inline string proxyPattern() const { DARABONBA_PTR_GET_DEFAULT(proxyPattern_, "") };
    inline ListRecursionZonesResponseBodyZonesZone& setProxyPattern(string proxyPattern) { DARABONBA_PTR_SET_VALUE(proxyPattern_, proxyPattern) };


    // recordCount Field Functions 
    bool hasRecordCount() const { return this->recordCount_ != nullptr;};
    void deleteRecordCount() { this->recordCount_ = nullptr;};
    inline int32_t recordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0) };
    inline ListRecursionZonesResponseBodyZonesZone& setRecordCount(int32_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListRecursionZonesResponseBodyZonesZone& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListRecursionZonesResponseBodyZonesZone& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline ListRecursionZonesResponseBodyZonesZone& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListRecursionZonesResponseBodyZonesZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string zoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline ListRecursionZonesResponseBodyZonesZone& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> creatorSubType_ = nullptr;
    std::shared_ptr<string> creatorType_ = nullptr;
    std::shared_ptr<Models::ListRecursionZonesResponseBodyZonesZoneEffectiveScopes> effectiveScopes_ = nullptr;
    std::shared_ptr<string> proxyPattern_ = nullptr;
    std::shared_ptr<int32_t> recordCount_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
    std::shared_ptr<string> zoneName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
