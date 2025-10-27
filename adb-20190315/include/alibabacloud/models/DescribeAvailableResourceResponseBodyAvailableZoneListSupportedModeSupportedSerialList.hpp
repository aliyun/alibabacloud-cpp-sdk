// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLEZONELISTSUPPORTEDMODESUPPORTEDSERIALLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLEZONELISTSUPPORTEDMODESUPPORTEDSERIALLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource.hpp>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList& obj) { 
      DARABONBA_PTR_TO_JSON(Serial, serial_);
      DARABONBA_PTR_TO_JSON(SupportedFlexibleResource, supportedFlexibleResource_);
      DARABONBA_PTR_TO_JSON(SupportedInstanceClassList, supportedInstanceClassList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList& obj) { 
      DARABONBA_PTR_FROM_JSON(Serial, serial_);
      DARABONBA_PTR_FROM_JSON(SupportedFlexibleResource, supportedFlexibleResource_);
      DARABONBA_PTR_FROM_JSON(SupportedInstanceClassList, supportedInstanceClassList_);
    };
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList() = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList(const DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList &) = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList(DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList &&) = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList() = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList& operator=(const DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList &) = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList& operator=(DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serial_ == nullptr
        && return this->supportedFlexibleResource_ == nullptr && return this->supportedInstanceClassList_ == nullptr; };
    // serial Field Functions 
    bool hasSerial() const { return this->serial_ != nullptr;};
    void deleteSerial() { this->serial_ = nullptr;};
    inline string serial() const { DARABONBA_PTR_GET_DEFAULT(serial_, "") };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList& setSerial(string serial) { DARABONBA_PTR_SET_VALUE(serial_, serial) };


    // supportedFlexibleResource Field Functions 
    bool hasSupportedFlexibleResource() const { return this->supportedFlexibleResource_ != nullptr;};
    void deleteSupportedFlexibleResource() { this->supportedFlexibleResource_ = nullptr;};
    inline const vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource> & supportedFlexibleResource() const { DARABONBA_PTR_GET_CONST(supportedFlexibleResource_, vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource>) };
    inline vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource> supportedFlexibleResource() { DARABONBA_PTR_GET(supportedFlexibleResource_, vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource>) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList& setSupportedFlexibleResource(const vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource> & supportedFlexibleResource) { DARABONBA_PTR_SET_VALUE(supportedFlexibleResource_, supportedFlexibleResource) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList& setSupportedFlexibleResource(vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource> && supportedFlexibleResource) { DARABONBA_PTR_SET_RVALUE(supportedFlexibleResource_, supportedFlexibleResource) };


    // supportedInstanceClassList Field Functions 
    bool hasSupportedInstanceClassList() const { return this->supportedInstanceClassList_ != nullptr;};
    void deleteSupportedInstanceClassList() { this->supportedInstanceClassList_ = nullptr;};
    inline const vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList> & supportedInstanceClassList() const { DARABONBA_PTR_GET_CONST(supportedInstanceClassList_, vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList>) };
    inline vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList> supportedInstanceClassList() { DARABONBA_PTR_GET(supportedInstanceClassList_, vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList>) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList& setSupportedInstanceClassList(const vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList> & supportedInstanceClassList) { DARABONBA_PTR_SET_VALUE(supportedInstanceClassList_, supportedInstanceClassList) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList& setSupportedInstanceClassList(vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList> && supportedInstanceClassList) { DARABONBA_PTR_SET_RVALUE(supportedInstanceClassList_, supportedInstanceClassList) };


  protected:
    // The supported edition. Valid values:
    // 
    // *   **basic**: Basic Edition.
    // *   **cluster**: Cluster Edition.
    // *   **mixed_storage**: elastic mode for Cluster Edition.
    std::shared_ptr<string> serial_ = nullptr;
    // The supported resources in elastic mode.
    std::shared_ptr<vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource>> supportedFlexibleResource_ = nullptr;
    // The supported resources in reserved mode.
    std::shared_ptr<vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList>> supportedInstanceClassList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
