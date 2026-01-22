// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOLUMNARCLASSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOLUMNARCLASSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyColumnarClassRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyColumnarClassRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnarClass, columnarClass_);
      DARABONBA_PTR_TO_JSON(ColumnarNodeCount, columnarNodeCount_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SwitchMode, switchMode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyColumnarClassRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnarClass, columnarClass_);
      DARABONBA_PTR_FROM_JSON(ColumnarNodeCount, columnarNodeCount_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SwitchMode, switchMode_);
    };
    ModifyColumnarClassRequest() = default ;
    ModifyColumnarClassRequest(const ModifyColumnarClassRequest &) = default ;
    ModifyColumnarClassRequest(ModifyColumnarClassRequest &&) = default ;
    ModifyColumnarClassRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyColumnarClassRequest() = default ;
    ModifyColumnarClassRequest& operator=(const ModifyColumnarClassRequest &) = default ;
    ModifyColumnarClassRequest& operator=(ModifyColumnarClassRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnarClass_ == nullptr
        && this->columnarNodeCount_ == nullptr && this->instanceName_ == nullptr && this->regionId_ == nullptr && this->switchMode_ == nullptr; };
    // columnarClass Field Functions 
    bool hasColumnarClass() const { return this->columnarClass_ != nullptr;};
    void deleteColumnarClass() { this->columnarClass_ = nullptr;};
    inline string getColumnarClass() const { DARABONBA_PTR_GET_DEFAULT(columnarClass_, "") };
    inline ModifyColumnarClassRequest& setColumnarClass(string columnarClass) { DARABONBA_PTR_SET_VALUE(columnarClass_, columnarClass) };


    // columnarNodeCount Field Functions 
    bool hasColumnarNodeCount() const { return this->columnarNodeCount_ != nullptr;};
    void deleteColumnarNodeCount() { this->columnarNodeCount_ = nullptr;};
    inline string getColumnarNodeCount() const { DARABONBA_PTR_GET_DEFAULT(columnarNodeCount_, "") };
    inline ModifyColumnarClassRequest& setColumnarNodeCount(string columnarNodeCount) { DARABONBA_PTR_SET_VALUE(columnarNodeCount_, columnarNodeCount) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyColumnarClassRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyColumnarClassRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // switchMode Field Functions 
    bool hasSwitchMode() const { return this->switchMode_ != nullptr;};
    void deleteSwitchMode() { this->switchMode_ = nullptr;};
    inline string getSwitchMode() const { DARABONBA_PTR_GET_DEFAULT(switchMode_, "") };
    inline ModifyColumnarClassRequest& setSwitchMode(string switchMode) { DARABONBA_PTR_SET_VALUE(switchMode_, switchMode) };


  protected:
    // This parameter is required.
    shared_ptr<string> columnarClass_ {};
    shared_ptr<string> columnarNodeCount_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> switchMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
