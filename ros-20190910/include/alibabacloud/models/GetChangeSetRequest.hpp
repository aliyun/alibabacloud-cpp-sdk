// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHANGESETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCHANGESETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetChangeSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChangeSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeSetId, changeSetId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ShowTemplate, showTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, GetChangeSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeSetId, changeSetId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ShowTemplate, showTemplate_);
    };
    GetChangeSetRequest() = default ;
    GetChangeSetRequest(const GetChangeSetRequest &) = default ;
    GetChangeSetRequest(GetChangeSetRequest &&) = default ;
    GetChangeSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChangeSetRequest() = default ;
    GetChangeSetRequest& operator=(const GetChangeSetRequest &) = default ;
    GetChangeSetRequest& operator=(GetChangeSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeSetId_ != nullptr
        && this->regionId_ != nullptr && this->showTemplate_ != nullptr; };
    // changeSetId Field Functions 
    bool hasChangeSetId() const { return this->changeSetId_ != nullptr;};
    void deleteChangeSetId() { this->changeSetId_ = nullptr;};
    inline string changeSetId() const { DARABONBA_PTR_GET_DEFAULT(changeSetId_, "") };
    inline GetChangeSetRequest& setChangeSetId(string changeSetId) { DARABONBA_PTR_SET_VALUE(changeSetId_, changeSetId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetChangeSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // showTemplate Field Functions 
    bool hasShowTemplate() const { return this->showTemplate_ != nullptr;};
    void deleteShowTemplate() { this->showTemplate_ = nullptr;};
    inline bool showTemplate() const { DARABONBA_PTR_GET_DEFAULT(showTemplate_, false) };
    inline GetChangeSetRequest& setShowTemplate(bool showTemplate) { DARABONBA_PTR_SET_VALUE(showTemplate_, showTemplate) };


  protected:
    // The ID of the change set.
    // 
    // This parameter is required.
    std::shared_ptr<string> changeSetId_ = nullptr;
    // The region ID of the change set. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to obtain the template. Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> showTemplate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
