// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCDNSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCDNSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ModifyCdnServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCdnServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCdnServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    ModifyCdnServiceRequest() = default ;
    ModifyCdnServiceRequest(const ModifyCdnServiceRequest &) = default ;
    ModifyCdnServiceRequest(ModifyCdnServiceRequest &&) = default ;
    ModifyCdnServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCdnServiceRequest() = default ;
    ModifyCdnServiceRequest& operator=(const ModifyCdnServiceRequest &) = default ;
    ModifyCdnServiceRequest& operator=(ModifyCdnServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->internetChargeType_ != nullptr
        && this->ownerId_ != nullptr && this->securityToken_ != nullptr; };
    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline ModifyCdnServiceRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCdnServiceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyCdnServiceRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The new metering method for Alibaba Cloud CDN. Valid values:
    // 
    // *   **PayByTraffic**: pay-by-data-transfer
    // *   **PayByBandwidth**: pay-by-bandwidth
    // 
    // This parameter is required.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
