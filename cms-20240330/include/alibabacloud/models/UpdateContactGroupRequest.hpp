// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTACTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTACTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateContactGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContactGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contacts, contacts_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContactGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    UpdateContactGroupRequest() = default ;
    UpdateContactGroupRequest(const UpdateContactGroupRequest &) = default ;
    UpdateContactGroupRequest(UpdateContactGroupRequest &&) = default ;
    UpdateContactGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContactGroupRequest() = default ;
    UpdateContactGroupRequest& operator=(const UpdateContactGroupRequest &) = default ;
    UpdateContactGroupRequest& operator=(UpdateContactGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contacts_ == nullptr
        && this->name_ == nullptr; };
    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<string> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<string>) };
    inline vector<string> getContacts() { DARABONBA_PTR_GET(contacts_, vector<string>) };
    inline UpdateContactGroupRequest& setContacts(const vector<string> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline UpdateContactGroupRequest& setContacts(vector<string> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateContactGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<vector<string>> contacts_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
