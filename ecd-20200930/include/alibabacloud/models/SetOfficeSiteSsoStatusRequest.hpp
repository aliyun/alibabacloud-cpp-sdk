// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETOFFICESITESSOSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETOFFICESITESSOSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class SetOfficeSiteSsoStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetOfficeSiteSsoStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableSso, enableSso_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetOfficeSiteSsoStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableSso, enableSso_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetOfficeSiteSsoStatusRequest() = default ;
    SetOfficeSiteSsoStatusRequest(const SetOfficeSiteSsoStatusRequest &) = default ;
    SetOfficeSiteSsoStatusRequest(SetOfficeSiteSsoStatusRequest &&) = default ;
    SetOfficeSiteSsoStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetOfficeSiteSsoStatusRequest() = default ;
    SetOfficeSiteSsoStatusRequest& operator=(const SetOfficeSiteSsoStatusRequest &) = default ;
    SetOfficeSiteSsoStatusRequest& operator=(SetOfficeSiteSsoStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableSso_ != nullptr
        && this->officeSiteId_ != nullptr && this->regionId_ != nullptr; };
    // enableSso Field Functions 
    bool hasEnableSso() const { return this->enableSso_ != nullptr;};
    void deleteEnableSso() { this->enableSso_ = nullptr;};
    inline bool enableSso() const { DARABONBA_PTR_GET_DEFAULT(enableSso_, false) };
    inline SetOfficeSiteSsoStatusRequest& setEnableSso(bool enableSso) { DARABONBA_PTR_SET_VALUE(enableSso_, enableSso) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline SetOfficeSiteSsoStatusRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetOfficeSiteSsoStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to enable SSO.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // This parameter is required.
    std::shared_ptr<bool> enableSso_ = nullptr;
    // The workspace ID.
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
