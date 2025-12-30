// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBOOTDESKTOPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REBOOTDESKTOPSREQUEST_HPP_
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
  class RebootDesktopsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebootDesktopsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(OsUpdate, osUpdate_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RebootDesktopsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(OsUpdate, osUpdate_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RebootDesktopsRequest() = default ;
    RebootDesktopsRequest(const RebootDesktopsRequest &) = default ;
    RebootDesktopsRequest(RebootDesktopsRequest &&) = default ;
    RebootDesktopsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebootDesktopsRequest() = default ;
    RebootDesktopsRequest& operator=(const RebootDesktopsRequest &) = default ;
    RebootDesktopsRequest& operator=(RebootDesktopsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->osUpdate_ == nullptr && this->regionId_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & getDesktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> getDesktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline RebootDesktopsRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline RebootDesktopsRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // osUpdate Field Functions 
    bool hasOsUpdate() const { return this->osUpdate_ != nullptr;};
    void deleteOsUpdate() { this->osUpdate_ = nullptr;};
    inline bool getOsUpdate() const { DARABONBA_PTR_GET_DEFAULT(osUpdate_, false) };
    inline RebootDesktopsRequest& setOsUpdate(bool osUpdate) { DARABONBA_PTR_SET_VALUE(osUpdate_, osUpdate) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RebootDesktopsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the cloud computers. You can specify 1 to 100 IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> desktopId_ {};
    shared_ptr<bool> osUpdate_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
