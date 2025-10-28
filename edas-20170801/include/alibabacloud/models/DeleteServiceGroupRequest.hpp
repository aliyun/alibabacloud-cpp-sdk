// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESERVICEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESERVICEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DeleteServiceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteServiceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteServiceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
    };
    DeleteServiceGroupRequest() = default ;
    DeleteServiceGroupRequest(const DeleteServiceGroupRequest &) = default ;
    DeleteServiceGroupRequest(DeleteServiceGroupRequest &&) = default ;
    DeleteServiceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteServiceGroupRequest() = default ;
    DeleteServiceGroupRequest& operator=(const DeleteServiceGroupRequest &) = default ;
    DeleteServiceGroupRequest& operator=(DeleteServiceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DeleteServiceGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


  protected:
    // The ID of the service group that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
