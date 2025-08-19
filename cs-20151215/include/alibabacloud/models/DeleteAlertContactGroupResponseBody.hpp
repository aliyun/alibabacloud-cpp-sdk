// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTCONTACTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTCONTACTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DeleteAlertContactGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertContactGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(msg, msg_);
      DARABONBA_PTR_TO_JSON(contact_group_id, contactGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertContactGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(msg, msg_);
      DARABONBA_PTR_FROM_JSON(contact_group_id, contactGroupId_);
    };
    DeleteAlertContactGroupResponseBody() = default ;
    DeleteAlertContactGroupResponseBody(const DeleteAlertContactGroupResponseBody &) = default ;
    DeleteAlertContactGroupResponseBody(DeleteAlertContactGroupResponseBody &&) = default ;
    DeleteAlertContactGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertContactGroupResponseBody() = default ;
    DeleteAlertContactGroupResponseBody& operator=(const DeleteAlertContactGroupResponseBody &) = default ;
    DeleteAlertContactGroupResponseBody& operator=(DeleteAlertContactGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->msg_ != nullptr && this->contactGroupId_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline DeleteAlertContactGroupResponseBody& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DeleteAlertContactGroupResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // contactGroupId Field Functions 
    bool hasContactGroupId() const { return this->contactGroupId_ != nullptr;};
    void deleteContactGroupId() { this->contactGroupId_ = nullptr;};
    inline string contactGroupId() const { DARABONBA_PTR_GET_DEFAULT(contactGroupId_, "") };
    inline DeleteAlertContactGroupResponseBody& setContactGroupId(string contactGroupId) { DARABONBA_PTR_SET_VALUE(contactGroupId_, contactGroupId) };


  protected:
    // The deletion status.
    // 
    // *   true: The alert contact group was deleted.
    // *   false: The alert contact group failed to be deleted.
    std::shared_ptr<bool> status_ = nullptr;
    // The error message returned if the call fails.
    std::shared_ptr<string> msg_ = nullptr;
    // The alert contact group ID.
    std::shared_ptr<string> contactGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
