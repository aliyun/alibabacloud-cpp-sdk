// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLEZONELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLEZONELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeAvailableResourceResponseBodyAvailableZoneList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBodyAvailableZoneList& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedComputeResource, supportedComputeResource_);
      DARABONBA_PTR_TO_JSON(SupportedMode, supportedMode_);
      DARABONBA_PTR_TO_JSON(SupportedStorageResource, supportedStorageResource_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBodyAvailableZoneList& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedComputeResource, supportedComputeResource_);
      DARABONBA_PTR_FROM_JSON(SupportedMode, supportedMode_);
      DARABONBA_PTR_FROM_JSON(SupportedStorageResource, supportedStorageResource_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
    };
    DescribeAvailableResourceResponseBodyAvailableZoneList() = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneList(const DescribeAvailableResourceResponseBodyAvailableZoneList &) = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneList(DescribeAvailableResourceResponseBodyAvailableZoneList &&) = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBodyAvailableZoneList() = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneList& operator=(const DescribeAvailableResourceResponseBodyAvailableZoneList &) = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneList& operator=(DescribeAvailableResourceResponseBodyAvailableZoneList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportedComputeResource_ != nullptr
        && this->supportedMode_ != nullptr && this->supportedStorageResource_ != nullptr && this->zoneId_ != nullptr && this->zoneName_ != nullptr; };
    // supportedComputeResource Field Functions 
    bool hasSupportedComputeResource() const { return this->supportedComputeResource_ != nullptr;};
    void deleteSupportedComputeResource() { this->supportedComputeResource_ = nullptr;};
    inline const vector<string> & supportedComputeResource() const { DARABONBA_PTR_GET_CONST(supportedComputeResource_, vector<string>) };
    inline vector<string> supportedComputeResource() { DARABONBA_PTR_GET(supportedComputeResource_, vector<string>) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneList& setSupportedComputeResource(const vector<string> & supportedComputeResource) { DARABONBA_PTR_SET_VALUE(supportedComputeResource_, supportedComputeResource) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneList& setSupportedComputeResource(vector<string> && supportedComputeResource) { DARABONBA_PTR_SET_RVALUE(supportedComputeResource_, supportedComputeResource) };


    // supportedMode Field Functions 
    bool hasSupportedMode() const { return this->supportedMode_ != nullptr;};
    void deleteSupportedMode() { this->supportedMode_ = nullptr;};
    inline const vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode> & supportedMode() const { DARABONBA_PTR_GET_CONST(supportedMode_, vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode>) };
    inline vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode> supportedMode() { DARABONBA_PTR_GET(supportedMode_, vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode>) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneList& setSupportedMode(const vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode> & supportedMode) { DARABONBA_PTR_SET_VALUE(supportedMode_, supportedMode) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneList& setSupportedMode(vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode> && supportedMode) { DARABONBA_PTR_SET_RVALUE(supportedMode_, supportedMode) };


    // supportedStorageResource Field Functions 
    bool hasSupportedStorageResource() const { return this->supportedStorageResource_ != nullptr;};
    void deleteSupportedStorageResource() { this->supportedStorageResource_ = nullptr;};
    inline const vector<string> & supportedStorageResource() const { DARABONBA_PTR_GET_CONST(supportedStorageResource_, vector<string>) };
    inline vector<string> supportedStorageResource() { DARABONBA_PTR_GET(supportedStorageResource_, vector<string>) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneList& setSupportedStorageResource(const vector<string> & supportedStorageResource) { DARABONBA_PTR_SET_VALUE(supportedStorageResource_, supportedStorageResource) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneList& setSupportedStorageResource(vector<string> && supportedStorageResource) { DARABONBA_PTR_SET_RVALUE(supportedStorageResource_, supportedStorageResource) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAvailableResourceResponseBodyAvailableZoneList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string zoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline DescribeAvailableResourceResponseBodyAvailableZoneList& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


  protected:
    // A reserved parameter.
    std::shared_ptr<vector<string>> supportedComputeResource_ = nullptr;
    // The supported modes.
    std::shared_ptr<vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode>> supportedMode_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<vector<string>> supportedStorageResource_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The name of the zone.
    std::shared_ptr<string> zoneName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
