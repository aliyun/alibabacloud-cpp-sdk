// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETEMPLATESCRATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETEMPLATESCRATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class DeleteTemplateScratchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTemplateScratchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplateScratchId, templateScratchId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTemplateScratchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchId, templateScratchId_);
    };
    DeleteTemplateScratchRequest() = default ;
    DeleteTemplateScratchRequest(const DeleteTemplateScratchRequest &) = default ;
    DeleteTemplateScratchRequest(DeleteTemplateScratchRequest &&) = default ;
    DeleteTemplateScratchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTemplateScratchRequest() = default ;
    DeleteTemplateScratchRequest& operator=(const DeleteTemplateScratchRequest &) = default ;
    DeleteTemplateScratchRequest& operator=(DeleteTemplateScratchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->templateScratchId_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteTemplateScratchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateScratchId Field Functions 
    bool hasTemplateScratchId() const { return this->templateScratchId_ != nullptr;};
    void deleteTemplateScratchId() { this->templateScratchId_ = nullptr;};
    inline string templateScratchId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchId_, "") };
    inline DeleteTemplateScratchRequest& setTemplateScratchId(string templateScratchId) { DARABONBA_PTR_SET_VALUE(templateScratchId_, templateScratchId) };


  protected:
    // The region ID of the scenario.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the scenario.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateScratchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
