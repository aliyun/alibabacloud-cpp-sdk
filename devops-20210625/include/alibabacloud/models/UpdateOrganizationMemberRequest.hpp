// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEORGANIZATIONMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEORGANIZATIONMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateOrganizationMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOrganizationMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(organizationMemberName, organizationMemberName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOrganizationMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(organizationMemberName, organizationMemberName_);
    };
    UpdateOrganizationMemberRequest() = default ;
    UpdateOrganizationMemberRequest(const UpdateOrganizationMemberRequest &) = default ;
    UpdateOrganizationMemberRequest(UpdateOrganizationMemberRequest &&) = default ;
    UpdateOrganizationMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOrganizationMemberRequest() = default ;
    UpdateOrganizationMemberRequest& operator=(const UpdateOrganizationMemberRequest &) = default ;
    UpdateOrganizationMemberRequest& operator=(UpdateOrganizationMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->organizationMemberName_ == nullptr; };
    // organizationMemberName Field Functions 
    bool hasOrganizationMemberName() const { return this->organizationMemberName_ != nullptr;};
    void deleteOrganizationMemberName() { this->organizationMemberName_ = nullptr;};
    inline string organizationMemberName() const { DARABONBA_PTR_GET_DEFAULT(organizationMemberName_, "") };
    inline UpdateOrganizationMemberRequest& setOrganizationMemberName(string organizationMemberName) { DARABONBA_PTR_SET_VALUE(organizationMemberName_, organizationMemberName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> organizationMemberName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
