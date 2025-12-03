// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYORGANIZATIONALUNITS_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYORGANIZATIONALUNITS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GetUserResponseBodyOrganizationalUnits : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBodyOrganizationalUnits& obj) { 
      DARABONBA_PTR_TO_JSON(organizationalUnitId, organizationalUnitId_);
      DARABONBA_PTR_TO_JSON(organizationalUnitName, organizationalUnitName_);
      DARABONBA_PTR_TO_JSON(primary, primary_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBodyOrganizationalUnits& obj) { 
      DARABONBA_PTR_FROM_JSON(organizationalUnitId, organizationalUnitId_);
      DARABONBA_PTR_FROM_JSON(organizationalUnitName, organizationalUnitName_);
      DARABONBA_PTR_FROM_JSON(primary, primary_);
    };
    GetUserResponseBodyOrganizationalUnits() = default ;
    GetUserResponseBodyOrganizationalUnits(const GetUserResponseBodyOrganizationalUnits &) = default ;
    GetUserResponseBodyOrganizationalUnits(GetUserResponseBodyOrganizationalUnits &&) = default ;
    GetUserResponseBodyOrganizationalUnits(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBodyOrganizationalUnits() = default ;
    GetUserResponseBodyOrganizationalUnits& operator=(const GetUserResponseBodyOrganizationalUnits &) = default ;
    GetUserResponseBodyOrganizationalUnits& operator=(GetUserResponseBodyOrganizationalUnits &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->organizationalUnitId_ == nullptr
        && return this->organizationalUnitName_ == nullptr && return this->primary_ == nullptr; };
    // organizationalUnitId Field Functions 
    bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
    void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
    inline string organizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
    inline GetUserResponseBodyOrganizationalUnits& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


    // organizationalUnitName Field Functions 
    bool hasOrganizationalUnitName() const { return this->organizationalUnitName_ != nullptr;};
    void deleteOrganizationalUnitName() { this->organizationalUnitName_ = nullptr;};
    inline string organizationalUnitName() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitName_, "") };
    inline GetUserResponseBodyOrganizationalUnits& setOrganizationalUnitName(string organizationalUnitName) { DARABONBA_PTR_SET_VALUE(organizationalUnitName_, organizationalUnitName) };


    // primary Field Functions 
    bool hasPrimary() const { return this->primary_ != nullptr;};
    void deletePrimary() { this->primary_ = nullptr;};
    inline bool primary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
    inline GetUserResponseBodyOrganizationalUnits& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


  protected:
    // The ID of the organizational unit.
    std::shared_ptr<string> organizationalUnitId_ = nullptr;
    // The name of the organizational unit.
    std::shared_ptr<string> organizationalUnitName_ = nullptr;
    // Indicates whether the organizational unit is the primary organizational unit.
    std::shared_ptr<bool> primary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
