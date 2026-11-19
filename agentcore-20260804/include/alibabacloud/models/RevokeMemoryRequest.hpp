// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEMEMORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEMEMORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class RevokeMemoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeMemoryRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, RevokeMemoryRequest& obj) { 
      (void)j; (void)obj; 
    };
    RevokeMemoryRequest() = default ;
    RevokeMemoryRequest(const RevokeMemoryRequest &) = default ;
    RevokeMemoryRequest(RevokeMemoryRequest &&) = default ;
    RevokeMemoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeMemoryRequest() = default ;
    RevokeMemoryRequest& operator=(const RevokeMemoryRequest &) = default ;
    RevokeMemoryRequest& operator=(RevokeMemoryRequest &&) = default ;
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
