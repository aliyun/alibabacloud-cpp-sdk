// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GetToolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetToolRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetToolRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetToolRequest() = default ;
    GetToolRequest(const GetToolRequest &) = default ;
    GetToolRequest(GetToolRequest &&) = default ;
    GetToolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetToolRequest() = default ;
    GetToolRequest& operator=(const GetToolRequest &) = default ;
    GetToolRequest& operator=(GetToolRequest &&) = default ;
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
