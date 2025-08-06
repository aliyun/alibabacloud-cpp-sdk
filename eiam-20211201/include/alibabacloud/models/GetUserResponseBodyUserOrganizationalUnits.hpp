// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYUSERORGANIZATIONALUNITS_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYUSERORGANIZATIONALUNITS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetUserResponseBodyUserOrganizationalUnits : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBodyUserOrganizationalUnits& obj) { 
      DARABONBA_PTR_TO_JSON(OrganizationalUnitId, organizationalUnitId_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitName, organizationalUnitName_);
      DARABONBA_PTR_TO_JSON(Primary, primary_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBodyUserOrganizationalUnits& obj) { 
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitId, organizationalUnitId_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitName, organizationalUnitName_);
      DARABONBA_PTR_FROM_JSON(Primary, primary_);
    };
    GetUserResponseBodyUserOrganizationalUnits() = default ;
    GetUserResponseBodyUserOrganizationalUnits(const GetUserResponseBodyUserOrganizationalUnits &) = default ;
    GetUserResponseBodyUserOrganizationalUnits(GetUserResponseBodyUserOrganizationalUnits &&) = default ;
    GetUserResponseBodyUserOrganizationalUnits(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBodyUserOrganizationalUnits() = default ;
    GetUserResponseBodyUserOrganizationalUnits& operator=(const GetUserResponseBodyUserOrganizationalUnits &) = default ;
    GetUserResponseBodyUserOrganizationalUnits& operator=(GetUserResponseBodyUserOrganizationalUnits &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->organizationalUnitId_ != nullptr
        && this->organizationalUnitName_ != nullptr && this->primary_ != nullptr; };
    // organizationalUnitId Field Functions 
    bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
    void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
    inline string organizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
    inline GetUserResponseBodyUserOrganizationalUnits& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


    // organizationalUnitName Field Functions 
    bool hasOrganizationalUnitName() const { return this->organizationalUnitName_ != nullptr;};
    void deleteOrganizationalUnitName() { this->organizationalUnitName_ = nullptr;};
    inline string organizationalUnitName() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitName_, "") };
    inline GetUserResponseBodyUserOrganizationalUnits& setOrganizationalUnitName(string organizationalUnitName) { DARABONBA_PTR_SET_VALUE(organizationalUnitName_, organizationalUnitName) };


    // primary Field Functions 
    bool hasPrimary() const { return this->primary_ != nullptr;};
    void deletePrimary() { this->primary_ = nullptr;};
    inline bool primary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
    inline GetUserResponseBodyUserOrganizationalUnits& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


  protected:
    // The ID of the organizational unit.
    std::shared_ptr<string> organizationalUnitId_ = nullptr;
    // The name of the organizational unit.
    std::shared_ptr<string> organizationalUnitName_ = nullptr;
    // Indicates whether the organization is the primary organization.
    std::shared_ptr<bool> primary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
