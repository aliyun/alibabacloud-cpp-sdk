// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEZONESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEZONESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListAvailableZonesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableZonesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(zoneName, zoneName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableZonesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(zoneName, zoneName_);
    };
    ListAvailableZonesResponseBodyData() = default ;
    ListAvailableZonesResponseBodyData(const ListAvailableZonesResponseBodyData &) = default ;
    ListAvailableZonesResponseBodyData(ListAvailableZonesResponseBodyData &&) = default ;
    ListAvailableZonesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableZonesResponseBodyData() = default ;
    ListAvailableZonesResponseBodyData& operator=(const ListAvailableZonesResponseBodyData &) = default ;
    ListAvailableZonesResponseBodyData& operator=(ListAvailableZonesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->updateTime_ != nullptr && this->zoneId_ != nullptr && this->zoneName_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAvailableZonesResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListAvailableZonesResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListAvailableZonesResponseBodyData& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string zoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline ListAvailableZonesResponseBodyData& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


  protected:
    // The time when the zone was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the zone was last updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The ID of the current zone.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The name of the current zone.
    std::shared_ptr<string> zoneName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
