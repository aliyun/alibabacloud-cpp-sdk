// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLRELEASEWORKFLOWSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALLRELEASEWORKFLOWSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListAllReleaseWorkflowsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllReleaseWorkflowsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllReleaseWorkflowsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    ListAllReleaseWorkflowsRequest() = default ;
    ListAllReleaseWorkflowsRequest(const ListAllReleaseWorkflowsRequest &) = default ;
    ListAllReleaseWorkflowsRequest(ListAllReleaseWorkflowsRequest &&) = default ;
    ListAllReleaseWorkflowsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllReleaseWorkflowsRequest() = default ;
    ListAllReleaseWorkflowsRequest& operator=(const ListAllReleaseWorkflowsRequest &) = default ;
    ListAllReleaseWorkflowsRequest& operator=(ListAllReleaseWorkflowsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->organizationId_ == nullptr; };
    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListAllReleaseWorkflowsRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
