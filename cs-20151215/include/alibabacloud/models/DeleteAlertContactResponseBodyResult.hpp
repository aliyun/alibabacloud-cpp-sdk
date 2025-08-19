// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTCONTACTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTCONTACTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DeleteAlertContactResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertContactResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(msg, msg_);
      DARABONBA_PTR_TO_JSON(contact_id, contactId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertContactResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(msg, msg_);
      DARABONBA_PTR_FROM_JSON(contact_id, contactId_);
    };
    DeleteAlertContactResponseBodyResult() = default ;
    DeleteAlertContactResponseBodyResult(const DeleteAlertContactResponseBodyResult &) = default ;
    DeleteAlertContactResponseBodyResult(DeleteAlertContactResponseBodyResult &&) = default ;
    DeleteAlertContactResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertContactResponseBodyResult() = default ;
    DeleteAlertContactResponseBodyResult& operator=(const DeleteAlertContactResponseBodyResult &) = default ;
    DeleteAlertContactResponseBodyResult& operator=(DeleteAlertContactResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->msg_ != nullptr && this->contactId_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline DeleteAlertContactResponseBodyResult& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DeleteAlertContactResponseBodyResult& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline DeleteAlertContactResponseBodyResult& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


  protected:
    // The deletion status.
    // 
    // *   true: The alert contact was deleted.
    // *   false: The alert contact failed to be deleted.
    std::shared_ptr<bool> status_ = nullptr;
    // The error message returned if the call fails.
    std::shared_ptr<string> msg_ = nullptr;
    // An alert contact ID.
    std::shared_ptr<string> contactId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
