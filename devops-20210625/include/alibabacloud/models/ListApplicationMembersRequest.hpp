// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListApplicationMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    ListApplicationMembersRequest() = default ;
    ListApplicationMembersRequest(const ListApplicationMembersRequest &) = default ;
    ListApplicationMembersRequest(ListApplicationMembersRequest &&) = default ;
    ListApplicationMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationMembersRequest() = default ;
    ListApplicationMembersRequest& operator=(const ListApplicationMembersRequest &) = default ;
    ListApplicationMembersRequest& operator=(ListApplicationMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->organizationId_ == nullptr; };
    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListApplicationMembersRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
