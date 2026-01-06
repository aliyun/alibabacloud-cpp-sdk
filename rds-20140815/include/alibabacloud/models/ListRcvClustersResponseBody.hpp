// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRCVCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRCVCLUSTERSRESPONSEBODY_HPP_
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
  class ListRCVClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRCVClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VClusters, VClusters_);
    };
    friend void from_json(const Darabonba::Json& j, ListRCVClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VClusters, VClusters_);
    };
    ListRCVClustersResponseBody() = default ;
    ListRCVClustersResponseBody(const ListRCVClustersResponseBody &) = default ;
    ListRCVClustersResponseBody(ListRCVClustersResponseBody &&) = default ;
    ListRCVClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRCVClustersResponseBody() = default ;
    ListRCVClustersResponseBody& operator=(const ListRCVClustersResponseBody &) = default ;
    ListRCVClustersResponseBody& operator=(ListRCVClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VClusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VClusters& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SupportDiskPerformanceLevel, supportDiskPerformanceLevel_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, VClusters& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SupportDiskPerformanceLevel, supportDiskPerformanceLevel_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      VClusters() = default ;
      VClusters(const VClusters &) = default ;
      VClusters(VClusters &&) = default ;
      VClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VClusters() = default ;
      VClusters& operator=(const VClusters &) = default ;
      VClusters& operator=(VClusters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->instanceCount_ == nullptr && this->regionId_ == nullptr && this->supportDiskPerformanceLevel_ == nullptr && this->vpcId_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline VClusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int64_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0L) };
      inline VClusters& setInstanceCount(int64_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline VClusters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // supportDiskPerformanceLevel Field Functions 
      bool hasSupportDiskPerformanceLevel() const { return this->supportDiskPerformanceLevel_ != nullptr;};
      void deleteSupportDiskPerformanceLevel() { this->supportDiskPerformanceLevel_ = nullptr;};
      inline const vector<string> & getSupportDiskPerformanceLevel() const { DARABONBA_PTR_GET_CONST(supportDiskPerformanceLevel_, vector<string>) };
      inline vector<string> getSupportDiskPerformanceLevel() { DARABONBA_PTR_GET(supportDiskPerformanceLevel_, vector<string>) };
      inline VClusters& setSupportDiskPerformanceLevel(const vector<string> & supportDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(supportDiskPerformanceLevel_, supportDiskPerformanceLevel) };
      inline VClusters& setSupportDiskPerformanceLevel(vector<string> && supportDiskPerformanceLevel) { DARABONBA_PTR_SET_RVALUE(supportDiskPerformanceLevel_, supportDiskPerformanceLevel) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline VClusters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<string> clusterId_ {};
      shared_ptr<int64_t> instanceCount_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<vector<string>> supportDiskPerformanceLevel_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->VClusters_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRCVClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // VClusters Field Functions 
    bool hasVClusters() const { return this->VClusters_ != nullptr;};
    void deleteVClusters() { this->VClusters_ = nullptr;};
    inline const vector<ListRCVClustersResponseBody::VClusters> & getVClusters() const { DARABONBA_PTR_GET_CONST(VClusters_, vector<ListRCVClustersResponseBody::VClusters>) };
    inline vector<ListRCVClustersResponseBody::VClusters> getVClusters() { DARABONBA_PTR_GET(VClusters_, vector<ListRCVClustersResponseBody::VClusters>) };
    inline ListRCVClustersResponseBody& setVClusters(const vector<ListRCVClustersResponseBody::VClusters> & vClusters) { DARABONBA_PTR_SET_VALUE(VClusters_, vClusters) };
    inline ListRCVClustersResponseBody& setVClusters(vector<ListRCVClustersResponseBody::VClusters> && vClusters) { DARABONBA_PTR_SET_RVALUE(VClusters_, vClusters) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListRCVClustersResponseBody::VClusters>> VClusters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
