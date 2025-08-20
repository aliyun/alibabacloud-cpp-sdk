// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATESCRATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATESCRATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateScratchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateScratchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ShowDataOption, showDataOption_);
      DARABONBA_PTR_TO_JSON(TemplateScratchId, templateScratchId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateScratchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ShowDataOption, showDataOption_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchId, templateScratchId_);
    };
    GetTemplateScratchRequest() = default ;
    GetTemplateScratchRequest(const GetTemplateScratchRequest &) = default ;
    GetTemplateScratchRequest(GetTemplateScratchRequest &&) = default ;
    GetTemplateScratchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateScratchRequest() = default ;
    GetTemplateScratchRequest& operator=(const GetTemplateScratchRequest &) = default ;
    GetTemplateScratchRequest& operator=(GetTemplateScratchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->showDataOption_ != nullptr && this->templateScratchId_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTemplateScratchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // showDataOption Field Functions 
    bool hasShowDataOption() const { return this->showDataOption_ != nullptr;};
    void deleteShowDataOption() { this->showDataOption_ = nullptr;};
    inline string showDataOption() const { DARABONBA_PTR_GET_DEFAULT(showDataOption_, "") };
    inline GetTemplateScratchRequest& setShowDataOption(string showDataOption) { DARABONBA_PTR_SET_VALUE(showDataOption_, showDataOption) };


    // templateScratchId Field Functions 
    bool hasTemplateScratchId() const { return this->templateScratchId_ != nullptr;};
    void deleteTemplateScratchId() { this->templateScratchId_ = nullptr;};
    inline string templateScratchId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchId_, "") };
    inline GetTemplateScratchRequest& setTemplateScratchId(string templateScratchId) { DARABONBA_PTR_SET_VALUE(templateScratchId_, templateScratchId) };


  protected:
    // The region ID of the resource scenario.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The data display option. Valid values:
    // 
    // *   Sources: displays only the data of source nodes. This setting takes effect only when TemplateScratchType is set to ArchitectureDetection.
    // *   Source: displays only the data of the source node. This setting takes effect only when TemplateScratchType is not set to ArchitectureDetection.
    // *   Provisions: displays only the data of new nodes. This setting takes effect only when TemplateScratchType is not set to ArchitectureDetection.
    // *   All: displays all data.
    // 
    // For more information about source nodes and new nodes, see [Overview](https://help.aliyun.com/document_detail/352074.html).
    // 
    // >  If you do not specify this parameter, the node data is not displayed.
    std::shared_ptr<string> showDataOption_ = nullptr;
    // The ID of the resource scenario.
    std::shared_ptr<string> templateScratchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
