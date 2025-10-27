// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLEZONELISTSUPPORTEDMODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLEZONELISTSUPPORTEDMODE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(SupportedSerialList, supportedSerialList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(SupportedSerialList, supportedSerialList_);
    };
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode() = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode(const DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode &) = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode(DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode &&) = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode() = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode& operator=(const DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode &) = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode& operator=(DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr
        && return this->supportedSerialList_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // supportedSerialList Field Functions 
    bool hasSupportedSerialList() const { return this->supportedSerialList_ != nullptr;};
    void deleteSupportedSerialList() { this->supportedSerialList_ = nullptr;};
    inline const vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList> & supportedSerialList() const { DARABONBA_PTR_GET_CONST(supportedSerialList_, vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList>) };
    inline vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList> supportedSerialList() { DARABONBA_PTR_GET(supportedSerialList_, vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList>) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode& setSupportedSerialList(const vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList> & supportedSerialList) { DARABONBA_PTR_SET_VALUE(supportedSerialList_, supportedSerialList) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode& setSupportedSerialList(vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList> && supportedSerialList) { DARABONBA_PTR_SET_RVALUE(supportedSerialList_, supportedSerialList) };


  protected:
    // The supported mode. Valid values:
    // 
    // *   **flexible**: elastic mode.
    // *   **reserver**: reserved mode.
    std::shared_ptr<string> mode_ = nullptr;
    // The supported editions.
    std::shared_ptr<vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList>> supportedSerialList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
