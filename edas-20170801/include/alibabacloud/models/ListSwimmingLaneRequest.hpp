// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSWIMMINGLANEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSWIMMINGLANEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListSwimmingLaneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSwimmingLaneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSwimmingLaneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
    };
    ListSwimmingLaneRequest() = default ;
    ListSwimmingLaneRequest(const ListSwimmingLaneRequest &) = default ;
    ListSwimmingLaneRequest(ListSwimmingLaneRequest &&) = default ;
    ListSwimmingLaneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSwimmingLaneRequest() = default ;
    ListSwimmingLaneRequest& operator=(const ListSwimmingLaneRequest &) = default ;
    ListSwimmingLaneRequest& operator=(ListSwimmingLaneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ListSwimmingLaneRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


  protected:
    // The ID of the lane group.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> groupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
