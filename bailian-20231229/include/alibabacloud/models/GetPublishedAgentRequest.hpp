// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPUBLISHEDAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPUBLISHEDAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetPublishedAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPublishedAgentRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetPublishedAgentRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetPublishedAgentRequest() = default ;
    GetPublishedAgentRequest(const GetPublishedAgentRequest &) = default ;
    GetPublishedAgentRequest(GetPublishedAgentRequest &&) = default ;
    GetPublishedAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPublishedAgentRequest() = default ;
    GetPublishedAgentRequest& operator=(const GetPublishedAgentRequest &) = default ;
    GetPublishedAgentRequest& operator=(GetPublishedAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
