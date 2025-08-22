// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
    };
    DeleteContactRequest() = default ;
    DeleteContactRequest(const DeleteContactRequest &) = default ;
    DeleteContactRequest(DeleteContactRequest &&) = default ;
    DeleteContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContactRequest() = default ;
    DeleteContactRequest& operator=(const DeleteContactRequest &) = default ;
    DeleteContactRequest& operator=(DeleteContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactId_ != nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline int64_t contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
    inline DeleteContactRequest& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


  protected:
    // The ID of the alert contact.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> contactId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
