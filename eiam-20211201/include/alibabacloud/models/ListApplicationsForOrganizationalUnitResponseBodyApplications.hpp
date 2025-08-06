// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORORGANIZATIONALUNITRESPONSEBODYAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORORGANIZATIONALUNITRESPONSEBODYAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationsForOrganizationalUnitResponseBodyApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsForOrganizationalUnitResponseBodyApplications& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsForOrganizationalUnitResponseBodyApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
    };
    ListApplicationsForOrganizationalUnitResponseBodyApplications() = default ;
    ListApplicationsForOrganizationalUnitResponseBodyApplications(const ListApplicationsForOrganizationalUnitResponseBodyApplications &) = default ;
    ListApplicationsForOrganizationalUnitResponseBodyApplications(ListApplicationsForOrganizationalUnitResponseBodyApplications &&) = default ;
    ListApplicationsForOrganizationalUnitResponseBodyApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsForOrganizationalUnitResponseBodyApplications() = default ;
    ListApplicationsForOrganizationalUnitResponseBodyApplications& operator=(const ListApplicationsForOrganizationalUnitResponseBodyApplications &) = default ;
    ListApplicationsForOrganizationalUnitResponseBodyApplications& operator=(ListApplicationsForOrganizationalUnitResponseBodyApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListApplicationsForOrganizationalUnitResponseBodyApplications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


  protected:
    // The ID of the application that the EIAM organization can access.
    std::shared_ptr<string> applicationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
