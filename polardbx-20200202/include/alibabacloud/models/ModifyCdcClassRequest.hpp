// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCDCCLASSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCDCCLASSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyCdcClassRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCdcClassRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CDCNodeCount, CDCNodeCount_);
      DARABONBA_PTR_TO_JSON(CdcClass, cdcClass_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SwitchMode, switchMode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCdcClassRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CDCNodeCount, CDCNodeCount_);
      DARABONBA_PTR_FROM_JSON(CdcClass, cdcClass_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SwitchMode, switchMode_);
    };
    ModifyCdcClassRequest() = default ;
    ModifyCdcClassRequest(const ModifyCdcClassRequest &) = default ;
    ModifyCdcClassRequest(ModifyCdcClassRequest &&) = default ;
    ModifyCdcClassRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCdcClassRequest() = default ;
    ModifyCdcClassRequest& operator=(const ModifyCdcClassRequest &) = default ;
    ModifyCdcClassRequest& operator=(ModifyCdcClassRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CDCNodeCount_ == nullptr
        && return this->cdcClass_ == nullptr && return this->instanceName_ == nullptr && return this->regionId_ == nullptr && return this->switchMode_ == nullptr; };
    // CDCNodeCount Field Functions 
    bool hasCDCNodeCount() const { return this->CDCNodeCount_ != nullptr;};
    void deleteCDCNodeCount() { this->CDCNodeCount_ = nullptr;};
    inline string CDCNodeCount() const { DARABONBA_PTR_GET_DEFAULT(CDCNodeCount_, "") };
    inline ModifyCdcClassRequest& setCDCNodeCount(string CDCNodeCount) { DARABONBA_PTR_SET_VALUE(CDCNodeCount_, CDCNodeCount) };


    // cdcClass Field Functions 
    bool hasCdcClass() const { return this->cdcClass_ != nullptr;};
    void deleteCdcClass() { this->cdcClass_ = nullptr;};
    inline string cdcClass() const { DARABONBA_PTR_GET_DEFAULT(cdcClass_, "") };
    inline ModifyCdcClassRequest& setCdcClass(string cdcClass) { DARABONBA_PTR_SET_VALUE(cdcClass_, cdcClass) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyCdcClassRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCdcClassRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // switchMode Field Functions 
    bool hasSwitchMode() const { return this->switchMode_ != nullptr;};
    void deleteSwitchMode() { this->switchMode_ = nullptr;};
    inline string switchMode() const { DARABONBA_PTR_GET_DEFAULT(switchMode_, "") };
    inline ModifyCdcClassRequest& setSwitchMode(string switchMode) { DARABONBA_PTR_SET_VALUE(switchMode_, switchMode) };


  protected:
    std::shared_ptr<string> CDCNodeCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> cdcClass_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> switchMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
