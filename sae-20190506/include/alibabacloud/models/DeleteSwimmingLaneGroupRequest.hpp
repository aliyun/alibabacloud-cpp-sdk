// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESWIMMINGLANEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESWIMMINGLANEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DeleteSwimmingLaneGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSwimmingLaneGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSwimmingLaneGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    DeleteSwimmingLaneGroupRequest() = default ;
    DeleteSwimmingLaneGroupRequest(const DeleteSwimmingLaneGroupRequest &) = default ;
    DeleteSwimmingLaneGroupRequest(DeleteSwimmingLaneGroupRequest &&) = default ;
    DeleteSwimmingLaneGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSwimmingLaneGroupRequest() = default ;
    DeleteSwimmingLaneGroupRequest& operator=(const DeleteSwimmingLaneGroupRequest &) = default ;
    DeleteSwimmingLaneGroupRequest& operator=(DeleteSwimmingLaneGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->namespaceId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DeleteSwimmingLaneGroupRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline DeleteSwimmingLaneGroupRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // The ID of the lane group.
    shared_ptr<int64_t> groupId_ {};
    // The ID of a namespace.
    shared_ptr<string> namespaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
