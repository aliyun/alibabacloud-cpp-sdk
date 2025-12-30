// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPHOSTNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPHOSTNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopHostNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopHostNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(NewHostName, newHostName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopHostNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(NewHostName, newHostName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyDesktopHostNameRequest() = default ;
    ModifyDesktopHostNameRequest(const ModifyDesktopHostNameRequest &) = default ;
    ModifyDesktopHostNameRequest(ModifyDesktopHostNameRequest &&) = default ;
    ModifyDesktopHostNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopHostNameRequest() = default ;
    ModifyDesktopHostNameRequest& operator=(const ModifyDesktopHostNameRequest &) = default ;
    ModifyDesktopHostNameRequest& operator=(ModifyDesktopHostNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->newHostName_ == nullptr && this->regionId_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline ModifyDesktopHostNameRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // newHostName Field Functions 
    bool hasNewHostName() const { return this->newHostName_ != nullptr;};
    void deleteNewHostName() { this->newHostName_ = nullptr;};
    inline string getNewHostName() const { DARABONBA_PTR_GET_DEFAULT(newHostName_, "") };
    inline ModifyDesktopHostNameRequest& setNewHostName(string newHostName) { DARABONBA_PTR_SET_VALUE(newHostName_, newHostName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDesktopHostNameRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the cloud computer.
    // 
    // This parameter is required.
    shared_ptr<string> desktopId_ {};
    // The new hostname of the cloud computer. The hostname must meet the following requirements:
    // 
    // *   The hostname must be 2 to 15 characters in length.
    // *   The hostname can contain only letters, digits, and hyphens (-). The hostname cannot start or end with a hyphen (-), contain consecutive hyphens (-), or contain only digits.
    // 
    // This parameter is required.
    shared_ptr<string> newHostName_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
