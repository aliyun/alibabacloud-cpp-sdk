// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTACTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTACTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteContactGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContactGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContactGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
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
    virtual bool empty() const override { return this->contactGroupName_ == nullptr; };
    // contactGroupName Field Functions 
    bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
    void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
    inline string getContactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
    inline DeleteContactGroupRequest& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


  protected:
    // The name of the alert contact group.
    // 
    // This parameter is required.
    shared_ptr<string> contactGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
