// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECHANGESETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECHANGESETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class DeleteChangeSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteChangeSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeSetId, changeSetId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteChangeSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeSetId, changeSetId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteChangeSetRequest() = default ;
    DeleteChangeSetRequest(const DeleteChangeSetRequest &) = default ;
    DeleteChangeSetRequest(DeleteChangeSetRequest &&) = default ;
    DeleteChangeSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteChangeSetRequest() = default ;
    DeleteChangeSetRequest& operator=(const DeleteChangeSetRequest &) = default ;
    DeleteChangeSetRequest& operator=(DeleteChangeSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeSetId_ != nullptr
        && this->regionId_ != nullptr; };
    // changeSetId Field Functions 
    bool hasChangeSetId() const { return this->changeSetId_ != nullptr;};
    void deleteChangeSetId() { this->changeSetId_ = nullptr;};
    inline string changeSetId() const { DARABONBA_PTR_GET_DEFAULT(changeSetId_, "") };
    inline DeleteChangeSetRequest& setChangeSetId(string changeSetId) { DARABONBA_PTR_SET_VALUE(changeSetId_, changeSetId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteChangeSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the change set.
    // 
    // This parameter is required.
    std::shared_ptr<string> changeSetId_ = nullptr;
    // The region ID of the change set. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
