// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUPPORTDBTABLERECOVERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUPPORTDBTABLERECOVERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class SupportDBTableRecoveryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SupportDBTableRecoveryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
    };
    friend void from_json(const Darabonba::Json& j, SupportDBTableRecoveryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
    };
    SupportDBTableRecoveryRequest() = default ;
    SupportDBTableRecoveryRequest(const SupportDBTableRecoveryRequest &) = default ;
    SupportDBTableRecoveryRequest(SupportDBTableRecoveryRequest &&) = default ;
    SupportDBTableRecoveryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SupportDBTableRecoveryRequest() = default ;
    SupportDBTableRecoveryRequest& operator=(const SupportDBTableRecoveryRequest &) = default ;
    SupportDBTableRecoveryRequest& operator=(SupportDBTableRecoveryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterName_ == nullptr
        && this->instanceId_ == nullptr && this->regionCode_ == nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline SupportDBTableRecoveryRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SupportDBTableRecoveryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline SupportDBTableRecoveryRequest& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


  protected:
    shared_ptr<string> clusterName_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> regionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
