// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEORGANIZATIONMEMBERRESPONSEBODYMEMBER_HPP_
#define ALIBABACLOUD_MODELS_UPDATEORGANIZATIONMEMBERRESPONSEBODYMEMBER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateOrganizationMemberResponseBodyMember : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOrganizationMemberResponseBodyMember& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(organizationMemberName, organizationMemberName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOrganizationMemberResponseBodyMember& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(organizationMemberName, organizationMemberName_);
    };
    UpdateOrganizationMemberResponseBodyMember() = default ;
    UpdateOrganizationMemberResponseBodyMember(const UpdateOrganizationMemberResponseBodyMember &) = default ;
    UpdateOrganizationMemberResponseBodyMember(UpdateOrganizationMemberResponseBodyMember &&) = default ;
    UpdateOrganizationMemberResponseBodyMember(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOrganizationMemberResponseBodyMember() = default ;
    UpdateOrganizationMemberResponseBodyMember& operator=(const UpdateOrganizationMemberResponseBodyMember &) = default ;
    UpdateOrganizationMemberResponseBodyMember& operator=(UpdateOrganizationMemberResponseBodyMember &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->organizationMemberName_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline UpdateOrganizationMemberResponseBodyMember& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // organizationMemberName Field Functions 
    bool hasOrganizationMemberName() const { return this->organizationMemberName_ != nullptr;};
    void deleteOrganizationMemberName() { this->organizationMemberName_ = nullptr;};
    inline string organizationMemberName() const { DARABONBA_PTR_GET_DEFAULT(organizationMemberName_, "") };
    inline UpdateOrganizationMemberResponseBodyMember& setOrganizationMemberName(string organizationMemberName) { DARABONBA_PTR_SET_VALUE(organizationMemberName_, organizationMemberName) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<string> organizationMemberName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
