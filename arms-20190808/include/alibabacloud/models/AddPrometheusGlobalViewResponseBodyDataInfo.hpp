// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPROMETHEUSGLOBALVIEWRESPONSEBODYDATAINFO_HPP_
#define ALIBABACLOUD_MODELS_ADDPROMETHEUSGLOBALVIEWRESPONSEBODYDATAINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class AddPrometheusGlobalViewResponseBodyDataInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPrometheusGlobalViewResponseBodyDataInfo& obj) { 
      DARABONBA_PTR_TO_JSON(FailedInstances, failedInstances_);
      DARABONBA_PTR_TO_JSON(GlobalViewClusterId, globalViewClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddPrometheusGlobalViewResponseBodyDataInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedInstances, failedInstances_);
      DARABONBA_PTR_FROM_JSON(GlobalViewClusterId, globalViewClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddPrometheusGlobalViewResponseBodyDataInfo() = default ;
    AddPrometheusGlobalViewResponseBodyDataInfo(const AddPrometheusGlobalViewResponseBodyDataInfo &) = default ;
    AddPrometheusGlobalViewResponseBodyDataInfo(AddPrometheusGlobalViewResponseBodyDataInfo &&) = default ;
    AddPrometheusGlobalViewResponseBodyDataInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPrometheusGlobalViewResponseBodyDataInfo() = default ;
    AddPrometheusGlobalViewResponseBodyDataInfo& operator=(const AddPrometheusGlobalViewResponseBodyDataInfo &) = default ;
    AddPrometheusGlobalViewResponseBodyDataInfo& operator=(AddPrometheusGlobalViewResponseBodyDataInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedInstances_ != nullptr
        && this->globalViewClusterId_ != nullptr && this->regionId_ != nullptr; };
    // failedInstances Field Functions 
    bool hasFailedInstances() const { return this->failedInstances_ != nullptr;};
    void deleteFailedInstances() { this->failedInstances_ = nullptr;};
    inline string failedInstances() const { DARABONBA_PTR_GET_DEFAULT(failedInstances_, "") };
    inline AddPrometheusGlobalViewResponseBodyDataInfo& setFailedInstances(string failedInstances) { DARABONBA_PTR_SET_VALUE(failedInstances_, failedInstances) };


    // globalViewClusterId Field Functions 
    bool hasGlobalViewClusterId() const { return this->globalViewClusterId_ != nullptr;};
    void deleteGlobalViewClusterId() { this->globalViewClusterId_ = nullptr;};
    inline string globalViewClusterId() const { DARABONBA_PTR_GET_DEFAULT(globalViewClusterId_, "") };
    inline AddPrometheusGlobalViewResponseBodyDataInfo& setGlobalViewClusterId(string globalViewClusterId) { DARABONBA_PTR_SET_VALUE(globalViewClusterId_, globalViewClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddPrometheusGlobalViewResponseBodyDataInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The list of instances that failed to be added.
    std::shared_ptr<string> failedInstances_ = nullptr;
    // The ID of the global aggregation instance.
    std::shared_ptr<string> globalViewClusterId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
