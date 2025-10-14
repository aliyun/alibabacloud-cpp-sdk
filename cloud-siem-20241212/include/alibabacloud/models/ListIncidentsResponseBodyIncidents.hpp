// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINCIDENTSRESPONSEBODYINCIDENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTINCIDENTSRESPONSEBODYINCIDENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListIncidentsResponseBodyIncidents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIncidentsResponseBodyIncidents& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(IncidentName, incidentName_);
      DARABONBA_PTR_TO_JSON(IncidentRemark, incidentRemark_);
      DARABONBA_PTR_TO_JSON(IncidentStatus, incidentStatus_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(RelateAlertCount, relateAlertCount_);
      DARABONBA_PTR_TO_JSON(RelateAssetCount, relateAssetCount_);
      DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListIncidentsResponseBodyIncidents& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(IncidentName, incidentName_);
      DARABONBA_PTR_FROM_JSON(IncidentRemark, incidentRemark_);
      DARABONBA_PTR_FROM_JSON(IncidentStatus, incidentStatus_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(RelateAlertCount, relateAlertCount_);
      DARABONBA_PTR_FROM_JSON(RelateAssetCount, relateAssetCount_);
      DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListIncidentsResponseBodyIncidents() = default ;
    ListIncidentsResponseBodyIncidents(const ListIncidentsResponseBodyIncidents &) = default ;
    ListIncidentsResponseBodyIncidents(ListIncidentsResponseBodyIncidents &&) = default ;
    ListIncidentsResponseBodyIncidents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIncidentsResponseBodyIncidents() = default ;
    ListIncidentsResponseBodyIncidents& operator=(const ListIncidentsResponseBodyIncidents &) = default ;
    ListIncidentsResponseBodyIncidents& operator=(ListIncidentsResponseBodyIncidents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->incidentName_ == nullptr && return this->incidentRemark_ == nullptr && return this->incidentStatus_ == nullptr && return this->incidentUuid_ == nullptr && return this->relateAlertCount_ == nullptr
        && return this->relateAssetCount_ == nullptr && return this->threatLevel_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListIncidentsResponseBodyIncidents& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // incidentName Field Functions 
    bool hasIncidentName() const { return this->incidentName_ != nullptr;};
    void deleteIncidentName() { this->incidentName_ = nullptr;};
    inline string incidentName() const { DARABONBA_PTR_GET_DEFAULT(incidentName_, "") };
    inline ListIncidentsResponseBodyIncidents& setIncidentName(string incidentName) { DARABONBA_PTR_SET_VALUE(incidentName_, incidentName) };


    // incidentRemark Field Functions 
    bool hasIncidentRemark() const { return this->incidentRemark_ != nullptr;};
    void deleteIncidentRemark() { this->incidentRemark_ = nullptr;};
    inline string incidentRemark() const { DARABONBA_PTR_GET_DEFAULT(incidentRemark_, "") };
    inline ListIncidentsResponseBodyIncidents& setIncidentRemark(string incidentRemark) { DARABONBA_PTR_SET_VALUE(incidentRemark_, incidentRemark) };


    // incidentStatus Field Functions 
    bool hasIncidentStatus() const { return this->incidentStatus_ != nullptr;};
    void deleteIncidentStatus() { this->incidentStatus_ = nullptr;};
    inline int32_t incidentStatus() const { DARABONBA_PTR_GET_DEFAULT(incidentStatus_, 0) };
    inline ListIncidentsResponseBodyIncidents& setIncidentStatus(int32_t incidentStatus) { DARABONBA_PTR_SET_VALUE(incidentStatus_, incidentStatus) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string incidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline ListIncidentsResponseBodyIncidents& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // relateAlertCount Field Functions 
    bool hasRelateAlertCount() const { return this->relateAlertCount_ != nullptr;};
    void deleteRelateAlertCount() { this->relateAlertCount_ = nullptr;};
    inline int32_t relateAlertCount() const { DARABONBA_PTR_GET_DEFAULT(relateAlertCount_, 0) };
    inline ListIncidentsResponseBodyIncidents& setRelateAlertCount(int32_t relateAlertCount) { DARABONBA_PTR_SET_VALUE(relateAlertCount_, relateAlertCount) };


    // relateAssetCount Field Functions 
    bool hasRelateAssetCount() const { return this->relateAssetCount_ != nullptr;};
    void deleteRelateAssetCount() { this->relateAssetCount_ = nullptr;};
    inline int32_t relateAssetCount() const { DARABONBA_PTR_GET_DEFAULT(relateAssetCount_, 0) };
    inline ListIncidentsResponseBodyIncidents& setRelateAssetCount(int32_t relateAssetCount) { DARABONBA_PTR_SET_VALUE(relateAssetCount_, relateAssetCount) };


    // threatLevel Field Functions 
    bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
    void deleteThreatLevel() { this->threatLevel_ = nullptr;};
    inline string threatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
    inline ListIncidentsResponseBodyIncidents& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListIncidentsResponseBodyIncidents& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> incidentName_ = nullptr;
    std::shared_ptr<string> incidentRemark_ = nullptr;
    std::shared_ptr<int32_t> incidentStatus_ = nullptr;
    std::shared_ptr<string> incidentUuid_ = nullptr;
    std::shared_ptr<int32_t> relateAlertCount_ = nullptr;
    std::shared_ptr<int32_t> relateAssetCount_ = nullptr;
    std::shared_ptr<string> threatLevel_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
