// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATEDESKTOPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MIGRATEDESKTOPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class MigrateDesktopsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateDesktopsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetOfficeSiteId, targetOfficeSiteId_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateDesktopsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetOfficeSiteId, targetOfficeSiteId_);
    };
    MigrateDesktopsRequest() = default ;
    MigrateDesktopsRequest(const MigrateDesktopsRequest &) = default ;
    MigrateDesktopsRequest(MigrateDesktopsRequest &&) = default ;
    MigrateDesktopsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateDesktopsRequest() = default ;
    MigrateDesktopsRequest& operator=(const MigrateDesktopsRequest &) = default ;
    MigrateDesktopsRequest& operator=(MigrateDesktopsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && return this->regionId_ == nullptr && return this->targetOfficeSiteId_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & desktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> desktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline MigrateDesktopsRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline MigrateDesktopsRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline MigrateDesktopsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetOfficeSiteId Field Functions 
    bool hasTargetOfficeSiteId() const { return this->targetOfficeSiteId_ != nullptr;};
    void deleteTargetOfficeSiteId() { this->targetOfficeSiteId_ = nullptr;};
    inline string targetOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(targetOfficeSiteId_, "") };
    inline MigrateDesktopsRequest& setTargetOfficeSiteId(string targetOfficeSiteId) { DARABONBA_PTR_SET_VALUE(targetOfficeSiteId_, targetOfficeSiteId) };


  protected:
    // The IDs of the cloud computers. You can specify 1 to 100 IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> desktopId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the destination office network.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetOfficeSiteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
