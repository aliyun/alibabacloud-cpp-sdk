// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(NewDesktopName, newDesktopName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(NewDesktopName, newDesktopName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyDesktopNameRequest() = default ;
    ModifyDesktopNameRequest(const ModifyDesktopNameRequest &) = default ;
    ModifyDesktopNameRequest(ModifyDesktopNameRequest &&) = default ;
    ModifyDesktopNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopNameRequest() = default ;
    ModifyDesktopNameRequest& operator=(const ModifyDesktopNameRequest &) = default ;
    ModifyDesktopNameRequest& operator=(ModifyDesktopNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && return this->newDesktopName_ == nullptr && return this->regionId_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline ModifyDesktopNameRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // newDesktopName Field Functions 
    bool hasNewDesktopName() const { return this->newDesktopName_ != nullptr;};
    void deleteNewDesktopName() { this->newDesktopName_ = nullptr;};
    inline string newDesktopName() const { DARABONBA_PTR_GET_DEFAULT(newDesktopName_, "") };
    inline ModifyDesktopNameRequest& setNewDesktopName(string newDesktopName) { DARABONBA_PTR_SET_VALUE(newDesktopName_, newDesktopName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDesktopNameRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the cloud computer.
    // 
    // This parameter is required.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The new name of the cloud computer. The name of the cloud computer must meet the following requirements:
    // 
    // *   The name must be 1 to 64 characters in length.
    // *   The name must start with a letter but cannot start with `http://` or `https://`.
    // *   The name can only contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> newDesktopName_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
