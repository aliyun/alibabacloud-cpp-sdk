// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENSRESPONSEBODYCENSCEN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENSRESPONSEBODYCENSCEN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCensResponseBodyCensCenCenBandwidthPackageIds.hpp>
#include <alibabacloud/models/DescribeCensResponseBodyCensCenTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCensResponseBodyCensCen : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCensResponseBodyCensCen& obj) { 
      DARABONBA_PTR_TO_JSON(CenBandwidthPackageIds, cenBandwidthPackageIds_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Ipv6Level, ipv6Level_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProtectionLevel, protectionLevel_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCensResponseBodyCensCen& obj) { 
      DARABONBA_PTR_FROM_JSON(CenBandwidthPackageIds, cenBandwidthPackageIds_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Ipv6Level, ipv6Level_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProtectionLevel, protectionLevel_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeCensResponseBodyCensCen() = default ;
    DescribeCensResponseBodyCensCen(const DescribeCensResponseBodyCensCen &) = default ;
    DescribeCensResponseBodyCensCen(DescribeCensResponseBodyCensCen &&) = default ;
    DescribeCensResponseBodyCensCen(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCensResponseBodyCensCen() = default ;
    DescribeCensResponseBodyCensCen& operator=(const DescribeCensResponseBodyCensCen &) = default ;
    DescribeCensResponseBodyCensCen& operator=(DescribeCensResponseBodyCensCen &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenBandwidthPackageIds_ != nullptr
        && this->cenId_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->ipv6Level_ != nullptr && this->name_ != nullptr
        && this->protectionLevel_ != nullptr && this->resourceGroupId_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr; };
    // cenBandwidthPackageIds Field Functions 
    bool hasCenBandwidthPackageIds() const { return this->cenBandwidthPackageIds_ != nullptr;};
    void deleteCenBandwidthPackageIds() { this->cenBandwidthPackageIds_ = nullptr;};
    inline const Models::DescribeCensResponseBodyCensCenCenBandwidthPackageIds & cenBandwidthPackageIds() const { DARABONBA_PTR_GET_CONST(cenBandwidthPackageIds_, Models::DescribeCensResponseBodyCensCenCenBandwidthPackageIds) };
    inline Models::DescribeCensResponseBodyCensCenCenBandwidthPackageIds cenBandwidthPackageIds() { DARABONBA_PTR_GET(cenBandwidthPackageIds_, Models::DescribeCensResponseBodyCensCenCenBandwidthPackageIds) };
    inline DescribeCensResponseBodyCensCen& setCenBandwidthPackageIds(const Models::DescribeCensResponseBodyCensCenCenBandwidthPackageIds & cenBandwidthPackageIds) { DARABONBA_PTR_SET_VALUE(cenBandwidthPackageIds_, cenBandwidthPackageIds) };
    inline DescribeCensResponseBodyCensCen& setCenBandwidthPackageIds(Models::DescribeCensResponseBodyCensCenCenBandwidthPackageIds && cenBandwidthPackageIds) { DARABONBA_PTR_SET_RVALUE(cenBandwidthPackageIds_, cenBandwidthPackageIds) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeCensResponseBodyCensCen& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeCensResponseBodyCensCen& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCensResponseBodyCensCen& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ipv6Level Field Functions 
    bool hasIpv6Level() const { return this->ipv6Level_ != nullptr;};
    void deleteIpv6Level() { this->ipv6Level_ = nullptr;};
    inline string ipv6Level() const { DARABONBA_PTR_GET_DEFAULT(ipv6Level_, "") };
    inline DescribeCensResponseBodyCensCen& setIpv6Level(string ipv6Level) { DARABONBA_PTR_SET_VALUE(ipv6Level_, ipv6Level) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCensResponseBodyCensCen& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protectionLevel Field Functions 
    bool hasProtectionLevel() const { return this->protectionLevel_ != nullptr;};
    void deleteProtectionLevel() { this->protectionLevel_ = nullptr;};
    inline string protectionLevel() const { DARABONBA_PTR_GET_DEFAULT(protectionLevel_, "") };
    inline DescribeCensResponseBodyCensCen& setProtectionLevel(string protectionLevel) { DARABONBA_PTR_SET_VALUE(protectionLevel_, protectionLevel) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCensResponseBodyCensCen& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCensResponseBodyCensCen& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeCensResponseBodyCensCenTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeCensResponseBodyCensCenTags) };
    inline Models::DescribeCensResponseBodyCensCenTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeCensResponseBodyCensCenTags) };
    inline DescribeCensResponseBodyCensCen& setTags(const Models::DescribeCensResponseBodyCensCenTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeCensResponseBodyCensCen& setTags(Models::DescribeCensResponseBodyCensCenTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The IDs of the bandwidth plans that are associated with the CEN instance.
    std::shared_ptr<Models::DescribeCensResponseBodyCensCenCenBandwidthPackageIds> cenBandwidthPackageIds_ = nullptr;
    // The CEN instance ID.
    std::shared_ptr<string> cenId_ = nullptr;
    // The time when the CEN instance was created.
    // 
    // The time follows the ISO8601 standard in the `YYYY-MM-DDThh:mmZ` format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the CEN instance.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether IPv6 is enabled for the CEN instance.
    // 
    // *   **ENABLE**
    // *   **DISABLED**
    std::shared_ptr<string> ipv6Level_ = nullptr;
    // The CEN instance name.
    std::shared_ptr<string> name_ = nullptr;
    // The level of CIDR block overlapping.
    // 
    // **REDUCED**: Overlapped CIDR blocks are allowed. This value specifies that CIDR blocks can overlap but CIDR blocks cannot be duplicates.
    std::shared_ptr<string> protectionLevel_ = nullptr;
    // The ID of the resource group to which the CEN instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the CEN instance.
    // 
    // *   **Creating**
    // *   **Active**
    // *   **Deleting**
    std::shared_ptr<string> status_ = nullptr;
    // The IDs of the tags that are added to the CEN instance.
    std::shared_ptr<Models::DescribeCensResponseBodyCensCenTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
