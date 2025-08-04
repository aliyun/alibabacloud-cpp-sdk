// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYOFFICESITECROSSDESKTOPACCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYOFFICESITECROSSDESKTOPACCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyOfficeSiteCrossDesktopAccessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyOfficeSiteCrossDesktopAccessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableCrossDesktopAccess, enableCrossDesktopAccess_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyOfficeSiteCrossDesktopAccessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableCrossDesktopAccess, enableCrossDesktopAccess_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyOfficeSiteCrossDesktopAccessRequest() = default ;
    ModifyOfficeSiteCrossDesktopAccessRequest(const ModifyOfficeSiteCrossDesktopAccessRequest &) = default ;
    ModifyOfficeSiteCrossDesktopAccessRequest(ModifyOfficeSiteCrossDesktopAccessRequest &&) = default ;
    ModifyOfficeSiteCrossDesktopAccessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyOfficeSiteCrossDesktopAccessRequest() = default ;
    ModifyOfficeSiteCrossDesktopAccessRequest& operator=(const ModifyOfficeSiteCrossDesktopAccessRequest &) = default ;
    ModifyOfficeSiteCrossDesktopAccessRequest& operator=(ModifyOfficeSiteCrossDesktopAccessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableCrossDesktopAccess_ != nullptr
        && this->officeSiteId_ != nullptr && this->regionId_ != nullptr; };
    // enableCrossDesktopAccess Field Functions 
    bool hasEnableCrossDesktopAccess() const { return this->enableCrossDesktopAccess_ != nullptr;};
    void deleteEnableCrossDesktopAccess() { this->enableCrossDesktopAccess_ = nullptr;};
    inline bool enableCrossDesktopAccess() const { DARABONBA_PTR_GET_DEFAULT(enableCrossDesktopAccess_, false) };
    inline ModifyOfficeSiteCrossDesktopAccessRequest& setEnableCrossDesktopAccess(bool enableCrossDesktopAccess) { DARABONBA_PTR_SET_VALUE(enableCrossDesktopAccess_, enableCrossDesktopAccess) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ModifyOfficeSiteCrossDesktopAccessRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyOfficeSiteCrossDesktopAccessRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to enable the communication between cloud computers in an office network. If you enable the communication between cloud computers in an office network, the cloud computers can access each other.
    // 
    // This parameter is required.
    std::shared_ptr<bool> enableCrossDesktopAccess_ = nullptr;
    // The office network ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
