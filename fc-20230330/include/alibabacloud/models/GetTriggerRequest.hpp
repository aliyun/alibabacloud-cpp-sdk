// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRIGGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRIGGERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class GetTriggerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTriggerRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetTriggerRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetTriggerRequest() = default ;
    GetTriggerRequest(const GetTriggerRequest &) = default ;
    GetTriggerRequest(GetTriggerRequest &&) = default ;
    GetTriggerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTriggerRequest() = default ;
    GetTriggerRequest& operator=(const GetTriggerRequest &) = default ;
    GetTriggerRequest& operator=(GetTriggerRequest &&) = default ;
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
