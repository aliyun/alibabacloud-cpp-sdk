// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIRFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAIRFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetAirflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAirflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AirflowId, airflowId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAirflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AirflowId, airflowId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetAirflowRequest() = default ;
    GetAirflowRequest(const GetAirflowRequest &) = default ;
    GetAirflowRequest(GetAirflowRequest &&) = default ;
    GetAirflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAirflowRequest() = default ;
    GetAirflowRequest& operator=(const GetAirflowRequest &) = default ;
    GetAirflowRequest& operator=(GetAirflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->airflowId_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // airflowId Field Functions 
    bool hasAirflowId() const { return this->airflowId_ != nullptr;};
    void deleteAirflowId() { this->airflowId_ = nullptr;};
    inline string airflowId() const { DARABONBA_PTR_GET_DEFAULT(airflowId_, "") };
    inline GetAirflowRequest& setAirflowId(string airflowId) { DARABONBA_PTR_SET_VALUE(airflowId_, airflowId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetAirflowRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> airflowId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
