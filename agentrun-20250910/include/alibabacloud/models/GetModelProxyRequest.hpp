// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMODELPROXYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GetModelProxyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelProxyRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetModelProxyRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetModelProxyRequest() = default ;
    GetModelProxyRequest(const GetModelProxyRequest &) = default ;
    GetModelProxyRequest(GetModelProxyRequest &&) = default ;
    GetModelProxyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelProxyRequest() = default ;
    GetModelProxyRequest& operator=(const GetModelProxyRequest &) = default ;
    GetModelProxyRequest& operator=(GetModelProxyRequest &&) = default ;
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
