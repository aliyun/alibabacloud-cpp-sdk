// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGENTSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGENTSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class DeleteAgentSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAgentSpecRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteAgentSpecRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteAgentSpecRequest() = default ;
    DeleteAgentSpecRequest(const DeleteAgentSpecRequest &) = default ;
    DeleteAgentSpecRequest(DeleteAgentSpecRequest &&) = default ;
    DeleteAgentSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAgentSpecRequest() = default ;
    DeleteAgentSpecRequest& operator=(const DeleteAgentSpecRequest &) = default ;
    DeleteAgentSpecRequest& operator=(DeleteAgentSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
