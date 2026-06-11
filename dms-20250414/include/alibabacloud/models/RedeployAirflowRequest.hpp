// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REDEPLOYAIRFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REDEPLOYAIRFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class RedeployAirflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RedeployAirflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AirflowId, airflowId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RedeployAirflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AirflowId, airflowId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RedeployAirflowRequest() = default ;
    RedeployAirflowRequest(const RedeployAirflowRequest &) = default ;
    RedeployAirflowRequest(RedeployAirflowRequest &&) = default ;
    RedeployAirflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RedeployAirflowRequest() = default ;
    RedeployAirflowRequest& operator=(const RedeployAirflowRequest &) = default ;
    RedeployAirflowRequest& operator=(RedeployAirflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->airflowId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // airflowId Field Functions 
    bool hasAirflowId() const { return this->airflowId_ != nullptr;};
    void deleteAirflowId() { this->airflowId_ = nullptr;};
    inline string getAirflowId() const { DARABONBA_PTR_GET_DEFAULT(airflowId_, "") };
    inline RedeployAirflowRequest& setAirflowId(string airflowId) { DARABONBA_PTR_SET_VALUE(airflowId_, airflowId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RedeployAirflowRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The unique ID of the Airflow instance.
    // 
    // This parameter is required.
    shared_ptr<string> airflowId_ {};
    // The ID of the DMS workspace.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
