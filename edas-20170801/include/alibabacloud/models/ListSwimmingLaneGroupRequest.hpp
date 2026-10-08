// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListSwimmingLaneGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSwimmingLaneGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(LogicalRegionId, logicalRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSwimmingLaneGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(LogicalRegionId, logicalRegionId_);
    };
    ListSwimmingLaneGroupRequest() = default ;
    ListSwimmingLaneGroupRequest(const ListSwimmingLaneGroupRequest &) = default ;
    ListSwimmingLaneGroupRequest(ListSwimmingLaneGroupRequest &&) = default ;
    ListSwimmingLaneGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSwimmingLaneGroupRequest() = default ;
    ListSwimmingLaneGroupRequest& operator=(const ListSwimmingLaneGroupRequest &) = default ;
    ListSwimmingLaneGroupRequest& operator=(ListSwimmingLaneGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->logicalRegionId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ListSwimmingLaneGroupRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // logicalRegionId Field Functions 
    bool hasLogicalRegionId() const { return this->logicalRegionId_ != nullptr;};
    void deleteLogicalRegionId() { this->logicalRegionId_ = nullptr;};
    inline string getLogicalRegionId() const { DARABONBA_PTR_GET_DEFAULT(logicalRegionId_, "") };
    inline ListSwimmingLaneGroupRequest& setLogicalRegionId(string logicalRegionId) { DARABONBA_PTR_SET_VALUE(logicalRegionId_, logicalRegionId) };


  protected:
    // The ID of the lane group.
    shared_ptr<int64_t> groupId_ {};
    // The ID of the namespace.
    // 
    // The ID of a custom namespace is in the region ID:namespace identifier format. Example: cn-beijing:test.<br>
    // The ID of the default namespace is in the region ID format. Example: cn-beijing.
    // 
    // This parameter is required.
    shared_ptr<string> logicalRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
