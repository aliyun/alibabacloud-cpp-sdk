// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMCPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetMcpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcpRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetMcpRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetMcpRequest() = default ;
    GetMcpRequest(const GetMcpRequest &) = default ;
    GetMcpRequest(GetMcpRequest &&) = default ;
    GetMcpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcpRequest() = default ;
    GetMcpRequest& operator=(const GetMcpRequest &) = default ;
    GetMcpRequest& operator=(GetMcpRequest &&) = default ;
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
