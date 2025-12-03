// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPRELEASESTAGEEXECUTIONINTEGRATEDMETADATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPRELEASESTAGEEXECUTIONINTEGRATEDMETADATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListAppReleaseStageExecutionIntegratedMetadataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppReleaseStageExecutionIntegratedMetadataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppReleaseStageExecutionIntegratedMetadataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    ListAppReleaseStageExecutionIntegratedMetadataRequest() = default ;
    ListAppReleaseStageExecutionIntegratedMetadataRequest(const ListAppReleaseStageExecutionIntegratedMetadataRequest &) = default ;
    ListAppReleaseStageExecutionIntegratedMetadataRequest(ListAppReleaseStageExecutionIntegratedMetadataRequest &&) = default ;
    ListAppReleaseStageExecutionIntegratedMetadataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppReleaseStageExecutionIntegratedMetadataRequest() = default ;
    ListAppReleaseStageExecutionIntegratedMetadataRequest& operator=(const ListAppReleaseStageExecutionIntegratedMetadataRequest &) = default ;
    ListAppReleaseStageExecutionIntegratedMetadataRequest& operator=(ListAppReleaseStageExecutionIntegratedMetadataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->organizationId_ == nullptr; };
    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListAppReleaseStageExecutionIntegratedMetadataRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
