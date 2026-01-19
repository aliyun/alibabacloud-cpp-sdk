// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERTOORGANIZATIONALUNITSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERTOORGANIZATIONALUNITSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class AddUserToOrganizationalUnitsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserToOrganizationalUnitsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(organizationalUnitIds, organizationalUnitIds_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserToOrganizationalUnitsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(organizationalUnitIds, organizationalUnitIds_);
    };
    AddUserToOrganizationalUnitsRequest() = default ;
    AddUserToOrganizationalUnitsRequest(const AddUserToOrganizationalUnitsRequest &) = default ;
    AddUserToOrganizationalUnitsRequest(AddUserToOrganizationalUnitsRequest &&) = default ;
    AddUserToOrganizationalUnitsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserToOrganizationalUnitsRequest() = default ;
    AddUserToOrganizationalUnitsRequest& operator=(const AddUserToOrganizationalUnitsRequest &) = default ;
    AddUserToOrganizationalUnitsRequest& operator=(AddUserToOrganizationalUnitsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->organizationalUnitIds_ == nullptr; };
    // organizationalUnitIds Field Functions 
    bool hasOrganizationalUnitIds() const { return this->organizationalUnitIds_ != nullptr;};
    void deleteOrganizationalUnitIds() { this->organizationalUnitIds_ = nullptr;};
    inline const vector<string> & getOrganizationalUnitIds() const { DARABONBA_PTR_GET_CONST(organizationalUnitIds_, vector<string>) };
    inline vector<string> getOrganizationalUnitIds() { DARABONBA_PTR_GET(organizationalUnitIds_, vector<string>) };
    inline AddUserToOrganizationalUnitsRequest& setOrganizationalUnitIds(const vector<string> & organizationalUnitIds) { DARABONBA_PTR_SET_VALUE(organizationalUnitIds_, organizationalUnitIds) };
    inline AddUserToOrganizationalUnitsRequest& setOrganizationalUnitIds(vector<string> && organizationalUnitIds) { DARABONBA_PTR_SET_RVALUE(organizationalUnitIds_, organizationalUnitIds) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> organizationalUnitIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
