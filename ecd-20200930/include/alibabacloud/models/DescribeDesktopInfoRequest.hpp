// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPINFOREQUEST_HPP_
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
  class DescribeDesktopInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(NeedExtraInfo, needExtraInfo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(NeedExtraInfo, needExtraInfo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeDesktopInfoRequest() = default ;
    DescribeDesktopInfoRequest(const DescribeDesktopInfoRequest &) = default ;
    DescribeDesktopInfoRequest(DescribeDesktopInfoRequest &&) = default ;
    DescribeDesktopInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopInfoRequest() = default ;
    DescribeDesktopInfoRequest& operator=(const DescribeDesktopInfoRequest &) = default ;
    DescribeDesktopInfoRequest& operator=(DescribeDesktopInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desktopId_ != nullptr
        && this->needExtraInfo_ != nullptr && this->regionId_ != nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & desktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> desktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline DescribeDesktopInfoRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline DescribeDesktopInfoRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // needExtraInfo Field Functions 
    bool hasNeedExtraInfo() const { return this->needExtraInfo_ != nullptr;};
    void deleteNeedExtraInfo() { this->needExtraInfo_ = nullptr;};
    inline bool needExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(needExtraInfo_, false) };
    inline DescribeDesktopInfoRequest& setNeedExtraInfo(bool needExtraInfo) { DARABONBA_PTR_SET_VALUE(needExtraInfo_, needExtraInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDesktopInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the cloud computers. You can specify 1 to 100 IDs.
    std::shared_ptr<vector<string>> desktopId_ = nullptr;
    std::shared_ptr<bool> needExtraInfo_ = nullptr;
    // The ID of the region. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
