// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERADORGANIZATIONUNITSRESPONSEBODYOUNAMES_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERADORGANIZATIONUNITSRESPONSEBODYOUNAMES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListUserAdOrganizationUnitsResponseBodyOUNames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserAdOrganizationUnitsResponseBodyOUNames& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayOUName, displayOUName_);
      DARABONBA_PTR_TO_JSON(OUName, OUName_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserAdOrganizationUnitsResponseBodyOUNames& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayOUName, displayOUName_);
      DARABONBA_PTR_FROM_JSON(OUName, OUName_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
    };
    ListUserAdOrganizationUnitsResponseBodyOUNames() = default ;
    ListUserAdOrganizationUnitsResponseBodyOUNames(const ListUserAdOrganizationUnitsResponseBodyOUNames &) = default ;
    ListUserAdOrganizationUnitsResponseBodyOUNames(ListUserAdOrganizationUnitsResponseBodyOUNames &&) = default ;
    ListUserAdOrganizationUnitsResponseBodyOUNames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserAdOrganizationUnitsResponseBodyOUNames() = default ;
    ListUserAdOrganizationUnitsResponseBodyOUNames& operator=(const ListUserAdOrganizationUnitsResponseBodyOUNames &) = default ;
    ListUserAdOrganizationUnitsResponseBodyOUNames& operator=(ListUserAdOrganizationUnitsResponseBodyOUNames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayOUName_ == nullptr
        && return this->OUName_ == nullptr && return this->officeSiteId_ == nullptr; };
    // displayOUName Field Functions 
    bool hasDisplayOUName() const { return this->displayOUName_ != nullptr;};
    void deleteDisplayOUName() { this->displayOUName_ = nullptr;};
    inline string displayOUName() const { DARABONBA_PTR_GET_DEFAULT(displayOUName_, "") };
    inline ListUserAdOrganizationUnitsResponseBodyOUNames& setDisplayOUName(string displayOUName) { DARABONBA_PTR_SET_VALUE(displayOUName_, displayOUName) };


    // OUName Field Functions 
    bool hasOUName() const { return this->OUName_ != nullptr;};
    void deleteOUName() { this->OUName_ = nullptr;};
    inline string OUName() const { DARABONBA_PTR_GET_DEFAULT(OUName_, "") };
    inline ListUserAdOrganizationUnitsResponseBodyOUNames& setOUName(string OUName) { DARABONBA_PTR_SET_VALUE(OUName_, OUName) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ListUserAdOrganizationUnitsResponseBodyOUNames& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


  protected:
    // The name of the OU.
    std::shared_ptr<string> displayOUName_ = nullptr;
    // The canonical name (CNAME) of the OU in the AD domain controller.
    std::shared_ptr<string> OUName_ = nullptr;
    // The enterprise AD office network ID.
    std::shared_ptr<string> officeSiteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
