// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORUSERRESPONSEBODYAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORUSERRESPONSEBODYAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationsForUserResponseBodyApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsForUserResponseBodyApplications& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(HasDirectAuthorization, hasDirectAuthorization_);
      DARABONBA_PTR_TO_JSON(HasInheritAuthorization, hasInheritAuthorization_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsForUserResponseBodyApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(HasDirectAuthorization, hasDirectAuthorization_);
      DARABONBA_PTR_FROM_JSON(HasInheritAuthorization, hasInheritAuthorization_);
    };
    ListApplicationsForUserResponseBodyApplications() = default ;
    ListApplicationsForUserResponseBodyApplications(const ListApplicationsForUserResponseBodyApplications &) = default ;
    ListApplicationsForUserResponseBodyApplications(ListApplicationsForUserResponseBodyApplications &&) = default ;
    ListApplicationsForUserResponseBodyApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsForUserResponseBodyApplications() = default ;
    ListApplicationsForUserResponseBodyApplications& operator=(const ListApplicationsForUserResponseBodyApplications &) = default ;
    ListApplicationsForUserResponseBodyApplications& operator=(ListApplicationsForUserResponseBodyApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->hasDirectAuthorization_ != nullptr && this->hasInheritAuthorization_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListApplicationsForUserResponseBodyApplications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // hasDirectAuthorization Field Functions 
    bool hasHasDirectAuthorization() const { return this->hasDirectAuthorization_ != nullptr;};
    void deleteHasDirectAuthorization() { this->hasDirectAuthorization_ = nullptr;};
    inline bool hasDirectAuthorization() const { DARABONBA_PTR_GET_DEFAULT(hasDirectAuthorization_, false) };
    inline ListApplicationsForUserResponseBodyApplications& setHasDirectAuthorization(bool hasDirectAuthorization) { DARABONBA_PTR_SET_VALUE(hasDirectAuthorization_, hasDirectAuthorization) };


    // hasInheritAuthorization Field Functions 
    bool hasHasInheritAuthorization() const { return this->hasInheritAuthorization_ != nullptr;};
    void deleteHasInheritAuthorization() { this->hasInheritAuthorization_ = nullptr;};
    inline bool hasInheritAuthorization() const { DARABONBA_PTR_GET_DEFAULT(hasInheritAuthorization_, false) };
    inline ListApplicationsForUserResponseBodyApplications& setHasInheritAuthorization(bool hasInheritAuthorization) { DARABONBA_PTR_SET_VALUE(hasInheritAuthorization_, hasInheritAuthorization) };


  protected:
    // The ID of the application that the EIAM account can access.
    std::shared_ptr<string> applicationId_ = nullptr;
    // Indicates whether the EIAM account has direct permissions on the application. Valid values:
    // 
    // *   true: The EIAM account has direct permissions on the application.
    // *   false: The EIAM account does not have direct permissions on the application.
    std::shared_ptr<bool> hasDirectAuthorization_ = nullptr;
    // Indicates whether the EIAM account has inherited permissions on the application. Valid values:
    // 
    // *   true: A parent organization or an organization to which the EIAM account belongs has direct permissions on the application.
    // *   false: A parent organization or an organization to which the EIAM account belongs does not have direct permissions on the application.
    std::shared_ptr<bool> hasInheritAuthorization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
