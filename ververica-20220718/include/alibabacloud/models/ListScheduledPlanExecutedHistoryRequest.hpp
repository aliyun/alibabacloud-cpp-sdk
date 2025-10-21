// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULEDPLANEXECUTEDHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULEDPLANEXECUTEDHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ListScheduledPlanExecutedHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScheduledPlanExecutedHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(origin, origin_);
    };
    friend void from_json(const Darabonba::Json& j, ListScheduledPlanExecutedHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(origin, origin_);
    };
    ListScheduledPlanExecutedHistoryRequest() = default ;
    ListScheduledPlanExecutedHistoryRequest(const ListScheduledPlanExecutedHistoryRequest &) = default ;
    ListScheduledPlanExecutedHistoryRequest(ListScheduledPlanExecutedHistoryRequest &&) = default ;
    ListScheduledPlanExecutedHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScheduledPlanExecutedHistoryRequest() = default ;
    ListScheduledPlanExecutedHistoryRequest& operator=(const ListScheduledPlanExecutedHistoryRequest &) = default ;
    ListScheduledPlanExecutedHistoryRequest& operator=(ListScheduledPlanExecutedHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentId_ == nullptr
        && return this->origin_ == nullptr; };
    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string deploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline ListScheduledPlanExecutedHistoryRequest& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline ListScheduledPlanExecutedHistoryRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deploymentId_ = nullptr;
    std::shared_ptr<string> origin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
