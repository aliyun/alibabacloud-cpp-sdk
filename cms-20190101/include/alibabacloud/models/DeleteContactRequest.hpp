// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
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
    virtual bool empty() const override { return this->contactName_ == nullptr; };
    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline DeleteContactRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


  protected:
    // The name of the alert contact.
    // 
    // This parameter is required.
    std::shared_ptr<string> contactName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
