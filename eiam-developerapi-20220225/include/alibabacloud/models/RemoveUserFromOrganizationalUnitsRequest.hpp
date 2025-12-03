// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERFROMORGANIZATIONALUNITSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERFROMORGANIZATIONALUNITSREQUEST_HPP_
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
  class RemoveUserFromOrganizationalUnitsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUserFromOrganizationalUnitsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(organizationalUnitIds, organizationalUnitIds_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUserFromOrganizationalUnitsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(organizationalUnitIds, organizationalUnitIds_);
    };
    RemoveUserFromOrganizationalUnitsRequest() = default ;
    RemoveUserFromOrganizationalUnitsRequest(const RemoveUserFromOrganizationalUnitsRequest &) = default ;
    RemoveUserFromOrganizationalUnitsRequest(RemoveUserFromOrganizationalUnitsRequest &&) = default ;
    RemoveUserFromOrganizationalUnitsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUserFromOrganizationalUnitsRequest() = default ;
    RemoveUserFromOrganizationalUnitsRequest& operator=(const RemoveUserFromOrganizationalUnitsRequest &) = default ;
    RemoveUserFromOrganizationalUnitsRequest& operator=(RemoveUserFromOrganizationalUnitsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->organizationalUnitIds_ == nullptr; };
    // organizationalUnitIds Field Functions 
    bool hasOrganizationalUnitIds() const { return this->organizationalUnitIds_ != nullptr;};
    void deleteOrganizationalUnitIds() { this->organizationalUnitIds_ = nullptr;};
    inline const vector<string> & organizationalUnitIds() const { DARABONBA_PTR_GET_CONST(organizationalUnitIds_, vector<string>) };
    inline vector<string> organizationalUnitIds() { DARABONBA_PTR_GET(organizationalUnitIds_, vector<string>) };
    inline RemoveUserFromOrganizationalUnitsRequest& setOrganizationalUnitIds(const vector<string> & organizationalUnitIds) { DARABONBA_PTR_SET_VALUE(organizationalUnitIds_, organizationalUnitIds) };
    inline RemoveUserFromOrganizationalUnitsRequest& setOrganizationalUnitIds(vector<string> && organizationalUnitIds) { DARABONBA_PTR_SET_RVALUE(organizationalUnitIds_, organizationalUnitIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> organizationalUnitIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
