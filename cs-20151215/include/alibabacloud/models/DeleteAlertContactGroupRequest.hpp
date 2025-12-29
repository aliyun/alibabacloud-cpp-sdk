// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTCONTACTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTCONTACTGROUPREQUEST_HPP_
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
  class DeleteAlertContactGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertContactGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contact_group_ids, contactGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertContactGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contact_group_ids, contactGroupIds_);
    };
    DeleteAlertContactGroupRequest() = default ;
    DeleteAlertContactGroupRequest(const DeleteAlertContactGroupRequest &) = default ;
    DeleteAlertContactGroupRequest(DeleteAlertContactGroupRequest &&) = default ;
    DeleteAlertContactGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertContactGroupRequest() = default ;
    DeleteAlertContactGroupRequest& operator=(const DeleteAlertContactGroupRequest &) = default ;
    DeleteAlertContactGroupRequest& operator=(DeleteAlertContactGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroupIds_ == nullptr; };
    // contactGroupIds Field Functions 
    bool hasContactGroupIds() const { return this->contactGroupIds_ != nullptr;};
    void deleteContactGroupIds() { this->contactGroupIds_ = nullptr;};
    inline const vector<int64_t> & getContactGroupIds() const { DARABONBA_PTR_GET_CONST(contactGroupIds_, vector<int64_t>) };
    inline vector<int64_t> getContactGroupIds() { DARABONBA_PTR_GET(contactGroupIds_, vector<int64_t>) };
    inline DeleteAlertContactGroupRequest& setContactGroupIds(const vector<int64_t> & contactGroupIds) { DARABONBA_PTR_SET_VALUE(contactGroupIds_, contactGroupIds) };
    inline DeleteAlertContactGroupRequest& setContactGroupIds(vector<int64_t> && contactGroupIds) { DARABONBA_PTR_SET_RVALUE(contactGroupIds_, contactGroupIds) };


  protected:
    // The list of alert contact group IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> contactGroupIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
