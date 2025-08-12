// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHYBRIDMONITORSLSGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHYBRIDMONITORSLSGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteHybridMonitorSLSGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHybridMonitorSLSGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SLSGroupName, SLSGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHybridMonitorSLSGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SLSGroupName, SLSGroupName_);
    };
    DeleteHybridMonitorSLSGroupRequest() = default ;
    DeleteHybridMonitorSLSGroupRequest(const DeleteHybridMonitorSLSGroupRequest &) = default ;
    DeleteHybridMonitorSLSGroupRequest(DeleteHybridMonitorSLSGroupRequest &&) = default ;
    DeleteHybridMonitorSLSGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHybridMonitorSLSGroupRequest() = default ;
    DeleteHybridMonitorSLSGroupRequest& operator=(const DeleteHybridMonitorSLSGroupRequest &) = default ;
    DeleteHybridMonitorSLSGroupRequest& operator=(DeleteHybridMonitorSLSGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->SLSGroupName_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteHybridMonitorSLSGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // SLSGroupName Field Functions 
    bool hasSLSGroupName() const { return this->SLSGroupName_ != nullptr;};
    void deleteSLSGroupName() { this->SLSGroupName_ = nullptr;};
    inline string SLSGroupName() const { DARABONBA_PTR_GET_DEFAULT(SLSGroupName_, "") };
    inline DeleteHybridMonitorSLSGroupRequest& setSLSGroupName(string SLSGroupName) { DARABONBA_PTR_SET_VALUE(SLSGroupName_, SLSGroupName) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the Logstore group.
    // 
    // For information about how to obtain the name of a Logstore group, see [DescribeHybridMonitorSLSGroup](https://help.aliyun.com/document_detail/429526.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> SLSGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
