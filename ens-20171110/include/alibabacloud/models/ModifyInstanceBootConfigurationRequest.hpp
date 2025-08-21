// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEBOOTCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEBOOTCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyInstanceBootConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceBootConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BootSet, bootSet_);
      DARABONBA_PTR_TO_JSON(BootType, bootType_);
      DARABONBA_PTR_TO_JSON(DiskSet, diskSet_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceBootConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BootSet, bootSet_);
      DARABONBA_PTR_FROM_JSON(BootType, bootType_);
      DARABONBA_PTR_FROM_JSON(DiskSet, diskSet_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ModifyInstanceBootConfigurationRequest() = default ;
    ModifyInstanceBootConfigurationRequest(const ModifyInstanceBootConfigurationRequest &) = default ;
    ModifyInstanceBootConfigurationRequest(ModifyInstanceBootConfigurationRequest &&) = default ;
    ModifyInstanceBootConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceBootConfigurationRequest() = default ;
    ModifyInstanceBootConfigurationRequest& operator=(const ModifyInstanceBootConfigurationRequest &) = default ;
    ModifyInstanceBootConfigurationRequest& operator=(ModifyInstanceBootConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bootSet_ != nullptr
        && this->bootType_ != nullptr && this->diskSet_ != nullptr && this->instanceId_ != nullptr; };
    // bootSet Field Functions 
    bool hasBootSet() const { return this->bootSet_ != nullptr;};
    void deleteBootSet() { this->bootSet_ = nullptr;};
    inline string bootSet() const { DARABONBA_PTR_GET_DEFAULT(bootSet_, "") };
    inline ModifyInstanceBootConfigurationRequest& setBootSet(string bootSet) { DARABONBA_PTR_SET_VALUE(bootSet_, bootSet) };


    // bootType Field Functions 
    bool hasBootType() const { return this->bootType_ != nullptr;};
    void deleteBootType() { this->bootType_ = nullptr;};
    inline string bootType() const { DARABONBA_PTR_GET_DEFAULT(bootType_, "") };
    inline ModifyInstanceBootConfigurationRequest& setBootType(string bootType) { DARABONBA_PTR_SET_VALUE(bootType_, bootType) };


    // diskSet Field Functions 
    bool hasDiskSet() const { return this->diskSet_ != nullptr;};
    void deleteDiskSet() { this->diskSet_ = nullptr;};
    inline string diskSet() const { DARABONBA_PTR_GET_DEFAULT(diskSet_, "") };
    inline ModifyInstanceBootConfigurationRequest& setDiskSet(string diskSet) { DARABONBA_PTR_SET_VALUE(diskSet_, diskSet) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceBootConfigurationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> bootSet_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bootType_ = nullptr;
    std::shared_ptr<string> diskSet_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
