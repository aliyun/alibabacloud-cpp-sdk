// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTECHANGEREQUESTRELEASESTAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTECHANGEREQUESTRELEASESTAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ExecuteChangeRequestReleaseStageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteChangeRequestReleaseStageRequest& obj) { 
      DARABONBA_ANY_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteChangeRequestReleaseStageRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    ExecuteChangeRequestReleaseStageRequest() = default ;
    ExecuteChangeRequestReleaseStageRequest(const ExecuteChangeRequestReleaseStageRequest &) = default ;
    ExecuteChangeRequestReleaseStageRequest(ExecuteChangeRequestReleaseStageRequest &&) = default ;
    ExecuteChangeRequestReleaseStageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteChangeRequestReleaseStageRequest() = default ;
    ExecuteChangeRequestReleaseStageRequest& operator=(const ExecuteChangeRequestReleaseStageRequest &) = default ;
    ExecuteChangeRequestReleaseStageRequest& operator=(ExecuteChangeRequestReleaseStageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->params_ == nullptr
        && return this->organizationId_ == nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & params() const { DARABONBA_GET(params_) };
    Darabonba::Json & params() { DARABONBA_GET(params_) };
    inline ExecuteChangeRequestReleaseStageRequest& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline ExecuteChangeRequestReleaseStageRequest& setParams(Darabonba::Json & params) { DARABONBA_SET_RVALUE(params_, params) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ExecuteChangeRequestReleaseStageRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    Darabonba::Json params_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
