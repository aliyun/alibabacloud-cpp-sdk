// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFLOWVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFLOWVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GetFlowVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFlowVersionRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetFlowVersionRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetFlowVersionRequest() = default ;
    GetFlowVersionRequest(const GetFlowVersionRequest &) = default ;
    GetFlowVersionRequest(GetFlowVersionRequest &&) = default ;
    GetFlowVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFlowVersionRequest() = default ;
    GetFlowVersionRequest& operator=(const GetFlowVersionRequest &) = default ;
    GetFlowVersionRequest& operator=(GetFlowVersionRequest &&) = default ;
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
