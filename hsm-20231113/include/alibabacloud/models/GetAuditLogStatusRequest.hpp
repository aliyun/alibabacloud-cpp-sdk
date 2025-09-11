// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDITLOGSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUDITLOGSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class GetAuditLogStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuditLogStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GetOssBucket, getOssBucket_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuditLogStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GetOssBucket, getOssBucket_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetAuditLogStatusRequest() = default ;
    GetAuditLogStatusRequest(const GetAuditLogStatusRequest &) = default ;
    GetAuditLogStatusRequest(GetAuditLogStatusRequest &&) = default ;
    GetAuditLogStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuditLogStatusRequest() = default ;
    GetAuditLogStatusRequest& operator=(const GetAuditLogStatusRequest &) = default ;
    GetAuditLogStatusRequest& operator=(GetAuditLogStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->getOssBucket_ != nullptr
        && this->regionId_ != nullptr; };
    // getOssBucket Field Functions 
    bool hasGetOssBucket() const { return this->getOssBucket_ != nullptr;};
    void deleteGetOssBucket() { this->getOssBucket_ = nullptr;};
    inline bool getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(getOssBucket_, false) };
    inline GetAuditLogStatusRequest& setGetOssBucket(bool getOssBucket) { DARABONBA_PTR_SET_VALUE(getOssBucket_, getOssBucket) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAuditLogStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to obtain the list of OSS buckets that can be used to store audit logs. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> getOssBucket_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
