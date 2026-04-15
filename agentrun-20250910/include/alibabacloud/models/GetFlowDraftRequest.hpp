// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFLOWDRAFTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFLOWDRAFTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GetFlowDraftRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFlowDraftRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetFlowDraftRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetFlowDraftRequest() = default ;
    GetFlowDraftRequest(const GetFlowDraftRequest &) = default ;
    GetFlowDraftRequest(GetFlowDraftRequest &&) = default ;
    GetFlowDraftRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFlowDraftRequest() = default ;
    GetFlowDraftRequest& operator=(const GetFlowDraftRequest &) = default ;
    GetFlowDraftRequest& operator=(GetFlowDraftRequest &&) = default ;
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
