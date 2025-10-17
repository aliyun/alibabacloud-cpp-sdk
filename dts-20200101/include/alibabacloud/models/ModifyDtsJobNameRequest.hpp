// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDTSJOBNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDTSJOBNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ModifyDtsJobNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDtsJobNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(DtsJobName, dtsJobName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDtsJobNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(DtsJobName, dtsJobName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    ModifyDtsJobNameRequest() = default ;
    ModifyDtsJobNameRequest(const ModifyDtsJobNameRequest &) = default ;
    ModifyDtsJobNameRequest(ModifyDtsJobNameRequest &&) = default ;
    ModifyDtsJobNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDtsJobNameRequest() = default ;
    ModifyDtsJobNameRequest& operator=(const ModifyDtsJobNameRequest &) = default ;
    ModifyDtsJobNameRequest& operator=(ModifyDtsJobNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dtsJobId_ == nullptr
        && return this->dtsJobName_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->zeroEtlJob_ == nullptr; };
    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline ModifyDtsJobNameRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // dtsJobName Field Functions 
    bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
    void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
    inline string dtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
    inline ModifyDtsJobNameRequest& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDtsJobNameRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyDtsJobNameRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // zeroEtlJob Field Functions 
    bool hasZeroEtlJob() const { return this->zeroEtlJob_ != nullptr;};
    void deleteZeroEtlJob() { this->zeroEtlJob_ = nullptr;};
    inline bool zeroEtlJob() const { DARABONBA_PTR_GET_DEFAULT(zeroEtlJob_, false) };
    inline ModifyDtsJobNameRequest& setZeroEtlJob(bool zeroEtlJob) { DARABONBA_PTR_SET_VALUE(zeroEtlJob_, zeroEtlJob) };


  protected:
    // The ID of the DTS task. The DTS task can be a data migration, data synchronization, or change tracking task.
    // 
    // This parameter is required.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The new name of the DTS task.
    // 
    // >  We recommend that you specify a descriptive name for easy identification. You do not need to use a unique name.
    // 
    // This parameter is required.
    std::shared_ptr<string> dtsJobName_ = nullptr;
    // The ID of the region in which the DTS instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource GroupId
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Whether it is a seamless integration (Zero-ETL) task, the value can be:
    // - **false**: No. - **true**: Yes.
    std::shared_ptr<bool> zeroEtlJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
