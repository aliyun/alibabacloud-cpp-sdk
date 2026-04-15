// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFLOWVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFLOWVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class DeleteFlowVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFlowVersionRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteFlowVersionRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteFlowVersionRequest() = default ;
    DeleteFlowVersionRequest(const DeleteFlowVersionRequest &) = default ;
    DeleteFlowVersionRequest(DeleteFlowVersionRequest &&) = default ;
    DeleteFlowVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFlowVersionRequest() = default ;
    DeleteFlowVersionRequest& operator=(const DeleteFlowVersionRequest &) = default ;
    DeleteFlowVersionRequest& operator=(DeleteFlowVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
