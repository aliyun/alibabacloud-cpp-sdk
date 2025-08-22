// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTACTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTACTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteContactGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContactGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupId, contactGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContactGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupId, contactGroupId_);
    };
    DeleteContactGroupRequest() = default ;
    DeleteContactGroupRequest(const DeleteContactGroupRequest &) = default ;
    DeleteContactGroupRequest(DeleteContactGroupRequest &&) = default ;
    DeleteContactGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContactGroupRequest() = default ;
    DeleteContactGroupRequest& operator=(const DeleteContactGroupRequest &) = default ;
    DeleteContactGroupRequest& operator=(DeleteContactGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactGroupId_ != nullptr; };
    // contactGroupId Field Functions 
    bool hasContactGroupId() const { return this->contactGroupId_ != nullptr;};
    void deleteContactGroupId() { this->contactGroupId_ = nullptr;};
    inline int64_t contactGroupId() const { DARABONBA_PTR_GET_DEFAULT(contactGroupId_, 0L) };
    inline DeleteContactGroupRequest& setContactGroupId(int64_t contactGroupId) { DARABONBA_PTR_SET_VALUE(contactGroupId_, contactGroupId) };


  protected:
    // The ID of the alert contact group.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> contactGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
