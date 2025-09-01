// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListInstancesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(kernel_version, kernelVersion_);
      DARABONBA_ANY_TO_JSON(meta, meta_);
      DARABONBA_PTR_TO_JSON(os_arch, osArch_);
      DARABONBA_PTR_TO_JSON(os_health_score, osHealthScore_);
      DARABONBA_PTR_TO_JSON(os_name, osName_);
      DARABONBA_PTR_TO_JSON(os_name_id, osNameId_);
      DARABONBA_PTR_TO_JSON(os_version, osVersion_);
      DARABONBA_PTR_TO_JSON(os_version_id, osVersionId_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(kernel_version, kernelVersion_);
      DARABONBA_ANY_FROM_JSON(meta, meta_);
      DARABONBA_PTR_FROM_JSON(os_arch, osArch_);
      DARABONBA_PTR_FROM_JSON(os_health_score, osHealthScore_);
      DARABONBA_PTR_FROM_JSON(os_name, osName_);
      DARABONBA_PTR_FROM_JSON(os_name_id, osNameId_);
      DARABONBA_PTR_FROM_JSON(os_version, osVersion_);
      DARABONBA_PTR_FROM_JSON(os_version_id, osVersionId_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListInstancesResponseBodyData() = default ;
    ListInstancesResponseBodyData(const ListInstancesResponseBodyData &) = default ;
    ListInstancesResponseBodyData(ListInstancesResponseBodyData &&) = default ;
    ListInstancesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyData() = default ;
    ListInstancesResponseBodyData& operator=(const ListInstancesResponseBodyData &) = default ;
    ListInstancesResponseBodyData& operator=(ListInstancesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->instance_ != nullptr && this->kernelVersion_ != nullptr && this->meta_ != nullptr && this->osArch_ != nullptr && this->osHealthScore_ != nullptr
        && this->osName_ != nullptr && this->osNameId_ != nullptr && this->osVersion_ != nullptr && this->osVersionId_ != nullptr && this->region_ != nullptr
        && this->status_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListInstancesResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline ListInstancesResponseBodyData& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // kernelVersion Field Functions 
    bool hasKernelVersion() const { return this->kernelVersion_ != nullptr;};
    void deleteKernelVersion() { this->kernelVersion_ = nullptr;};
    inline string kernelVersion() const { DARABONBA_PTR_GET_DEFAULT(kernelVersion_, "") };
    inline ListInstancesResponseBodyData& setKernelVersion(string kernelVersion) { DARABONBA_PTR_SET_VALUE(kernelVersion_, kernelVersion) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline     const Darabonba::Json & meta() const { DARABONBA_GET(meta_) };
    Darabonba::Json & meta() { DARABONBA_GET(meta_) };
    inline ListInstancesResponseBodyData& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
    inline ListInstancesResponseBodyData& setMeta(Darabonba::Json & meta) { DARABONBA_SET_RVALUE(meta_, meta) };


    // osArch Field Functions 
    bool hasOsArch() const { return this->osArch_ != nullptr;};
    void deleteOsArch() { this->osArch_ = nullptr;};
    inline string osArch() const { DARABONBA_PTR_GET_DEFAULT(osArch_, "") };
    inline ListInstancesResponseBodyData& setOsArch(string osArch) { DARABONBA_PTR_SET_VALUE(osArch_, osArch) };


    // osHealthScore Field Functions 
    bool hasOsHealthScore() const { return this->osHealthScore_ != nullptr;};
    void deleteOsHealthScore() { this->osHealthScore_ = nullptr;};
    inline string osHealthScore() const { DARABONBA_PTR_GET_DEFAULT(osHealthScore_, "") };
    inline ListInstancesResponseBodyData& setOsHealthScore(string osHealthScore) { DARABONBA_PTR_SET_VALUE(osHealthScore_, osHealthScore) };


    // osName Field Functions 
    bool hasOsName() const { return this->osName_ != nullptr;};
    void deleteOsName() { this->osName_ = nullptr;};
    inline string osName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
    inline ListInstancesResponseBodyData& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


    // osNameId Field Functions 
    bool hasOsNameId() const { return this->osNameId_ != nullptr;};
    void deleteOsNameId() { this->osNameId_ = nullptr;};
    inline string osNameId() const { DARABONBA_PTR_GET_DEFAULT(osNameId_, "") };
    inline ListInstancesResponseBodyData& setOsNameId(string osNameId) { DARABONBA_PTR_SET_VALUE(osNameId_, osNameId) };


    // osVersion Field Functions 
    bool hasOsVersion() const { return this->osVersion_ != nullptr;};
    void deleteOsVersion() { this->osVersion_ = nullptr;};
    inline string osVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
    inline ListInstancesResponseBodyData& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


    // osVersionId Field Functions 
    bool hasOsVersionId() const { return this->osVersionId_ != nullptr;};
    void deleteOsVersionId() { this->osVersionId_ = nullptr;};
    inline string osVersionId() const { DARABONBA_PTR_GET_DEFAULT(osVersionId_, "") };
    inline ListInstancesResponseBodyData& setOsVersionId(string osVersionId) { DARABONBA_PTR_SET_VALUE(osVersionId_, osVersionId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListInstancesResponseBodyData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancesResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> instance_ = nullptr;
    std::shared_ptr<string> kernelVersion_ = nullptr;
    Darabonba::Json meta_ = nullptr;
    std::shared_ptr<string> osArch_ = nullptr;
    std::shared_ptr<string> osHealthScore_ = nullptr;
    std::shared_ptr<string> osName_ = nullptr;
    std::shared_ptr<string> osNameId_ = nullptr;
    std::shared_ptr<string> osVersion_ = nullptr;
    std::shared_ptr<string> osVersionId_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
