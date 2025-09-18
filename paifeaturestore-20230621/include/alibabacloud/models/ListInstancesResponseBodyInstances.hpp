// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesFeatureDBInfo.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesFeatureDBInstanceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureDBInfo, featureDBInfo_);
      DARABONBA_PTR_TO_JSON(FeatureDBInstanceInfo, featureDBInstanceInfo_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureDBInfo, featureDBInfo_);
      DARABONBA_PTR_FROM_JSON(FeatureDBInstanceInfo, featureDBInstanceInfo_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListInstancesResponseBodyInstances() = default ;
    ListInstancesResponseBodyInstances(const ListInstancesResponseBodyInstances &) = default ;
    ListInstancesResponseBodyInstances(ListInstancesResponseBodyInstances &&) = default ;
    ListInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyInstances() = default ;
    ListInstancesResponseBodyInstances& operator=(const ListInstancesResponseBodyInstances &) = default ;
    ListInstancesResponseBodyInstances& operator=(ListInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->featureDBInfo_ != nullptr
        && this->featureDBInstanceInfo_ != nullptr && this->gmtCreateTime_ != nullptr && this->gmtModifiedTime_ != nullptr && this->instanceId_ != nullptr && this->regionId_ != nullptr
        && this->status_ != nullptr && this->type_ != nullptr; };
    // featureDBInfo Field Functions 
    bool hasFeatureDBInfo() const { return this->featureDBInfo_ != nullptr;};
    void deleteFeatureDBInfo() { this->featureDBInfo_ = nullptr;};
    inline const Models::ListInstancesResponseBodyInstancesFeatureDBInfo & featureDBInfo() const { DARABONBA_PTR_GET_CONST(featureDBInfo_, Models::ListInstancesResponseBodyInstancesFeatureDBInfo) };
    inline Models::ListInstancesResponseBodyInstancesFeatureDBInfo featureDBInfo() { DARABONBA_PTR_GET(featureDBInfo_, Models::ListInstancesResponseBodyInstancesFeatureDBInfo) };
    inline ListInstancesResponseBodyInstances& setFeatureDBInfo(const Models::ListInstancesResponseBodyInstancesFeatureDBInfo & featureDBInfo) { DARABONBA_PTR_SET_VALUE(featureDBInfo_, featureDBInfo) };
    inline ListInstancesResponseBodyInstances& setFeatureDBInfo(Models::ListInstancesResponseBodyInstancesFeatureDBInfo && featureDBInfo) { DARABONBA_PTR_SET_RVALUE(featureDBInfo_, featureDBInfo) };


    // featureDBInstanceInfo Field Functions 
    bool hasFeatureDBInstanceInfo() const { return this->featureDBInstanceInfo_ != nullptr;};
    void deleteFeatureDBInstanceInfo() { this->featureDBInstanceInfo_ = nullptr;};
    inline const Models::ListInstancesResponseBodyInstancesFeatureDBInstanceInfo & featureDBInstanceInfo() const { DARABONBA_PTR_GET_CONST(featureDBInstanceInfo_, Models::ListInstancesResponseBodyInstancesFeatureDBInstanceInfo) };
    inline Models::ListInstancesResponseBodyInstancesFeatureDBInstanceInfo featureDBInstanceInfo() { DARABONBA_PTR_GET(featureDBInstanceInfo_, Models::ListInstancesResponseBodyInstancesFeatureDBInstanceInfo) };
    inline ListInstancesResponseBodyInstances& setFeatureDBInstanceInfo(const Models::ListInstancesResponseBodyInstancesFeatureDBInstanceInfo & featureDBInstanceInfo) { DARABONBA_PTR_SET_VALUE(featureDBInstanceInfo_, featureDBInstanceInfo) };
    inline ListInstancesResponseBodyInstances& setFeatureDBInstanceInfo(Models::ListInstancesResponseBodyInstancesFeatureDBInstanceInfo && featureDBInstanceInfo) { DARABONBA_PTR_SET_RVALUE(featureDBInstanceInfo_, featureDBInstanceInfo) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListInstancesResponseBodyInstances& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListInstancesResponseBodyInstances& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesResponseBodyInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListInstancesResponseBodyInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancesResponseBodyInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListInstancesResponseBodyInstances& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::ListInstancesResponseBodyInstancesFeatureDBInfo> featureDBInfo_ = nullptr;
    std::shared_ptr<Models::ListInstancesResponseBodyInstancesFeatureDBInstanceInfo> featureDBInstanceInfo_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
