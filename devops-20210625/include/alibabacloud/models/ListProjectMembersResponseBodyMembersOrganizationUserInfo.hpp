// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYMEMBERSORGANIZATIONUSERINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYMEMBERSORGANIZATIONUSERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListProjectMembersResponseBodyMembersOrganizationUserInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectMembersResponseBodyMembersOrganizationUserInfo& obj) { 
      DARABONBA_PTR_TO_JSON(organizationIdentifier, organizationIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectMembersResponseBodyMembersOrganizationUserInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(organizationIdentifier, organizationIdentifier_);
    };
    ListProjectMembersResponseBodyMembersOrganizationUserInfo() = default ;
    ListProjectMembersResponseBodyMembersOrganizationUserInfo(const ListProjectMembersResponseBodyMembersOrganizationUserInfo &) = default ;
    ListProjectMembersResponseBodyMembersOrganizationUserInfo(ListProjectMembersResponseBodyMembersOrganizationUserInfo &&) = default ;
    ListProjectMembersResponseBodyMembersOrganizationUserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectMembersResponseBodyMembersOrganizationUserInfo() = default ;
    ListProjectMembersResponseBodyMembersOrganizationUserInfo& operator=(const ListProjectMembersResponseBodyMembersOrganizationUserInfo &) = default ;
    ListProjectMembersResponseBodyMembersOrganizationUserInfo& operator=(ListProjectMembersResponseBodyMembersOrganizationUserInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->organizationIdentifier_ == nullptr; };
    // organizationIdentifier Field Functions 
    bool hasOrganizationIdentifier() const { return this->organizationIdentifier_ != nullptr;};
    void deleteOrganizationIdentifier() { this->organizationIdentifier_ = nullptr;};
    inline string organizationIdentifier() const { DARABONBA_PTR_GET_DEFAULT(organizationIdentifier_, "") };
    inline ListProjectMembersResponseBodyMembersOrganizationUserInfo& setOrganizationIdentifier(string organizationIdentifier) { DARABONBA_PTR_SET_VALUE(organizationIdentifier_, organizationIdentifier) };


  protected:
    std::shared_ptr<string> organizationIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
