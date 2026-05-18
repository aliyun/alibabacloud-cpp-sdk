// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHVSCFROMMOUNTPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHVSCFROMMOUNTPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class DetachVscFromMountPointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachVscFromMountPointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DetachInfos, detachInfos_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(UseAssumeRoleChkServerPerm, useAssumeRoleChkServerPerm_);
    };
    friend void from_json(const Darabonba::Json& j, DetachVscFromMountPointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DetachInfos, detachInfos_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(UseAssumeRoleChkServerPerm, useAssumeRoleChkServerPerm_);
    };
    DetachVscFromMountPointsRequest() = default ;
    DetachVscFromMountPointsRequest(const DetachVscFromMountPointsRequest &) = default ;
    DetachVscFromMountPointsRequest(DetachVscFromMountPointsRequest &&) = default ;
    DetachVscFromMountPointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachVscFromMountPointsRequest() = default ;
    DetachVscFromMountPointsRequest& operator=(const DetachVscFromMountPointsRequest &) = default ;
    DetachVscFromMountPointsRequest& operator=(DetachVscFromMountPointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DetachInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetachInfos& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MountPointId, mountPointId_);
        DARABONBA_PTR_TO_JSON(VscId, vscId_);
        DARABONBA_PTR_TO_JSON(VscName, vscName_);
        DARABONBA_PTR_TO_JSON(VscType, vscType_);
      };
      friend void from_json(const Darabonba::Json& j, DetachInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MountPointId, mountPointId_);
        DARABONBA_PTR_FROM_JSON(VscId, vscId_);
        DARABONBA_PTR_FROM_JSON(VscName, vscName_);
        DARABONBA_PTR_FROM_JSON(VscType, vscType_);
      };
      DetachInfos() = default ;
      DetachInfos(const DetachInfos &) = default ;
      DetachInfos(DetachInfos &&) = default ;
      DetachInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetachInfos() = default ;
      DetachInfos& operator=(const DetachInfos &) = default ;
      DetachInfos& operator=(DetachInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->mountPointId_ == nullptr && this->vscId_ == nullptr && this->vscName_ == nullptr && this->vscType_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline DetachInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // mountPointId Field Functions 
      bool hasMountPointId() const { return this->mountPointId_ != nullptr;};
      void deleteMountPointId() { this->mountPointId_ = nullptr;};
      inline string getMountPointId() const { DARABONBA_PTR_GET_DEFAULT(mountPointId_, "") };
      inline DetachInfos& setMountPointId(string mountPointId) { DARABONBA_PTR_SET_VALUE(mountPointId_, mountPointId) };


      // vscId Field Functions 
      bool hasVscId() const { return this->vscId_ != nullptr;};
      void deleteVscId() { this->vscId_ = nullptr;};
      inline string getVscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
      inline DetachInfos& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


      // vscName Field Functions 
      bool hasVscName() const { return this->vscName_ != nullptr;};
      void deleteVscName() { this->vscName_ = nullptr;};
      inline string getVscName() const { DARABONBA_PTR_GET_DEFAULT(vscName_, "") };
      inline DetachInfos& setVscName(string vscName) { DARABONBA_PTR_SET_VALUE(vscName_, vscName) };


      // vscType Field Functions 
      bool hasVscType() const { return this->vscType_ != nullptr;};
      void deleteVscType() { this->vscType_ = nullptr;};
      inline string getVscType() const { DARABONBA_PTR_GET_DEFAULT(vscType_, "") };
      inline DetachInfos& setVscType(string vscType) { DARABONBA_PTR_SET_VALUE(vscType_, vscType) };


    protected:
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> mountPointId_ {};
      shared_ptr<string> vscId_ {};
      shared_ptr<string> vscName_ {};
      shared_ptr<string> vscType_ {};
    };

    virtual bool empty() const override { return this->detachInfos_ == nullptr
        && this->inputRegionId_ == nullptr && this->useAssumeRoleChkServerPerm_ == nullptr; };
    // detachInfos Field Functions 
    bool hasDetachInfos() const { return this->detachInfos_ != nullptr;};
    void deleteDetachInfos() { this->detachInfos_ = nullptr;};
    inline const vector<DetachVscFromMountPointsRequest::DetachInfos> & getDetachInfos() const { DARABONBA_PTR_GET_CONST(detachInfos_, vector<DetachVscFromMountPointsRequest::DetachInfos>) };
    inline vector<DetachVscFromMountPointsRequest::DetachInfos> getDetachInfos() { DARABONBA_PTR_GET(detachInfos_, vector<DetachVscFromMountPointsRequest::DetachInfos>) };
    inline DetachVscFromMountPointsRequest& setDetachInfos(const vector<DetachVscFromMountPointsRequest::DetachInfos> & detachInfos) { DARABONBA_PTR_SET_VALUE(detachInfos_, detachInfos) };
    inline DetachVscFromMountPointsRequest& setDetachInfos(vector<DetachVscFromMountPointsRequest::DetachInfos> && detachInfos) { DARABONBA_PTR_SET_RVALUE(detachInfos_, detachInfos) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string getInputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline DetachVscFromMountPointsRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // useAssumeRoleChkServerPerm Field Functions 
    bool hasUseAssumeRoleChkServerPerm() const { return this->useAssumeRoleChkServerPerm_ != nullptr;};
    void deleteUseAssumeRoleChkServerPerm() { this->useAssumeRoleChkServerPerm_ = nullptr;};
    inline bool getUseAssumeRoleChkServerPerm() const { DARABONBA_PTR_GET_DEFAULT(useAssumeRoleChkServerPerm_, false) };
    inline DetachVscFromMountPointsRequest& setUseAssumeRoleChkServerPerm(bool useAssumeRoleChkServerPerm) { DARABONBA_PTR_SET_VALUE(useAssumeRoleChkServerPerm_, useAssumeRoleChkServerPerm) };


  protected:
    shared_ptr<vector<DetachVscFromMountPointsRequest::DetachInfos>> detachInfos_ {};
    // This parameter is required.
    shared_ptr<string> inputRegionId_ {};
    shared_ptr<bool> useAssumeRoleChkServerPerm_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
