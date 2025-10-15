// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITSFORAPPLICATIONRESPONSEBODYORGANIZATIONALUNITS_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITSFORAPPLICATIONRESPONSEBODYORGANIZATIONALUNITS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits& obj) { 
      DARABONBA_PTR_TO_JSON(OrganizationalUnitId, organizationalUnitId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits& obj) { 
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitId, organizationalUnitId_);
    };
    ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits() = default ;
    ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits(const ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits &) = default ;
    ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits(ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits &&) = default ;
    ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits() = default ;
    ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits& operator=(const ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits &) = default ;
    ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits& operator=(ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->organizationalUnitId_ == nullptr; };
    // organizationalUnitId Field Functions 
    bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
    void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
    inline string organizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
    inline ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


  protected:
    // The ID of the organization that is allowed to access the application.
    std::shared_ptr<string> organizationalUnitId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
