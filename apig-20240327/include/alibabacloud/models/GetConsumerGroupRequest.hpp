// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetConsumerGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerGroupRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerGroupRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetConsumerGroupRequest() = default ;
    GetConsumerGroupRequest(const GetConsumerGroupRequest &) = default ;
    GetConsumerGroupRequest(GetConsumerGroupRequest &&) = default ;
    GetConsumerGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerGroupRequest() = default ;
    GetConsumerGroupRequest& operator=(const GetConsumerGroupRequest &) = default ;
    GetConsumerGroupRequest& operator=(GetConsumerGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
