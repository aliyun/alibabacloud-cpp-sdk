// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESANDBOXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESANDBOXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class DeleteSandboxRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSandboxRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteSandboxRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteSandboxRequest() = default ;
    DeleteSandboxRequest(const DeleteSandboxRequest &) = default ;
    DeleteSandboxRequest(DeleteSandboxRequest &&) = default ;
    DeleteSandboxRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSandboxRequest() = default ;
    DeleteSandboxRequest& operator=(const DeleteSandboxRequest &) = default ;
    DeleteSandboxRequest& operator=(DeleteSandboxRequest &&) = default ;
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
