// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENPRIVATEZONEROUTESRESPONSEBODYPRIVATEZONEINFOSPRIVATEZONEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENPRIVATEZONEROUTESRESPONSEBODYPRIVATEZONEINFOSPRIVATEZONEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AccessRegionId, accessRegionId_);
      DARABONBA_PTR_TO_JSON(HostRegionId, hostRegionId_);
      DARABONBA_PTR_TO_JSON(HostVpcId, hostVpcId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessRegionId, accessRegionId_);
      DARABONBA_PTR_FROM_JSON(HostRegionId, hostRegionId_);
      DARABONBA_PTR_FROM_JSON(HostVpcId, hostVpcId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo() = default ;
    DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo(const DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo &) = default ;
    DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo(DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo &&) = default ;
    DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo() = default ;
    DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo& operator=(const DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo &) = default ;
    DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo& operator=(DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessRegionId_ != nullptr
        && this->hostRegionId_ != nullptr && this->hostVpcId_ != nullptr && this->status_ != nullptr; };
    // accessRegionId Field Functions 
    bool hasAccessRegionId() const { return this->accessRegionId_ != nullptr;};
    void deleteAccessRegionId() { this->accessRegionId_ = nullptr;};
    inline string accessRegionId() const { DARABONBA_PTR_GET_DEFAULT(accessRegionId_, "") };
    inline DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo& setAccessRegionId(string accessRegionId) { DARABONBA_PTR_SET_VALUE(accessRegionId_, accessRegionId) };


    // hostRegionId Field Functions 
    bool hasHostRegionId() const { return this->hostRegionId_ != nullptr;};
    void deleteHostRegionId() { this->hostRegionId_ = nullptr;};
    inline string hostRegionId() const { DARABONBA_PTR_GET_DEFAULT(hostRegionId_, "") };
    inline DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo& setHostRegionId(string hostRegionId) { DARABONBA_PTR_SET_VALUE(hostRegionId_, hostRegionId) };


    // hostVpcId Field Functions 
    bool hasHostVpcId() const { return this->hostVpcId_ != nullptr;};
    void deleteHostVpcId() { this->hostVpcId_ = nullptr;};
    inline string hostVpcId() const { DARABONBA_PTR_GET_DEFAULT(hostVpcId_, "") };
    inline DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo& setHostVpcId(string hostVpcId) { DARABONBA_PTR_SET_VALUE(hostVpcId_, hostVpcId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the region where PrivateZone is accessed.
    std::shared_ptr<string> accessRegionId_ = nullptr;
    // The ID of the region where PrivateZone is deployed.
    std::shared_ptr<string> hostRegionId_ = nullptr;
    // The ID of the VPC that is associated with PrivateZone.
    std::shared_ptr<string> hostVpcId_ = nullptr;
    // The status of PrivateZone. Valid values:
    // 
    // *   **Creating**: being created
    // *   **Active**: available
    // *   **Deleting**: being deleted
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
