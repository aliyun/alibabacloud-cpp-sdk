// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEFUNCTIONINVOCATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEFUNCTIONINVOCATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class EnableFunctionInvocationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableFunctionInvocationRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, EnableFunctionInvocationRequest& obj) { 
      (void)j; (void)obj; 
    };
    EnableFunctionInvocationRequest() = default ;
    EnableFunctionInvocationRequest(const EnableFunctionInvocationRequest &) = default ;
    EnableFunctionInvocationRequest(EnableFunctionInvocationRequest &&) = default ;
    EnableFunctionInvocationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableFunctionInvocationRequest() = default ;
    EnableFunctionInvocationRequest& operator=(const EnableFunctionInvocationRequest &) = default ;
    EnableFunctionInvocationRequest& operator=(EnableFunctionInvocationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
