// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIZEMULTIZONECLUSTERNODECOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESIZEMULTIZONECLUSTERNODECOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class ResizeMultiZoneClusterNodeCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResizeMultiZoneClusterNodeCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArbiterVSwitchId, arbiterVSwitchId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CoreNodeCount, coreNodeCount_);
      DARABONBA_PTR_TO_JSON(LogNodeCount, logNodeCount_);
      DARABONBA_PTR_TO_JSON(PrimaryCoreNodeCount, primaryCoreNodeCount_);
      DARABONBA_PTR_TO_JSON(PrimaryVSwitchId, primaryVSwitchId_);
      DARABONBA_PTR_TO_JSON(StandbyCoreNodeCount, standbyCoreNodeCount_);
      DARABONBA_PTR_TO_JSON(StandbyVSwitchId, standbyVSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ResizeMultiZoneClusterNodeCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArbiterVSwitchId, arbiterVSwitchId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CoreNodeCount, coreNodeCount_);
      DARABONBA_PTR_FROM_JSON(LogNodeCount, logNodeCount_);
      DARABONBA_PTR_FROM_JSON(PrimaryCoreNodeCount, primaryCoreNodeCount_);
      DARABONBA_PTR_FROM_JSON(PrimaryVSwitchId, primaryVSwitchId_);
      DARABONBA_PTR_FROM_JSON(StandbyCoreNodeCount, standbyCoreNodeCount_);
      DARABONBA_PTR_FROM_JSON(StandbyVSwitchId, standbyVSwitchId_);
    };
    ResizeMultiZoneClusterNodeCountRequest() = default ;
    ResizeMultiZoneClusterNodeCountRequest(const ResizeMultiZoneClusterNodeCountRequest &) = default ;
    ResizeMultiZoneClusterNodeCountRequest(ResizeMultiZoneClusterNodeCountRequest &&) = default ;
    ResizeMultiZoneClusterNodeCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResizeMultiZoneClusterNodeCountRequest() = default ;
    ResizeMultiZoneClusterNodeCountRequest& operator=(const ResizeMultiZoneClusterNodeCountRequest &) = default ;
    ResizeMultiZoneClusterNodeCountRequest& operator=(ResizeMultiZoneClusterNodeCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arbiterVSwitchId_ == nullptr
        && this->clusterId_ == nullptr && this->coreNodeCount_ == nullptr && this->logNodeCount_ == nullptr && this->primaryCoreNodeCount_ == nullptr && this->primaryVSwitchId_ == nullptr
        && this->standbyCoreNodeCount_ == nullptr && this->standbyVSwitchId_ == nullptr; };
    // arbiterVSwitchId Field Functions 
    bool hasArbiterVSwitchId() const { return this->arbiterVSwitchId_ != nullptr;};
    void deleteArbiterVSwitchId() { this->arbiterVSwitchId_ = nullptr;};
    inline string getArbiterVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(arbiterVSwitchId_, "") };
    inline ResizeMultiZoneClusterNodeCountRequest& setArbiterVSwitchId(string arbiterVSwitchId) { DARABONBA_PTR_SET_VALUE(arbiterVSwitchId_, arbiterVSwitchId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ResizeMultiZoneClusterNodeCountRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // coreNodeCount Field Functions 
    bool hasCoreNodeCount() const { return this->coreNodeCount_ != nullptr;};
    void deleteCoreNodeCount() { this->coreNodeCount_ = nullptr;};
    inline int32_t getCoreNodeCount() const { DARABONBA_PTR_GET_DEFAULT(coreNodeCount_, 0) };
    inline ResizeMultiZoneClusterNodeCountRequest& setCoreNodeCount(int32_t coreNodeCount) { DARABONBA_PTR_SET_VALUE(coreNodeCount_, coreNodeCount) };


    // logNodeCount Field Functions 
    bool hasLogNodeCount() const { return this->logNodeCount_ != nullptr;};
    void deleteLogNodeCount() { this->logNodeCount_ = nullptr;};
    inline int32_t getLogNodeCount() const { DARABONBA_PTR_GET_DEFAULT(logNodeCount_, 0) };
    inline ResizeMultiZoneClusterNodeCountRequest& setLogNodeCount(int32_t logNodeCount) { DARABONBA_PTR_SET_VALUE(logNodeCount_, logNodeCount) };


    // primaryCoreNodeCount Field Functions 
    bool hasPrimaryCoreNodeCount() const { return this->primaryCoreNodeCount_ != nullptr;};
    void deletePrimaryCoreNodeCount() { this->primaryCoreNodeCount_ = nullptr;};
    inline int32_t getPrimaryCoreNodeCount() const { DARABONBA_PTR_GET_DEFAULT(primaryCoreNodeCount_, 0) };
    inline ResizeMultiZoneClusterNodeCountRequest& setPrimaryCoreNodeCount(int32_t primaryCoreNodeCount) { DARABONBA_PTR_SET_VALUE(primaryCoreNodeCount_, primaryCoreNodeCount) };


    // primaryVSwitchId Field Functions 
    bool hasPrimaryVSwitchId() const { return this->primaryVSwitchId_ != nullptr;};
    void deletePrimaryVSwitchId() { this->primaryVSwitchId_ = nullptr;};
    inline string getPrimaryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(primaryVSwitchId_, "") };
    inline ResizeMultiZoneClusterNodeCountRequest& setPrimaryVSwitchId(string primaryVSwitchId) { DARABONBA_PTR_SET_VALUE(primaryVSwitchId_, primaryVSwitchId) };


    // standbyCoreNodeCount Field Functions 
    bool hasStandbyCoreNodeCount() const { return this->standbyCoreNodeCount_ != nullptr;};
    void deleteStandbyCoreNodeCount() { this->standbyCoreNodeCount_ = nullptr;};
    inline int32_t getStandbyCoreNodeCount() const { DARABONBA_PTR_GET_DEFAULT(standbyCoreNodeCount_, 0) };
    inline ResizeMultiZoneClusterNodeCountRequest& setStandbyCoreNodeCount(int32_t standbyCoreNodeCount) { DARABONBA_PTR_SET_VALUE(standbyCoreNodeCount_, standbyCoreNodeCount) };


    // standbyVSwitchId Field Functions 
    bool hasStandbyVSwitchId() const { return this->standbyVSwitchId_ != nullptr;};
    void deleteStandbyVSwitchId() { this->standbyVSwitchId_ = nullptr;};
    inline string getStandbyVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(standbyVSwitchId_, "") };
    inline ResizeMultiZoneClusterNodeCountRequest& setStandbyVSwitchId(string standbyVSwitchId) { DARABONBA_PTR_SET_VALUE(standbyVSwitchId_, standbyVSwitchId) };


  protected:
    // The vSwitch ID of the arbitration node.
    shared_ptr<string> arbiterVSwitchId_ {};
    // The ID of the multi-zone cluster.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The number of core nodes. The minimum value is 4, and the increment must be a multiple of 2.
    shared_ptr<int32_t> coreNodeCount_ {};
    // The number of log nodes. The minimum value is 4, and the value must be a multiple of 4.
    shared_ptr<int32_t> logNodeCount_ {};
    // The number of core nodes in the primary zone instance. The minimum value is 4, and the increment must be a multiple of 2.
    shared_ptr<int32_t> primaryCoreNodeCount_ {};
    // The vSwitch ID of the instance in the primary zone.
    shared_ptr<string> primaryVSwitchId_ {};
    // The number of core nodes in the secondary zone instance. The minimum value is 4, and the increment must be a multiple of 2.
    shared_ptr<int32_t> standbyCoreNodeCount_ {};
    // The vSwitch ID of the instance in the secondary zone.
    shared_ptr<string> standbyVSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
