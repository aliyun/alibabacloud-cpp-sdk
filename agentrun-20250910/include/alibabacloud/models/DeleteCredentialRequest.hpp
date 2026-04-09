// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class DeleteCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCredentialRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteCredentialRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteCredentialRequest() = default ;
    DeleteCredentialRequest(const DeleteCredentialRequest &) = default ;
    DeleteCredentialRequest(DeleteCredentialRequest &&) = default ;
    DeleteCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCredentialRequest() = default ;
    DeleteCredentialRequest& operator=(const DeleteCredentialRequest &) = default ;
    DeleteCredentialRequest& operator=(DeleteCredentialRequest &&) = default ;
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
