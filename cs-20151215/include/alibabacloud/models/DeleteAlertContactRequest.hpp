// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTCONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTCONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DeleteAlertContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contact_ids, contactIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contact_ids, contactIds_);
    };
    DeleteAlertContactRequest() = default ;
    DeleteAlertContactRequest(const DeleteAlertContactRequest &) = default ;
    DeleteAlertContactRequest(DeleteAlertContactRequest &&) = default ;
    DeleteAlertContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertContactRequest() = default ;
    DeleteAlertContactRequest& operator=(const DeleteAlertContactRequest &) = default ;
    DeleteAlertContactRequest& operator=(DeleteAlertContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactIds_ == nullptr; };
    // contactIds Field Functions 
    bool hasContactIds() const { return this->contactIds_ != nullptr;};
    void deleteContactIds() { this->contactIds_ = nullptr;};
    inline const vector<int64_t> & getContactIds() const { DARABONBA_PTR_GET_CONST(contactIds_, vector<int64_t>) };
    inline vector<int64_t> getContactIds() { DARABONBA_PTR_GET(contactIds_, vector<int64_t>) };
    inline DeleteAlertContactRequest& setContactIds(const vector<int64_t> & contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };
    inline DeleteAlertContactRequest& setContactIds(vector<int64_t> && contactIds) { DARABONBA_PTR_SET_RVALUE(contactIds_, contactIds) };


  protected:
    // The list of alert contact IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> contactIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
